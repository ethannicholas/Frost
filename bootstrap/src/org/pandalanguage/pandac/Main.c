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
#include "panda/collections/CollectionView.h"


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
typedef panda$collections$Iterator* (*$fn443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn461)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn473)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn491)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn506)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn524)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn577)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn584)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn637)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$Iterator*);

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
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x63\x72\x61\x73\x68", 7, 155465316945520, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x6c\x6c", 12, 5522965462756929718, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5645405478664216650, NULL };

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
    panda$io$File* dest21;
    panda$io$File* $tmp22;
    panda$io$File* $tmp23;
    panda$collections$Array* args26;
    panda$collections$Array* $tmp27;
    panda$collections$Array* $tmp28;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$Object* $tmp34;
    panda$core$System$Process* p41;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p41));
    switch ($tmp15) {
        case 1: goto $l55;
        case 0: goto $l19;
    }
    $l57:;
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest61;
    panda$io$File* $tmp62;
    panda$io$File* $tmp63;
    panda$collections$Array* args66;
    panda$collections$Array* $tmp67;
    panda$collections$Array* $tmp68;
    panda$core$System$Process* p72;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p72));
    switch ($tmp60) {
        case 0: goto $l86;
    }
    $l88:;
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args92;
    panda$collections$Array* $tmp93;
    panda$collections$Array* $tmp94;
    panda$core$System$Process* p100;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p100));
    switch ($tmp91) {
        case 0: goto $l114;
    }
    $l116:;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args120;
    panda$collections$Array* $tmp121;
    panda$collections$Array* $tmp122;
    panda$core$System$Process* p130;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p130));
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
    org$pandalanguage$pandac$Main$Arguments* args160;
    org$pandalanguage$pandac$Main$Arguments* $tmp161;
    org$pandalanguage$pandac$Main$Arguments* $tmp162;
    panda$collections$Array* sources164;
    panda$collections$Array* $tmp165;
    panda$collections$Array* $tmp166;
    panda$collections$Array* imports168;
    panda$collections$Array* $tmp169;
    panda$collections$Array* $tmp170;
    panda$io$File* outFile172;
    panda$io$File* $tmp173;
    panda$core$Int64 optimizationLevel174;
    panda$core$Int64 safetyLevel175;
    panda$core$Int64$nullable format176;
    panda$io$OutputStream* err177;
    panda$io$OutputStream* $tmp178;
    panda$io$OutputStream* $tmp179;
    panda$core$String* a190;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $match$150_13198;
    panda$core$String* $tmp199;
    panda$io$File* $tmp204;
    panda$io$File* $tmp205;
    panda$io$File* $tmp206;
    panda$core$String* $tmp208;
    panda$io$File* $tmp212;
    panda$core$String* level219;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    panda$io$OutputStream* $tmp231;
    panda$core$String* level241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$io$OutputStream* $tmp253;
    panda$core$String* f265;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $match$178_21274;
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
    panda$core$String* extension363;
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
    org$pandalanguage$pandac$CodeGenerator* cg397;
    panda$core$Int64$nullable $match$238_13398;
    org$pandalanguage$pandac$CodeGenerator* $tmp408;
    org$pandalanguage$pandac$CodeGenerator* $tmp409;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp410;
    panda$io$OutputStream* $tmp412;
    panda$io$File* $tmp413;
    org$pandalanguage$pandac$CodeGenerator* $tmp418;
    org$pandalanguage$pandac$CodeGenerator* $tmp419;
    org$pandalanguage$pandac$HCodeGenerator* $tmp420;
    org$pandalanguage$pandac$CodeGenerator* $tmp423;
    org$pandalanguage$pandac$CodeGenerator* $tmp424;
    org$pandalanguage$pandac$CCodeGenerator* $tmp425;
    org$pandalanguage$pandac$Compiler$Settings* settings427;
    org$pandalanguage$pandac$Compiler$Settings* $tmp428;
    org$pandalanguage$pandac$Compiler$Settings* $tmp429;
    org$pandalanguage$pandac$Compiler* compiler431;
    org$pandalanguage$pandac$Compiler* $tmp432;
    org$pandalanguage$pandac$Compiler* $tmp433;
    panda$collections$Iterator* Iter$249$9438;
    panda$collections$Iterator* $tmp439;
    panda$collections$Iterator* $tmp440;
    panda$io$File* s456;
    panda$io$File* $tmp457;
    panda$core$Object* $tmp458;
    panda$collections$Iterator* Iter$250$13466;
    panda$collections$Iterator* $tmp467;
    panda$collections$Iterator* $tmp468;
    panda$collections$ListView* $tmp469;
    org$pandalanguage$pandac$ClassDecl* cl486;
    org$pandalanguage$pandac$ClassDecl* $tmp487;
    panda$core$Object* $tmp488;
    panda$collections$Iterator* Iter$255$13501;
    panda$collections$Iterator* $tmp502;
    panda$collections$Iterator* $tmp503;
    panda$io$File* s519;
    panda$io$File* $tmp520;
    panda$core$Object* $tmp521;
    panda$core$Int64$nullable $match$262_17529;
    panda$io$File* optimized534;
    panda$io$File* $tmp535;
    panda$io$File* $tmp536;
    panda$io$File* $tmp537;
    panda$io$File* assembly541;
    panda$io$File* $tmp542;
    panda$io$File* $tmp543;
    panda$io$File* $tmp545;
    panda$io$File* optimized552;
    panda$io$File* $tmp553;
    panda$io$File* $tmp554;
    panda$io$File* $tmp555;
    panda$io$File* assembly559;
    panda$io$File* $tmp560;
    panda$io$File* $tmp561;
    panda$io$File* $tmp563;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
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
        memset(&cg397, 0, sizeof(cg397));
        {
            $match$238_13398 = format176;
            panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13398.value), ((panda$core$Int64) { 917 }));
            bool $tmp400 = $tmp401.value;
            if ($tmp400) goto $l402;
            panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13398.value), ((panda$core$Int64) { 918 }));
            $tmp400 = $tmp403.value;
            $l402:;
            panda$core$Bit $tmp404 = { $tmp400 };
            bool $tmp399 = $tmp404.value;
            if ($tmp399) goto $l405;
            panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13398.value), ((panda$core$Int64) { 919 }));
            $tmp399 = $tmp406.value;
            $l405:;
            panda$core$Bit $tmp407 = { $tmp399 };
            if ($tmp407.value) {
            {
                {
                    $tmp408 = cg397;
                    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp411 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                    panda$io$File* $tmp415 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile172, &$s414);
                    $tmp413 = $tmp415;
                    panda$io$OutputStream* $tmp416 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp413);
                    $tmp412 = $tmp416;
                    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp411, self->triple, $tmp412);
                    $tmp410 = $tmp411;
                    $tmp409 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp410);
                    cg397 = $tmp409;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp409));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
                }
            }
            }
            else {
            panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13398.value), ((panda$core$Int64) { 920 }));
            if ($tmp417.value) {
            {
                {
                    $tmp418 = cg397;
                    org$pandalanguage$pandac$HCodeGenerator* $tmp421 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                    org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp421, outFile172);
                    $tmp420 = $tmp421;
                    $tmp419 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp420);
                    cg397 = $tmp419;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
                }
            }
            }
            else {
            panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13398.value), ((panda$core$Int64) { 921 }));
            if ($tmp422.value) {
            {
                {
                    $tmp423 = cg397;
                    org$pandalanguage$pandac$CCodeGenerator* $tmp426 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                    org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp426, outFile172);
                    $tmp425 = $tmp426;
                    $tmp424 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp425);
                    cg397 = $tmp424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
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
        org$pandalanguage$pandac$Compiler$Settings* $tmp430 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
        org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp430, self->pandaHome, ((panda$collections$ListView*) imports168), optimizationLevel174, safetyLevel175);
        $tmp429 = $tmp430;
        $tmp428 = $tmp429;
        settings427 = $tmp428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
        org$pandalanguage$pandac$Compiler* $tmp434 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(169, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
        org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp434, cg397, settings427);
        $tmp433 = $tmp434;
        $tmp432 = $tmp433;
        compiler431 = $tmp432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
        {
            int $tmp437;
            {
                ITable* $tmp441 = ((panda$collections$Iterable*) sources164)->$class->itable;
                while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp441 = $tmp441->next;
                }
                $fn443 $tmp442 = $tmp441->methods[0];
                panda$collections$Iterator* $tmp444 = $tmp442(((panda$collections$Iterable*) sources164));
                $tmp440 = $tmp444;
                $tmp439 = $tmp440;
                Iter$249$9438 = $tmp439;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                $l445:;
                ITable* $tmp448 = Iter$249$9438->$class->itable;
                while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp448 = $tmp448->next;
                }
                $fn450 $tmp449 = $tmp448->methods[0];
                panda$core$Bit $tmp451 = $tmp449(Iter$249$9438);
                panda$core$Bit $tmp452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp451);
                bool $tmp447 = $tmp452.value;
                if (!$tmp447) goto $l446;
                {
                    int $tmp455;
                    {
                        ITable* $tmp459 = Iter$249$9438->$class->itable;
                        while ($tmp459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp459 = $tmp459->next;
                        }
                        $fn461 $tmp460 = $tmp459->methods[1];
                        panda$core$Object* $tmp462 = $tmp460(Iter$249$9438);
                        $tmp458 = $tmp462;
                        $tmp457 = ((panda$io$File*) $tmp458);
                        s456 = $tmp457;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
                        panda$core$Panda$unref$panda$core$Object($tmp458);
                        {
                            int $tmp465;
                            {
                                panda$collections$ListView* $tmp470 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler431, s456);
                                $tmp469 = $tmp470;
                                ITable* $tmp471 = ((panda$collections$Iterable*) $tmp469)->$class->itable;
                                while ($tmp471->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                    $tmp471 = $tmp471->next;
                                }
                                $fn473 $tmp472 = $tmp471->methods[0];
                                panda$collections$Iterator* $tmp474 = $tmp472(((panda$collections$Iterable*) $tmp469));
                                $tmp468 = $tmp474;
                                $tmp467 = $tmp468;
                                Iter$250$13466 = $tmp467;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                                $l475:;
                                ITable* $tmp478 = Iter$250$13466->$class->itable;
                                while ($tmp478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp478 = $tmp478->next;
                                }
                                $fn480 $tmp479 = $tmp478->methods[0];
                                panda$core$Bit $tmp481 = $tmp479(Iter$250$13466);
                                panda$core$Bit $tmp482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp481);
                                bool $tmp477 = $tmp482.value;
                                if (!$tmp477) goto $l476;
                                {
                                    int $tmp485;
                                    {
                                        ITable* $tmp489 = Iter$250$13466->$class->itable;
                                        while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp489 = $tmp489->next;
                                        }
                                        $fn491 $tmp490 = $tmp489->methods[1];
                                        panda$core$Object* $tmp492 = $tmp490(Iter$250$13466);
                                        $tmp488 = $tmp492;
                                        $tmp487 = ((org$pandalanguage$pandac$ClassDecl*) $tmp488);
                                        cl486 = $tmp487;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
                                        panda$core$Panda$unref$panda$core$Object($tmp488);
                                        org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler431, cl486);
                                    }
                                    $tmp485 = -1;
                                    goto $l483;
                                    $l483:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl486));
                                    switch ($tmp485) {
                                        case -1: goto $l493;
                                    }
                                    $l493:;
                                }
                                goto $l475;
                                $l476:;
                            }
                            $tmp465 = -1;
                            goto $l463;
                            $l463:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$250$13466));
                            switch ($tmp465) {
                                case -1: goto $l494;
                            }
                            $l494:;
                        }
                    }
                    $tmp455 = -1;
                    goto $l453;
                    $l453:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s456));
                    switch ($tmp455) {
                        case -1: goto $l495;
                    }
                    $l495:;
                }
                goto $l445;
                $l446:;
            }
            $tmp437 = -1;
            goto $l435;
            $l435:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$9438));
            switch ($tmp437) {
                case -1: goto $l496;
            }
            $l496:;
        }
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler431->errorCount, ((panda$core$Int64) { 0 }));
        if ($tmp497.value) {
        {
            {
                int $tmp500;
                {
                    ITable* $tmp504 = ((panda$collections$Iterable*) sources164)->$class->itable;
                    while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp504 = $tmp504->next;
                    }
                    $fn506 $tmp505 = $tmp504->methods[0];
                    panda$collections$Iterator* $tmp507 = $tmp505(((panda$collections$Iterable*) sources164));
                    $tmp503 = $tmp507;
                    $tmp502 = $tmp503;
                    Iter$255$13501 = $tmp502;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
                    $l508:;
                    ITable* $tmp511 = Iter$255$13501->$class->itable;
                    while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp511 = $tmp511->next;
                    }
                    $fn513 $tmp512 = $tmp511->methods[0];
                    panda$core$Bit $tmp514 = $tmp512(Iter$255$13501);
                    panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
                    bool $tmp510 = $tmp515.value;
                    if (!$tmp510) goto $l509;
                    {
                        int $tmp518;
                        {
                            ITable* $tmp522 = Iter$255$13501->$class->itable;
                            while ($tmp522->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp522 = $tmp522->next;
                            }
                            $fn524 $tmp523 = $tmp522->methods[1];
                            panda$core$Object* $tmp525 = $tmp523(Iter$255$13501);
                            $tmp521 = $tmp525;
                            $tmp520 = ((panda$io$File*) $tmp521);
                            s519 = $tmp520;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
                            panda$core$Panda$unref$panda$core$Object($tmp521);
                            org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler431, s519);
                        }
                        $tmp518 = -1;
                        goto $l516;
                        $l516:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s519));
                        switch ($tmp518) {
                            case -1: goto $l526;
                        }
                        $l526:;
                    }
                    goto $l508;
                    $l509:;
                }
                $tmp500 = -1;
                goto $l498;
                $l498:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$13501));
                switch ($tmp500) {
                    case -1: goto $l527;
                }
                $l527:;
            }
            org$pandalanguage$pandac$Compiler$finish(compiler431);
        }
        }
        panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler431->errorCount, ((panda$core$Int64) { 0 }));
        if ($tmp528.value) {
        {
            {
                $match$262_17529 = format176;
                panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$262_17529.value), ((panda$core$Int64) { 918 }));
                if ($tmp530.value) {
                {
                    int $tmp533;
                    {
                        panda$io$File* $tmp539 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile172, &$s538);
                        $tmp537 = $tmp539;
                        panda$io$File* $tmp540 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp537, optimizationLevel174);
                        $tmp536 = $tmp540;
                        $tmp535 = $tmp536;
                        optimized534 = $tmp535;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
                        panda$io$File* $tmp544 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized534);
                        $tmp543 = $tmp544;
                        $tmp542 = $tmp543;
                        assembly541 = $tmp542;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                        panda$io$File* $tmp546 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly541, outFile172);
                        $tmp545 = $tmp546;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
                    }
                    $tmp533 = -1;
                    goto $l531;
                    $l531:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized534));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly541));
                    switch ($tmp533) {
                        case -1: goto $l547;
                    }
                    $l547:;
                }
                }
                else {
                panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$262_17529.value), ((panda$core$Int64) { 919 }));
                if ($tmp548.value) {
                {
                    int $tmp551;
                    {
                        panda$io$File* $tmp557 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile172, &$s556);
                        $tmp555 = $tmp557;
                        panda$io$File* $tmp558 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp555, optimizationLevel174);
                        $tmp554 = $tmp558;
                        $tmp553 = $tmp554;
                        optimized552 = $tmp553;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp553));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                        panda$io$File* $tmp562 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized552);
                        $tmp561 = $tmp562;
                        $tmp560 = $tmp561;
                        assembly559 = $tmp560;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                        panda$io$File* $tmp564 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly559, outFile172);
                        $tmp563 = $tmp564;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                    }
                    $tmp551 = -1;
                    goto $l549;
                    $l549:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized552));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly559));
                    switch ($tmp551) {
                        case -1: goto $l565;
                    }
                    $l565:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler431->errorCount, ((panda$core$Int64) { 1 }));
            if ($tmp566.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s567);
            }
            }
            else {
            {
                panda$core$String* $tmp570 = panda$core$Int64$convert$R$panda$core$String(compiler431->errorCount);
                $tmp569 = $tmp570;
                panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s571);
                $tmp568 = $tmp572;
                panda$io$Console$printLine$panda$core$String($tmp568);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources164));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err177));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings427));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler431));
    switch ($tmp159) {
        case -1: goto $l573;
    }
    $l573:;
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Object* $tmp581;
    panda$collections$Array* imports592;
    panda$collections$Array* $tmp593;
    panda$collections$Array* $tmp594;
    panda$io$File* $tmp596;
    panda$core$Int64 optimizationLevel599;
    org$pandalanguage$pandac$LLVMCodeGenerator* cg600;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp601;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp602;
    panda$io$OutputStream* $tmp605;
    panda$io$File* $tmp606;
    panda$core$Int64 safetyLevel610;
    org$pandalanguage$pandac$Compiler$Settings* settings611;
    org$pandalanguage$pandac$Compiler$Settings* $tmp612;
    org$pandalanguage$pandac$Compiler$Settings* $tmp613;
    panda$io$File* $tmp615;
    org$pandalanguage$pandac$Compiler* compiler618;
    org$pandalanguage$pandac$Compiler* $tmp619;
    org$pandalanguage$pandac$Compiler* $tmp620;
    panda$io$File* s622;
    panda$io$File* $tmp623;
    panda$io$File* $tmp624;
    panda$collections$Iterator* Iter$305$9630;
    panda$collections$Iterator* $tmp631;
    panda$collections$Iterator* $tmp632;
    panda$collections$ListView* $tmp633;
    org$pandalanguage$pandac$ClassDecl* cl650;
    org$pandalanguage$pandac$ClassDecl* $tmp651;
    panda$core$Object* $tmp652;
    org$pandalanguage$pandac$Main* $tmp660;
    ITable* $tmp575 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp575->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp575 = $tmp575->next;
    }
    $fn577 $tmp576 = $tmp575->methods[0];
    panda$core$Int64 $tmp578 = $tmp576(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp578, ((panda$core$Int64) { 2 }));
    bool $tmp574 = $tmp579.value;
    if (!$tmp574) goto $l580;
    ITable* $tmp582 = p_args->$class->itable;
    while ($tmp582->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp582 = $tmp582->next;
    }
    $fn584 $tmp583 = $tmp582->methods[0];
    panda$core$Object* $tmp585 = $tmp583(p_args, ((panda$core$Int64) { 1 }));
    $tmp581 = $tmp585;
    panda$core$Bit $tmp587 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp581), &$s586);
    $tmp574 = $tmp587.value;
    panda$core$Panda$unref$panda$core$Object($tmp581);
    $l580:;
    panda$core$Bit $tmp588 = { $tmp574 };
    if ($tmp588.value) {
    {
        int $tmp591;
        {
            panda$collections$Array* $tmp595 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp595);
            $tmp594 = $tmp595;
            $tmp593 = $tmp594;
            imports592 = $tmp593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
            panda$io$File* $tmp597 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp597, &$s598);
            $tmp596 = $tmp597;
            panda$collections$Array$add$panda$collections$Array$T(imports592, ((panda$core$Object*) $tmp596));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
            optimizationLevel599 = ((panda$core$Int64) { 3 });
            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp603 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
            panda$io$File* $tmp607 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp607, &$s608);
            $tmp606 = $tmp607;
            panda$io$OutputStream* $tmp609 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp606);
            $tmp605 = $tmp609;
            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp603, &$s604, $tmp605);
            $tmp602 = $tmp603;
            $tmp601 = $tmp602;
            cg600 = $tmp601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
            safetyLevel610 = ((panda$core$Int64) { 3 });
            org$pandalanguage$pandac$Compiler$Settings* $tmp614 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
            panda$io$File* $tmp616 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp616, &$s617);
            $tmp615 = $tmp616;
            org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp614, $tmp615, ((panda$collections$ListView*) imports592), optimizationLevel599, safetyLevel610);
            $tmp613 = $tmp614;
            $tmp612 = $tmp613;
            settings611 = $tmp612;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
            org$pandalanguage$pandac$Compiler* $tmp621 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(169, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
            org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp621, ((org$pandalanguage$pandac$CodeGenerator*) cg600), settings611);
            $tmp620 = $tmp621;
            $tmp619 = $tmp620;
            compiler618 = $tmp619;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
            panda$io$File* $tmp625 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp625, &$s626);
            $tmp624 = $tmp625;
            $tmp623 = $tmp624;
            s622 = $tmp623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
            {
                int $tmp629;
                {
                    panda$collections$ListView* $tmp634 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler618, s622);
                    $tmp633 = $tmp634;
                    ITable* $tmp635 = ((panda$collections$Iterable*) $tmp633)->$class->itable;
                    while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp635 = $tmp635->next;
                    }
                    $fn637 $tmp636 = $tmp635->methods[0];
                    panda$collections$Iterator* $tmp638 = $tmp636(((panda$collections$Iterable*) $tmp633));
                    $tmp632 = $tmp638;
                    $tmp631 = $tmp632;
                    Iter$305$9630 = $tmp631;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                    $l639:;
                    ITable* $tmp642 = Iter$305$9630->$class->itable;
                    while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp642 = $tmp642->next;
                    }
                    $fn644 $tmp643 = $tmp642->methods[0];
                    panda$core$Bit $tmp645 = $tmp643(Iter$305$9630);
                    panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
                    bool $tmp641 = $tmp646.value;
                    if (!$tmp641) goto $l640;
                    {
                        int $tmp649;
                        {
                            ITable* $tmp653 = Iter$305$9630->$class->itable;
                            while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp653 = $tmp653->next;
                            }
                            $fn655 $tmp654 = $tmp653->methods[1];
                            panda$core$Object* $tmp656 = $tmp654(Iter$305$9630);
                            $tmp652 = $tmp656;
                            $tmp651 = ((org$pandalanguage$pandac$ClassDecl*) $tmp652);
                            cl650 = $tmp651;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
                            panda$core$Panda$unref$panda$core$Object($tmp652);
                            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler618, cl650);
                        }
                        $tmp649 = -1;
                        goto $l647;
                        $l647:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl650));
                        switch ($tmp649) {
                            case -1: goto $l657;
                        }
                        $l657:;
                    }
                    goto $l639;
                    $l640:;
                }
                $tmp629 = -1;
                goto $l627;
                $l627:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$305$9630));
                switch ($tmp629) {
                    case -1: goto $l658;
                }
                $l658:;
            }
            org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler618, s622);
        }
        $tmp591 = -1;
        goto $l589;
        $l589:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings611));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s622));
        switch ($tmp591) {
            case -1: goto $l659;
        }
        $l659:;
    }
    }
    else {
    {
        panda$core$Panda$disableRefCounting();
        org$pandalanguage$pandac$Main* $tmp661 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
        org$pandalanguage$pandac$Main$init($tmp661);
        $tmp660 = $tmp661;
        org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp660, p_args);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
    }
    }
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp664;
    {
    }
    $tmp664 = -1;
    goto $l662;
    $l662:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp664) {
        case -1: goto $l665;
    }
    $l665:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

