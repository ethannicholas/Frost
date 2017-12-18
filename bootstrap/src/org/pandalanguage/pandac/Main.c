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

typedef panda$core$String* (*$fn35)(panda$io$InputStream*);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn50)(panda$io$InputStream*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn64)(panda$io$InputStream*);
typedef void (*$fn66)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn79)(panda$io$InputStream*);
typedef void (*$fn81)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn85)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn86)(panda$io$OutputStream*);
typedef void (*$fn88)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn89)(panda$io$OutputStream*);
typedef void (*$fn91)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn93)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn111)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn115)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn121)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn125)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn132)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn142)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn147)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn161)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn164)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn181)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn187)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn224)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

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
    panda$core$System$Process* p32;
    panda$core$Int64 $tmp38;
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
    panda$core$Int64$wrapper* $tmp26;
    $tmp26 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp26->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp26->refCount = 1;
    $tmp26->value = p_level;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s25, ((panda$core$Object*) $tmp26));
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s28);
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) $tmp29));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s30));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s31));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) dest18->path));
    panda$core$System$Process* $tmp33 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args21));
    p32 = $tmp33;
    panda$io$OutputStream* $tmp34 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp36 = (($fn35) p32->error->$class->vtable[6])(p32->error);
    (($fn37) $tmp34->$class->vtable[16])($tmp34, $tmp36);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp38, p32);
    panda$core$Bit $tmp39 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp38, ((panda$core$Int64) { 0 }));
    if ($tmp39.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return dest18;
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest40;
    panda$collections$Array* args43;
    panda$core$System$Process* p47;
    panda$core$Int64 $tmp53;
    panda$io$File* $tmp42 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s41);
    dest40 = $tmp42;
    panda$collections$Array* $tmp44 = (panda$collections$Array*) malloc(40);
    $tmp44->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp44->refCount.value = 1;
    panda$collections$Array$init($tmp44);
    args43 = $tmp44;
    panda$collections$Array$add$panda$collections$Array$T(args43, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args43, ((panda$core$Object*) &$s46));
    panda$collections$Array$add$panda$collections$Array$T(args43, ((panda$core$Object*) dest40->path));
    panda$core$System$Process* $tmp48 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args43));
    p47 = $tmp48;
    panda$io$OutputStream* $tmp49 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp51 = (($fn50) p47->error->$class->vtable[6])(p47->error);
    (($fn52) $tmp49->$class->vtable[16])($tmp49, $tmp51);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp53, p47);
    panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp53, ((panda$core$Int64) { 0 }));
    if ($tmp54.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return dest40;
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args55;
    panda$core$System$Process* p61;
    panda$core$Int64 $tmp67;
    panda$collections$Array* $tmp56 = (panda$collections$Array*) malloc(40);
    $tmp56->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp56->refCount.value = 1;
    panda$collections$Array$init($tmp56);
    args55 = $tmp56;
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) &$s58));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) &$s59));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) &$s60));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp62 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args55));
    p61 = $tmp62;
    panda$io$OutputStream* $tmp63 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp65 = (($fn64) p61->error->$class->vtable[6])(p61->error);
    (($fn66) $tmp63->$class->vtable[16])($tmp63, $tmp65);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp67, p61);
    panda$core$Bit $tmp68 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp67, ((panda$core$Int64) { 0 }));
    if ($tmp68.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return p_dest;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args69;
    panda$core$System$Process* p76;
    panda$core$Int64 $tmp82;
    panda$collections$Array* $tmp70 = (panda$collections$Array*) malloc(40);
    $tmp70->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp70->refCount.value = 1;
    panda$collections$Array$init($tmp70);
    args69 = $tmp70;
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s72));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s73));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s74));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s75));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp77 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args69));
    p76 = $tmp77;
    panda$io$OutputStream* $tmp78 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp80 = (($fn79) p76->error->$class->vtable[6])(p76->error);
    (($fn81) $tmp78->$class->vtable[16])($tmp78, $tmp80);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp82, p76);
    panda$core$Bit $tmp83 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp82, ((panda$core$Int64) { 0 }));
    if ($tmp83.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return p_dest;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn85) p_out->$class->vtable[19])(p_out, &$s84);
    (($fn86) p_out->$class->vtable[17])(p_out);
    (($fn88) p_out->$class->vtable[19])(p_out, &$s87);
    (($fn89) p_out->$class->vtable[17])(p_out);
    (($fn91) p_out->$class->vtable[19])(p_out, &$s90);
    (($fn93) p_out->$class->vtable[19])(p_out, &$s92);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args94;
    panda$collections$Array* sources97;
    panda$collections$Array* imports100;
    panda$io$File* outFile103;
    panda$core$Int64 optimizationLevel104;
    panda$core$Int64 safetyLevel105;
    panda$core$Int64$nullable format106;
    panda$io$OutputStream* err107;
    panda$core$String* a114;
    panda$core$String* $match$149_13117;
    panda$core$String* level130;
    panda$core$String* level145;
    panda$core$String* f162;
    panda$core$String* $match$177_21166;
    panda$core$String* extension207;
    panda$core$Int64$nullable $match$212_17208;
    org$pandalanguage$pandac$CodeGenerator* cg225;
    panda$core$Int64$nullable $match$229_9226;
    org$pandalanguage$pandac$Compiler$Settings* settings247;
    org$pandalanguage$pandac$Compiler* compiler250;
    panda$collections$Iterator* s$Iter253;
    panda$io$File* s265;
    panda$core$Int64$nullable $match$246_13271;
    panda$io$File* optimized273;
    panda$io$File* assembly277;
    panda$io$File* optimized280;
    panda$io$File* assembly284;
    org$pandalanguage$pandac$Main$Arguments* $tmp95 = (org$pandalanguage$pandac$Main$Arguments*) malloc(32);
    $tmp95->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class;
    $tmp95->refCount.value = 1;
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp95, p_rawArgs);
    args94 = $tmp95;
    panda$collections$Array* $tmp98 = (panda$collections$Array*) malloc(40);
    $tmp98->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp98->refCount.value = 1;
    panda$collections$Array$init($tmp98);
    sources97 = $tmp98;
    panda$collections$Array* $tmp101 = (panda$collections$Array*) malloc(40);
    $tmp101->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp101->refCount.value = 1;
    panda$collections$Array$init($tmp101);
    imports100 = $tmp101;
    panda$collections$Array$add$panda$collections$Array$T(imports100, ((panda$core$Object*) self->pandaHome));
    outFile103 = NULL;
    optimizationLevel104 = ((panda$core$Int64) { 3 });
    safetyLevel105 = ((panda$core$Int64) { 3 });
    format106 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp108 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err107 = $tmp108;
    $l109:;
    panda$core$Bit $tmp112 = (($fn111) args94->$class->vtable[2])(args94);
    panda$core$Bit $tmp113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp112);
    if (!$tmp113.value) goto $l110;
    {
        panda$core$String* $tmp116 = (($fn115) args94->$class->vtable[3])(args94);
        a114 = $tmp116;
        {
            $match$149_13117 = a114;
            panda$core$Bit $tmp119 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13117, &$s118);
            if ($tmp119.value) {
            {
                if (((panda$core$Bit) { outFile103 != NULL }).value) {
                {
                    (($fn121) err107->$class->vtable[19])(err107, &$s120);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$io$File* $tmp122 = (panda$io$File*) malloc(24);
                $tmp122->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp122->refCount.value = 1;
                panda$core$String* $tmp126 = (($fn125) args94->$class->vtable[4])(args94, &$s124);
                panda$io$File$init$panda$core$String($tmp122, $tmp126);
                outFile103 = $tmp122;
                panda$io$File* $tmp127 = panda$io$File$parent$R$panda$io$File$Q(outFile103);
                panda$io$File$createDirectories($tmp127);
            }
            }
            else {
            panda$core$Bit $tmp129 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13117, &$s128);
            if ($tmp129.value) {
            {
                panda$core$String* $tmp133 = (($fn132) args94->$class->vtable[4])(args94, &$s131);
                level130 = $tmp133;
                panda$core$Int64$nullable $tmp134 = panda$core$String$convert$R$panda$core$Int64$Q(level130);
                optimizationLevel104 = ((panda$core$Int64) $tmp134.value);
                panda$core$Bit $tmp136 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel104, ((panda$core$Int64) { 3 }));
                bool $tmp135 = $tmp136.value;
                if ($tmp135) goto $l137;
                panda$core$Bit $tmp138 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel104, ((panda$core$Int64) { 0 }));
                $tmp135 = $tmp138.value;
                $l137:;
                panda$core$Bit $tmp139 = { $tmp135 };
                if ($tmp139.value) {
                {
                    panda$io$OutputStream* $tmp140 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn142) $tmp140->$class->vtable[19])($tmp140, &$s141);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp144 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13117, &$s143);
            if ($tmp144.value) {
            {
                panda$core$String* $tmp148 = (($fn147) args94->$class->vtable[4])(args94, &$s146);
                level145 = $tmp148;
                panda$core$Int64$nullable $tmp149 = panda$core$String$convert$R$panda$core$Int64$Q(level145);
                safetyLevel105 = ((panda$core$Int64) $tmp149.value);
                panda$core$Bit $tmp151 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel105, ((panda$core$Int64) { 3 }));
                bool $tmp150 = $tmp151.value;
                if ($tmp150) goto $l152;
                panda$core$Bit $tmp153 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel105, ((panda$core$Int64) { 0 }));
                $tmp150 = $tmp153.value;
                $l152:;
                panda$core$Bit $tmp154 = { $tmp150 };
                if ($tmp154.value) {
                {
                    panda$io$OutputStream* $tmp155 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn157) $tmp155->$class->vtable[19])($tmp155, &$s156);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp159 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13117, &$s158);
            if ($tmp159.value) {
            {
                if (((panda$core$Bit) { format106.nonnull }).value) {
                {
                    (($fn161) err107->$class->vtable[19])(err107, &$s160);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp165 = (($fn164) args94->$class->vtable[4])(args94, &$s163);
                f162 = $tmp165;
                {
                    $match$177_21166 = f162;
                    panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21166, &$s167);
                    if ($tmp168.value) {
                    {
                        format106 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp170 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21166, &$s169);
                    if ($tmp170.value) {
                    {
                        format106 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21166, &$s171);
                    if ($tmp172.value) {
                    {
                        format106 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp174 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21166, &$s173);
                    if ($tmp174.value) {
                    {
                        format106 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp176 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21166, &$s175);
                    if ($tmp176.value) {
                    {
                        format106 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, f162);
                        panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s179);
                        (($fn181) err107->$class->vtable[19])(err107, $tmp180);
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
            panda$core$Bit $tmp183 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13117, &$s182);
            if ($tmp183.value) {
            {
                panda$io$File* $tmp184 = (panda$io$File*) malloc(24);
                $tmp184->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp184->refCount.value = 1;
                panda$core$String* $tmp188 = (($fn187) args94->$class->vtable[4])(args94, &$s186);
                panda$io$File$init$panda$core$String($tmp184, $tmp188);
                panda$collections$Array$add$panda$collections$Array$T(imports100, ((panda$core$Object*) $tmp184));
            }
            }
            else {
            panda$core$Bit $tmp190 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13117, &$s189);
            if ($tmp190.value) {
            {
                panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s191));
                panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp193 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a114, &$s192);
                if ($tmp193.value) {
                {
                    panda$io$File* $tmp194 = (panda$io$File*) malloc(24);
                    $tmp194->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp194->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp194, a114);
                    panda$collections$Array$add$panda$collections$Array$T(sources97, ((panda$core$Object*) $tmp194));
                }
                }
                else {
                {
                    panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s196, a114);
                    panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
                    (($fn200) err107->$class->vtable[19])(err107, $tmp199);
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
    goto $l109;
    $l110:;
    panda$core$Int64 $tmp201 = panda$collections$Array$get_count$R$panda$core$Int64(sources97);
    panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp201, ((panda$core$Int64) { 0 }));
    if ($tmp202.value) {
    {
        (($fn204) err107->$class->vtable[19])(err107, &$s203);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format106.nonnull }).value) {
    {
        format106 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile103 == NULL }).value) {
    {
        panda$core$Int64 $tmp205 = panda$collections$Array$get_count$R$panda$core$Int64(sources97);
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp205, ((panda$core$Int64) { 1 }));
        if ($tmp206.value) {
        {
            {
                $match$212_17208 = format106;
                panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17208.value), ((panda$core$Int64) { 918 }));
                if ($tmp209.value) {
                {
                    extension207 = &$s210;
                }
                }
                else {
                panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17208.value), ((panda$core$Int64) { 919 }));
                if ($tmp211.value) {
                {
                    extension207 = &$s212;
                }
                }
                else {
                panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17208.value), ((panda$core$Int64) { 920 }));
                if ($tmp213.value) {
                {
                    extension207 = &$s214;
                }
                }
                else {
                panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17208.value), ((panda$core$Int64) { 921 }));
                if ($tmp215.value) {
                {
                    extension207 = &$s216;
                }
                }
                else {
                panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$212_17208.value), ((panda$core$Int64) { 917 }));
                if ($tmp217.value) {
                {
                    extension207 = &$s218;
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
            panda$core$Object* $tmp219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources97, ((panda$core$Int64) { 0 }));
            panda$io$File* $tmp220 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp219), extension207);
            outFile103 = $tmp220;
        }
        }
        else {
        {
            panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s221, &$s222);
            (($fn224) err107->$class->vtable[19])(err107, $tmp223);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    {
        $match$229_9226 = format106;
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9226.value), ((panda$core$Int64) { 917 }));
        bool $tmp228 = $tmp229.value;
        if ($tmp228) goto $l230;
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9226.value), ((panda$core$Int64) { 918 }));
        $tmp228 = $tmp231.value;
        $l230:;
        panda$core$Bit $tmp232 = { $tmp228 };
        bool $tmp227 = $tmp232.value;
        if ($tmp227) goto $l233;
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9226.value), ((panda$core$Int64) { 919 }));
        $tmp227 = $tmp234.value;
        $l233:;
        panda$core$Bit $tmp235 = { $tmp227 };
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp236 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(216);
            $tmp236->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
            $tmp236->refCount.value = 1;
            panda$io$File* $tmp239 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile103, &$s238);
            panda$io$OutputStream* $tmp240 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp239);
            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp236, $tmp240);
            cg225 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp236);
        }
        }
        else {
        panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9226.value), ((panda$core$Int64) { 920 }));
        if ($tmp241.value) {
        {
            org$pandalanguage$pandac$HCodeGenerator* $tmp242 = (org$pandalanguage$pandac$HCodeGenerator*) malloc(129);
            $tmp242->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
            $tmp242->refCount.value = 1;
            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp242, outFile103);
            cg225 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp242);
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$229_9226.value), ((panda$core$Int64) { 921 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator* $tmp245 = (org$pandalanguage$pandac$CCodeGenerator*) malloc(256);
            $tmp245->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
            $tmp245->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp245, outFile103);
            cg225 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp245);
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp248 = (org$pandalanguage$pandac$Compiler$Settings*) malloc(48);
    $tmp248->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp248->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp248, self->pandaHome, ((panda$collections$ListView*) imports100), optimizationLevel104, safetyLevel105);
    settings247 = $tmp248;
    org$pandalanguage$pandac$Compiler* $tmp251 = (org$pandalanguage$pandac$Compiler*) malloc(152);
    $tmp251->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp251->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp251, cg225, settings247);
    compiler250 = $tmp251;
    {
        ITable* $tmp254 = ((panda$collections$Iterable*) sources97)->$class->itable;
        while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp254 = $tmp254->next;
        }
        $fn256 $tmp255 = $tmp254->methods[0];
        panda$collections$Iterator* $tmp257 = $tmp255(((panda$collections$Iterable*) sources97));
        s$Iter253 = $tmp257;
        $l258:;
        ITable* $tmp260 = s$Iter253->$class->itable;
        while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp260 = $tmp260->next;
        }
        $fn262 $tmp261 = $tmp260->methods[0];
        panda$core$Bit $tmp263 = $tmp261(s$Iter253);
        panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp263);
        if (!$tmp264.value) goto $l259;
        {
            ITable* $tmp266 = s$Iter253->$class->itable;
            while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp266 = $tmp266->next;
            }
            $fn268 $tmp267 = $tmp266->methods[1];
            panda$core$Object* $tmp269 = $tmp267(s$Iter253);
            s265 = ((panda$io$File*) $tmp269);
            org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler250, s265);
        }
        goto $l258;
        $l259:;
    }
    org$pandalanguage$pandac$Compiler$finish(compiler250);
    panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler250->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp270.value) {
    {
        {
            $match$246_13271 = format106;
            panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$246_13271.value), ((panda$core$Int64) { 918 }));
            if ($tmp272.value) {
            {
                panda$io$File* $tmp275 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile103, &$s274);
                panda$io$File* $tmp276 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp275, optimizationLevel104);
                optimized273 = $tmp276;
                panda$io$File* $tmp278 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized273);
                assembly277 = $tmp278;
                org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly277, outFile103);
            }
            }
            else {
            panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$246_13271.value), ((panda$core$Int64) { 919 }));
            if ($tmp279.value) {
            {
                panda$io$File* $tmp282 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile103, &$s281);
                panda$io$File* $tmp283 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp282, optimizationLevel104);
                optimized280 = $tmp283;
                panda$io$File* $tmp285 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized280);
                assembly284 = $tmp285;
                org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly284, outFile103);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler250->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp286.value) {
        {
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s287));
        }
        }
        else {
        {
            panda$core$String* $tmp288 = panda$core$Int64$convert$R$panda$core$String(compiler250->errorCount);
            panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s289);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp290));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp291 = (org$pandalanguage$pandac$Main*) malloc(48);
    $tmp291->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp291->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp291);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp291, p_args);
}

