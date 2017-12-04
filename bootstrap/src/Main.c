#include "org/pandalanguage/pandac/Main.h"
#include "panda/io/File.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/System.h"
#include "panda/collections/ListView.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"


typedef panda$core$String* (*$fn34)(panda$io$InputStream*);
typedef void (*$fn36)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn49)(panda$io$InputStream*);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn63)(panda$io$InputStream*);
typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$InputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn84)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn85)(panda$io$OutputStream*);
typedef void (*$fn87)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn88)(panda$io$OutputStream*);
typedef void (*$fn90)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn92)(panda$io$OutputStream*, panda$core$String*);
org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit, org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String} };

typedef panda$core$Bit (*$fn110)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn114)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn120)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn124)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn131)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn141)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn146)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn160)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn163)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn178)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn184)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn216)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn258)(panda$collections$Iterator*);
typedef void (*$fn260)(org$pandalanguage$pandac$Compiler*, panda$io$File*);
typedef void (*$fn264)(org$pandalanguage$pandac$CodeGenerator*);
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$io$File* (*$fn270)(org$pandalanguage$pandac$Main*, panda$io$File*, panda$core$Int64);
typedef panda$io$File* (*$fn273)(org$pandalanguage$pandac$Main*, panda$io$File*);
typedef panda$io$File* (*$fn275)(org$pandalanguage$pandac$Main*, panda$io$File*, panda$io$File*);
typedef panda$io$File* (*$fn280)(org$pandalanguage$pandac$Main*, panda$io$File*, panda$core$Int64);
typedef panda$io$File* (*$fn283)(org$pandalanguage$pandac$Main*, panda$io$File*);
typedef panda$io$File* (*$fn285)(org$pandalanguage$pandac$Main*, panda$io$File*, panda$io$File*);
typedef void (*$fn294)(org$pandalanguage$pandac$Main*, panda$collections$ListView*);
org$pandalanguage$pandac$Main$Format$class_type org$pandalanguage$pandac$Main$Format$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$Int64 (*$fn297)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn304)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn306)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn316)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn321)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn327)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn328)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x6F\x70\x74\x2F\x6C\x6F\x63\x61\x6C\x2F\x6C\x69\x62\x65\x78\x65\x63\x2F\x6C\x6C\x76\x6D\x2D\x34\x2E\x30", 27 };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6E\x2F\x6F\x70\x74", 7 };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x6F\x70\x74\x2F\x6C\x6F\x63\x61\x6C\x2F\x6C\x69\x62\x65\x78\x65\x63\x2F\x6C\x6C\x76\x6D\x2D\x34\x2E\x30", 27 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6E\x2F\x6C\x6C\x63", 7 };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x75\x73\x72\x2F\x62\x69\x6E\x2F\x67\x63\x63", 12 };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2F\x73\x72\x63", 6 };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6F\x70\x74", 4 };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6C\x69\x6E\x74", 5 };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x4F", 2 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x53", 2 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73", 2 };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6D\x36\x34", 4 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x63", 2 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x4C\x2E", 3 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6C\x70\x61\x6E\x64\x61", 7 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6D\x36\x34", 4 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3A\x20\x70\x61\x6E\x64\x61\x63\x20\x5B\x6F\x70\x74\x69\x6F\x6E\x73\x5D\x20\x3C\x73\x6F\x75\x72\x63\x65\x73\x3E", 33 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x6F\x75\x72\x63\x65\x20\x66\x69\x6C\x65\x6E\x61\x6D\x65\x73\x20\x6D\x75\x73\x74\x20\x65\x6E\x64\x20\x69\x6E\x20\x27\x2E\x70\x61\x6E\x64\x61\x27\x2E", 38 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4F\x70\x74\x69\x6F\x6E\x73\x3A", 8 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x2D\x6F\x20\x3C\x70\x61\x74\x68\x3E\x20\x20\x20\x20\x6F\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2D\x6F\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6F\x6E\x63\x65", 31 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x66\x69\x6C\x65\x6E\x61\x6D\x65", 10 };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x4F", 2 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33", 17 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2D\x4F\x27", 37 };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x53", 2 };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33", 17 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2D\x53\x27", 37 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x66", 2 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2D\x66\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6F\x6E\x63\x65", 31 };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x6F\x75\x74\x70\x75\x74\x20\x66\x6F\x72\x6D\x61\x74", 16 };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x65", 3 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F", 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x68", 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63", 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x73\x75\x70\x70\x6F\x72\x74\x65\x64\x20\x6F\x75\x74\x70\x75\x74\x20\x66\x6F\x72\x6D\x61\x74\x20\x27", 27 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x69", 2 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6F\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6F\x72\x79", 21 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6 };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x72\x67\x75\x6D\x65\x6E\x74\x20\x27", 23 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x69\x6E\x70\x75\x74\x20\x66\x69\x6C\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6F", 2 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C\x74\x69\x70\x6C\x65\x20\x69\x6E\x70\x75\x74\x20\x66\x69\x6C\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2C\x20\x6D\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2D\x6F\x27\x20\x74\x6F\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6F\x75\x74\x70\x75\x74\x20", 64 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x6C\x65", 4 };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6C\x6C", 3 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6C\x6C", 3 };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6C\x6C", 3 };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6F\x72", 7 };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x72\x72\x6F\x72\x73", 7 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    panda$io$File* $tmp1 = (panda$io$File*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp1->refCount.value = 1;
    panda$io$File$init$panda$core$String($tmp1, &$s3);
    panda$io$File* $tmp5 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp1, &$s4);
    self->opt = $tmp5;
    panda$io$File* $tmp6 = (panda$io$File*) malloc(24);
    $tmp6->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp6->refCount.value = 1;
    panda$io$File$init$panda$core$String($tmp6, &$s8);
    panda$io$File* $tmp10 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp6, &$s9);
    self->llc = $tmp10;
    panda$io$File* $tmp11 = (panda$io$File*) malloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp11->refCount.value = 1;
    panda$io$File$init$panda$core$String($tmp11, &$s13);
    self->gcc = $tmp11;
    panda$io$File* $tmp14 = (panda$io$File*) malloc(24);
    $tmp14->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp14->refCount.value = 1;
    panda$io$File$init$panda$core$String($tmp14, &$s16);
    self->pandaHome = $tmp14;
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest18;
    panda$collections$Array* args21;
    panda$core$System$Process* p31;
    panda$core$Int64 $tmp37;
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp17.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp20 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s19);
    dest18 = $tmp20;
    panda$collections$Array* $tmp22 = (panda$collections$Array*) malloc(40);
    $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp22->refCount.value = 1;
    panda$collections$Array$init($tmp22);
    args21 = $tmp22;
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s24));
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s25, ((panda$core$Object*) wrap_panda$core$Int64(p_level)));
    panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s27);
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) $tmp28));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s29));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s30));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) dest18->path));
    panda$core$System$Process* $tmp32 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args21));
    p31 = $tmp32;
    panda$io$OutputStream* $tmp33 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp35 = (($fn34) p31->error->$class->vtable[6])(p31->error);
    (($fn36) $tmp33->$class->vtable[16])($tmp33, $tmp35);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp37, p31);
    panda$core$Bit $tmp38 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp37, ((panda$core$Int64) { 0 }));
    if ($tmp38.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return dest18;
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest39;
    panda$collections$Array* args42;
    panda$core$System$Process* p46;
    panda$core$Int64 $tmp52;
    panda$io$File* $tmp41 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s40);
    dest39 = $tmp41;
    panda$collections$Array* $tmp43 = (panda$collections$Array*) malloc(40);
    $tmp43->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp43->refCount.value = 1;
    panda$collections$Array$init($tmp43);
    args42 = $tmp43;
    panda$collections$Array$add$panda$collections$Array$T(args42, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args42, ((panda$core$Object*) &$s45));
    panda$collections$Array$add$panda$collections$Array$T(args42, ((panda$core$Object*) dest39->path));
    panda$core$System$Process* $tmp47 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args42));
    p46 = $tmp47;
    panda$io$OutputStream* $tmp48 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp50 = (($fn49) p46->error->$class->vtable[6])(p46->error);
    (($fn51) $tmp48->$class->vtable[16])($tmp48, $tmp50);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp52, p46);
    panda$core$Bit $tmp53 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp52, ((panda$core$Int64) { 0 }));
    if ($tmp53.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return dest39;
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args54;
    panda$core$System$Process* p60;
    panda$core$Int64 $tmp66;
    panda$collections$Array* $tmp55 = (panda$collections$Array*) malloc(40);
    $tmp55->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp55->refCount.value = 1;
    panda$collections$Array$init($tmp55);
    args54 = $tmp55;
    panda$collections$Array$add$panda$collections$Array$T(args54, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args54, ((panda$core$Object*) &$s57));
    panda$collections$Array$add$panda$collections$Array$T(args54, ((panda$core$Object*) &$s58));
    panda$collections$Array$add$panda$collections$Array$T(args54, ((panda$core$Object*) &$s59));
    panda$collections$Array$add$panda$collections$Array$T(args54, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp61 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args54));
    p60 = $tmp61;
    panda$io$OutputStream* $tmp62 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp64 = (($fn63) p60->error->$class->vtable[6])(p60->error);
    (($fn65) $tmp62->$class->vtable[16])($tmp62, $tmp64);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp66, p60);
    panda$core$Bit $tmp67 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp66, ((panda$core$Int64) { 0 }));
    if ($tmp67.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return p_dest;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args68;
    panda$core$System$Process* p75;
    panda$core$Int64 $tmp81;
    panda$collections$Array* $tmp69 = (panda$collections$Array*) malloc(40);
    $tmp69->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp69->refCount.value = 1;
    panda$collections$Array$init($tmp69);
    args68 = $tmp69;
    panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s71));
    panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s72));
    panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s73));
    panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s74));
    panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp76 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args68));
    p75 = $tmp76;
    panda$io$OutputStream* $tmp77 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp79 = (($fn78) p75->error->$class->vtable[6])(p75->error);
    (($fn80) $tmp77->$class->vtable[16])($tmp77, $tmp79);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp81, p75);
    panda$core$Bit $tmp82 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp81, ((panda$core$Int64) { 0 }));
    if ($tmp82.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return p_dest;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn84) p_out->$class->vtable[19])(p_out, &$s83);
    (($fn85) p_out->$class->vtable[17])(p_out);
    (($fn87) p_out->$class->vtable[19])(p_out, &$s86);
    (($fn88) p_out->$class->vtable[17])(p_out);
    (($fn90) p_out->$class->vtable[19])(p_out, &$s89);
    (($fn92) p_out->$class->vtable[19])(p_out, &$s91);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args93;
    panda$collections$Array* sources96;
    panda$collections$Array* imports99;
    panda$io$File* outFile102;
    panda$core$Int64 optimizationLevel103;
    panda$core$Int64 safetyLevel104;
    panda$core$Int64$nullable format105;
    panda$io$OutputStream* err106;
    panda$core$String* a113;
    panda$core$String* $match$4028116;
    panda$core$String* level129;
    panda$core$String* level144;
    panda$core$String* f161;
    panda$core$String* $match$5384165;
    panda$core$String* extension201;
    panda$core$Int64$nullable $match$6563202;
    org$pandalanguage$pandac$CodeGenerator* cg217;
    panda$core$Int64$nullable $match$7207218;
    org$pandalanguage$pandac$Compiler$Settings* settings237;
    org$pandalanguage$pandac$Compiler* compiler240;
    panda$collections$Iterator* s$Iter243;
    panda$io$File* s255;
    panda$core$Int64$nullable $match$7920265;
    panda$io$File* optimized267;
    panda$io$File* assembly272;
    panda$io$File* optimized277;
    panda$io$File* assembly282;
    org$pandalanguage$pandac$Main$Arguments* $tmp94 = (org$pandalanguage$pandac$Main$Arguments*) malloc(32);
    $tmp94->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class;
    $tmp94->refCount.value = 1;
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp94, p_rawArgs);
    args93 = $tmp94;
    panda$collections$Array* $tmp97 = (panda$collections$Array*) malloc(40);
    $tmp97->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp97->refCount.value = 1;
    panda$collections$Array$init($tmp97);
    sources96 = $tmp97;
    panda$collections$Array* $tmp100 = (panda$collections$Array*) malloc(40);
    $tmp100->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp100->refCount.value = 1;
    panda$collections$Array$init($tmp100);
    imports99 = $tmp100;
    panda$collections$Array$add$panda$collections$Array$T(imports99, ((panda$core$Object*) self->pandaHome));
    outFile102 = NULL;
    optimizationLevel103 = ((panda$core$Int64) { 3 });
    safetyLevel104 = ((panda$core$Int64) { 3 });
    format105 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp107 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err106 = $tmp107;
    $l108:;
    panda$core$Bit $tmp111 = (($fn110) args93->$class->vtable[2])(args93);
    panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
    if (!$tmp112.value) goto $l109;
    {
        panda$core$String* $tmp115 = (($fn114) args93->$class->vtable[3])(args93);
        a113 = $tmp115;
        {
            $match$4028116 = a113;
            panda$core$Bit $tmp118 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4028116, &$s117);
            if ($tmp118.value) {
            {
                if (((panda$core$Bit) { outFile102 != NULL }).value) {
                {
                    (($fn120) err106->$class->vtable[19])(err106, &$s119);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$io$File* $tmp121 = (panda$io$File*) malloc(24);
                $tmp121->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp121->refCount.value = 1;
                panda$core$String* $tmp125 = (($fn124) args93->$class->vtable[4])(args93, &$s123);
                panda$io$File$init$panda$core$String($tmp121, $tmp125);
                outFile102 = $tmp121;
                panda$io$File* $tmp126 = panda$io$File$parent$R$panda$io$File$Q(outFile102);
                panda$io$File$createDirectories($tmp126);
            }
            }
            else {
            panda$core$Bit $tmp128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4028116, &$s127);
            if ($tmp128.value) {
            {
                panda$core$String* $tmp132 = (($fn131) args93->$class->vtable[4])(args93, &$s130);
                level129 = $tmp132;
                panda$core$Int64$nullable $tmp133 = panda$core$String$convert$R$panda$core$Int64$Q(level129);
                optimizationLevel103 = ((panda$core$Int64) $tmp133.value);
                panda$core$Bit $tmp135 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel103, ((panda$core$Int64) { 3 }));
                bool $tmp134 = $tmp135.value;
                if ($tmp134) goto $l136;
                panda$core$Bit $tmp137 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel103, ((panda$core$Int64) { 0 }));
                $tmp134 = $tmp137.value;
                $l136:;
                panda$core$Bit $tmp138 = { $tmp134 };
                if ($tmp138.value) {
                {
                    panda$io$OutputStream* $tmp139 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn141) $tmp139->$class->vtable[19])($tmp139, &$s140);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp143 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4028116, &$s142);
            if ($tmp143.value) {
            {
                panda$core$String* $tmp147 = (($fn146) args93->$class->vtable[4])(args93, &$s145);
                level144 = $tmp147;
                panda$core$Int64$nullable $tmp148 = panda$core$String$convert$R$panda$core$Int64$Q(level144);
                safetyLevel104 = ((panda$core$Int64) $tmp148.value);
                panda$core$Bit $tmp150 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel104, ((panda$core$Int64) { 3 }));
                bool $tmp149 = $tmp150.value;
                if ($tmp149) goto $l151;
                panda$core$Bit $tmp152 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel104, ((panda$core$Int64) { 0 }));
                $tmp149 = $tmp152.value;
                $l151:;
                panda$core$Bit $tmp153 = { $tmp149 };
                if ($tmp153.value) {
                {
                    panda$io$OutputStream* $tmp154 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn156) $tmp154->$class->vtable[19])($tmp154, &$s155);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp158 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4028116, &$s157);
            if ($tmp158.value) {
            {
                if (((panda$core$Bit) { format105.nonnull }).value) {
                {
                    (($fn160) err106->$class->vtable[19])(err106, &$s159);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp164 = (($fn163) args93->$class->vtable[4])(args93, &$s162);
                f161 = $tmp164;
                {
                    $match$5384165 = f161;
                    panda$core$Bit $tmp167 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5384165, &$s166);
                    if ($tmp167.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5384165, &$s168);
                    if ($tmp169.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp171 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5384165, &$s170);
                    if ($tmp171.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5384165, &$s172);
                    if ($tmp173.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s174, f161);
                        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
                        (($fn178) err106->$class->vtable[19])(err106, $tmp177);
                        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                    }
                    }
                    }
                    }
                    }
                }
            }
            }
            else {
            panda$core$Bit $tmp180 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4028116, &$s179);
            if ($tmp180.value) {
            {
                panda$io$File* $tmp181 = (panda$io$File*) malloc(24);
                $tmp181->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp181->refCount.value = 1;
                panda$core$String* $tmp185 = (($fn184) args93->$class->vtable[4])(args93, &$s183);
                panda$io$File$init$panda$core$String($tmp181, $tmp185);
                panda$collections$Array$add$panda$collections$Array$T(imports99, ((panda$core$Object*) $tmp181));
            }
            }
            else {
            {
                panda$core$Bit $tmp187 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a113, &$s186);
                if ($tmp187.value) {
                {
                    panda$io$File* $tmp188 = (panda$io$File*) malloc(24);
                    $tmp188->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp188->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp188, a113);
                    panda$collections$Array$add$panda$collections$Array$T(sources96, ((panda$core$Object*) $tmp188));
                }
                }
                else {
                {
                    panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s190, a113);
                    panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
                    (($fn194) err106->$class->vtable[19])(err106, $tmp193);
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
    goto $l108;
    $l109:;
    panda$core$Int64 $tmp195 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
    panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp195, ((panda$core$Int64) { 0 }));
    if ($tmp196.value) {
    {
        (($fn198) err106->$class->vtable[19])(err106, &$s197);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format105.nonnull }).value) {
    {
        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile102 == NULL }).value) {
    {
        panda$core$Int64 $tmp199 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, ((panda$core$Int64) { 1 }));
        if ($tmp200.value) {
        {
            {
                $match$6563202 = format105;
                panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6563202.value), ((panda$core$Int64) { 918 }));
                if ($tmp203.value) {
                {
                    extension201 = &$s204;
                }
                }
                else {
                panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6563202.value), ((panda$core$Int64) { 919 }));
                if ($tmp205.value) {
                {
                    extension201 = &$s206;
                }
                }
                else {
                panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6563202.value), ((panda$core$Int64) { 920 }));
                if ($tmp207.value) {
                {
                    extension201 = &$s208;
                }
                }
                else {
                panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6563202.value), ((panda$core$Int64) { 921 }));
                if ($tmp209.value) {
                {
                    extension201 = &$s210;
                }
                }
                else {
                {
                }
                }
                }
                }
                }
            }
            panda$core$Object* $tmp211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources96, ((panda$core$Int64) { 0 }));
            panda$io$File* $tmp212 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp211), extension201);
            outFile102 = $tmp212;
        }
        }
        else {
        {
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s213, &$s214);
            (($fn216) err106->$class->vtable[19])(err106, $tmp215);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    {
        $match$7207218 = format105;
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7207218.value), ((panda$core$Int64) { 918 }));
        bool $tmp219 = $tmp220.value;
        if ($tmp219) goto $l221;
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7207218.value), ((panda$core$Int64) { 919 }));
        $tmp219 = $tmp222.value;
        $l221:;
        panda$core$Bit $tmp223 = { $tmp219 };
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp224 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(232);
            $tmp224->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
            $tmp224->refCount.value = 1;
            panda$io$File* $tmp227 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s226);
            panda$io$OutputStream* $tmp228 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp227);
            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp224, $tmp228);
            cg217 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp224);
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7207218.value), ((panda$core$Int64) { 920 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$HCodeGenerator* $tmp230 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(120);
            $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
            $tmp230->refCount.value = 1;
            panda$io$OutputStream* $tmp232 = panda$io$File$openOutputStream$R$panda$io$OutputStream(outFile102);
            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$OutputStream($tmp230, $tmp232);
            cg217 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp230);
        }
        }
        else {
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7207218.value), ((panda$core$Int64) { 921 }));
        if ($tmp233.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator* $tmp234 = (org$pandalanguage$pandac$CCodeGenerator*) malloc(240);
            $tmp234->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
            $tmp234->refCount.value = 1;
            panda$io$OutputStream* $tmp236 = panda$io$File$openOutputStream$R$panda$io$OutputStream(outFile102);
            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$OutputStream($tmp234, $tmp236);
            cg217 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp234);
        }
        }
        else {
        {
        }
        }
        }
        }
    }
    org$pandalanguage$pandac$Compiler$Settings* $tmp238 = (org$pandalanguage$pandac$Compiler$Settings*) malloc(48);
    $tmp238->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp238->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp238, self->pandaHome, ((panda$collections$ListView*) imports99), optimizationLevel103, safetyLevel104);
    settings237 = $tmp238;
    org$pandalanguage$pandac$Compiler* $tmp241 = (org$pandalanguage$pandac$Compiler*) malloc(129);
    $tmp241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp241->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp241, cg217, settings237);
    compiler240 = $tmp241;
    {
        ITable* $tmp244 = ((panda$collections$Iterable*) sources96)->$class->itable;
        while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp244 = $tmp244->next;
        }
        $fn246 $tmp245 = $tmp244->methods[0];
        panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) sources96));
        s$Iter243 = $tmp247;
        $l248:;
        ITable* $tmp250 = s$Iter243->$class->itable;
        while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp250 = $tmp250->next;
        }
        $fn252 $tmp251 = $tmp250->methods[0];
        panda$core$Bit $tmp253 = $tmp251(s$Iter243);
        panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
        if (!$tmp254.value) goto $l249;
        {
            ITable* $tmp256 = s$Iter243->$class->itable;
            while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp256 = $tmp256->next;
            }
            $fn258 $tmp257 = $tmp256->methods[1];
            panda$core$Object* $tmp259 = $tmp257(s$Iter243);
            s255 = ((panda$io$File*) $tmp259);
            (($fn260) compiler240->$class->vtable[93])(compiler240, s255);
        }
        goto $l248;
        $l249:;
    }
    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler240->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp261.value) {
    {
        ITable* $tmp262 = compiler240->codeGenerator->$class->itable;
        while ($tmp262->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp262 = $tmp262->next;
        }
        $fn264 $tmp263 = $tmp262->methods[4];
        $tmp263(compiler240->codeGenerator);
        {
            $match$7920265 = format105;
            panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7920265.value), ((panda$core$Int64) { 918 }));
            if ($tmp266.value) {
            {
                panda$io$File* $tmp269 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s268);
                panda$io$File* $tmp271 = (($fn270) self->$class->vtable[2])(self, $tmp269, optimizationLevel103);
                optimized267 = $tmp271;
                panda$io$File* $tmp274 = (($fn273) self->$class->vtable[3])(self, optimized267);
                assembly272 = $tmp274;
                (($fn275) self->$class->vtable[5])(self, assembly272, outFile102);
            }
            }
            else {
            panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7920265.value), ((panda$core$Int64) { 919 }));
            if ($tmp276.value) {
            {
                panda$io$File* $tmp279 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s278);
                panda$io$File* $tmp281 = (($fn280) self->$class->vtable[2])(self, $tmp279, optimizationLevel103);
                optimized277 = $tmp281;
                panda$io$File* $tmp284 = (($fn283) self->$class->vtable[3])(self, optimized277);
                assembly282 = $tmp284;
                (($fn285) self->$class->vtable[4])(self, assembly282, outFile102);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler240->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp286.value) {
        {
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s287));
        }
        }
        else {
        {
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s288, ((panda$core$Object*) wrap_panda$core$Int64(compiler240->errorCount)));
            panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s290);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp291));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp292 = (org$pandalanguage$pandac$Main*) malloc(48);
    $tmp292->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp292->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp292);
    (($fn294) $tmp292->$class->vtable[7])($tmp292, p_args);
}
void org$pandalanguage$pandac$Main$Format$init(org$pandalanguage$pandac$Main$Format* self) {
}
void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args) {
    self->index = ((panda$core$Int64) { 1 });
    self->args = p_args;
}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self) {
    ITable* $tmp295 = ((panda$collections$CollectionView*) self->args)->$class->itable;
    while ($tmp295->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp295 = $tmp295->next;
    }
    $fn297 $tmp296 = $tmp295->methods[0];
    panda$core$Int64 $tmp298 = $tmp296(((panda$collections$CollectionView*) self->args));
    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp298);
    return $tmp299;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Int64 $tmp300 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp300;
    panda$core$Int64 $tmp301 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp302 = self->args->$class->itable;
    while ($tmp302->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp302 = $tmp302->next;
    }
    $fn304 $tmp303 = $tmp302->methods[0];
    panda$core$Object* $tmp305 = $tmp303(self->args, $tmp301);
    return ((panda$core$String*) $tmp305);
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$core$Bit $tmp307 = (($fn306) self->$class->vtable[2])(self);
    if ($tmp307.value) {
    {
        panda$io$OutputStream* $tmp308 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s309, p_label);
        panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp310, &$s311);
        ITable* $tmp314 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp314->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp314 = $tmp314->next;
        }
        $fn316 $tmp315 = $tmp314->methods[0];
        panda$core$Int64 $tmp317 = $tmp315(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp318 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp317, ((panda$core$Int64) { 1 }));
        ITable* $tmp319 = self->args->$class->itable;
        while ($tmp319->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp319 = $tmp319->next;
        }
        $fn321 $tmp320 = $tmp319->methods[0];
        panda$core$Object* $tmp322 = $tmp320(self->args, $tmp318);
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s313, ((panda$core$String*) $tmp322));
        panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s324);
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, $tmp325);
        (($fn327) $tmp308->$class->vtable[19])($tmp308, $tmp326);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp329 = (($fn328) self->$class->vtable[3])(self);
    return $tmp329;
}

