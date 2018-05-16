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
typedef panda$core$String* (*$fn79)(panda$io$InputStream*);
typedef void (*$fn81)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn107)(panda$io$InputStream*);
typedef void (*$fn109)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn137)(panda$io$InputStream*);
typedef void (*$fn139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn149)(panda$io$OutputStream*);
typedef void (*$fn151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn152)(panda$io$OutputStream*);
typedef void (*$fn154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn156)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn184)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn193)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn210)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn223)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn234)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn245)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn264)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn269)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn292)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn311)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn319)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn396)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn447)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn454)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn465)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn477)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn484)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn495)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn510)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn517)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn528)(panda$collections$Iterator*);

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
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

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
    panda$io$File* $finallyReturn16;
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
    panda$io$File* $finallyReturn52;
    panda$io$File* $tmp54;
    int $tmp15;
    {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
        if ($tmp16.value) {
        {
            $tmp18 = p_llvm;
            $finallyReturn16 = $tmp18;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp15 = 0;
            goto $l13;
            $l19:;
            return $finallyReturn16;
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
        $tmp54 = dest21;
        $finallyReturn52 = $tmp54;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
        $tmp15 = 1;
        goto $l13;
        $l55:;
        return $finallyReturn52;
    }
    $l13:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest21));
    dest21 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args26));
    args26 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p41));
    p41 = NULL;
    switch ($tmp15) {
        case 1: goto $l55;
        case 0: goto $l19;
    }
    $l57:;
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest61 = NULL;
    panda$io$File* $tmp62;
    panda$io$File* $tmp63;
    panda$collections$Array* args66 = NULL;
    panda$collections$Array* $tmp67;
    panda$collections$Array* $tmp68;
    panda$core$System$Process* p72 = NULL;
    panda$core$System$Process* $tmp73;
    panda$core$System$Process* $tmp74;
    panda$io$OutputStream* $tmp76;
    panda$core$String* $tmp78;
    panda$core$Int64 $tmp82;
    panda$io$File* $finallyReturn83;
    panda$io$File* $tmp85;
    int $tmp60;
    {
        panda$io$File* $tmp65 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s64);
        $tmp63 = $tmp65;
        $tmp62 = $tmp63;
        dest61 = $tmp62;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$collections$Array* $tmp69 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp69);
        $tmp68 = $tmp69;
        $tmp67 = $tmp68;
        args66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) &$s70));
        panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) &$s71));
        panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) dest61->path));
        panda$core$System$Process* $tmp75 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args66));
        $tmp74 = $tmp75;
        $tmp73 = $tmp74;
        p72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$io$OutputStream* $tmp77 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp76 = $tmp77;
        panda$core$String* $tmp80 = (($fn79) p72->error->$class->vtable[6])(p72->error);
        $tmp78 = $tmp80;
        (($fn81) $tmp76->$class->vtable[16])($tmp76, $tmp78);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp82, p72);
        panda$core$Bit $tmp83 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp82, ((panda$core$Int64) { 0 }));
        if ($tmp83.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp85 = dest61;
        $finallyReturn83 = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        $tmp60 = 0;
        goto $l58;
        $l86:;
        return $finallyReturn83;
    }
    $l58:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest61));
    dest61 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args66));
    args66 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p72));
    p72 = NULL;
    switch ($tmp60) {
        case 0: goto $l86;
    }
    $l88:;
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args92 = NULL;
    panda$collections$Array* $tmp93;
    panda$collections$Array* $tmp94;
    panda$core$System$Process* p100 = NULL;
    panda$core$System$Process* $tmp101;
    panda$core$System$Process* $tmp102;
    panda$io$OutputStream* $tmp104;
    panda$core$String* $tmp106;
    panda$core$Int64 $tmp110;
    panda$io$File* $finallyReturn111;
    panda$io$File* $tmp113;
    int $tmp91;
    {
        panda$collections$Array* $tmp95 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp95);
        $tmp94 = $tmp95;
        $tmp93 = $tmp94;
        args92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        panda$collections$Array$add$panda$collections$Array$T(args92, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args92, ((panda$core$Object*) &$s96));
        panda$collections$Array$add$panda$collections$Array$T(args92, ((panda$core$Object*) &$s97));
        panda$collections$Array$add$panda$collections$Array$T(args92, ((panda$core$Object*) &$s98));
        panda$collections$Array$add$panda$collections$Array$T(args92, ((panda$core$Object*) &$s99));
        panda$collections$Array$add$panda$collections$Array$T(args92, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp103 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args92));
        $tmp102 = $tmp103;
        $tmp101 = $tmp102;
        p100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
        panda$io$OutputStream* $tmp105 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp104 = $tmp105;
        panda$core$String* $tmp108 = (($fn107) p100->error->$class->vtable[6])(p100->error);
        $tmp106 = $tmp108;
        (($fn109) $tmp104->$class->vtable[16])($tmp104, $tmp106);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp110, p100);
        panda$core$Bit $tmp111 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp110, ((panda$core$Int64) { 0 }));
        if ($tmp111.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp113 = p_dest;
        $finallyReturn111 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        $tmp91 = 0;
        goto $l89;
        $l114:;
        return $finallyReturn111;
    }
    $l89:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args92));
    args92 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p100));
    p100 = NULL;
    switch ($tmp91) {
        case 0: goto $l114;
    }
    $l116:;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args120 = NULL;
    panda$collections$Array* $tmp121;
    panda$collections$Array* $tmp122;
    panda$core$System$Process* p130 = NULL;
    panda$core$System$Process* $tmp131;
    panda$core$System$Process* $tmp132;
    panda$io$OutputStream* $tmp134;
    panda$core$String* $tmp136;
    panda$core$Int64 $tmp140;
    panda$io$File* $finallyReturn141;
    panda$io$File* $tmp143;
    int $tmp119;
    {
        panda$collections$Array* $tmp123 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp123);
        $tmp122 = $tmp123;
        $tmp121 = $tmp122;
        args120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) &$s124));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) &$s125));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) &$s126));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) &$s127));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) &$s128));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) &$s129));
        panda$collections$Array$add$panda$collections$Array$T(args120, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp133 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args120));
        $tmp132 = $tmp133;
        $tmp131 = $tmp132;
        p130 = $tmp131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
        panda$io$OutputStream* $tmp135 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp134 = $tmp135;
        panda$core$String* $tmp138 = (($fn137) p130->error->$class->vtable[6])(p130->error);
        $tmp136 = $tmp138;
        (($fn139) $tmp134->$class->vtable[16])($tmp134, $tmp136);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp140, p130);
        panda$core$Bit $tmp141 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp140, ((panda$core$Int64) { 0 }));
        if ($tmp141.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp143 = p_dest;
        $finallyReturn141 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        $tmp119 = 0;
        goto $l117;
        $l144:;
        return $finallyReturn141;
    }
    $l117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args120));
    args120 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p130));
    p130 = NULL;
    switch ($tmp119) {
        case 0: goto $l144;
    }
    $l146:;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn148) p_out->$class->vtable[19])(p_out, &$s147);
    (($fn149) p_out->$class->vtable[17])(p_out);
    (($fn151) p_out->$class->vtable[19])(p_out, &$s150);
    (($fn152) p_out->$class->vtable[17])(p_out);
    (($fn154) p_out->$class->vtable[19])(p_out, &$s153);
    (($fn156) p_out->$class->vtable[19])(p_out, &$s155);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args160 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp161;
    org$pandalanguage$pandac$Main$Arguments* $tmp162;
    panda$collections$Array* sources164 = NULL;
    panda$collections$Array* $tmp165;
    panda$collections$Array* $tmp166;
    panda$collections$Array* imports168 = NULL;
    panda$collections$Array* $tmp169;
    panda$collections$Array* $tmp170;
    panda$io$File* outFile172 = NULL;
    panda$io$File* $tmp173;
    panda$core$Int64 optimizationLevel174;
    panda$core$Int64 safetyLevel175;
    panda$core$Int64$nullable format176;
    panda$io$OutputStream* err177 = NULL;
    panda$io$OutputStream* $tmp178;
    panda$io$OutputStream* $tmp179;
    panda$core$String* a190 = NULL;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $match$150_13198 = NULL;
    panda$core$String* $tmp199;
    panda$io$File* $tmp204;
    panda$io$File* $tmp205;
    panda$io$File* $tmp206;
    panda$core$String* $tmp208;
    panda$io$File* $tmp212;
    panda$core$String* level219 = NULL;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    panda$io$OutputStream* $tmp231;
    panda$core$String* level241 = NULL;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$io$OutputStream* $tmp253;
    panda$core$String* f265 = NULL;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $match$178_21274 = NULL;
    panda$core$String* $tmp275;
    panda$core$String* $tmp286;
    panda$core$String* $tmp287;
    panda$io$File* $tmp297;
    panda$core$String* $tmp299;
    panda$io$File* $tmp305;
    panda$io$File* $tmp306;
    panda$io$File* $tmp307;
    panda$core$String* $tmp309;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$String* $tmp317;
    panda$core$String* $tmp324;
    panda$io$File* $tmp328;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$io$File* $tmp339;
    panda$io$File* $tmp340;
    panda$io$File* $tmp341;
    panda$io$File* $tmp344;
    panda$io$File* $tmp345;
    panda$io$File* $tmp346;
    panda$io$File* $tmp349;
    panda$io$File* $tmp350;
    panda$io$File* $tmp351;
    panda$core$String* extension363 = NULL;
    panda$core$Int64$nullable $match$221_21364;
    panda$core$String* $tmp366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp370;
    panda$core$String* $tmp371;
    panda$core$String* $tmp374;
    panda$core$String* $tmp375;
    panda$core$String* $tmp378;
    panda$core$String* $tmp379;
    panda$core$String* $tmp382;
    panda$core$String* $tmp383;
    panda$io$File* $tmp385;
    panda$io$File* $tmp386;
    panda$io$File* $tmp387;
    panda$core$Object* $tmp388;
    panda$core$String* $tmp392;
    panda$core$Int64 errorCount397;
    org$pandalanguage$pandac$CodeGenerator* cg401 = NULL;
    panda$core$Int64$nullable $match$240_17402;
    org$pandalanguage$pandac$CodeGenerator* $tmp412;
    org$pandalanguage$pandac$CodeGenerator* $tmp413;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp414;
    panda$io$OutputStream* $tmp416;
    panda$io$File* $tmp417;
    org$pandalanguage$pandac$CodeGenerator* $tmp422;
    org$pandalanguage$pandac$CodeGenerator* $tmp423;
    org$pandalanguage$pandac$HCodeGenerator* $tmp424;
    org$pandalanguage$pandac$CodeGenerator* $tmp427;
    org$pandalanguage$pandac$CodeGenerator* $tmp428;
    org$pandalanguage$pandac$CCodeGenerator* $tmp429;
    org$pandalanguage$pandac$Compiler$Settings* settings431 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp432;
    org$pandalanguage$pandac$Compiler$Settings* $tmp433;
    org$pandalanguage$pandac$Compiler* compiler435 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp436;
    org$pandalanguage$pandac$Compiler* $tmp437;
    panda$collections$Iterator* Iter$252$13442 = NULL;
    panda$collections$Iterator* $tmp443;
    panda$collections$Iterator* $tmp444;
    panda$io$File* s460 = NULL;
    panda$io$File* $tmp461;
    panda$core$Object* $tmp462;
    panda$collections$Iterator* Iter$253$17470 = NULL;
    panda$collections$Iterator* $tmp471;
    panda$collections$Iterator* $tmp472;
    panda$collections$ListView* $tmp473;
    org$pandalanguage$pandac$ClassDecl* cl490 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp491;
    panda$core$Object* $tmp492;
    panda$collections$Iterator* Iter$258$17505 = NULL;
    panda$collections$Iterator* $tmp506;
    panda$collections$Iterator* $tmp507;
    panda$io$File* s523 = NULL;
    panda$io$File* $tmp524;
    panda$core$Object* $tmp525;
    panda$core$Int64$nullable $match$267_17534;
    panda$io$File* optimized539 = NULL;
    panda$io$File* $tmp540;
    panda$io$File* $tmp541;
    panda$io$File* $tmp542;
    panda$io$File* assembly546 = NULL;
    panda$io$File* $tmp547;
    panda$io$File* $tmp548;
    panda$io$File* $tmp550;
    panda$io$File* optimized557 = NULL;
    panda$io$File* $tmp558;
    panda$io$File* $tmp559;
    panda$io$File* $tmp560;
    panda$io$File* assembly564 = NULL;
    panda$io$File* $tmp565;
    panda$io$File* $tmp566;
    panda$io$File* $tmp568;
    panda$core$String* $tmp573;
    panda$core$String* $tmp574;
    int $tmp159;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp163 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp163, p_rawArgs);
        $tmp162 = $tmp163;
        $tmp161 = $tmp162;
        args160 = $tmp161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$collections$Array* $tmp167 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp167);
        $tmp166 = $tmp167;
        $tmp165 = $tmp166;
        sources164 = $tmp165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
        panda$collections$Array* $tmp171 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp171);
        $tmp170 = $tmp171;
        $tmp169 = $tmp170;
        imports168 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        panda$collections$Array$add$panda$collections$Array$T(imports168, ((panda$core$Object*) self->pandaHome));
        $tmp173 = NULL;
        outFile172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        optimizationLevel174 = ((panda$core$Int64) { 3 });
        safetyLevel175 = ((panda$core$Int64) { 3 });
        format176 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp180 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp179 = $tmp180;
        $tmp178 = $tmp179;
        err177 = $tmp178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
        $l181:;
        panda$core$Bit $tmp185 = (($fn184) args160->$class->vtable[2])(args160);
        panda$core$Bit $tmp186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp185);
        bool $tmp183 = $tmp186.value;
        if (!$tmp183) goto $l182;
        {
            int $tmp189;
            {
                panda$core$String* $tmp194 = (($fn193) args160->$class->vtable[3])(args160);
                $tmp192 = $tmp194;
                $tmp191 = $tmp192;
                a190 = $tmp191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                int $tmp197;
                {
                    $tmp199 = a190;
                    $match$150_13198 = $tmp199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                    panda$core$Bit $tmp201 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s200);
                    if ($tmp201.value) {
                    {
                        if (((panda$core$Bit) { outFile172 != NULL }).value) {
                        {
                            (($fn203) err177->$class->vtable[19])(err177, &$s202);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp204 = outFile172;
                            panda$io$File* $tmp207 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp211 = (($fn210) args160->$class->vtable[4])(args160, &$s209);
                            $tmp208 = $tmp211;
                            panda$io$File$init$panda$core$String($tmp207, $tmp208);
                            $tmp206 = $tmp207;
                            $tmp205 = $tmp206;
                            outFile172 = $tmp205;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
                        }
                        panda$io$File* $tmp213 = panda$io$File$parent$R$panda$io$File$Q(outFile172);
                        $tmp212 = $tmp213;
                        panda$io$File$createDirectories($tmp212);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                    }
                    }
                    else {
                    panda$core$Bit $tmp215 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s214);
                    if ($tmp215.value) {
                    {
                        int $tmp218;
                        {
                            panda$core$String* $tmp224 = (($fn223) args160->$class->vtable[4])(args160, &$s222);
                            $tmp221 = $tmp224;
                            $tmp220 = $tmp221;
                            level219 = $tmp220;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                            panda$core$Int64$nullable $tmp225 = panda$core$String$convert$R$panda$core$Int64$Q(level219);
                            optimizationLevel174 = ((panda$core$Int64) $tmp225.value);
                            panda$core$Bit $tmp227 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel174, ((panda$core$Int64) { 3 }));
                            bool $tmp226 = $tmp227.value;
                            if ($tmp226) goto $l228;
                            panda$core$Bit $tmp229 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel174, ((panda$core$Int64) { 0 }));
                            $tmp226 = $tmp229.value;
                            $l228:;
                            panda$core$Bit $tmp230 = { $tmp226 };
                            if ($tmp230.value) {
                            {
                                panda$io$OutputStream* $tmp232 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp231 = $tmp232;
                                (($fn234) $tmp231->$class->vtable[19])($tmp231, &$s233);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp218 = -1;
                        goto $l216;
                        $l216:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level219));
                        level219 = NULL;
                        switch ($tmp218) {
                            case -1: goto $l235;
                        }
                        $l235:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp237 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s236);
                    if ($tmp237.value) {
                    {
                        int $tmp240;
                        {
                            panda$core$String* $tmp246 = (($fn245) args160->$class->vtable[4])(args160, &$s244);
                            $tmp243 = $tmp246;
                            $tmp242 = $tmp243;
                            level241 = $tmp242;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                            panda$core$Int64$nullable $tmp247 = panda$core$String$convert$R$panda$core$Int64$Q(level241);
                            safetyLevel175 = ((panda$core$Int64) $tmp247.value);
                            panda$core$Bit $tmp249 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel175, ((panda$core$Int64) { 3 }));
                            bool $tmp248 = $tmp249.value;
                            if ($tmp248) goto $l250;
                            panda$core$Bit $tmp251 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel175, ((panda$core$Int64) { 0 }));
                            $tmp248 = $tmp251.value;
                            $l250:;
                            panda$core$Bit $tmp252 = { $tmp248 };
                            if ($tmp252.value) {
                            {
                                panda$io$OutputStream* $tmp254 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp253 = $tmp254;
                                (($fn256) $tmp253->$class->vtable[19])($tmp253, &$s255);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp240 = -1;
                        goto $l238;
                        $l238:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level241));
                        level241 = NULL;
                        switch ($tmp240) {
                            case -1: goto $l257;
                        }
                        $l257:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp259 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s258);
                    if ($tmp259.value) {
                    {
                        int $tmp262;
                        {
                            if (((panda$core$Bit) { format176.nonnull }).value) {
                            {
                                (($fn264) err177->$class->vtable[19])(err177, &$s263);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp270 = (($fn269) args160->$class->vtable[4])(args160, &$s268);
                            $tmp267 = $tmp270;
                            $tmp266 = $tmp267;
                            f265 = $tmp266;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                            int $tmp273;
                            {
                                $tmp275 = f265;
                                $match$178_21274 = $tmp275;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                                panda$core$Bit $tmp277 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21274, &$s276);
                                if ($tmp277.value) {
                                {
                                    format176 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp279 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21274, &$s278);
                                if ($tmp279.value) {
                                {
                                    format176 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp281 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21274, &$s280);
                                if ($tmp281.value) {
                                {
                                    format176 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp283 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21274, &$s282);
                                if ($tmp283.value) {
                                {
                                    format176 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp285 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21274, &$s284);
                                if ($tmp285.value) {
                                {
                                    format176 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s288, f265);
                                    $tmp287 = $tmp289;
                                    panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp287, &$s290);
                                    $tmp286 = $tmp291;
                                    (($fn292) err177->$class->vtable[19])(err177, $tmp286);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp273 = -1;
                            goto $l271;
                            $l271:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                            switch ($tmp273) {
                                case -1: goto $l293;
                            }
                            $l293:;
                        }
                        $tmp262 = -1;
                        goto $l260;
                        $l260:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f265));
                        f265 = NULL;
                        switch ($tmp262) {
                            case -1: goto $l294;
                        }
                        $l294:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s295);
                    if ($tmp296.value) {
                    {
                        panda$io$File* $tmp298 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp302 = (($fn301) args160->$class->vtable[4])(args160, &$s300);
                        $tmp299 = $tmp302;
                        panda$io$File$init$panda$core$String($tmp298, $tmp299);
                        $tmp297 = $tmp298;
                        panda$collections$Array$add$panda$collections$Array$T(imports168, ((panda$core$Object*) $tmp297));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                    }
                    }
                    else {
                    panda$core$Bit $tmp304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s303);
                    if ($tmp304.value) {
                    {
                        {
                            $tmp305 = self->llvmDir;
                            panda$io$File* $tmp308 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp312 = (($fn311) args160->$class->vtable[4])(args160, &$s310);
                            $tmp309 = $tmp312;
                            panda$io$File$init$panda$core$String($tmp308, $tmp309);
                            $tmp307 = $tmp308;
                            $tmp306 = $tmp307;
                            self->llvmDir = $tmp306;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp314 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s313);
                    if ($tmp314.value) {
                    {
                        {
                            $tmp315 = self->triple;
                            panda$core$String* $tmp320 = (($fn319) args160->$class->vtable[4])(args160, &$s318);
                            $tmp317 = $tmp320;
                            $tmp316 = $tmp317;
                            self->triple = $tmp316;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13198, &$s321);
                    if ($tmp322.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s323);
                        panda$core$String* $tmp325 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp324 = $tmp325;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp327 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a190, &$s326);
                        if ($tmp327.value) {
                        {
                            panda$io$File* $tmp329 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp329, a190);
                            $tmp328 = $tmp329;
                            panda$collections$Array$add$panda$collections$Array$T(sources164, ((panda$core$Object*) $tmp328));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s332, a190);
                            $tmp331 = $tmp333;
                            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s334);
                            $tmp330 = $tmp335;
                            (($fn336) err177->$class->vtable[19])(err177, $tmp330);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
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
                $tmp197 = -1;
                goto $l195;
                $l195:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                switch ($tmp197) {
                    case -1: goto $l337;
                }
                $l337:;
            }
            $tmp189 = -1;
            goto $l187;
            $l187:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a190));
            a190 = NULL;
            switch ($tmp189) {
                case -1: goto $l338;
            }
            $l338:;
        }
        goto $l181;
        $l182:;
        {
            $tmp339 = self->opt;
            panda$io$File* $tmp343 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s342);
            $tmp341 = $tmp343;
            $tmp340 = $tmp341;
            self->opt = $tmp340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
        }
        {
            $tmp344 = self->llc;
            panda$io$File* $tmp348 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s347);
            $tmp346 = $tmp348;
            $tmp345 = $tmp346;
            self->llc = $tmp345;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
        }
        {
            $tmp349 = self->gcc;
            panda$io$File* $tmp352 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp352, &$s353);
            $tmp351 = $tmp352;
            $tmp350 = $tmp351;
            self->gcc = $tmp350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
        }
        panda$core$Int64 $tmp354 = panda$collections$Array$get_count$R$panda$core$Int64(sources164);
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp354, ((panda$core$Int64) { 0 }));
        if ($tmp355.value) {
        {
            (($fn357) err177->$class->vtable[19])(err177, &$s356);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format176.nonnull }).value) {
        {
            format176 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile172 == NULL }).value) {
        {
            panda$core$Int64 $tmp358 = panda$collections$Array$get_count$R$panda$core$Int64(sources164);
            panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp358, ((panda$core$Int64) { 1 }));
            if ($tmp359.value) {
            {
                int $tmp362;
                {
                    memset(&extension363, 0, sizeof(extension363));
                    {
                        $match$221_21364 = format176;
                        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21364.value), ((panda$core$Int64) { 918 }));
                        if ($tmp365.value) {
                        {
                            {
                                $tmp366 = extension363;
                                $tmp367 = &$s368;
                                extension363 = $tmp367;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21364.value), ((panda$core$Int64) { 919 }));
                        if ($tmp369.value) {
                        {
                            {
                                $tmp370 = extension363;
                                $tmp371 = &$s372;
                                extension363 = $tmp371;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21364.value), ((panda$core$Int64) { 920 }));
                        if ($tmp373.value) {
                        {
                            {
                                $tmp374 = extension363;
                                $tmp375 = &$s376;
                                extension363 = $tmp375;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21364.value), ((panda$core$Int64) { 921 }));
                        if ($tmp377.value) {
                        {
                            {
                                $tmp378 = extension363;
                                $tmp379 = &$s380;
                                extension363 = $tmp379;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21364.value), ((panda$core$Int64) { 917 }));
                        if ($tmp381.value) {
                        {
                            {
                                $tmp382 = extension363;
                                $tmp383 = &$s384;
                                extension363 = $tmp383;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
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
                        $tmp385 = outFile172;
                        panda$core$Object* $tmp389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources164, ((panda$core$Int64) { 0 }));
                        $tmp388 = $tmp389;
                        panda$io$File* $tmp390 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp388), extension363);
                        $tmp387 = $tmp390;
                        $tmp386 = $tmp387;
                        outFile172 = $tmp386;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                        panda$core$Panda$unref$panda$core$Object($tmp388);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                    }
                }
                $tmp362 = -1;
                goto $l360;
                $l360:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension363));
                switch ($tmp362) {
                    case -1: goto $l391;
                }
                $l391:;
            }
            }
            else {
            {
                panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s393, &$s394);
                $tmp392 = $tmp395;
                (($fn396) err177->$class->vtable[19])(err177, $tmp392);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount397, 0, sizeof(errorCount397));
        {
            int $tmp400;
            {
                memset(&cg401, 0, sizeof(cg401));
                {
                    $match$240_17402 = format176;
                    panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17402.value), ((panda$core$Int64) { 917 }));
                    bool $tmp404 = $tmp405.value;
                    if ($tmp404) goto $l406;
                    panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17402.value), ((panda$core$Int64) { 918 }));
                    $tmp404 = $tmp407.value;
                    $l406:;
                    panda$core$Bit $tmp408 = { $tmp404 };
                    bool $tmp403 = $tmp408.value;
                    if ($tmp403) goto $l409;
                    panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17402.value), ((panda$core$Int64) { 919 }));
                    $tmp403 = $tmp410.value;
                    $l409:;
                    panda$core$Bit $tmp411 = { $tmp403 };
                    if ($tmp411.value) {
                    {
                        {
                            $tmp412 = cg401;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp415 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp419 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile172, &$s418);
                            $tmp417 = $tmp419;
                            panda$io$OutputStream* $tmp420 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp417);
                            $tmp416 = $tmp420;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp415, self->triple, $tmp416);
                            $tmp414 = $tmp415;
                            $tmp413 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp414);
                            cg401 = $tmp413;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17402.value), ((panda$core$Int64) { 920 }));
                    if ($tmp421.value) {
                    {
                        {
                            $tmp422 = cg401;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp425 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp425, outFile172);
                            $tmp424 = $tmp425;
                            $tmp423 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp424);
                            cg401 = $tmp423;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17402.value), ((panda$core$Int64) { 921 }));
                    if ($tmp426.value) {
                    {
                        {
                            $tmp427 = cg401;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp430 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp430, outFile172);
                            $tmp429 = $tmp430;
                            $tmp428 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp429);
                            cg401 = $tmp428;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
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
                org$pandalanguage$pandac$Compiler$Settings* $tmp434 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp434, self->pandaHome, ((panda$collections$ListView*) imports168), optimizationLevel174, safetyLevel175);
                $tmp433 = $tmp434;
                $tmp432 = $tmp433;
                settings431 = $tmp432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                org$pandalanguage$pandac$Compiler* $tmp438 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(169, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp438, cg401, settings431);
                $tmp437 = $tmp438;
                $tmp436 = $tmp437;
                compiler435 = $tmp436;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
                {
                    int $tmp441;
                    {
                        ITable* $tmp445 = ((panda$collections$Iterable*) sources164)->$class->itable;
                        while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp445 = $tmp445->next;
                        }
                        $fn447 $tmp446 = $tmp445->methods[0];
                        panda$collections$Iterator* $tmp448 = $tmp446(((panda$collections$Iterable*) sources164));
                        $tmp444 = $tmp448;
                        $tmp443 = $tmp444;
                        Iter$252$13442 = $tmp443;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                        $l449:;
                        ITable* $tmp452 = Iter$252$13442->$class->itable;
                        while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp452 = $tmp452->next;
                        }
                        $fn454 $tmp453 = $tmp452->methods[0];
                        panda$core$Bit $tmp455 = $tmp453(Iter$252$13442);
                        panda$core$Bit $tmp456 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp455);
                        bool $tmp451 = $tmp456.value;
                        if (!$tmp451) goto $l450;
                        {
                            int $tmp459;
                            {
                                ITable* $tmp463 = Iter$252$13442->$class->itable;
                                while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp463 = $tmp463->next;
                                }
                                $fn465 $tmp464 = $tmp463->methods[1];
                                panda$core$Object* $tmp466 = $tmp464(Iter$252$13442);
                                $tmp462 = $tmp466;
                                $tmp461 = ((panda$io$File*) $tmp462);
                                s460 = $tmp461;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
                                panda$core$Panda$unref$panda$core$Object($tmp462);
                                {
                                    int $tmp469;
                                    {
                                        panda$collections$ListView* $tmp474 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler435, s460);
                                        $tmp473 = $tmp474;
                                        ITable* $tmp475 = ((panda$collections$Iterable*) $tmp473)->$class->itable;
                                        while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp475 = $tmp475->next;
                                        }
                                        $fn477 $tmp476 = $tmp475->methods[0];
                                        panda$collections$Iterator* $tmp478 = $tmp476(((panda$collections$Iterable*) $tmp473));
                                        $tmp472 = $tmp478;
                                        $tmp471 = $tmp472;
                                        Iter$253$17470 = $tmp471;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                                        $l479:;
                                        ITable* $tmp482 = Iter$253$17470->$class->itable;
                                        while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp482 = $tmp482->next;
                                        }
                                        $fn484 $tmp483 = $tmp482->methods[0];
                                        panda$core$Bit $tmp485 = $tmp483(Iter$253$17470);
                                        panda$core$Bit $tmp486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp485);
                                        bool $tmp481 = $tmp486.value;
                                        if (!$tmp481) goto $l480;
                                        {
                                            int $tmp489;
                                            {
                                                ITable* $tmp493 = Iter$253$17470->$class->itable;
                                                while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp493 = $tmp493->next;
                                                }
                                                $fn495 $tmp494 = $tmp493->methods[1];
                                                panda$core$Object* $tmp496 = $tmp494(Iter$253$17470);
                                                $tmp492 = $tmp496;
                                                $tmp491 = ((org$pandalanguage$pandac$ClassDecl*) $tmp492);
                                                cl490 = $tmp491;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
                                                panda$core$Panda$unref$panda$core$Object($tmp492);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler435, cl490);
                                            }
                                            $tmp489 = -1;
                                            goto $l487;
                                            $l487:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl490));
                                            cl490 = NULL;
                                            switch ($tmp489) {
                                                case -1: goto $l497;
                                            }
                                            $l497:;
                                        }
                                        goto $l479;
                                        $l480:;
                                    }
                                    $tmp469 = -1;
                                    goto $l467;
                                    $l467:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17470));
                                    Iter$253$17470 = NULL;
                                    switch ($tmp469) {
                                        case -1: goto $l498;
                                    }
                                    $l498:;
                                }
                            }
                            $tmp459 = -1;
                            goto $l457;
                            $l457:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s460));
                            s460 = NULL;
                            switch ($tmp459) {
                                case -1: goto $l499;
                            }
                            $l499:;
                        }
                        goto $l449;
                        $l450:;
                    }
                    $tmp441 = -1;
                    goto $l439;
                    $l439:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$252$13442));
                    Iter$252$13442 = NULL;
                    switch ($tmp441) {
                        case -1: goto $l500;
                    }
                    $l500:;
                }
                panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler435->errorCount, ((panda$core$Int64) { 0 }));
                if ($tmp501.value) {
                {
                    {
                        int $tmp504;
                        {
                            ITable* $tmp508 = ((panda$collections$Iterable*) sources164)->$class->itable;
                            while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp508 = $tmp508->next;
                            }
                            $fn510 $tmp509 = $tmp508->methods[0];
                            panda$collections$Iterator* $tmp511 = $tmp509(((panda$collections$Iterable*) sources164));
                            $tmp507 = $tmp511;
                            $tmp506 = $tmp507;
                            Iter$258$17505 = $tmp506;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
                            $l512:;
                            ITable* $tmp515 = Iter$258$17505->$class->itable;
                            while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp515 = $tmp515->next;
                            }
                            $fn517 $tmp516 = $tmp515->methods[0];
                            panda$core$Bit $tmp518 = $tmp516(Iter$258$17505);
                            panda$core$Bit $tmp519 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp518);
                            bool $tmp514 = $tmp519.value;
                            if (!$tmp514) goto $l513;
                            {
                                int $tmp522;
                                {
                                    ITable* $tmp526 = Iter$258$17505->$class->itable;
                                    while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp526 = $tmp526->next;
                                    }
                                    $fn528 $tmp527 = $tmp526->methods[1];
                                    panda$core$Object* $tmp529 = $tmp527(Iter$258$17505);
                                    $tmp525 = $tmp529;
                                    $tmp524 = ((panda$io$File*) $tmp525);
                                    s523 = $tmp524;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
                                    panda$core$Panda$unref$panda$core$Object($tmp525);
                                    org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler435, s523);
                                }
                                $tmp522 = -1;
                                goto $l520;
                                $l520:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s523));
                                s523 = NULL;
                                switch ($tmp522) {
                                    case -1: goto $l530;
                                }
                                $l530:;
                            }
                            goto $l512;
                            $l513:;
                        }
                        $tmp504 = -1;
                        goto $l502;
                        $l502:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17505));
                        Iter$258$17505 = NULL;
                        switch ($tmp504) {
                            case -1: goto $l531;
                        }
                        $l531:;
                    }
                    org$pandalanguage$pandac$Compiler$finish(compiler435);
                }
                }
                errorCount397 = compiler435->errorCount;
            }
            $tmp400 = -1;
            goto $l398;
            $l398:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings431));
            settings431 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler435));
            compiler435 = NULL;
            switch ($tmp400) {
                case -1: goto $l532;
            }
            $l532:;
        }
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount397, ((panda$core$Int64) { 0 }));
        if ($tmp533.value) {
        {
            {
                $match$267_17534 = format176;
                panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$267_17534.value), ((panda$core$Int64) { 918 }));
                if ($tmp535.value) {
                {
                    int $tmp538;
                    {
                        panda$io$File* $tmp544 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile172, &$s543);
                        $tmp542 = $tmp544;
                        panda$io$File* $tmp545 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp542, optimizationLevel174);
                        $tmp541 = $tmp545;
                        $tmp540 = $tmp541;
                        optimized539 = $tmp540;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                        panda$io$File* $tmp549 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized539);
                        $tmp548 = $tmp549;
                        $tmp547 = $tmp548;
                        assembly546 = $tmp547;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
                        panda$io$File* $tmp551 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly546, outFile172);
                        $tmp550 = $tmp551;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                    }
                    $tmp538 = -1;
                    goto $l536;
                    $l536:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized539));
                    optimized539 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly546));
                    assembly546 = NULL;
                    switch ($tmp538) {
                        case -1: goto $l552;
                    }
                    $l552:;
                }
                }
                else {
                panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$267_17534.value), ((panda$core$Int64) { 919 }));
                if ($tmp553.value) {
                {
                    int $tmp556;
                    {
                        panda$io$File* $tmp562 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile172, &$s561);
                        $tmp560 = $tmp562;
                        panda$io$File* $tmp563 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp560, optimizationLevel174);
                        $tmp559 = $tmp563;
                        $tmp558 = $tmp559;
                        optimized557 = $tmp558;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp558));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                        panda$io$File* $tmp567 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized557);
                        $tmp566 = $tmp567;
                        $tmp565 = $tmp566;
                        assembly564 = $tmp565;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                        panda$io$File* $tmp569 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly564, outFile172);
                        $tmp568 = $tmp569;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                    }
                    $tmp556 = -1;
                    goto $l554;
                    $l554:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized557));
                    optimized557 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly564));
                    assembly564 = NULL;
                    switch ($tmp556) {
                        case -1: goto $l570;
                    }
                    $l570:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount397, ((panda$core$Int64) { 1 }));
            if ($tmp571.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s572);
            }
            }
            else {
            {
                panda$core$String* $tmp575 = panda$core$Int64$convert$R$panda$core$String(errorCount397);
                $tmp574 = $tmp575;
                panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s576);
                $tmp573 = $tmp577;
                panda$io$Console$printLine$panda$core$String($tmp573);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp159 = -1;
    goto $l157;
    $l157:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args160));
    args160 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources164));
    sources164 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports168));
    imports168 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err177));
    err177 = NULL;
    switch ($tmp159) {
        case -1: goto $l578;
    }
    $l578:;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp579;
    org$pandalanguage$pandac$Main* $tmp580 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp580);
    $tmp579 = $tmp580;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp579, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp583;
    {
    }
    $tmp583 = -1;
    goto $l581;
    $l581:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp583) {
        case -1: goto $l584;
    }
    $l584:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

