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

typedef panda$core$String* (*$fn34)(panda$io$InputStream*);
typedef void (*$fn36)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn49)(panda$io$InputStream*);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn63)(panda$io$InputStream*);
typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$InputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn85)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn86)(panda$io$OutputStream*);
typedef void (*$fn88)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn89)(panda$io$OutputStream*);
typedef void (*$fn91)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn93)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn108)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn112)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn118)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn121)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn128)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn138)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn143)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn157)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn160)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn177)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn182)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn219)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn264)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn276)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn288)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn294)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    {
        panda$io$File* $tmp2 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp2, &$s3);
        panda$io$File* $tmp5 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp2, &$s4);
        self->opt = $tmp5;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    }
    {
        panda$io$File* $tmp6 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp6, &$s7);
        panda$io$File* $tmp9 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp6, &$s8);
        self->llc = $tmp9;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    }
    {
        panda$io$File* $tmp10 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp10, &$s11);
        self->gcc = $tmp10;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    }
    {
        panda$io$File* $tmp12 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp12, &$s13);
        self->pandaHome = $tmp12;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest18;
    panda$collections$Array* args21;
    panda$core$System$Process* p31;
    panda$core$Int64 $tmp37;
    panda$io$File* tmp139;
    panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    bool $tmp14 = $tmp15.value;
    if ($tmp14) goto $l16;
    $tmp14 = ((panda$core$Bit) { true }).value;
    $l16:;
    panda$core$Bit $tmp17 = { $tmp14 };
    if ($tmp17.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp20 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s19);
    dest18 = $tmp20;
    panda$collections$Array* $tmp22 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp22);
    args21 = $tmp22;
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s23));
    panda$core$Int64$wrapper* $tmp25;
    $tmp25 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp25->value = p_level;
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s24, ((panda$core$Object*) $tmp25));
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
    {
        tmp139 = dest18;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest18));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args21));
        }
        return tmp139;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest40;
    panda$collections$Array* args43;
    panda$core$System$Process* p46;
    panda$core$Int64 $tmp52;
    panda$io$File* tmp254;
    panda$io$File* $tmp42 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s41);
    dest40 = $tmp42;
    panda$collections$Array* $tmp44 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp44);
    args43 = $tmp44;
    panda$collections$Array$add$panda$collections$Array$T(args43, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args43, ((panda$core$Object*) &$s45));
    panda$collections$Array$add$panda$collections$Array$T(args43, ((panda$core$Object*) dest40->path));
    panda$core$System$Process* $tmp47 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args43));
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
    {
        tmp254 = dest40;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p46));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args43));
        }
        return tmp254;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args55;
    panda$core$System$Process* p60;
    panda$core$Int64 $tmp66;
    panda$io$File* tmp368;
    panda$collections$Array* $tmp56 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp56);
    args55 = $tmp56;
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) &$s57));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) &$s58));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) &$s59));
    panda$collections$Array$add$panda$collections$Array$T(args55, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp61 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args55));
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
    {
        tmp368 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p60));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args55));
        }
        return tmp368;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args69;
    panda$core$System$Process* p75;
    panda$core$Int64 $tmp81;
    panda$io$File* tmp483;
    panda$collections$Array* $tmp70 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp70);
    args69 = $tmp70;
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s71));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s72));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s73));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s74));
    panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp76 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args69));
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
    {
        tmp483 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p75));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args69));
        }
        return tmp483;
    }
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
    panda$collections$Array* sources96;
    panda$collections$Array* imports98;
    panda$io$File* outFile100;
    panda$core$Int64 optimizationLevel101;
    panda$core$Int64 safetyLevel102;
    panda$core$Int64$nullable format103;
    panda$io$OutputStream* err104;
    panda$core$String* a111;
    panda$core$String* $match$149_13114;
    panda$core$String* level126;
    panda$core$String* level141;
    panda$core$String* f158;
    panda$core$String* $match$177_21162;
    panda$core$String* extension202;
    panda$core$Int64$nullable $match$213_21203;
    org$pandalanguage$pandac$CodeGenerator* cg220;
    panda$core$Int64$nullable $match$230_13221;
    org$pandalanguage$pandac$Compiler$Settings* settings239;
    org$pandalanguage$pandac$Compiler* compiler241;
    panda$collections$Iterator* Iter$241$9243;
    panda$io$File* s255;
    panda$collections$Iterator* Iter$242$13260;
    org$pandalanguage$pandac$ClassDecl* cl273;
    panda$collections$Iterator* Iter$247$13279;
    panda$io$File* s291;
    panda$core$Int64$nullable $match$254_17297;
    panda$io$File* optimized299;
    panda$io$File* assembly303;
    panda$io$File* optimized307;
    panda$io$File* assembly311;
    org$pandalanguage$pandac$Main$Arguments* $tmp95 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp95, p_rawArgs);
    args94 = $tmp95;
    panda$collections$Array* $tmp97 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp97);
    sources96 = $tmp97;
    panda$collections$Array* $tmp99 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp99);
    imports98 = $tmp99;
    panda$collections$Array$add$panda$collections$Array$T(imports98, ((panda$core$Object*) self->pandaHome));
    outFile100 = NULL;
    optimizationLevel101 = ((panda$core$Int64) { 3 });
    safetyLevel102 = ((panda$core$Int64) { 3 });
    format103 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp105 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err104 = $tmp105;
    $l106:;
    panda$core$Bit $tmp109 = (($fn108) args94->$class->vtable[2])(args94);
    panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
    if (!$tmp110.value) goto $l107;
    {
        panda$core$String* $tmp113 = (($fn112) args94->$class->vtable[3])(args94);
        a111 = $tmp113;
        {
            $match$149_13114 = a111;
            panda$core$Bit $tmp116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13114, &$s115);
            if ($tmp116.value) {
            {
                if (((panda$core$Bit) { outFile100 != NULL }).value) {
                {
                    (($fn118) err104->$class->vtable[19])(err104, &$s117);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$io$File* $tmp119 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp122 = (($fn121) args94->$class->vtable[4])(args94, &$s120);
                    panda$io$File$init$panda$core$String($tmp119, $tmp122);
                    outFile100 = $tmp119;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile100));
                }
                panda$io$File* $tmp123 = panda$io$File$parent$R$panda$io$File$Q(outFile100);
                panda$io$File$createDirectories($tmp123);
            }
            }
            else {
            panda$core$Bit $tmp125 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13114, &$s124);
            if ($tmp125.value) {
            {
                panda$core$String* $tmp129 = (($fn128) args94->$class->vtable[4])(args94, &$s127);
                level126 = $tmp129;
                panda$core$Int64$nullable $tmp130 = panda$core$String$convert$R$panda$core$Int64$Q(level126);
                optimizationLevel101 = ((panda$core$Int64) $tmp130.value);
                panda$core$Bit $tmp132 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel101, ((panda$core$Int64) { 3 }));
                bool $tmp131 = $tmp132.value;
                if ($tmp131) goto $l133;
                panda$core$Bit $tmp134 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel101, ((panda$core$Int64) { 0 }));
                $tmp131 = $tmp134.value;
                $l133:;
                panda$core$Bit $tmp135 = { $tmp131 };
                if ($tmp135.value) {
                {
                    panda$io$OutputStream* $tmp136 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn138) $tmp136->$class->vtable[19])($tmp136, &$s137);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level126));
            }
            }
            else {
            panda$core$Bit $tmp140 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13114, &$s139);
            if ($tmp140.value) {
            {
                panda$core$String* $tmp144 = (($fn143) args94->$class->vtable[4])(args94, &$s142);
                level141 = $tmp144;
                panda$core$Int64$nullable $tmp145 = panda$core$String$convert$R$panda$core$Int64$Q(level141);
                safetyLevel102 = ((panda$core$Int64) $tmp145.value);
                panda$core$Bit $tmp147 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel102, ((panda$core$Int64) { 3 }));
                bool $tmp146 = $tmp147.value;
                if ($tmp146) goto $l148;
                panda$core$Bit $tmp149 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel102, ((panda$core$Int64) { 0 }));
                $tmp146 = $tmp149.value;
                $l148:;
                panda$core$Bit $tmp150 = { $tmp146 };
                if ($tmp150.value) {
                {
                    panda$io$OutputStream* $tmp151 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn153) $tmp151->$class->vtable[19])($tmp151, &$s152);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level141));
            }
            }
            else {
            panda$core$Bit $tmp155 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13114, &$s154);
            if ($tmp155.value) {
            {
                if (((panda$core$Bit) { format103.nonnull }).value) {
                {
                    (($fn157) err104->$class->vtable[19])(err104, &$s156);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp161 = (($fn160) args94->$class->vtable[4])(args94, &$s159);
                f158 = $tmp161;
                {
                    $match$177_21162 = f158;
                    panda$core$Bit $tmp164 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21162, &$s163);
                    if ($tmp164.value) {
                    {
                        format103 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21162, &$s165);
                    if ($tmp166.value) {
                    {
                        format103 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21162, &$s167);
                    if ($tmp168.value) {
                    {
                        format103 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp170 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21162, &$s169);
                    if ($tmp170.value) {
                    {
                        format103 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21162, &$s171);
                    if ($tmp172.value) {
                    {
                        format103 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s173, f158);
                        panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s175);
                        (($fn177) err104->$class->vtable[19])(err104, $tmp176);
                        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f158));
            }
            }
            else {
            panda$core$Bit $tmp179 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13114, &$s178);
            if ($tmp179.value) {
            {
                panda$io$File* $tmp180 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                panda$core$String* $tmp183 = (($fn182) args94->$class->vtable[4])(args94, &$s181);
                panda$io$File$init$panda$core$String($tmp180, $tmp183);
                panda$collections$Array$add$panda$collections$Array$T(imports98, ((panda$core$Object*) $tmp180));
            }
            }
            else {
            panda$core$Bit $tmp185 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13114, &$s184);
            if ($tmp185.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s186);
                panda$core$String* $tmp187 = panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp189 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a111, &$s188);
                if ($tmp189.value) {
                {
                    panda$io$File* $tmp190 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$io$File$init$panda$core$String($tmp190, a111);
                    panda$collections$Array$add$panda$collections$Array$T(sources96, ((panda$core$Object*) $tmp190));
                }
                }
                else {
                {
                    panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s191, a111);
                    panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s193);
                    (($fn195) err104->$class->vtable[19])(err104, $tmp194);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a111));
    }
    goto $l106;
    $l107:;
    panda$core$Int64 $tmp196 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
    panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp196, ((panda$core$Int64) { 0 }));
    if ($tmp197.value) {
    {
        (($fn199) err104->$class->vtable[19])(err104, &$s198);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format103.nonnull }).value) {
    {
        format103 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile100 == NULL }).value) {
    {
        panda$core$Int64 $tmp200 = panda$collections$Array$get_count$R$panda$core$Int64(sources96);
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp200, ((panda$core$Int64) { 1 }));
        if ($tmp201.value) {
        {
            memset(&extension202, 0, sizeof(extension202));
            {
                $match$213_21203 = format103;
                panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21203.value), ((panda$core$Int64) { 918 }));
                if ($tmp204.value) {
                {
                    {
                        extension202 = &$s205;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension202));
                    }
                }
                }
                else {
                panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21203.value), ((panda$core$Int64) { 919 }));
                if ($tmp206.value) {
                {
                    {
                        extension202 = &$s207;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension202));
                    }
                }
                }
                else {
                panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21203.value), ((panda$core$Int64) { 920 }));
                if ($tmp208.value) {
                {
                    {
                        extension202 = &$s209;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension202));
                    }
                }
                }
                else {
                panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21203.value), ((panda$core$Int64) { 921 }));
                if ($tmp210.value) {
                {
                    {
                        extension202 = &$s211;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension202));
                    }
                }
                }
                else {
                panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21203.value), ((panda$core$Int64) { 917 }));
                if ($tmp212.value) {
                {
                    {
                        extension202 = &$s213;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension202));
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
                panda$core$Object* $tmp214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources96, ((panda$core$Int64) { 0 }));
                panda$io$File* $tmp215 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp214), extension202);
                outFile100 = $tmp215;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile100));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension202));
        }
        }
        else {
        {
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s216, &$s217);
            (($fn219) err104->$class->vtable[19])(err104, $tmp218);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg220, 0, sizeof(cg220));
    {
        $match$230_13221 = format103;
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13221.value), ((panda$core$Int64) { 917 }));
        bool $tmp223 = $tmp224.value;
        if ($tmp223) goto $l225;
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13221.value), ((panda$core$Int64) { 918 }));
        $tmp223 = $tmp226.value;
        $l225:;
        panda$core$Bit $tmp227 = { $tmp223 };
        bool $tmp222 = $tmp227.value;
        if ($tmp222) goto $l228;
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13221.value), ((panda$core$Int64) { 919 }));
        $tmp222 = $tmp229.value;
        $l228:;
        panda$core$Bit $tmp230 = { $tmp222 };
        if ($tmp230.value) {
        {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp231 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                panda$io$File* $tmp233 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile100, &$s232);
                panda$io$OutputStream* $tmp234 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp233);
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp231, $tmp234);
                cg220 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp231);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg220));
            }
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13221.value), ((panda$core$Int64) { 920 }));
        if ($tmp235.value) {
        {
            {
                org$pandalanguage$pandac$HCodeGenerator* $tmp236 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp236, outFile100);
                cg220 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp236);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg220));
            }
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13221.value), ((panda$core$Int64) { 921 }));
        if ($tmp237.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator* $tmp238 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp238, outFile100);
                cg220 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp238);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg220));
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp240 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp240, self->pandaHome, ((panda$collections$ListView*) imports98), optimizationLevel101, safetyLevel102);
    settings239 = $tmp240;
    org$pandalanguage$pandac$Compiler* $tmp242 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(160, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp242, cg220, settings239);
    compiler241 = $tmp242;
    {
        ITable* $tmp244 = ((panda$collections$Iterable*) sources96)->$class->itable;
        while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp244 = $tmp244->next;
        }
        $fn246 $tmp245 = $tmp244->methods[0];
        panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) sources96));
        Iter$241$9243 = $tmp247;
        $l248:;
        ITable* $tmp250 = Iter$241$9243->$class->itable;
        while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp250 = $tmp250->next;
        }
        $fn252 $tmp251 = $tmp250->methods[0];
        panda$core$Bit $tmp253 = $tmp251(Iter$241$9243);
        panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
        if (!$tmp254.value) goto $l249;
        {
            ITable* $tmp256 = Iter$241$9243->$class->itable;
            while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp256 = $tmp256->next;
            }
            $fn258 $tmp257 = $tmp256->methods[1];
            panda$core$Object* $tmp259 = $tmp257(Iter$241$9243);
            s255 = ((panda$io$File*) $tmp259);
            {
                panda$collections$ListView* $tmp261 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler241, s255);
                ITable* $tmp262 = ((panda$collections$Iterable*) $tmp261)->$class->itable;
                while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp262 = $tmp262->next;
                }
                $fn264 $tmp263 = $tmp262->methods[0];
                panda$collections$Iterator* $tmp265 = $tmp263(((panda$collections$Iterable*) $tmp261));
                Iter$242$13260 = $tmp265;
                $l266:;
                ITable* $tmp268 = Iter$242$13260->$class->itable;
                while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp268 = $tmp268->next;
                }
                $fn270 $tmp269 = $tmp268->methods[0];
                panda$core$Bit $tmp271 = $tmp269(Iter$242$13260);
                panda$core$Bit $tmp272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp271);
                if (!$tmp272.value) goto $l267;
                {
                    ITable* $tmp274 = Iter$242$13260->$class->itable;
                    while ($tmp274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp274 = $tmp274->next;
                    }
                    $fn276 $tmp275 = $tmp274->methods[1];
                    panda$core$Object* $tmp277 = $tmp275(Iter$242$13260);
                    cl273 = ((org$pandalanguage$pandac$ClassDecl*) $tmp277);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler241, cl273);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl273));
                }
                goto $l266;
                $l267:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$242$13260));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s255));
        }
        goto $l248;
        $l249:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$9243));
    }
    panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler241->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp278.value) {
    {
        {
            ITable* $tmp280 = ((panda$collections$Iterable*) sources96)->$class->itable;
            while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp280 = $tmp280->next;
            }
            $fn282 $tmp281 = $tmp280->methods[0];
            panda$collections$Iterator* $tmp283 = $tmp281(((panda$collections$Iterable*) sources96));
            Iter$247$13279 = $tmp283;
            $l284:;
            ITable* $tmp286 = Iter$247$13279->$class->itable;
            while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp286 = $tmp286->next;
            }
            $fn288 $tmp287 = $tmp286->methods[0];
            panda$core$Bit $tmp289 = $tmp287(Iter$247$13279);
            panda$core$Bit $tmp290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp289);
            if (!$tmp290.value) goto $l285;
            {
                ITable* $tmp292 = Iter$247$13279->$class->itable;
                while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp292 = $tmp292->next;
                }
                $fn294 $tmp293 = $tmp292->methods[1];
                panda$core$Object* $tmp295 = $tmp293(Iter$247$13279);
                s291 = ((panda$io$File*) $tmp295);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler241, s291);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s291));
            }
            goto $l284;
            $l285:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$247$13279));
        }
        org$pandalanguage$pandac$Compiler$finish(compiler241);
    }
    }
    panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler241->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp296.value) {
    {
        {
            $match$254_17297 = format103;
            panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17297.value), ((panda$core$Int64) { 918 }));
            if ($tmp298.value) {
            {
                panda$io$File* $tmp301 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile100, &$s300);
                panda$io$File* $tmp302 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp301, optimizationLevel101);
                optimized299 = $tmp302;
                panda$io$File* $tmp304 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized299);
                assembly303 = $tmp304;
                panda$io$File* $tmp305 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly303, outFile100);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly303));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized299));
                }
            }
            }
            else {
            panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17297.value), ((panda$core$Int64) { 919 }));
            if ($tmp306.value) {
            {
                panda$io$File* $tmp309 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile100, &$s308);
                panda$io$File* $tmp310 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp309, optimizationLevel101);
                optimized307 = $tmp310;
                panda$io$File* $tmp312 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized307);
                assembly311 = $tmp312;
                panda$io$File* $tmp313 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly311, outFile100);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly311));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized307));
                }
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler241->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp314.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s315);
        }
        }
        else {
        {
            panda$core$String* $tmp316 = panda$core$Int64$convert$R$panda$core$String(compiler241->errorCount);
            panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s317);
            panda$io$Console$printLine$panda$core$String($tmp318);
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports98));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler241));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args94));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Panda$disableRefCounting();
    org$pandalanguage$pandac$Main* $tmp319 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp319);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp319, p_args);
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

