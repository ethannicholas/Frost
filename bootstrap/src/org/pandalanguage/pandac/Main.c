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
typedef panda$core$String* (*$fn144)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn152)(panda$io$InputStream*);
typedef void (*$fn154)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn164)(panda$io$OutputStream*);
typedef void (*$fn166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*);
typedef void (*$fn169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn171)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn199)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn208)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn218)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn225)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn238)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn249)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn260)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn279)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn284)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn307)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn316)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn326)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn334)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn351)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn411)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn462)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn469)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn480)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn499)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn510)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn525)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn532)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn543)(panda$collections$Iterator*);

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
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

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
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    panda$core$String* $tmp135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp140;
    panda$io$OutputStream* $tmp149;
    panda$core$String* $tmp151;
    panda$core$Int64 $tmp155;
    panda$io$File* $returnValue157;
    panda$io$File* $tmp158;
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
        panda$core$String* $tmp137 = panda$io$File$convert$R$panda$core$String(self->gcc);
        $tmp136 = $tmp137;
        panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s138);
        $tmp135 = $tmp139;
        ITable* $tmp142 = ((panda$collections$ListView*) args119)->$class->itable;
        while ($tmp142->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp142 = $tmp142->next;
        }
        $fn144 $tmp143 = $tmp142->methods[2];
        panda$core$String* $tmp145 = $tmp143(((panda$collections$ListView*) args119), &$s141);
        $tmp140 = $tmp145;
        panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, $tmp140);
        $tmp134 = $tmp146;
        panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s147);
        $tmp133 = $tmp148;
        panda$io$Console$printLine$panda$core$String($tmp133);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$io$OutputStream* $tmp150 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp149 = $tmp150;
        panda$core$String* $tmp153 = (($fn152) p129->error->$class->vtable[6])(p129->error);
        $tmp151 = $tmp153;
        (($fn154) $tmp149->$class->vtable[16])($tmp149, $tmp151);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp155, p129);
        panda$core$Bit $tmp156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp155, ((panda$core$Int64) { 0 }));
        if ($tmp156.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp158 = p_dest;
        $returnValue157 = $tmp158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
        $tmp118 = 0;
        goto $l116;
        $l159:;
        return $returnValue157;
    }
    $l116:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args119));
    args119 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p129));
    p129 = NULL;
    switch ($tmp118) {
        case 0: goto $l159;
    }
    $l161:;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn163) p_out->$class->vtable[19])(p_out, &$s162);
    (($fn164) p_out->$class->vtable[17])(p_out);
    (($fn166) p_out->$class->vtable[19])(p_out, &$s165);
    (($fn167) p_out->$class->vtable[17])(p_out);
    (($fn169) p_out->$class->vtable[19])(p_out, &$s168);
    (($fn171) p_out->$class->vtable[19])(p_out, &$s170);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args175 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp176;
    org$pandalanguage$pandac$Main$Arguments* $tmp177;
    panda$collections$Array* sources179 = NULL;
    panda$collections$Array* $tmp180;
    panda$collections$Array* $tmp181;
    panda$collections$Array* imports183 = NULL;
    panda$collections$Array* $tmp184;
    panda$collections$Array* $tmp185;
    panda$io$File* outFile187 = NULL;
    panda$io$File* $tmp188;
    panda$core$Int64 optimizationLevel189;
    panda$core$Int64 safetyLevel190;
    panda$core$Int64$nullable format191;
    panda$io$OutputStream* err192 = NULL;
    panda$io$OutputStream* $tmp193;
    panda$io$OutputStream* $tmp194;
    panda$core$String* a205 = NULL;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$String* $match$151_13213 = NULL;
    panda$core$String* $tmp214;
    panda$io$File* $tmp219;
    panda$io$File* $tmp220;
    panda$io$File* $tmp221;
    panda$core$String* $tmp223;
    panda$io$File* $tmp227;
    panda$core$String* level234 = NULL;
    panda$core$String* $tmp235;
    panda$core$String* $tmp236;
    panda$io$OutputStream* $tmp246;
    panda$core$String* level256 = NULL;
    panda$core$String* $tmp257;
    panda$core$String* $tmp258;
    panda$io$OutputStream* $tmp268;
    panda$core$String* f280 = NULL;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $match$179_21289 = NULL;
    panda$core$String* $tmp290;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$io$File* $tmp312;
    panda$core$String* $tmp314;
    panda$io$File* $tmp320;
    panda$io$File* $tmp321;
    panda$io$File* $tmp322;
    panda$core$String* $tmp324;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp339;
    panda$io$File* $tmp343;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$io$File* $tmp354;
    panda$io$File* $tmp355;
    panda$io$File* $tmp356;
    panda$io$File* $tmp359;
    panda$io$File* $tmp360;
    panda$io$File* $tmp361;
    panda$io$File* $tmp364;
    panda$io$File* $tmp365;
    panda$io$File* $tmp366;
    panda$core$String* extension378 = NULL;
    panda$core$Int64$nullable $match$222_21379;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp397;
    panda$core$String* $tmp398;
    panda$io$File* $tmp400;
    panda$io$File* $tmp401;
    panda$io$File* $tmp402;
    panda$core$Object* $tmp403;
    panda$core$String* $tmp407;
    panda$core$Int64 errorCount412;
    org$pandalanguage$pandac$CodeGenerator* cg416 = NULL;
    panda$core$Int64$nullable $match$241_17417;
    org$pandalanguage$pandac$CodeGenerator* $tmp427;
    org$pandalanguage$pandac$CodeGenerator* $tmp428;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp429;
    panda$io$OutputStream* $tmp431;
    panda$io$File* $tmp432;
    org$pandalanguage$pandac$CodeGenerator* $tmp437;
    org$pandalanguage$pandac$CodeGenerator* $tmp438;
    org$pandalanguage$pandac$HCodeGenerator* $tmp439;
    org$pandalanguage$pandac$CodeGenerator* $tmp442;
    org$pandalanguage$pandac$CodeGenerator* $tmp443;
    org$pandalanguage$pandac$CCodeGenerator* $tmp444;
    org$pandalanguage$pandac$Compiler$Settings* settings446 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp447;
    org$pandalanguage$pandac$Compiler$Settings* $tmp448;
    org$pandalanguage$pandac$Compiler* compiler450 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp451;
    org$pandalanguage$pandac$Compiler* $tmp452;
    panda$collections$Iterator* Iter$253$13457 = NULL;
    panda$collections$Iterator* $tmp458;
    panda$collections$Iterator* $tmp459;
    panda$io$File* s475 = NULL;
    panda$io$File* $tmp476;
    panda$core$Object* $tmp477;
    panda$collections$Iterator* Iter$254$17485 = NULL;
    panda$collections$Iterator* $tmp486;
    panda$collections$Iterator* $tmp487;
    panda$collections$ListView* $tmp488;
    org$pandalanguage$pandac$ClassDecl* cl505 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp506;
    panda$core$Object* $tmp507;
    panda$collections$Iterator* Iter$259$17520 = NULL;
    panda$collections$Iterator* $tmp521;
    panda$collections$Iterator* $tmp522;
    panda$io$File* s538 = NULL;
    panda$io$File* $tmp539;
    panda$core$Object* $tmp540;
    panda$core$Int64$nullable $match$268_17549;
    panda$io$File* optimized554 = NULL;
    panda$io$File* $tmp555;
    panda$io$File* $tmp556;
    panda$io$File* $tmp557;
    panda$io$File* assembly561 = NULL;
    panda$io$File* $tmp562;
    panda$io$File* $tmp563;
    panda$io$File* $tmp565;
    panda$io$File* optimized572 = NULL;
    panda$io$File* $tmp573;
    panda$io$File* $tmp574;
    panda$io$File* $tmp575;
    panda$io$File* assembly579 = NULL;
    panda$io$File* $tmp580;
    panda$io$File* $tmp581;
    panda$io$File* $tmp583;
    panda$core$String* $tmp588;
    panda$core$String* $tmp589;
    int $tmp174;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp178 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp178, p_rawArgs);
        $tmp177 = $tmp178;
        $tmp176 = $tmp177;
        args175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$collections$Array* $tmp182 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp182);
        $tmp181 = $tmp182;
        $tmp180 = $tmp181;
        sources179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$collections$Array* $tmp186 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp186);
        $tmp185 = $tmp186;
        $tmp184 = $tmp185;
        imports183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$collections$Array$add$panda$collections$Array$T(imports183, ((panda$core$Object*) self->pandaHome));
        $tmp188 = NULL;
        outFile187 = $tmp188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
        optimizationLevel189 = ((panda$core$Int64) { 3 });
        safetyLevel190 = ((panda$core$Int64) { 3 });
        format191 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp195 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp194 = $tmp195;
        $tmp193 = $tmp194;
        err192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
        $l196:;
        panda$core$Bit $tmp200 = (($fn199) args175->$class->vtable[2])(args175);
        panda$core$Bit $tmp201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp200);
        bool $tmp198 = $tmp201.value;
        if (!$tmp198) goto $l197;
        {
            int $tmp204;
            {
                panda$core$String* $tmp209 = (($fn208) args175->$class->vtable[3])(args175);
                $tmp207 = $tmp209;
                $tmp206 = $tmp207;
                a205 = $tmp206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                int $tmp212;
                {
                    $tmp214 = a205;
                    $match$151_13213 = $tmp214;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                    panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s215);
                    if ($tmp216.value) {
                    {
                        if (((panda$core$Bit) { outFile187 != NULL }).value) {
                        {
                            (($fn218) err192->$class->vtable[19])(err192, &$s217);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp219 = outFile187;
                            panda$io$File* $tmp222 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp226 = (($fn225) args175->$class->vtable[4])(args175, &$s224);
                            $tmp223 = $tmp226;
                            panda$io$File$init$panda$core$String($tmp222, $tmp223);
                            $tmp221 = $tmp222;
                            $tmp220 = $tmp221;
                            outFile187 = $tmp220;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                        }
                        panda$io$File* $tmp228 = panda$io$File$parent$R$panda$io$File$Q(outFile187);
                        $tmp227 = $tmp228;
                        panda$io$File$createDirectories($tmp227);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                    }
                    }
                    else {
                    panda$core$Bit $tmp230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s229);
                    if ($tmp230.value) {
                    {
                        int $tmp233;
                        {
                            panda$core$String* $tmp239 = (($fn238) args175->$class->vtable[4])(args175, &$s237);
                            $tmp236 = $tmp239;
                            $tmp235 = $tmp236;
                            level234 = $tmp235;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
                            panda$core$Int64$nullable $tmp240 = panda$core$String$convert$R$panda$core$Int64$Q(level234);
                            optimizationLevel189 = ((panda$core$Int64) $tmp240.value);
                            panda$core$Bit $tmp242 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel189, ((panda$core$Int64) { 3 }));
                            bool $tmp241 = $tmp242.value;
                            if ($tmp241) goto $l243;
                            panda$core$Bit $tmp244 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel189, ((panda$core$Int64) { 0 }));
                            $tmp241 = $tmp244.value;
                            $l243:;
                            panda$core$Bit $tmp245 = { $tmp241 };
                            if ($tmp245.value) {
                            {
                                panda$io$OutputStream* $tmp247 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp246 = $tmp247;
                                (($fn249) $tmp246->$class->vtable[19])($tmp246, &$s248);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp233 = -1;
                        goto $l231;
                        $l231:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level234));
                        level234 = NULL;
                        switch ($tmp233) {
                            case -1: goto $l250;
                        }
                        $l250:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp252 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s251);
                    if ($tmp252.value) {
                    {
                        int $tmp255;
                        {
                            panda$core$String* $tmp261 = (($fn260) args175->$class->vtable[4])(args175, &$s259);
                            $tmp258 = $tmp261;
                            $tmp257 = $tmp258;
                            level256 = $tmp257;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                            panda$core$Int64$nullable $tmp262 = panda$core$String$convert$R$panda$core$Int64$Q(level256);
                            safetyLevel190 = ((panda$core$Int64) $tmp262.value);
                            panda$core$Bit $tmp264 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel190, ((panda$core$Int64) { 3 }));
                            bool $tmp263 = $tmp264.value;
                            if ($tmp263) goto $l265;
                            panda$core$Bit $tmp266 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel190, ((panda$core$Int64) { 0 }));
                            $tmp263 = $tmp266.value;
                            $l265:;
                            panda$core$Bit $tmp267 = { $tmp263 };
                            if ($tmp267.value) {
                            {
                                panda$io$OutputStream* $tmp269 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp268 = $tmp269;
                                (($fn271) $tmp268->$class->vtable[19])($tmp268, &$s270);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp255 = -1;
                        goto $l253;
                        $l253:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level256));
                        level256 = NULL;
                        switch ($tmp255) {
                            case -1: goto $l272;
                        }
                        $l272:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp274 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s273);
                    if ($tmp274.value) {
                    {
                        int $tmp277;
                        {
                            if (((panda$core$Bit) { format191.nonnull }).value) {
                            {
                                (($fn279) err192->$class->vtable[19])(err192, &$s278);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp285 = (($fn284) args175->$class->vtable[4])(args175, &$s283);
                            $tmp282 = $tmp285;
                            $tmp281 = $tmp282;
                            f280 = $tmp281;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
                            int $tmp288;
                            {
                                $tmp290 = f280;
                                $match$179_21289 = $tmp290;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                                panda$core$Bit $tmp292 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_21289, &$s291);
                                if ($tmp292.value) {
                                {
                                    format191 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp294 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_21289, &$s293);
                                if ($tmp294.value) {
                                {
                                    format191 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_21289, &$s295);
                                if ($tmp296.value) {
                                {
                                    format191 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp298 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_21289, &$s297);
                                if ($tmp298.value) {
                                {
                                    format191 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp300 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_21289, &$s299);
                                if ($tmp300.value) {
                                {
                                    format191 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s303, f280);
                                    $tmp302 = $tmp304;
                                    panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s305);
                                    $tmp301 = $tmp306;
                                    (($fn307) err192->$class->vtable[19])(err192, $tmp301);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp288 = -1;
                            goto $l286;
                            $l286:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
                            switch ($tmp288) {
                                case -1: goto $l308;
                            }
                            $l308:;
                        }
                        $tmp277 = -1;
                        goto $l275;
                        $l275:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f280));
                        f280 = NULL;
                        switch ($tmp277) {
                            case -1: goto $l309;
                        }
                        $l309:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp311 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s310);
                    if ($tmp311.value) {
                    {
                        panda$io$File* $tmp313 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp317 = (($fn316) args175->$class->vtable[4])(args175, &$s315);
                        $tmp314 = $tmp317;
                        panda$io$File$init$panda$core$String($tmp313, $tmp314);
                        $tmp312 = $tmp313;
                        panda$collections$Array$add$panda$collections$Array$T(imports183, ((panda$core$Object*) $tmp312));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                    }
                    }
                    else {
                    panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s318);
                    if ($tmp319.value) {
                    {
                        {
                            $tmp320 = self->llvmDir;
                            panda$io$File* $tmp323 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp327 = (($fn326) args175->$class->vtable[4])(args175, &$s325);
                            $tmp324 = $tmp327;
                            panda$io$File$init$panda$core$String($tmp323, $tmp324);
                            $tmp322 = $tmp323;
                            $tmp321 = $tmp322;
                            self->llvmDir = $tmp321;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp329 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s328);
                    if ($tmp329.value) {
                    {
                        {
                            $tmp330 = self->triple;
                            panda$core$String* $tmp335 = (($fn334) args175->$class->vtable[4])(args175, &$s333);
                            $tmp332 = $tmp335;
                            $tmp331 = $tmp332;
                            self->triple = $tmp331;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp337 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$151_13213, &$s336);
                    if ($tmp337.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s338);
                        panda$core$String* $tmp340 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp339 = $tmp340;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp342 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a205, &$s341);
                        if ($tmp342.value) {
                        {
                            panda$io$File* $tmp344 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp344, a205);
                            $tmp343 = $tmp344;
                            panda$collections$Array$add$panda$collections$Array$T(sources179, ((panda$core$Object*) $tmp343));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s347, a205);
                            $tmp346 = $tmp348;
                            panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s349);
                            $tmp345 = $tmp350;
                            (($fn351) err192->$class->vtable[19])(err192, $tmp345);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
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
                $tmp212 = -1;
                goto $l210;
                $l210:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                switch ($tmp212) {
                    case -1: goto $l352;
                }
                $l352:;
            }
            $tmp204 = -1;
            goto $l202;
            $l202:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a205));
            a205 = NULL;
            switch ($tmp204) {
                case -1: goto $l353;
            }
            $l353:;
        }
        goto $l196;
        $l197:;
        {
            $tmp354 = self->opt;
            panda$io$File* $tmp358 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s357);
            $tmp356 = $tmp358;
            $tmp355 = $tmp356;
            self->opt = $tmp355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
        }
        {
            $tmp359 = self->llc;
            panda$io$File* $tmp363 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s362);
            $tmp361 = $tmp363;
            $tmp360 = $tmp361;
            self->llc = $tmp360;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
        }
        {
            $tmp364 = self->gcc;
            panda$io$File* $tmp367 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp367, &$s368);
            $tmp366 = $tmp367;
            $tmp365 = $tmp366;
            self->gcc = $tmp365;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
        }
        panda$core$Int64 $tmp369 = panda$collections$Array$get_count$R$panda$core$Int64(sources179);
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp369, ((panda$core$Int64) { 0 }));
        if ($tmp370.value) {
        {
            (($fn372) err192->$class->vtable[19])(err192, &$s371);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format191.nonnull }).value) {
        {
            format191 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile187 == NULL }).value) {
        {
            panda$core$Int64 $tmp373 = panda$collections$Array$get_count$R$panda$core$Int64(sources179);
            panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp373, ((panda$core$Int64) { 1 }));
            if ($tmp374.value) {
            {
                int $tmp377;
                {
                    memset(&extension378, 0, sizeof(extension378));
                    {
                        $match$222_21379 = format191;
                        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$222_21379.value), ((panda$core$Int64) { 918 }));
                        if ($tmp380.value) {
                        {
                            {
                                $tmp381 = extension378;
                                $tmp382 = &$s383;
                                extension378 = $tmp382;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$222_21379.value), ((panda$core$Int64) { 919 }));
                        if ($tmp384.value) {
                        {
                            {
                                $tmp385 = extension378;
                                $tmp386 = &$s387;
                                extension378 = $tmp386;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$222_21379.value), ((panda$core$Int64) { 920 }));
                        if ($tmp388.value) {
                        {
                            {
                                $tmp389 = extension378;
                                $tmp390 = &$s391;
                                extension378 = $tmp390;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$222_21379.value), ((panda$core$Int64) { 921 }));
                        if ($tmp392.value) {
                        {
                            {
                                $tmp393 = extension378;
                                $tmp394 = &$s395;
                                extension378 = $tmp394;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$222_21379.value), ((panda$core$Int64) { 917 }));
                        if ($tmp396.value) {
                        {
                            {
                                $tmp397 = extension378;
                                $tmp398 = &$s399;
                                extension378 = $tmp398;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
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
                        $tmp400 = outFile187;
                        panda$core$Object* $tmp404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources179, ((panda$core$Int64) { 0 }));
                        $tmp403 = $tmp404;
                        panda$io$File* $tmp405 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp403), extension378);
                        $tmp402 = $tmp405;
                        $tmp401 = $tmp402;
                        outFile187 = $tmp401;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                        panda$core$Panda$unref$panda$core$Object($tmp403);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                    }
                }
                $tmp377 = -1;
                goto $l375;
                $l375:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension378));
                switch ($tmp377) {
                    case -1: goto $l406;
                }
                $l406:;
            }
            }
            else {
            {
                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s408, &$s409);
                $tmp407 = $tmp410;
                (($fn411) err192->$class->vtable[19])(err192, $tmp407);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount412, 0, sizeof(errorCount412));
        {
            int $tmp415;
            {
                memset(&cg416, 0, sizeof(cg416));
                {
                    $match$241_17417 = format191;
                    panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$241_17417.value), ((panda$core$Int64) { 917 }));
                    bool $tmp419 = $tmp420.value;
                    if ($tmp419) goto $l421;
                    panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$241_17417.value), ((panda$core$Int64) { 918 }));
                    $tmp419 = $tmp422.value;
                    $l421:;
                    panda$core$Bit $tmp423 = { $tmp419 };
                    bool $tmp418 = $tmp423.value;
                    if ($tmp418) goto $l424;
                    panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$241_17417.value), ((panda$core$Int64) { 919 }));
                    $tmp418 = $tmp425.value;
                    $l424:;
                    panda$core$Bit $tmp426 = { $tmp418 };
                    if ($tmp426.value) {
                    {
                        {
                            $tmp427 = cg416;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp430 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp434 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile187, &$s433);
                            $tmp432 = $tmp434;
                            panda$io$OutputStream* $tmp435 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp432);
                            $tmp431 = $tmp435;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp430, self->triple, $tmp431);
                            $tmp429 = $tmp430;
                            $tmp428 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp429);
                            cg416 = $tmp428;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$241_17417.value), ((panda$core$Int64) { 920 }));
                    if ($tmp436.value) {
                    {
                        {
                            $tmp437 = cg416;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp440 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp440, outFile187);
                            $tmp439 = $tmp440;
                            $tmp438 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp439);
                            cg416 = $tmp438;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp438));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$241_17417.value), ((panda$core$Int64) { 921 }));
                    if ($tmp441.value) {
                    {
                        {
                            $tmp442 = cg416;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp445 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp445, outFile187);
                            $tmp444 = $tmp445;
                            $tmp443 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp444);
                            cg416 = $tmp443;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
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
                org$pandalanguage$pandac$Compiler$Settings* $tmp449 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp449, self->pandaHome, ((panda$collections$ListView*) imports183), optimizationLevel189, safetyLevel190);
                $tmp448 = $tmp449;
                $tmp447 = $tmp448;
                settings446 = $tmp447;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                org$pandalanguage$pandac$Compiler* $tmp453 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(184, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp453, cg416, settings446);
                $tmp452 = $tmp453;
                $tmp451 = $tmp452;
                compiler450 = $tmp451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                {
                    int $tmp456;
                    {
                        ITable* $tmp460 = ((panda$collections$Iterable*) sources179)->$class->itable;
                        while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp460 = $tmp460->next;
                        }
                        $fn462 $tmp461 = $tmp460->methods[0];
                        panda$collections$Iterator* $tmp463 = $tmp461(((panda$collections$Iterable*) sources179));
                        $tmp459 = $tmp463;
                        $tmp458 = $tmp459;
                        Iter$253$13457 = $tmp458;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
                        $l464:;
                        ITable* $tmp467 = Iter$253$13457->$class->itable;
                        while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp467 = $tmp467->next;
                        }
                        $fn469 $tmp468 = $tmp467->methods[0];
                        panda$core$Bit $tmp470 = $tmp468(Iter$253$13457);
                        panda$core$Bit $tmp471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp470);
                        bool $tmp466 = $tmp471.value;
                        if (!$tmp466) goto $l465;
                        {
                            int $tmp474;
                            {
                                ITable* $tmp478 = Iter$253$13457->$class->itable;
                                while ($tmp478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp478 = $tmp478->next;
                                }
                                $fn480 $tmp479 = $tmp478->methods[1];
                                panda$core$Object* $tmp481 = $tmp479(Iter$253$13457);
                                $tmp477 = $tmp481;
                                $tmp476 = ((panda$io$File*) $tmp477);
                                s475 = $tmp476;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
                                panda$core$Panda$unref$panda$core$Object($tmp477);
                                {
                                    int $tmp484;
                                    {
                                        panda$collections$ListView* $tmp489 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler450, s475);
                                        $tmp488 = $tmp489;
                                        ITable* $tmp490 = ((panda$collections$Iterable*) $tmp488)->$class->itable;
                                        while ($tmp490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp490 = $tmp490->next;
                                        }
                                        $fn492 $tmp491 = $tmp490->methods[0];
                                        panda$collections$Iterator* $tmp493 = $tmp491(((panda$collections$Iterable*) $tmp488));
                                        $tmp487 = $tmp493;
                                        $tmp486 = $tmp487;
                                        Iter$254$17485 = $tmp486;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                                        $l494:;
                                        ITable* $tmp497 = Iter$254$17485->$class->itable;
                                        while ($tmp497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp497 = $tmp497->next;
                                        }
                                        $fn499 $tmp498 = $tmp497->methods[0];
                                        panda$core$Bit $tmp500 = $tmp498(Iter$254$17485);
                                        panda$core$Bit $tmp501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp500);
                                        bool $tmp496 = $tmp501.value;
                                        if (!$tmp496) goto $l495;
                                        {
                                            int $tmp504;
                                            {
                                                ITable* $tmp508 = Iter$254$17485->$class->itable;
                                                while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp508 = $tmp508->next;
                                                }
                                                $fn510 $tmp509 = $tmp508->methods[1];
                                                panda$core$Object* $tmp511 = $tmp509(Iter$254$17485);
                                                $tmp507 = $tmp511;
                                                $tmp506 = ((org$pandalanguage$pandac$ClassDecl*) $tmp507);
                                                cl505 = $tmp506;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
                                                panda$core$Panda$unref$panda$core$Object($tmp507);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler450, cl505);
                                            }
                                            $tmp504 = -1;
                                            goto $l502;
                                            $l502:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl505));
                                            cl505 = NULL;
                                            switch ($tmp504) {
                                                case -1: goto $l512;
                                            }
                                            $l512:;
                                        }
                                        goto $l494;
                                        $l495:;
                                    }
                                    $tmp484 = -1;
                                    goto $l482;
                                    $l482:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$17485));
                                    Iter$254$17485 = NULL;
                                    switch ($tmp484) {
                                        case -1: goto $l513;
                                    }
                                    $l513:;
                                }
                            }
                            $tmp474 = -1;
                            goto $l472;
                            $l472:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s475));
                            s475 = NULL;
                            switch ($tmp474) {
                                case -1: goto $l514;
                            }
                            $l514:;
                        }
                        goto $l464;
                        $l465:;
                    }
                    $tmp456 = -1;
                    goto $l454;
                    $l454:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$13457));
                    Iter$253$13457 = NULL;
                    switch ($tmp456) {
                        case -1: goto $l515;
                    }
                    $l515:;
                }
                panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler450->errorCount, ((panda$core$Int64) { 0 }));
                if ($tmp516.value) {
                {
                    {
                        int $tmp519;
                        {
                            ITable* $tmp523 = ((panda$collections$Iterable*) sources179)->$class->itable;
                            while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp523 = $tmp523->next;
                            }
                            $fn525 $tmp524 = $tmp523->methods[0];
                            panda$collections$Iterator* $tmp526 = $tmp524(((panda$collections$Iterable*) sources179));
                            $tmp522 = $tmp526;
                            $tmp521 = $tmp522;
                            Iter$259$17520 = $tmp521;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp521));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
                            $l527:;
                            ITable* $tmp530 = Iter$259$17520->$class->itable;
                            while ($tmp530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp530 = $tmp530->next;
                            }
                            $fn532 $tmp531 = $tmp530->methods[0];
                            panda$core$Bit $tmp533 = $tmp531(Iter$259$17520);
                            panda$core$Bit $tmp534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp533);
                            bool $tmp529 = $tmp534.value;
                            if (!$tmp529) goto $l528;
                            {
                                int $tmp537;
                                {
                                    ITable* $tmp541 = Iter$259$17520->$class->itable;
                                    while ($tmp541->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp541 = $tmp541->next;
                                    }
                                    $fn543 $tmp542 = $tmp541->methods[1];
                                    panda$core$Object* $tmp544 = $tmp542(Iter$259$17520);
                                    $tmp540 = $tmp544;
                                    $tmp539 = ((panda$io$File*) $tmp540);
                                    s538 = $tmp539;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
                                    panda$core$Panda$unref$panda$core$Object($tmp540);
                                    org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler450, s538);
                                }
                                $tmp537 = -1;
                                goto $l535;
                                $l535:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s538));
                                s538 = NULL;
                                switch ($tmp537) {
                                    case -1: goto $l545;
                                }
                                $l545:;
                            }
                            goto $l527;
                            $l528:;
                        }
                        $tmp519 = -1;
                        goto $l517;
                        $l517:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$259$17520));
                        Iter$259$17520 = NULL;
                        switch ($tmp519) {
                            case -1: goto $l546;
                        }
                        $l546:;
                    }
                    org$pandalanguage$pandac$Compiler$finish(compiler450);
                }
                }
                errorCount412 = compiler450->errorCount;
            }
            $tmp415 = -1;
            goto $l413;
            $l413:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings446));
            settings446 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler450));
            compiler450 = NULL;
            switch ($tmp415) {
                case -1: goto $l547;
            }
            $l547:;
        }
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount412, ((panda$core$Int64) { 0 }));
        if ($tmp548.value) {
        {
            {
                $match$268_17549 = format191;
                panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$268_17549.value), ((panda$core$Int64) { 918 }));
                if ($tmp550.value) {
                {
                    int $tmp553;
                    {
                        panda$io$File* $tmp559 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile187, &$s558);
                        $tmp557 = $tmp559;
                        panda$io$File* $tmp560 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp557, optimizationLevel189);
                        $tmp556 = $tmp560;
                        $tmp555 = $tmp556;
                        optimized554 = $tmp555;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                        panda$io$File* $tmp564 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized554);
                        $tmp563 = $tmp564;
                        $tmp562 = $tmp563;
                        assembly561 = $tmp562;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                        panda$io$File* $tmp566 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly561, outFile187);
                        $tmp565 = $tmp566;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                    }
                    $tmp553 = -1;
                    goto $l551;
                    $l551:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized554));
                    optimized554 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly561));
                    assembly561 = NULL;
                    switch ($tmp553) {
                        case -1: goto $l567;
                    }
                    $l567:;
                }
                }
                else {
                panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$268_17549.value), ((panda$core$Int64) { 919 }));
                if ($tmp568.value) {
                {
                    int $tmp571;
                    {
                        panda$io$File* $tmp577 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile187, &$s576);
                        $tmp575 = $tmp577;
                        panda$io$File* $tmp578 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp575, optimizationLevel189);
                        $tmp574 = $tmp578;
                        $tmp573 = $tmp574;
                        optimized572 = $tmp573;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                        panda$io$File* $tmp582 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized572);
                        $tmp581 = $tmp582;
                        $tmp580 = $tmp581;
                        assembly579 = $tmp580;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                        panda$io$File* $tmp584 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly579, outFile187);
                        $tmp583 = $tmp584;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                    }
                    $tmp571 = -1;
                    goto $l569;
                    $l569:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized572));
                    optimized572 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly579));
                    assembly579 = NULL;
                    switch ($tmp571) {
                        case -1: goto $l585;
                    }
                    $l585:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount412, ((panda$core$Int64) { 1 }));
            if ($tmp586.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s587);
            }
            }
            else {
            {
                panda$core$String* $tmp590 = panda$core$Int64$convert$R$panda$core$String(errorCount412);
                $tmp589 = $tmp590;
                panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s591);
                $tmp588 = $tmp592;
                panda$io$Console$printLine$panda$core$String($tmp588);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp174 = -1;
    goto $l172;
    $l172:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args175));
    args175 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources179));
    sources179 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports183));
    imports183 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile187));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err192));
    err192 = NULL;
    switch ($tmp174) {
        case -1: goto $l593;
    }
    $l593:;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp594;
    org$pandalanguage$pandac$Main* $tmp595 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp595);
    $tmp594 = $tmp595;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp594, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp598;
    {
    }
    $tmp598 = -1;
    goto $l596;
    $l596:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp598) {
        case -1: goto $l599;
    }
    $l599:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

