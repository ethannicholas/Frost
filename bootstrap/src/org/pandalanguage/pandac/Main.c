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
typedef void (*$fn180)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn186)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn223)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn255)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn267)(panda$collections$Iterator*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

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
    panda$core$String* $match$149_13116;
    panda$core$String* level129;
    panda$core$String* level144;
    panda$core$String* f161;
    panda$core$String* $match$177_21165;
    panda$core$String* extension206;
    panda$core$Int64$nullable $match$212_17207;
    org$pandalanguage$pandac$CodeGenerator* cg224;
    panda$core$Int64$nullable $match$229_9225;
    org$pandalanguage$pandac$Compiler$Settings* settings246;
    org$pandalanguage$pandac$Compiler* compiler249;
    panda$collections$Iterator* s$Iter252;
    panda$io$File* s264;
    panda$core$Int64$nullable $match$246_13270;
    panda$io$File* optimized272;
    panda$io$File* assembly276;
    panda$io$File* optimized279;
    panda$io$File* assembly283;
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
            $match$149_13116 = a113;
            panda$core$Bit $tmp118 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13116, &$s117);
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
            panda$core$Bit $tmp128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13116, &$s127);
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
            panda$core$Bit $tmp143 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13116, &$s142);
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
            panda$core$Bit $tmp158 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13116, &$s157);
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
                    $match$177_21165 = f161;
                    panda$core$Bit $tmp167 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21165, &$s166);
                    if ($tmp167.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21165, &$s168);
                    if ($tmp169.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp171 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21165, &$s170);
                    if ($tmp171.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21165, &$s172);
                    if ($tmp173.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21165, &$s174);
                    if ($tmp175.value) {
                    {
                        format105 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s176, f161);
                        panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s178);
                        (($fn180) err106->$class->vtable[19])(err106, $tmp179);
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
            else {
            panda$core$Bit $tmp182 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13116, &$s181);
            if ($tmp182.value) {
            {
                panda$io$File* $tmp183 = (panda$io$File*) malloc(24);
                $tmp183->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp183->refCount.value = 1;
                panda$core$String* $tmp187 = (($fn186) args93->$class->vtable[4])(args93, &$s185);
                panda$io$File$init$panda$core$String($tmp183, $tmp187);
                panda$collections$Array$add$panda$collections$Array$T(imports99, ((panda$core$Object*) $tmp183));
            }
            }
            else {
            panda$core$Bit $tmp189 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13116, &$s188);
            if ($tmp189.value) {
            {
                panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s190));
                panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp192 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a113, &$s191);
                if ($tmp192.value) {
                {
                    panda$io$File* $tmp193 = (panda$io$File*) malloc(24);
                    $tmp193->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp193->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp193, a113);
                    panda$collections$Array$add$panda$collections$Array$T(sources96, ((panda$core$Object*) $tmp193));
                }
                }
                else {
                {
                    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s195, a113);
                    panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
                    (($fn199) err106->$class->vtable[19])(err106, $tmp198);
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
    panda$core$Int64 $tmp200 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
    panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp200, ((panda$core$Int64) { 0 }));
    if ($tmp201.value) {
    {
        (($fn203) err106->$class->vtable[19])(err106, &$s202);
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
        panda$core$Int64 $tmp204 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
        panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp204, ((panda$core$Int64) { 1 }));
        if ($tmp205.value) {
        {
            {
                $match$212_17207 = format105;
                panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17207.value), ((panda$core$Int64) { 918 }));
                if ($tmp208.value) {
                {
                    extension206 = &$s209;
                }
                }
                else {
                panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17207.value), ((panda$core$Int64) { 919 }));
                if ($tmp210.value) {
                {
                    extension206 = &$s211;
                }
                }
                else {
                panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17207.value), ((panda$core$Int64) { 920 }));
                if ($tmp212.value) {
                {
                    extension206 = &$s213;
                }
                }
                else {
                panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17207.value), ((panda$core$Int64) { 921 }));
                if ($tmp214.value) {
                {
                    extension206 = &$s215;
                }
                }
                else {
                panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17207.value), ((panda$core$Int64) { 917 }));
                if ($tmp216.value) {
                {
                    extension206 = &$s217;
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
            panda$core$Object* $tmp218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources96, ((panda$core$Int64) { 0 }));
            panda$io$File* $tmp219 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp218), extension206);
            outFile102 = $tmp219;
        }
        }
        else {
        {
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s220, &$s221);
            (($fn223) err106->$class->vtable[19])(err106, $tmp222);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    {
        $match$229_9225 = format105;
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9225.value), ((panda$core$Int64) { 917 }));
        bool $tmp227 = $tmp228.value;
        if ($tmp227) goto $l229;
        panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9225.value), ((panda$core$Int64) { 918 }));
        $tmp227 = $tmp230.value;
        $l229:;
        panda$core$Bit $tmp231 = { $tmp227 };
        bool $tmp226 = $tmp231.value;
        if ($tmp226) goto $l232;
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9225.value), ((panda$core$Int64) { 919 }));
        $tmp226 = $tmp233.value;
        $l232:;
        panda$core$Bit $tmp234 = { $tmp226 };
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp235 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(216);
            $tmp235->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
            $tmp235->refCount.value = 1;
            panda$io$File* $tmp238 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s237);
            panda$io$OutputStream* $tmp239 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp238);
            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp235, $tmp239);
            cg224 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp235);
        }
        }
        else {
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9225.value), ((panda$core$Int64) { 920 }));
        if ($tmp240.value) {
        {
            org$pandalanguage$pandac$HCodeGenerator* $tmp241 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(129);
            $tmp241->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
            $tmp241->refCount.value = 1;
            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp241, outFile102);
            cg224 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp241);
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9225.value), ((panda$core$Int64) { 921 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator* $tmp244 = (org$pandalanguage$pandac$CCodeGenerator*) malloc(256);
            $tmp244->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
            $tmp244->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp244, outFile102);
            cg224 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp244);
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp247 = (org$pandalanguage$pandac$Compiler$Settings*) malloc(48);
    $tmp247->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp247->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp247, self->pandaHome, ((panda$collections$ListView*) imports99), optimizationLevel103, safetyLevel104);
    settings246 = $tmp247;
    org$pandalanguage$pandac$Compiler* $tmp250 = (org$pandalanguage$pandac$Compiler*) malloc(152);
    $tmp250->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp250->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp250, cg224, settings246);
    compiler249 = $tmp250;
    {
        ITable* $tmp253 = ((panda$collections$Iterable*) sources96)->$class->itable;
        while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp253 = $tmp253->next;
        }
        $fn255 $tmp254 = $tmp253->methods[0];
        panda$collections$Iterator* $tmp256 = $tmp254(((panda$collections$Iterable*) sources96));
        s$Iter252 = $tmp256;
        $l257:;
        ITable* $tmp259 = s$Iter252->$class->itable;
        while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp259 = $tmp259->next;
        }
        $fn261 $tmp260 = $tmp259->methods[0];
        panda$core$Bit $tmp262 = $tmp260(s$Iter252);
        panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
        if (!$tmp263.value) goto $l258;
        {
            ITable* $tmp265 = s$Iter252->$class->itable;
            while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp265 = $tmp265->next;
            }
            $fn267 $tmp266 = $tmp265->methods[1];
            panda$core$Object* $tmp268 = $tmp266(s$Iter252);
            s264 = ((panda$io$File*) $tmp268);
            org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler249, s264);
        }
        goto $l257;
        $l258:;
    }
    org$pandalanguage$pandac$Compiler$finish(compiler249);
    panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler249->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp269.value) {
    {
        {
            $match$246_13270 = format105;
            panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$246_13270.value), ((panda$core$Int64) { 918 }));
            if ($tmp271.value) {
            {
                panda$io$File* $tmp274 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s273);
                panda$io$File* $tmp275 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp274, optimizationLevel103);
                optimized272 = $tmp275;
                panda$io$File* $tmp277 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized272);
                assembly276 = $tmp277;
                org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly276, outFile102);
            }
            }
            else {
            panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$246_13270.value), ((panda$core$Int64) { 919 }));
            if ($tmp278.value) {
            {
                panda$io$File* $tmp281 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile102, &$s280);
                panda$io$File* $tmp282 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp281, optimizationLevel103);
                optimized279 = $tmp282;
                panda$io$File* $tmp284 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized279);
                assembly283 = $tmp284;
                org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly283, outFile102);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler249->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp285.value) {
        {
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s286));
        }
        }
        else {
        {
            panda$core$String* $tmp287 = panda$core$Int64$convert$R$panda$core$String(compiler249->errorCount);
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp287, &$s288);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp289));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp290 = (org$pandalanguage$pandac$Main*) malloc(48);
    $tmp290->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp290->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp290);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp290, p_args);
}

