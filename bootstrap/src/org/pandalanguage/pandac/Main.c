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

static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn49)(panda$io$InputStream*);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn81)(panda$io$InputStream*);
typedef void (*$fn83)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn111)(panda$io$InputStream*);
typedef void (*$fn113)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn117)(panda$io$InputStream*);
typedef void (*$fn119)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn154)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn214)(panda$io$InputStream*);
typedef void (*$fn216)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn220)(panda$io$InputStream*);
typedef void (*$fn222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn234)(panda$io$OutputStream*);
typedef void (*$fn236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn237)(panda$io$OutputStream*);
typedef void (*$fn239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn241)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn271)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn280)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn301)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn306)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn314)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn327)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn340)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn352)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn374)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn380)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn408)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn418)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn428)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn436)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn525)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn608)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn620)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn627)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn638)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn652)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn659)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn670)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x35\x2e\x30", 27, -855196788127931458, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x75\x63\x2e\x61\x3b\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x69\x31\x38\x6e\x2e\x64\x79\x6c\x69\x62", 57, -9070932862195135721, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
    panda$core$Int64 $tmp16;
    panda$io$File* $returnValue18;
    panda$io$File* $tmp19;
    panda$io$File* dest22 = NULL;
    panda$io$File* $tmp23;
    panda$io$File* $tmp24;
    panda$collections$Array* args27 = NULL;
    panda$collections$Array* $tmp28;
    panda$collections$Array* $tmp29;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$Object* $tmp35;
    panda$core$System$Process* p42 = NULL;
    panda$core$System$Process* $tmp43;
    panda$core$System$Process* $tmp44;
    panda$io$OutputStream* $tmp46;
    panda$core$String* $tmp48;
    panda$core$Int64 $tmp52;
    panda$core$Int64 $tmp53;
    panda$core$Int64 $tmp55;
    panda$io$File* $tmp56;
    int $tmp15;
    {
        panda$core$Int64$init$builtin_int64(&$tmp16, 0);
        panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, $tmp16);
        if ($tmp17.value) {
        {
            $tmp19 = p_llvm;
            $returnValue18 = $tmp19;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
            $tmp15 = 0;
            goto $l13;
            $l20:;
            return $returnValue18;
        }
        }
        panda$io$File* $tmp26 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s25);
        $tmp24 = $tmp26;
        $tmp23 = $tmp24;
        dest22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp30);
        $tmp29 = $tmp30;
        $tmp28 = $tmp29;
        args27 = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) &$s31));
        panda$core$Int64$wrapper* $tmp36;
        $tmp36 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp36->value = p_level;
        $tmp35 = ((panda$core$Object*) $tmp36);
        panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s34, $tmp35);
        $tmp33 = $tmp37;
        panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s38);
        $tmp32 = $tmp39;
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object($tmp35);
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) &$s40));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) &$s41));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) dest22->path));
        panda$core$System$Process* $tmp45 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args27));
        $tmp44 = $tmp45;
        $tmp43 = $tmp44;
        p42 = $tmp43;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$io$OutputStream* $tmp47 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp46 = $tmp47;
        panda$core$String* $tmp50 = (($fn49) p42->error->$class->vtable[6])(p42->error);
        $tmp48 = $tmp50;
        (($fn51) $tmp46->$class->vtable[16])($tmp46, $tmp48);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp52, p42);
        panda$core$Int64$init$builtin_int64(&$tmp53, 0);
        panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp52, $tmp53);
        if ($tmp54.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp55, 1);
            panda$core$System$exit$panda$core$Int64($tmp55);
        }
        }
        $tmp56 = dest22;
        $returnValue18 = $tmp56;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
        $tmp15 = 1;
        goto $l13;
        $l57:;
        return $returnValue18;
    }
    $l13:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args27));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest22));
    dest22 = NULL;
    args27 = NULL;
    p42 = NULL;
    switch ($tmp15) {
        case 0: goto $l20;
        case 1: goto $l57;
    }
    $l59:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest63 = NULL;
    panda$io$File* $tmp64;
    panda$io$File* $tmp65;
    panda$collections$Array* args68 = NULL;
    panda$collections$Array* $tmp69;
    panda$collections$Array* $tmp70;
    panda$core$System$Process* p74 = NULL;
    panda$core$System$Process* $tmp75;
    panda$core$System$Process* $tmp76;
    panda$io$OutputStream* $tmp78;
    panda$core$String* $tmp80;
    panda$core$Int64 $tmp84;
    panda$core$Int64 $tmp85;
    panda$core$Int64 $tmp87;
    panda$io$File* $returnValue88;
    panda$io$File* $tmp89;
    int $tmp62;
    {
        panda$io$File* $tmp67 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s66);
        $tmp65 = $tmp67;
        $tmp64 = $tmp65;
        dest63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$collections$Array* $tmp71 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp71);
        $tmp70 = $tmp71;
        $tmp69 = $tmp70;
        args68 = $tmp69;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s72));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s73));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) dest63->path));
        panda$core$System$Process* $tmp77 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args68));
        $tmp76 = $tmp77;
        $tmp75 = $tmp76;
        p74 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$io$OutputStream* $tmp79 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp78 = $tmp79;
        panda$core$String* $tmp82 = (($fn81) p74->error->$class->vtable[6])(p74->error);
        $tmp80 = $tmp82;
        (($fn83) $tmp78->$class->vtable[16])($tmp78, $tmp80);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp84, p74);
        panda$core$Int64$init$builtin_int64(&$tmp85, 0);
        panda$core$Bit $tmp86 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp84, $tmp85);
        if ($tmp86.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp87, 1);
            panda$core$System$exit$panda$core$Int64($tmp87);
        }
        }
        $tmp89 = dest63;
        $returnValue88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        $tmp62 = 0;
        goto $l60;
        $l90:;
        return $returnValue88;
    }
    $l60:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest63));
    dest63 = NULL;
    args68 = NULL;
    p74 = NULL;
    switch ($tmp62) {
        case 0: goto $l90;
    }
    $l92:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args96 = NULL;
    panda$collections$Array* $tmp97;
    panda$collections$Array* $tmp98;
    panda$core$System$Process* p104 = NULL;
    panda$core$System$Process* $tmp105;
    panda$core$System$Process* $tmp106;
    panda$io$OutputStream* $tmp108;
    panda$core$String* $tmp110;
    panda$io$OutputStream* $tmp114;
    panda$core$String* $tmp116;
    panda$core$Int64 $tmp120;
    panda$core$Int64 $tmp121;
    panda$core$Int64 $tmp123;
    panda$io$File* $returnValue124;
    panda$io$File* $tmp125;
    int $tmp95;
    {
        panda$collections$Array* $tmp99 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp99);
        $tmp98 = $tmp99;
        $tmp97 = $tmp98;
        args96 = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s100));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s101));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s102));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s103));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp107 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args96));
        $tmp106 = $tmp107;
        $tmp105 = $tmp106;
        p104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$io$OutputStream* $tmp109 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp108 = $tmp109;
        panda$core$String* $tmp112 = (($fn111) p104->output->$class->vtable[6])(p104->output);
        $tmp110 = $tmp112;
        (($fn113) $tmp108->$class->vtable[16])($tmp108, $tmp110);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$io$OutputStream* $tmp115 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp114 = $tmp115;
        panda$core$String* $tmp118 = (($fn117) p104->error->$class->vtable[6])(p104->error);
        $tmp116 = $tmp118;
        (($fn119) $tmp114->$class->vtable[16])($tmp114, $tmp116);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp120, p104);
        panda$core$Int64$init$builtin_int64(&$tmp121, 0);
        panda$core$Bit $tmp122 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp120, $tmp121);
        if ($tmp122.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp123, 1);
            panda$core$System$exit$panda$core$Int64($tmp123);
        }
        }
        $tmp125 = p_dest;
        $returnValue124 = $tmp125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
        $tmp95 = 0;
        goto $l93;
        $l126:;
        return $returnValue124;
    }
    $l93:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args96));
    args96 = NULL;
    p104 = NULL;
    switch ($tmp95) {
        case 0: goto $l126;
    }
    $l128:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args132 = NULL;
    panda$collections$Array* $tmp133;
    panda$collections$Array* $tmp134;
    panda$collections$Array* icuLibs140 = NULL;
    panda$collections$Array* $tmp141;
    panda$collections$Array* $tmp142;
    panda$collections$Iterator* Iter$120$9149 = NULL;
    panda$collections$Iterator* $tmp150;
    panda$collections$Iterator* $tmp151;
    panda$core$String* lib167 = NULL;
    panda$core$String* $tmp168;
    panda$core$Object* $tmp169;
    panda$io$File* libFile174 = NULL;
    panda$io$File* $tmp175;
    panda$io$File* $tmp176;
    panda$core$String* $tmp178;
    panda$io$File* $tmp180;
    panda$core$String* simpleName183 = NULL;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp195;
    panda$core$Int64 $tmp196;
    panda$core$Bit $tmp197;
    panda$core$String* $tmp199;
    panda$core$System$Process* p207 = NULL;
    panda$core$System$Process* $tmp208;
    panda$core$System$Process* $tmp209;
    panda$io$OutputStream* $tmp211;
    panda$core$String* $tmp213;
    panda$io$OutputStream* $tmp217;
    panda$core$String* $tmp219;
    panda$core$Int64 $tmp223;
    panda$core$Int64 $tmp224;
    panda$core$Int64 $tmp226;
    panda$io$File* $returnValue227;
    panda$io$File* $tmp228;
    int $tmp131;
    {
        panda$collections$Array* $tmp135 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp135);
        $tmp134 = $tmp135;
        $tmp133 = $tmp134;
        args132 = $tmp133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s136));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s137));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s138));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s139));
        panda$collections$Array* $tmp145 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(&$s143, &$s144);
        $tmp142 = $tmp145;
        $tmp141 = $tmp142;
        icuLibs140 = $tmp141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
        {
            int $tmp148;
            {
                ITable* $tmp152 = ((panda$collections$Iterable*) icuLibs140)->$class->itable;
                while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp152 = $tmp152->next;
                }
                $fn154 $tmp153 = $tmp152->methods[0];
                panda$collections$Iterator* $tmp155 = $tmp153(((panda$collections$Iterable*) icuLibs140));
                $tmp151 = $tmp155;
                $tmp150 = $tmp151;
                Iter$120$9149 = $tmp150;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                $l156:;
                ITable* $tmp159 = Iter$120$9149->$class->itable;
                while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp159 = $tmp159->next;
                }
                $fn161 $tmp160 = $tmp159->methods[0];
                panda$core$Bit $tmp162 = $tmp160(Iter$120$9149);
                panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
                bool $tmp158 = $tmp163.value;
                if (!$tmp158) goto $l157;
                {
                    int $tmp166;
                    {
                        ITable* $tmp170 = Iter$120$9149->$class->itable;
                        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp170 = $tmp170->next;
                        }
                        $fn172 $tmp171 = $tmp170->methods[1];
                        panda$core$Object* $tmp173 = $tmp171(Iter$120$9149);
                        $tmp169 = $tmp173;
                        $tmp168 = ((panda$core$String*) $tmp169);
                        lib167 = $tmp168;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$core$Panda$unref$panda$core$Object($tmp169);
                        panda$io$File* $tmp177 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp177, lib167);
                        $tmp176 = $tmp177;
                        $tmp175 = $tmp176;
                        libFile174 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$io$File* $tmp181 = panda$io$File$parent$R$panda$io$File$Q(libFile174);
                        $tmp180 = $tmp181;
                        panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s179, ((panda$core$Object*) $tmp180));
                        $tmp178 = $tmp182;
                        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) $tmp178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
                        panda$core$String* $tmp186 = panda$io$File$simpleName$R$panda$core$String(libFile174);
                        $tmp185 = $tmp186;
                        $tmp184 = $tmp185;
                        simpleName183 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                        panda$core$Bit $tmp188 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName183, &$s187);
                        if ($tmp188.value) goto $l189; else goto $l190;
                        $l190:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s191, (panda$core$Int64) { 124 });
                        abort();
                        $l189:;
                        {
                            $tmp192 = simpleName183;
                            panda$core$Int64$init$builtin_int64(&$tmp196, 3);
                            panda$core$Bit$init$builtin_bit(&$tmp197, false);
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp195, ((panda$core$Int64$nullable) { $tmp196, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp197);
                            panda$core$String* $tmp198 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName183, $tmp195);
                            $tmp194 = $tmp198;
                            $tmp193 = $tmp194;
                            simpleName183 = $tmp193;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                        }
                        panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s200, simpleName183);
                        $tmp199 = $tmp201;
                        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) $tmp199));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                    }
                    $tmp166 = -1;
                    goto $l164;
                    $l164:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleName183));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) libFile174));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lib167));
                    lib167 = NULL;
                    libFile174 = NULL;
                    simpleName183 = NULL;
                    switch ($tmp166) {
                        case -1: goto $l202;
                    }
                    $l202:;
                }
                goto $l156;
                $l157:;
            }
            $tmp148 = -1;
            goto $l146;
            $l146:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$120$9149));
            Iter$120$9149 = NULL;
            switch ($tmp148) {
                case -1: goto $l203;
            }
            $l203:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s204));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s205));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s206));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp210 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args132));
        $tmp209 = $tmp210;
        $tmp208 = $tmp209;
        p207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$io$OutputStream* $tmp212 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp211 = $tmp212;
        panda$core$String* $tmp215 = (($fn214) p207->output->$class->vtable[6])(p207->output);
        $tmp213 = $tmp215;
        (($fn216) $tmp211->$class->vtable[16])($tmp211, $tmp213);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$io$OutputStream* $tmp218 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp217 = $tmp218;
        panda$core$String* $tmp221 = (($fn220) p207->error->$class->vtable[6])(p207->error);
        $tmp219 = $tmp221;
        (($fn222) $tmp217->$class->vtable[16])($tmp217, $tmp219);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp223, p207);
        panda$core$Int64$init$builtin_int64(&$tmp224, 0);
        panda$core$Bit $tmp225 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp223, $tmp224);
        if ($tmp225.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp226, 1);
            panda$core$System$exit$panda$core$Int64($tmp226);
        }
        }
        $tmp228 = p_dest;
        $returnValue227 = $tmp228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
        $tmp131 = 0;
        goto $l129;
        $l229:;
        return $returnValue227;
    }
    $l129:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p207));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) icuLibs140));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args132));
    args132 = NULL;
    icuLibs140 = NULL;
    p207 = NULL;
    switch ($tmp131) {
        case 0: goto $l229;
    }
    $l231:;
    abort();
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn233) p_out->$class->vtable[19])(p_out, &$s232);
    (($fn234) p_out->$class->vtable[17])(p_out);
    (($fn236) p_out->$class->vtable[19])(p_out, &$s235);
    (($fn237) p_out->$class->vtable[17])(p_out);
    (($fn239) p_out->$class->vtable[19])(p_out, &$s238);
    (($fn241) p_out->$class->vtable[19])(p_out, &$s240);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args245 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp246;
    org$pandalanguage$pandac$Main$Arguments* $tmp247;
    panda$collections$Array* sources249 = NULL;
    panda$collections$Array* $tmp250;
    panda$collections$Array* $tmp251;
    panda$collections$Array* imports253 = NULL;
    panda$collections$Array* $tmp254;
    panda$collections$Array* $tmp255;
    panda$io$File* outFile257 = NULL;
    panda$io$File* $tmp258;
    panda$core$Int64 optimizationLevel259;
    panda$core$Int64 $tmp260;
    panda$core$Int64 safetyLevel261;
    panda$core$Int64 $tmp262;
    panda$core$Int64$nullable format263;
    panda$io$OutputStream* err264 = NULL;
    panda$io$OutputStream* $tmp265;
    panda$io$OutputStream* $tmp266;
    panda$core$String* a277 = NULL;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    panda$core$String* $match$162_13285 = NULL;
    panda$core$String* $tmp286;
    panda$io$File* path292 = NULL;
    panda$io$File* $tmp293;
    panda$io$File* $tmp294;
    panda$io$InputStream* $tmp297;
    panda$io$OutputStream* $tmp299;
    panda$core$Int64 $tmp307;
    panda$io$File* $tmp308;
    panda$io$File* $tmp309;
    panda$io$File* $tmp310;
    panda$core$String* $tmp312;
    panda$io$File* $tmp316;
    panda$core$String* level323 = NULL;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$Int64 $tmp331;
    panda$core$Int64 $tmp334;
    panda$io$OutputStream* $tmp337;
    panda$core$Int64 $tmp341;
    panda$core$String* level348 = NULL;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350;
    panda$core$Int64 $tmp356;
    panda$core$Int64 $tmp359;
    panda$io$OutputStream* $tmp362;
    panda$core$Int64 $tmp366;
    panda$core$Int64 $tmp375;
    panda$core$String* f376 = NULL;
    panda$core$String* $tmp377;
    panda$core$String* $tmp378;
    panda$core$String* $match$194_21385 = NULL;
    panda$core$String* $tmp386;
    panda$core$Int64 $tmp389;
    panda$core$Int64 $tmp392;
    panda$core$Int64 $tmp395;
    panda$core$Int64 $tmp398;
    panda$core$Int64 $tmp401;
    panda$core$String* $tmp402;
    panda$core$String* $tmp403;
    panda$core$Int64 $tmp409;
    panda$io$File* $tmp414;
    panda$core$String* $tmp416;
    panda$io$File* $tmp422;
    panda$io$File* $tmp423;
    panda$io$File* $tmp424;
    panda$core$String* $tmp426;
    panda$core$String* $tmp432;
    panda$core$String* $tmp433;
    panda$core$String* $tmp434;
    panda$core$String* $tmp441;
    panda$io$File* $tmp445;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$core$Int64 $tmp454;
    panda$io$File* $tmp457;
    panda$io$File* $tmp458;
    panda$io$File* $tmp459;
    panda$io$File* $tmp462;
    panda$io$File* $tmp463;
    panda$io$File* $tmp464;
    panda$io$File* $tmp467;
    panda$io$File* $tmp468;
    panda$io$File* $tmp469;
    panda$core$Int64 $tmp473;
    panda$core$Int64 $tmp477;
    panda$core$Int64 $tmp478;
    panda$core$Int64 $tmp480;
    panda$core$String* extension485 = NULL;
    panda$core$Int64$nullable $match$237_21486;
    panda$core$Int64 $tmp487;
    panda$core$String* $tmp489;
    panda$core$String* $tmp490;
    panda$core$Int64 $tmp492;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$Int64 $tmp497;
    panda$core$String* $tmp499;
    panda$core$String* $tmp500;
    panda$core$Int64 $tmp502;
    panda$core$String* $tmp504;
    panda$core$String* $tmp505;
    panda$core$Int64 $tmp507;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$Bit $tmp512;
    panda$io$File* $tmp516;
    panda$io$File* $tmp517;
    panda$io$File* $tmp518;
    panda$core$Object* $tmp519;
    panda$core$Int64 $tmp520;
    panda$core$Int64 $tmp526;
    panda$core$Int64 errorCount527;
    org$pandalanguage$pandac$CodeGenerator* cg531 = NULL;
    panda$core$Int64$nullable $match$256_17532;
    panda$core$Int64 $tmp535;
    panda$core$Int64 $tmp538;
    panda$core$Int64 $tmp542;
    org$pandalanguage$pandac$CodeGenerator* $tmp545;
    org$pandalanguage$pandac$CodeGenerator* $tmp546;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp547;
    panda$io$OutputStream* $tmp549;
    panda$io$File* $tmp550;
    panda$core$Int64 $tmp554;
    org$pandalanguage$pandac$CodeGenerator* $tmp556;
    org$pandalanguage$pandac$CodeGenerator* $tmp557;
    org$pandalanguage$pandac$HCodeGenerator* $tmp558;
    panda$core$Int64 $tmp560;
    org$pandalanguage$pandac$CodeGenerator* $tmp562;
    org$pandalanguage$pandac$CodeGenerator* $tmp563;
    org$pandalanguage$pandac$CCodeGenerator* $tmp564;
    panda$core$Bit $tmp566;
    org$pandalanguage$pandac$Compiler$Settings* settings570 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp571;
    org$pandalanguage$pandac$Compiler$Settings* $tmp572;
    panda$threads$MessageQueue* errorQueue574 = NULL;
    panda$threads$MessageQueue* $tmp575;
    panda$threads$MessageQueue* $tmp576;
    org$pandalanguage$pandac$Compiler* compiler578 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp579;
    org$pandalanguage$pandac$Compiler* $tmp580;
    panda$collections$Iterator* Iter$269$13585 = NULL;
    panda$collections$Iterator* $tmp586;
    panda$collections$Iterator* $tmp587;
    panda$io$File* s603 = NULL;
    panda$io$File* $tmp604;
    panda$core$Object* $tmp605;
    panda$collections$Iterator* Iter$270$17613 = NULL;
    panda$collections$Iterator* $tmp614;
    panda$collections$Iterator* $tmp615;
    panda$collections$ListView* $tmp616;
    org$pandalanguage$pandac$ClassDecl* cl633 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp634;
    panda$core$Object* $tmp635;
    panda$collections$Iterator* Iter$274$13647 = NULL;
    panda$collections$Iterator* $tmp648;
    panda$collections$Iterator* $tmp649;
    panda$io$File* s665 = NULL;
    panda$io$File* $tmp666;
    panda$core$Object* $tmp667;
    panda$core$Range$LTpanda$core$Int64$GT $tmp675;
    panda$core$Int64 $tmp676;
    panda$core$Bit $tmp677;
    org$pandalanguage$pandac$Compiler$Error* error694 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp695;
    panda$core$Immutable* $tmp696;
    panda$core$String* $tmp698;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp703;
    panda$core$String* $tmp704;
    panda$core$Object* $tmp709;
    panda$core$Int64 $tmp725;
    panda$core$Int64$nullable $match$286_17727;
    panda$core$Int64 $tmp728;
    panda$io$File* optimized733 = NULL;
    panda$io$File* $tmp734;
    panda$io$File* $tmp735;
    panda$io$File* $tmp736;
    panda$io$File* assembly740 = NULL;
    panda$io$File* $tmp741;
    panda$io$File* $tmp742;
    panda$io$File* $tmp744;
    panda$core$Int64 $tmp747;
    panda$io$File* optimized752 = NULL;
    panda$io$File* $tmp753;
    panda$io$File* $tmp754;
    panda$io$File* $tmp755;
    panda$io$File* assembly759 = NULL;
    panda$io$File* $tmp760;
    panda$io$File* $tmp761;
    panda$io$File* $tmp763;
    panda$core$Int64 $tmp766;
    panda$core$String* $tmp769;
    panda$core$String* $tmp770;
    panda$core$Int64 $tmp774;
    int $tmp244;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp248 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp248, p_rawArgs);
        $tmp247 = $tmp248;
        $tmp246 = $tmp247;
        args245 = $tmp246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
        panda$collections$Array* $tmp252 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp252);
        $tmp251 = $tmp252;
        $tmp250 = $tmp251;
        sources249 = $tmp250;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
        panda$collections$Array* $tmp256 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp256);
        $tmp255 = $tmp256;
        $tmp254 = $tmp255;
        imports253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$collections$Array$add$panda$collections$Array$T(imports253, ((panda$core$Object*) self->pandaHome));
        $tmp258 = NULL;
        outFile257 = $tmp258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$core$Int64$init$builtin_int64(&$tmp260, 3);
        optimizationLevel259 = $tmp260;
        panda$core$Int64$init$builtin_int64(&$tmp262, 3);
        safetyLevel261 = $tmp262;
        format263 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp267 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp266 = $tmp267;
        $tmp265 = $tmp266;
        err264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
        $l268:;
        panda$core$Bit $tmp272 = (($fn271) args245->$class->vtable[2])(args245);
        panda$core$Bit $tmp273 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp272);
        bool $tmp270 = $tmp273.value;
        if (!$tmp270) goto $l269;
        {
            int $tmp276;
            {
                panda$core$String* $tmp281 = (($fn280) args245->$class->vtable[3])(args245);
                $tmp279 = $tmp281;
                $tmp278 = $tmp279;
                a277 = $tmp278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                int $tmp284;
                {
                    $tmp286 = a277;
                    $match$162_13285 = $tmp286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                    panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s287);
                    if ($tmp288.value) {
                    {
                        int $tmp291;
                        {
                            panda$io$File* $tmp295 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp295, &$s296);
                            $tmp294 = $tmp295;
                            $tmp293 = $tmp294;
                            path292 = $tmp293;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                            panda$io$InputStream* $tmp298 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp297 = $tmp298;
                            panda$io$OutputStream* $tmp300 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path292);
                            $tmp299 = $tmp300;
                            (($fn301) $tmp297->$class->vtable[12])($tmp297, $tmp299);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                            panda$collections$Array$add$panda$collections$Array$T(sources249, ((panda$core$Object*) path292));
                        }
                        $tmp291 = -1;
                        goto $l289;
                        $l289:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path292));
                        path292 = NULL;
                        switch ($tmp291) {
                            case -1: goto $l302;
                        }
                        $l302:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s303);
                    if ($tmp304.value) {
                    {
                        if (((panda$core$Bit) { outFile257 != NULL }).value) {
                        {
                            (($fn306) err264->$class->vtable[19])(err264, &$s305);
                            panda$core$Int64$init$builtin_int64(&$tmp307, 1);
                            panda$core$System$exit$panda$core$Int64($tmp307);
                        }
                        }
                        {
                            $tmp308 = outFile257;
                            panda$io$File* $tmp311 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp315 = (($fn314) args245->$class->vtable[4])(args245, &$s313);
                            $tmp312 = $tmp315;
                            panda$io$File$init$panda$core$String($tmp311, $tmp312);
                            $tmp310 = $tmp311;
                            $tmp309 = $tmp310;
                            outFile257 = $tmp309;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                        }
                        panda$io$File* $tmp317 = panda$io$File$parent$R$panda$io$File$Q(outFile257);
                        $tmp316 = $tmp317;
                        panda$io$File$createDirectories($tmp316);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                    }
                    }
                    else {
                    panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s318);
                    if ($tmp319.value) {
                    {
                        int $tmp322;
                        {
                            panda$core$String* $tmp328 = (($fn327) args245->$class->vtable[4])(args245, &$s326);
                            $tmp325 = $tmp328;
                            $tmp324 = $tmp325;
                            level323 = $tmp324;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                            panda$core$Int64$nullable $tmp329 = panda$core$String$convert$R$panda$core$Int64$Q(level323);
                            optimizationLevel259 = ((panda$core$Int64) $tmp329.value);
                            panda$core$Int64$init$builtin_int64(&$tmp331, 3);
                            panda$core$Bit $tmp332 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel259, $tmp331);
                            bool $tmp330 = $tmp332.value;
                            if ($tmp330) goto $l333;
                            panda$core$Int64$init$builtin_int64(&$tmp334, 0);
                            panda$core$Bit $tmp335 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel259, $tmp334);
                            $tmp330 = $tmp335.value;
                            $l333:;
                            panda$core$Bit $tmp336 = { $tmp330 };
                            if ($tmp336.value) {
                            {
                                panda$io$OutputStream* $tmp338 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp337 = $tmp338;
                                (($fn340) $tmp337->$class->vtable[19])($tmp337, &$s339);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
                                panda$core$Int64$init$builtin_int64(&$tmp341, 1);
                                panda$core$System$exit$panda$core$Int64($tmp341);
                            }
                            }
                        }
                        $tmp322 = -1;
                        goto $l320;
                        $l320:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level323));
                        level323 = NULL;
                        switch ($tmp322) {
                            case -1: goto $l342;
                        }
                        $l342:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp344 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s343);
                    if ($tmp344.value) {
                    {
                        int $tmp347;
                        {
                            panda$core$String* $tmp353 = (($fn352) args245->$class->vtable[4])(args245, &$s351);
                            $tmp350 = $tmp353;
                            $tmp349 = $tmp350;
                            level348 = $tmp349;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
                            panda$core$Int64$nullable $tmp354 = panda$core$String$convert$R$panda$core$Int64$Q(level348);
                            safetyLevel261 = ((panda$core$Int64) $tmp354.value);
                            panda$core$Int64$init$builtin_int64(&$tmp356, 3);
                            panda$core$Bit $tmp357 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel261, $tmp356);
                            bool $tmp355 = $tmp357.value;
                            if ($tmp355) goto $l358;
                            panda$core$Int64$init$builtin_int64(&$tmp359, 0);
                            panda$core$Bit $tmp360 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel261, $tmp359);
                            $tmp355 = $tmp360.value;
                            $l358:;
                            panda$core$Bit $tmp361 = { $tmp355 };
                            if ($tmp361.value) {
                            {
                                panda$io$OutputStream* $tmp363 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp362 = $tmp363;
                                (($fn365) $tmp362->$class->vtable[19])($tmp362, &$s364);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
                                panda$core$Int64$init$builtin_int64(&$tmp366, 1);
                                panda$core$System$exit$panda$core$Int64($tmp366);
                            }
                            }
                        }
                        $tmp347 = -1;
                        goto $l345;
                        $l345:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level348));
                        level348 = NULL;
                        switch ($tmp347) {
                            case -1: goto $l367;
                        }
                        $l367:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp369 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s368);
                    if ($tmp369.value) {
                    {
                        int $tmp372;
                        {
                            if (((panda$core$Bit) { format263.nonnull }).value) {
                            {
                                (($fn374) err264->$class->vtable[19])(err264, &$s373);
                                panda$core$Int64$init$builtin_int64(&$tmp375, 1);
                                panda$core$System$exit$panda$core$Int64($tmp375);
                            }
                            }
                            panda$core$String* $tmp381 = (($fn380) args245->$class->vtable[4])(args245, &$s379);
                            $tmp378 = $tmp381;
                            $tmp377 = $tmp378;
                            f376 = $tmp377;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                            int $tmp384;
                            {
                                $tmp386 = f376;
                                $match$194_21385 = $tmp386;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                                panda$core$Bit $tmp388 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21385, &$s387);
                                if ($tmp388.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp389, 918);
                                    format263 = ((panda$core$Int64$nullable) { $tmp389, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp391 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21385, &$s390);
                                if ($tmp391.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp392, 919);
                                    format263 = ((panda$core$Int64$nullable) { $tmp392, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp394 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21385, &$s393);
                                if ($tmp394.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp395, 917);
                                    format263 = ((panda$core$Int64$nullable) { $tmp395, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp397 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21385, &$s396);
                                if ($tmp397.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp398, 920);
                                    format263 = ((panda$core$Int64$nullable) { $tmp398, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21385, &$s399);
                                if ($tmp400.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp401, 921);
                                    format263 = ((panda$core$Int64$nullable) { $tmp401, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s404, f376);
                                    $tmp403 = $tmp405;
                                    panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s406);
                                    $tmp402 = $tmp407;
                                    (($fn408) err264->$class->vtable[19])(err264, $tmp402);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                                    panda$core$Int64$init$builtin_int64(&$tmp409, 1);
                                    panda$core$System$exit$panda$core$Int64($tmp409);
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp384 = -1;
                            goto $l382;
                            $l382:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
                            switch ($tmp384) {
                                case -1: goto $l410;
                            }
                            $l410:;
                        }
                        $tmp372 = -1;
                        goto $l370;
                        $l370:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f376));
                        f376 = NULL;
                        switch ($tmp372) {
                            case -1: goto $l411;
                        }
                        $l411:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp413 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s412);
                    if ($tmp413.value) {
                    {
                        panda$io$File* $tmp415 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp419 = (($fn418) args245->$class->vtable[4])(args245, &$s417);
                        $tmp416 = $tmp419;
                        panda$io$File$init$panda$core$String($tmp415, $tmp416);
                        $tmp414 = $tmp415;
                        panda$collections$Array$add$panda$collections$Array$T(imports253, ((panda$core$Object*) $tmp414));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                    }
                    }
                    else {
                    panda$core$Bit $tmp421 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s420);
                    if ($tmp421.value) {
                    {
                        {
                            $tmp422 = self->llvmDir;
                            panda$io$File* $tmp425 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp429 = (($fn428) args245->$class->vtable[4])(args245, &$s427);
                            $tmp426 = $tmp429;
                            panda$io$File$init$panda$core$String($tmp425, $tmp426);
                            $tmp424 = $tmp425;
                            $tmp423 = $tmp424;
                            self->llvmDir = $tmp423;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp431 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s430);
                    if ($tmp431.value) {
                    {
                        {
                            $tmp432 = self->triple;
                            panda$core$String* $tmp437 = (($fn436) args245->$class->vtable[4])(args245, &$s435);
                            $tmp434 = $tmp437;
                            $tmp433 = $tmp434;
                            self->triple = $tmp433;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp433));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp439 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13285, &$s438);
                    if ($tmp439.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s440);
                        panda$core$String* $tmp442 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp441 = $tmp442;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp444 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a277, &$s443);
                        if ($tmp444.value) {
                        {
                            panda$io$File* $tmp446 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp446, a277);
                            $tmp445 = $tmp446;
                            panda$collections$Array$add$panda$collections$Array$T(sources249, ((panda$core$Object*) $tmp445));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s449, a277);
                            $tmp448 = $tmp450;
                            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s451);
                            $tmp447 = $tmp452;
                            (($fn453) err264->$class->vtable[19])(err264, $tmp447);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                            panda$core$Int64$init$builtin_int64(&$tmp454, 1);
                            panda$core$System$exit$panda$core$Int64($tmp454);
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
                }
                $tmp284 = -1;
                goto $l282;
                $l282:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                switch ($tmp284) {
                    case -1: goto $l455;
                }
                $l455:;
            }
            $tmp276 = -1;
            goto $l274;
            $l274:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a277));
            a277 = NULL;
            switch ($tmp276) {
                case -1: goto $l456;
            }
            $l456:;
        }
        goto $l268;
        $l269:;
        {
            $tmp457 = self->opt;
            panda$io$File* $tmp461 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s460);
            $tmp459 = $tmp461;
            $tmp458 = $tmp459;
            self->opt = $tmp458;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
        }
        {
            $tmp462 = self->llc;
            panda$io$File* $tmp466 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s465);
            $tmp464 = $tmp466;
            $tmp463 = $tmp464;
            self->llc = $tmp463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
        }
        {
            $tmp467 = self->gcc;
            panda$io$File* $tmp470 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp470, &$s471);
            $tmp469 = $tmp470;
            $tmp468 = $tmp469;
            self->gcc = $tmp468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
        }
        panda$core$Int64 $tmp472 = panda$collections$Array$get_count$R$panda$core$Int64(sources249);
        panda$core$Int64$init$builtin_int64(&$tmp473, 0);
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp472, $tmp473);
        if ($tmp474.value) {
        {
            (($fn476) err264->$class->vtable[19])(err264, &$s475);
            panda$core$Int64$init$builtin_int64(&$tmp477, 1);
            panda$core$System$exit$panda$core$Int64($tmp477);
        }
        }
        if (((panda$core$Bit) { !format263.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp478, 918);
            format263 = ((panda$core$Int64$nullable) { $tmp478, true });
        }
        }
        if (((panda$core$Bit) { outFile257 == NULL }).value) {
        {
            panda$core$Int64 $tmp479 = panda$collections$Array$get_count$R$panda$core$Int64(sources249);
            panda$core$Int64$init$builtin_int64(&$tmp480, 1);
            panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp479, $tmp480);
            if ($tmp481.value) {
            {
                int $tmp484;
                {
                    memset(&extension485, 0, sizeof(extension485));
                    {
                        $match$237_21486 = format263;
                        panda$core$Int64$init$builtin_int64(&$tmp487, 918);
                        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_21486.value), $tmp487);
                        if ($tmp488.value) {
                        {
                            {
                                $tmp489 = extension485;
                                $tmp490 = &$s491;
                                extension485 = $tmp490;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp492, 919);
                        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_21486.value), $tmp492);
                        if ($tmp493.value) {
                        {
                            {
                                $tmp494 = extension485;
                                $tmp495 = &$s496;
                                extension485 = $tmp495;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp497, 920);
                        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_21486.value), $tmp497);
                        if ($tmp498.value) {
                        {
                            {
                                $tmp499 = extension485;
                                $tmp500 = &$s501;
                                extension485 = $tmp500;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp502, 921);
                        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_21486.value), $tmp502);
                        if ($tmp503.value) {
                        {
                            {
                                $tmp504 = extension485;
                                $tmp505 = &$s506;
                                extension485 = $tmp505;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp507, 917);
                        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_21486.value), $tmp507);
                        if ($tmp508.value) {
                        {
                            {
                                $tmp509 = extension485;
                                $tmp510 = &$s511;
                                extension485 = $tmp510;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                            }
                        }
                        }
                        else {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp512, false);
                            if ($tmp512.value) goto $l513; else goto $l514;
                            $l514:;
                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s515, (panda$core$Int64) { 242 });
                            abort();
                            $l513:;
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp516 = outFile257;
                        panda$core$Int64$init$builtin_int64(&$tmp520, 0);
                        panda$core$Object* $tmp521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources249, $tmp520);
                        $tmp519 = $tmp521;
                        panda$io$File* $tmp522 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp519), extension485);
                        $tmp518 = $tmp522;
                        $tmp517 = $tmp518;
                        outFile257 = $tmp517;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
                        panda$core$Panda$unref$panda$core$Object($tmp519);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                    }
                }
                $tmp484 = -1;
                goto $l482;
                $l482:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension485));
                switch ($tmp484) {
                    case -1: goto $l523;
                }
                $l523:;
            }
            }
            else {
            {
                (($fn525) err264->$class->vtable[19])(err264, &$s524);
                panda$core$Int64$init$builtin_int64(&$tmp526, 1);
                panda$core$System$exit$panda$core$Int64($tmp526);
            }
            }
        }
        }
        memset(&errorCount527, 0, sizeof(errorCount527));
        {
            int $tmp530;
            {
                memset(&cg531, 0, sizeof(cg531));
                {
                    $match$256_17532 = format263;
                    panda$core$Int64$init$builtin_int64(&$tmp535, 917);
                    panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$256_17532.value), $tmp535);
                    bool $tmp534 = $tmp536.value;
                    if ($tmp534) goto $l537;
                    panda$core$Int64$init$builtin_int64(&$tmp538, 918);
                    panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$256_17532.value), $tmp538);
                    $tmp534 = $tmp539.value;
                    $l537:;
                    panda$core$Bit $tmp540 = { $tmp534 };
                    bool $tmp533 = $tmp540.value;
                    if ($tmp533) goto $l541;
                    panda$core$Int64$init$builtin_int64(&$tmp542, 919);
                    panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$256_17532.value), $tmp542);
                    $tmp533 = $tmp543.value;
                    $l541:;
                    panda$core$Bit $tmp544 = { $tmp533 };
                    if ($tmp544.value) {
                    {
                        {
                            $tmp545 = cg531;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp548 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp552 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile257, &$s551);
                            $tmp550 = $tmp552;
                            panda$io$OutputStream* $tmp553 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp550);
                            $tmp549 = $tmp553;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp548, self->triple, $tmp549);
                            $tmp547 = $tmp548;
                            $tmp546 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp547);
                            cg531 = $tmp546;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp554, 920);
                    panda$core$Bit $tmp555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$256_17532.value), $tmp554);
                    if ($tmp555.value) {
                    {
                        {
                            $tmp556 = cg531;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp559 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(137, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp559, outFile257);
                            $tmp558 = $tmp559;
                            $tmp557 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp558);
                            cg531 = $tmp557;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp560, 921);
                    panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$256_17532.value), $tmp560);
                    if ($tmp561.value) {
                    {
                        {
                            $tmp562 = cg531;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp565 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp565, outFile257);
                            $tmp564 = $tmp565;
                            $tmp563 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp564);
                            cg531 = $tmp563;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp563));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp566, false);
                        if ($tmp566.value) goto $l567; else goto $l568;
                        $l568:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s569, (panda$core$Int64) { 264 });
                        abort();
                        $l567:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp573 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp573, self->pandaHome, ((panda$collections$ListView*) imports253), optimizationLevel259, safetyLevel261);
                $tmp572 = $tmp573;
                $tmp571 = $tmp572;
                settings570 = $tmp571;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                panda$threads$MessageQueue* $tmp577 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp577);
                $tmp576 = $tmp577;
                $tmp575 = $tmp576;
                errorQueue574 = $tmp575;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                org$pandalanguage$pandac$Compiler* $tmp581 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp581, errorQueue574, cg531, settings570);
                $tmp580 = $tmp581;
                $tmp579 = $tmp580;
                compiler578 = $tmp579;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                {
                    int $tmp584;
                    {
                        ITable* $tmp588 = ((panda$collections$Iterable*) sources249)->$class->itable;
                        while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp588 = $tmp588->next;
                        }
                        $fn590 $tmp589 = $tmp588->methods[0];
                        panda$collections$Iterator* $tmp591 = $tmp589(((panda$collections$Iterable*) sources249));
                        $tmp587 = $tmp591;
                        $tmp586 = $tmp587;
                        Iter$269$13585 = $tmp586;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp586));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                        $l592:;
                        ITable* $tmp595 = Iter$269$13585->$class->itable;
                        while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp595 = $tmp595->next;
                        }
                        $fn597 $tmp596 = $tmp595->methods[0];
                        panda$core$Bit $tmp598 = $tmp596(Iter$269$13585);
                        panda$core$Bit $tmp599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp598);
                        bool $tmp594 = $tmp599.value;
                        if (!$tmp594) goto $l593;
                        {
                            int $tmp602;
                            {
                                ITable* $tmp606 = Iter$269$13585->$class->itable;
                                while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp606 = $tmp606->next;
                                }
                                $fn608 $tmp607 = $tmp606->methods[1];
                                panda$core$Object* $tmp609 = $tmp607(Iter$269$13585);
                                $tmp605 = $tmp609;
                                $tmp604 = ((panda$io$File*) $tmp605);
                                s603 = $tmp604;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
                                panda$core$Panda$unref$panda$core$Object($tmp605);
                                {
                                    int $tmp612;
                                    {
                                        panda$collections$ListView* $tmp617 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler578, s603);
                                        $tmp616 = $tmp617;
                                        ITable* $tmp618 = ((panda$collections$Iterable*) $tmp616)->$class->itable;
                                        while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp618 = $tmp618->next;
                                        }
                                        $fn620 $tmp619 = $tmp618->methods[0];
                                        panda$collections$Iterator* $tmp621 = $tmp619(((panda$collections$Iterable*) $tmp616));
                                        $tmp615 = $tmp621;
                                        $tmp614 = $tmp615;
                                        Iter$270$17613 = $tmp614;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                                        $l622:;
                                        ITable* $tmp625 = Iter$270$17613->$class->itable;
                                        while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp625 = $tmp625->next;
                                        }
                                        $fn627 $tmp626 = $tmp625->methods[0];
                                        panda$core$Bit $tmp628 = $tmp626(Iter$270$17613);
                                        panda$core$Bit $tmp629 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp628);
                                        bool $tmp624 = $tmp629.value;
                                        if (!$tmp624) goto $l623;
                                        {
                                            int $tmp632;
                                            {
                                                ITable* $tmp636 = Iter$270$17613->$class->itable;
                                                while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp636 = $tmp636->next;
                                                }
                                                $fn638 $tmp637 = $tmp636->methods[1];
                                                panda$core$Object* $tmp639 = $tmp637(Iter$270$17613);
                                                $tmp635 = $tmp639;
                                                $tmp634 = ((org$pandalanguage$pandac$ClassDecl*) $tmp635);
                                                cl633 = $tmp634;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp634));
                                                panda$core$Panda$unref$panda$core$Object($tmp635);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler578, cl633);
                                            }
                                            $tmp632 = -1;
                                            goto $l630;
                                            $l630:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl633));
                                            cl633 = NULL;
                                            switch ($tmp632) {
                                                case -1: goto $l640;
                                            }
                                            $l640:;
                                        }
                                        goto $l622;
                                        $l623:;
                                    }
                                    $tmp612 = -1;
                                    goto $l610;
                                    $l610:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17613));
                                    Iter$270$17613 = NULL;
                                    switch ($tmp612) {
                                        case -1: goto $l641;
                                    }
                                    $l641:;
                                }
                            }
                            $tmp602 = -1;
                            goto $l600;
                            $l600:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s603));
                            s603 = NULL;
                            switch ($tmp602) {
                                case -1: goto $l642;
                            }
                            $l642:;
                        }
                        goto $l592;
                        $l593:;
                    }
                    $tmp584 = -1;
                    goto $l582;
                    $l582:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$269$13585));
                    Iter$269$13585 = NULL;
                    switch ($tmp584) {
                        case -1: goto $l643;
                    }
                    $l643:;
                }
                {
                    int $tmp646;
                    {
                        ITable* $tmp650 = ((panda$collections$Iterable*) sources249)->$class->itable;
                        while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp650 = $tmp650->next;
                        }
                        $fn652 $tmp651 = $tmp650->methods[0];
                        panda$collections$Iterator* $tmp653 = $tmp651(((panda$collections$Iterable*) sources249));
                        $tmp649 = $tmp653;
                        $tmp648 = $tmp649;
                        Iter$274$13647 = $tmp648;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                        $l654:;
                        ITable* $tmp657 = Iter$274$13647->$class->itable;
                        while ($tmp657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp657 = $tmp657->next;
                        }
                        $fn659 $tmp658 = $tmp657->methods[0];
                        panda$core$Bit $tmp660 = $tmp658(Iter$274$13647);
                        panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
                        bool $tmp656 = $tmp661.value;
                        if (!$tmp656) goto $l655;
                        {
                            int $tmp664;
                            {
                                ITable* $tmp668 = Iter$274$13647->$class->itable;
                                while ($tmp668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp668 = $tmp668->next;
                                }
                                $fn670 $tmp669 = $tmp668->methods[1];
                                panda$core$Object* $tmp671 = $tmp669(Iter$274$13647);
                                $tmp667 = $tmp671;
                                $tmp666 = ((panda$io$File*) $tmp667);
                                s665 = $tmp666;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
                                panda$core$Panda$unref$panda$core$Object($tmp667);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler578, s665);
                            }
                            $tmp664 = -1;
                            goto $l662;
                            $l662:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s665));
                            s665 = NULL;
                            switch ($tmp664) {
                                case -1: goto $l672;
                            }
                            $l672:;
                        }
                        goto $l654;
                        $l655:;
                    }
                    $tmp646 = -1;
                    goto $l644;
                    $l644:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$13647));
                    Iter$274$13647 = NULL;
                    switch ($tmp646) {
                        case -1: goto $l673;
                    }
                    $l673:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler578);
                panda$core$Int64 $tmp674 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue574);
                errorCount527 = $tmp674;
                panda$core$Int64$init$builtin_int64(&$tmp676, 0);
                panda$core$Bit$init$builtin_bit(&$tmp677, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp675, $tmp676, errorCount527, $tmp677);
                int64_t $tmp679 = $tmp675.min.value;
                panda$core$Int64 i678 = { $tmp679 };
                int64_t $tmp681 = $tmp675.max.value;
                bool $tmp682 = $tmp675.inclusive.value;
                if ($tmp682) goto $l689; else goto $l690;
                $l689:;
                if ($tmp679 <= $tmp681) goto $l683; else goto $l685;
                $l690:;
                if ($tmp679 < $tmp681) goto $l683; else goto $l685;
                $l683:;
                {
                    int $tmp693;
                    {
                        panda$core$Immutable* $tmp697 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue574);
                        $tmp696 = $tmp697;
                        $tmp695 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp696);
                        error694 = $tmp695;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp695));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                        panda$core$String* $tmp705 = panda$io$File$name$R$panda$core$String(error694->file);
                        $tmp704 = $tmp705;
                        panda$core$String* $tmp706 = panda$core$String$convert$R$panda$core$String($tmp704);
                        $tmp703 = $tmp706;
                        panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s707);
                        $tmp702 = $tmp708;
                        org$pandalanguage$pandac$Position$wrapper* $tmp710;
                        $tmp710 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp710->value = error694->position;
                        $tmp709 = ((panda$core$Object*) $tmp710);
                        panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp702, $tmp709);
                        $tmp701 = $tmp711;
                        panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s712);
                        $tmp700 = $tmp713;
                        panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, error694->message);
                        $tmp699 = $tmp714;
                        panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, &$s715);
                        $tmp698 = $tmp716;
                        panda$io$Console$printLine$panda$core$String($tmp698);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                        panda$core$Panda$unref$panda$core$Object($tmp709);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                    }
                    $tmp693 = -1;
                    goto $l691;
                    $l691:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error694));
                    error694 = NULL;
                    switch ($tmp693) {
                        case -1: goto $l717;
                    }
                    $l717:;
                }
                $l686:;
                int64_t $tmp719 = $tmp681 - i678.value;
                if ($tmp682) goto $l720; else goto $l721;
                $l720:;
                if ((uint64_t) $tmp719 >= 1) goto $l718; else goto $l685;
                $l721:;
                if ((uint64_t) $tmp719 > 1) goto $l718; else goto $l685;
                $l718:;
                i678.value += 1;
                goto $l683;
                $l685:;
            }
            $tmp530 = -1;
            goto $l528;
            $l528:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler578));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue574));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg531));
            settings570 = NULL;
            errorQueue574 = NULL;
            compiler578 = NULL;
            switch ($tmp530) {
                case -1: goto $l724;
            }
            $l724:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp725, 0);
        panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount527, $tmp725);
        if ($tmp726.value) {
        {
            {
                $match$286_17727 = format263;
                panda$core$Int64$init$builtin_int64(&$tmp728, 918);
                panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$286_17727.value), $tmp728);
                if ($tmp729.value) {
                {
                    int $tmp732;
                    {
                        panda$io$File* $tmp738 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile257, &$s737);
                        $tmp736 = $tmp738;
                        panda$io$File* $tmp739 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp736, optimizationLevel259);
                        $tmp735 = $tmp739;
                        $tmp734 = $tmp735;
                        optimized733 = $tmp734;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                        panda$io$File* $tmp743 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized733);
                        $tmp742 = $tmp743;
                        $tmp741 = $tmp742;
                        assembly740 = $tmp741;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp741));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp742));
                        panda$io$File* $tmp745 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly740, outFile257);
                        $tmp744 = $tmp745;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
                    }
                    $tmp732 = -1;
                    goto $l730;
                    $l730:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly740));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized733));
                    optimized733 = NULL;
                    assembly740 = NULL;
                    switch ($tmp732) {
                        case -1: goto $l746;
                    }
                    $l746:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp747, 919);
                panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$286_17727.value), $tmp747);
                if ($tmp748.value) {
                {
                    int $tmp751;
                    {
                        panda$io$File* $tmp757 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile257, &$s756);
                        $tmp755 = $tmp757;
                        panda$io$File* $tmp758 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp755, optimizationLevel259);
                        $tmp754 = $tmp758;
                        $tmp753 = $tmp754;
                        optimized752 = $tmp753;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
                        panda$io$File* $tmp762 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized752);
                        $tmp761 = $tmp762;
                        $tmp760 = $tmp761;
                        assembly759 = $tmp760;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp760));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
                        panda$io$File* $tmp764 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly759, outFile257);
                        $tmp763 = $tmp764;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
                    }
                    $tmp751 = -1;
                    goto $l749;
                    $l749:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly759));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized752));
                    optimized752 = NULL;
                    assembly759 = NULL;
                    switch ($tmp751) {
                        case -1: goto $l765;
                    }
                    $l765:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp766, 1);
            panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount527, $tmp766);
            if ($tmp767.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s768);
            }
            }
            else {
            {
                panda$core$String* $tmp771 = panda$core$Int64$convert$R$panda$core$String(errorCount527);
                $tmp770 = $tmp771;
                panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, &$s772);
                $tmp769 = $tmp773;
                panda$io$Console$printLine$panda$core$String($tmp769);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp774, 1);
            panda$core$System$exit$panda$core$Int64($tmp774);
        }
        }
    }
    $tmp244 = -1;
    goto $l242;
    $l242:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err264));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile257));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports253));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources249));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args245));
    args245 = NULL;
    sources249 = NULL;
    imports253 = NULL;
    err264 = NULL;
    switch ($tmp244) {
        case -1: goto $l775;
    }
    $l775:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue776;
    panda$core$Bit $tmp778 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s777);
    $returnValue776 = $tmp778;
    return $returnValue776;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp780;
    org$pandalanguage$pandac$Main* $tmp781 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp781);
    $tmp780 = $tmp781;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp780, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp784;
    {
    }
    $tmp784 = -1;
    goto $l782;
    $l782:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp784) {
        case -1: goto $l785;
    }
    $l785:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

