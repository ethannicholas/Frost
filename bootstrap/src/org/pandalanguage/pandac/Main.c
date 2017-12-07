#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/io/File.h"
#include "panda/core/String.h"
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


org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

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
typedef void (*$fn197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn219)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn247)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn259)(panda$collections$Iterator*);
typedef void (*$fn264)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x6F\x70\x74\x2F\x6C\x6F\x63\x61\x6C\x2F\x6C\x69\x62\x65\x78\x65\x63\x2F\x6C\x6C\x76\x6D\x2D\x34\x2E\x30", 27, 1 };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6E\x2F\x6F\x70\x74", 7, 1 };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x6F\x70\x74\x2F\x6C\x6F\x63\x61\x6C\x2F\x6C\x69\x62\x65\x78\x65\x63\x2F\x6C\x6C\x76\x6D\x2D\x34\x2E\x30", 27, 1 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6E\x2F\x6C\x6C\x63", 7, 1 };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x75\x73\x72\x2F\x62\x69\x6E\x2F\x67\x63\x63", 12, 1 };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2F\x73\x72\x63", 6, 1 };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6F\x70\x74", 4, 1 };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6C\x69\x6E\x74", 5, 1 };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x4F", 2, 1 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x53", 2, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2, 1 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73", 2, 1 };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6D\x36\x34", 4, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x63", 2, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x4C\x2E", 3, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6C\x70\x61\x6E\x64\x61", 7, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6D\x36\x34", 4, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3A\x20\x70\x61\x6E\x64\x61\x63\x20\x5B\x6F\x70\x74\x69\x6F\x6E\x73\x5D\x20\x3C\x73\x6F\x75\x72\x63\x65\x73\x3E", 33, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x6F\x75\x72\x63\x65\x20\x66\x69\x6C\x65\x6E\x61\x6D\x65\x73\x20\x6D\x75\x73\x74\x20\x65\x6E\x64\x20\x69\x6E\x20\x27\x2E\x70\x61\x6E\x64\x61\x27\x2E", 38, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4F\x70\x74\x69\x6F\x6E\x73\x3A", 8, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x2D\x6F\x20\x3C\x70\x61\x74\x68\x3E\x20\x20\x20\x20\x6F\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x6F", 2, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2D\x6F\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6F\x6E\x63\x65", 31, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x66\x69\x6C\x65\x6E\x61\x6D\x65", 10, 1 };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x4F", 2, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33", 17, 1 };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2D\x4F\x27", 37, 1 };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x53", 2, 1 };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33", 17, 1 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x20\x66\x72\x6F\x6D\x20\x30\x2D\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2D\x53\x27", 37, 1 };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x66", 2, 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2D\x66\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6F\x6E\x63\x65", 31, 1 };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x6F\x75\x74\x70\x75\x74\x20\x66\x6F\x72\x6D\x61\x74", 16, 1 };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x65", 3, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F", 1, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x68", 1, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x73\x75\x70\x70\x6F\x72\x74\x65\x64\x20\x6F\x75\x74\x70\x75\x74\x20\x66\x6F\x72\x6D\x61\x74\x20\x27", 27, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x69", 2, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6F\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6F\x72\x79", 21, 1 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x70\x61\x75\x73\x65", 6, 1 };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6E\x74\x65\x72\x20\x74\x6F\x20\x63\x6F\x6E\x74\x69\x6E\x75\x65\x2E\x2E\x2E", 26, 1 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x72\x67\x75\x6D\x65\x6E\x74\x20\x27", 23, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x69\x6E\x70\x75\x74\x20\x66\x69\x6C\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6F", 2, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C\x74\x69\x70\x6C\x65\x20\x69\x6E\x70\x75\x74\x20\x66\x69\x6C\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2C\x20\x6D\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2D\x6F\x27\x20\x74\x6F\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6F\x75\x74\x70\x75\x74\x20", 64, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x6C\x65", 4, 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6C\x6C", 3, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6C\x6C", 3, 1 };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6C\x6C", 3, 1 };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6F\x72", 7, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x72\x72\x6F\x72\x73", 7, 1 };

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
    panda$core$String* $match$4035116;
    panda$core$String* level129;
    panda$core$String* level144;
    panda$core$String* f161;
    panda$core$String* $match$5391165;
    panda$core$String* extension204;
    panda$core$Int64$nullable $match$6708205;
    org$pandalanguage$pandac$CodeGenerator* cg220;
    panda$core$Int64$nullable $match$7352221;
    org$pandalanguage$pandac$Compiler$Settings* settings238;
    org$pandalanguage$pandac$Compiler* compiler241;
    panda$collections$Iterator* s$Iter244;
    panda$io$File* s256;
    panda$core$Int64$nullable $match$8053265;
    panda$io$File* optimized267;
    panda$io$File* assembly271;
    panda$io$File* optimized274;
    panda$io$File* assembly278;
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
            $match$4035116 = a113;
            panda$core$Bit $tmp118 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4035116, &$s117);
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
            panda$core$Bit $tmp128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4035116, &$s127);
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
            panda$core$Bit $tmp143 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4035116, &$s142);
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
            panda$core$Bit $tmp158 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4035116, &$s157);
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
                    $match$5391165 = f161;
                    panda$core$Bit $tmp167 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5391165, &$s166);
                    if ($tmp167.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5391165, &$s168);
                    if ($tmp169.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp171 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5391165, &$s170);
                    if ($tmp171.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5391165, &$s172);
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
            panda$core$Bit $tmp180 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4035116, &$s179);
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
            panda$core$Bit $tmp187 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$4035116, &$s186);
            if ($tmp187.value) {
            {
                panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s188));
                panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp190 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a113, &$s189);
                if ($tmp190.value) {
                {
                    panda$io$File* $tmp191 = (panda$io$File*) malloc(24);
                    $tmp191->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp191->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp191, a113);
                    panda$collections$Array$add$panda$collections$Array$T(sources96, ((panda$core$Object*) $tmp191));
                }
                }
                else {
                {
                    panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s193, a113);
                    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s195);
                    (($fn197) err106->$class->vtable[19])(err106, $tmp196);
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
    goto $l108;
    $l109:;
    panda$core$Int64 $tmp198 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
    panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, ((panda$core$Int64) { 0 }));
    if ($tmp199.value) {
    {
        (($fn201) err106->$class->vtable[19])(err106, &$s200);
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
        panda$core$Int64 $tmp202 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, ((panda$core$Int64) { 1 }));
        if ($tmp203.value) {
        {
            {
                $match$6708205 = format105;
                panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6708205.value), ((panda$core$Int64) { 918 }));
                if ($tmp206.value) {
                {
                    extension204 = &$s207;
                }
                }
                else {
                panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6708205.value), ((panda$core$Int64) { 919 }));
                if ($tmp208.value) {
                {
                    extension204 = &$s209;
                }
                }
                else {
                panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6708205.value), ((panda$core$Int64) { 920 }));
                if ($tmp210.value) {
                {
                    extension204 = &$s211;
                }
                }
                else {
                panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$6708205.value), ((panda$core$Int64) { 921 }));
                if ($tmp212.value) {
                {
                    extension204 = &$s213;
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
            panda$core$Object* $tmp214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources96, ((panda$core$Int64) { 0 }));
            panda$io$File* $tmp215 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp214), extension204);
            outFile102 = $tmp215;
        }
        }
        else {
        {
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s216, &$s217);
            (($fn219) err106->$class->vtable[19])(err106, $tmp218);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    {
        $match$7352221 = format105;
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7352221.value), ((panda$core$Int64) { 918 }));
        bool $tmp222 = $tmp223.value;
        if ($tmp222) goto $l224;
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7352221.value), ((panda$core$Int64) { 919 }));
        $tmp222 = $tmp225.value;
        $l224:;
        panda$core$Bit $tmp226 = { $tmp222 };
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp227 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(232);
            $tmp227->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
            $tmp227->refCount.value = 1;
            panda$io$File* $tmp230 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s229);
            panda$io$OutputStream* $tmp231 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp230);
            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp227, $tmp231);
            cg220 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp227);
        }
        }
        else {
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7352221.value), ((panda$core$Int64) { 920 }));
        if ($tmp232.value) {
        {
            org$pandalanguage$pandac$HCodeGenerator* $tmp233 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(129);
            $tmp233->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
            $tmp233->refCount.value = 1;
            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp233, outFile102);
            cg220 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp233);
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$7352221.value), ((panda$core$Int64) { 921 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator* $tmp236 = (org$pandalanguage$pandac$CCodeGenerator*) malloc(256);
            $tmp236->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
            $tmp236->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp236, outFile102);
            cg220 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp236);
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp239 = (org$pandalanguage$pandac$Compiler$Settings*) malloc(48);
    $tmp239->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp239->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp239, self->pandaHome, ((panda$collections$ListView*) imports99), optimizationLevel103, safetyLevel104);
    settings238 = $tmp239;
    org$pandalanguage$pandac$Compiler* $tmp242 = (org$pandalanguage$pandac$Compiler*) malloc(145);
    $tmp242->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp242->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp242, cg220, settings238);
    compiler241 = $tmp242;
    {
        ITable* $tmp245 = ((panda$collections$Iterable*) sources96)->$class->itable;
        while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp245 = $tmp245->next;
        }
        $fn247 $tmp246 = $tmp245->methods[0];
        panda$collections$Iterator* $tmp248 = $tmp246(((panda$collections$Iterable*) sources96));
        s$Iter244 = $tmp248;
        $l249:;
        ITable* $tmp251 = s$Iter244->$class->itable;
        while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp251 = $tmp251->next;
        }
        $fn253 $tmp252 = $tmp251->methods[0];
        panda$core$Bit $tmp254 = $tmp252(s$Iter244);
        panda$core$Bit $tmp255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp254);
        if (!$tmp255.value) goto $l250;
        {
            ITable* $tmp257 = s$Iter244->$class->itable;
            while ($tmp257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp257 = $tmp257->next;
            }
            $fn259 $tmp258 = $tmp257->methods[1];
            panda$core$Object* $tmp260 = $tmp258(s$Iter244);
            s256 = ((panda$io$File*) $tmp260);
            org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler241, s256);
        }
        goto $l249;
        $l250:;
    }
    org$pandalanguage$pandac$Compiler$finish(compiler241);
    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler241->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp261.value) {
    {
        ITable* $tmp262 = compiler241->codeGenerator->$class->itable;
        while ($tmp262->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp262 = $tmp262->next;
        }
        $fn264 $tmp263 = $tmp262->methods[5];
        $tmp263(compiler241->codeGenerator);
        {
            $match$8053265 = format105;
            panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$8053265.value), ((panda$core$Int64) { 918 }));
            if ($tmp266.value) {
            {
                panda$io$File* $tmp269 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s268);
                panda$io$File* $tmp270 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp269, optimizationLevel103);
                optimized267 = $tmp270;
                panda$io$File* $tmp272 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized267);
                assembly271 = $tmp272;
                org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly271, outFile102);
            }
            }
            else {
            panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$8053265.value), ((panda$core$Int64) { 919 }));
            if ($tmp273.value) {
            {
                panda$io$File* $tmp276 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s275);
                panda$io$File* $tmp277 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp276, optimizationLevel103);
                optimized274 = $tmp277;
                panda$io$File* $tmp279 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized274);
                assembly278 = $tmp279;
                org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly278, outFile102);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler241->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp280.value) {
        {
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s281));
        }
        }
        else {
        {
            panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s282, ((panda$core$Object*) wrap_panda$core$Int64(compiler241->errorCount)));
            panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s284);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp285));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp286 = (org$pandalanguage$pandac$Main*) malloc(48);
    $tmp286->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp286->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp286);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp286, p_args);
}

