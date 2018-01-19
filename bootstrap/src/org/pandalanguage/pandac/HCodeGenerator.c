#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Key.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/collections/ImmutableArray.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn113)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn192)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn198)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn204)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn210)(panda$collections$Iterator*);
typedef void (*$fn223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn254)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn271)(panda$collections$CollectionView*);
typedef void (*$fn283)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn332)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn339)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn351)(panda$collections$CollectionView*);
typedef void (*$fn363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn428)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn448)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn459)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn465)(panda$collections$Iterator*);
typedef void (*$fn478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn483)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn491)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn495)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b", 24, -3891582111104392533, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b", 24, 4222731004450900160, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->out = NULL;
    panda$io$MemoryOutputStream* $tmp2 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp2->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp2->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp2);
    self->typeImportStream = $tmp2;
    panda$io$MemoryOutputStream* $tmp4 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp4->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp4->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp4);
    self->typesBuffer = $tmp4;
    panda$io$IndentedOutputStream* $tmp6 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp6->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6, ((panda$io$OutputStream*) self->typesBuffer));
    self->types = $tmp6;
    panda$io$MemoryOutputStream* $tmp8 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp8->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp8->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp8);
    self->bodyImportStream = $tmp8;
    panda$io$MemoryOutputStream* $tmp10 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp10->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp10->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp10);
    self->bodyBuffer = $tmp10;
    panda$io$IndentedOutputStream* $tmp12 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
    $tmp12->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp12->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp12, ((panda$io$OutputStream*) self->bodyBuffer));
    self->body = $tmp12;
    panda$collections$Set* $tmp14 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp14->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp14->refCount.value = 1;
    panda$collections$Set$init($tmp14);
    self->typeImports = $tmp14;
    panda$collections$Set* $tmp16 = (panda$collections$Set*) pandaZAlloc(24);
    $tmp16->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp16->refCount.value = 1;
    panda$collections$Set$init($tmp16);
    self->bodyImports = $tmp16;
    self->imports = self->typeImports;
    self->importStream = self->typeImportStream;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp18 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaZAlloc(224);
    $tmp18->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
    $tmp18->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp20 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
    $tmp20->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp20->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp20);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp18, ((panda$io$OutputStream*) $tmp20));
    self->llvmCodeGen = $tmp18;
    self->inClass = ((panda$core$Bit) { false });
    {
        self->outDir = p_outDir;
    }
    {
        panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp22->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp22->refCount.value = 1;
        panda$io$MemoryOutputStream* $tmp24 = (panda$io$MemoryOutputStream*) pandaZAlloc(24);
        $tmp24->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
        $tmp24->refCount.value = 1;
        panda$io$MemoryOutputStream$init($tmp24);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp22, ((panda$io$OutputStream*) $tmp24));
        self->out = $tmp22;
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp26 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp26;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName27;
    panda$core$String* tmp131;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp32;
    panda$core$String* $tmp28 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName27 = $tmp28;
    panda$core$Bit $tmp30 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName27, &$s29);
    PANDA_ASSERT($tmp30.value);
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp32, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp33 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName27, $tmp32);
        tmp131 = $tmp33;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName27));
        return tmp131;
    }
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp34 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp34;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp37 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s35, &$s36);
    panda$core$String* $tmp40 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp37, &$s38, &$s39);
    panda$core$String* $tmp43 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp40, &$s41, &$s42);
    panda$core$String* $tmp46 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp43, &$s44, &$s45);
    panda$core$String* $tmp49 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp46, &$s47, &$s48);
    panda$core$String* $tmp52 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp49, &$s50, &$s51);
    panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, p_extension);
    return $tmp53;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$61_1354;
    panda$core$Int64 $match$71_2176;
    panda$core$String* name83;
    org$pandalanguage$pandac$ClassDecl* cl88;
    panda$core$String* includePath104;
    org$pandalanguage$pandac$ClassDecl* cl115;
    org$pandalanguage$pandac$ClassDecl* cl132;
    panda$core$String* name135;
    org$pandalanguage$pandac$ClassDecl* cl140;
    panda$core$String* tmp2154;
    panda$core$String* includePath157;
    panda$core$String* tmp3167;
    {
        $match$61_1354 = p_t->typeKind;
        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 14 }));
        if ($tmp55.value) {
        {
            return &$s56;
        }
        }
        else {
        panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 12 }));
        if ($tmp57.value) {
        {
            panda$core$Int64 $tmp59 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp60 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp59, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp61;
            $tmp61 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp61->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp61->refCount = 1;
            $tmp61->value = $tmp60;
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s58, ((panda$core$Object*) $tmp61));
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
            return $tmp64;
        }
        }
        else {
        panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 13 }));
        if ($tmp65.value) {
        {
            panda$core$Int64 $tmp67 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp68 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp67, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp69;
            $tmp69 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp69->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp69->refCount = 1;
            $tmp69->value = $tmp68;
            panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s66, ((panda$core$Object*) $tmp69));
            panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s71);
            return $tmp72;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 19 }));
        if ($tmp73.value) {
        {
            return &$s74;
        }
        }
        else {
        panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 20 }));
        if ($tmp75.value) {
        {
            {
                panda$core$Int64 $tmp77 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
                $match$71_2176 = $tmp77;
                panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_2176, ((panda$core$Int64) { 4 }));
                if ($tmp78.value) {
                {
                    return &$s79;
                }
                }
                else {
                panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_2176, ((panda$core$Int64) { 8 }));
                if ($tmp80.value) {
                {
                    return &$s81;
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
        else {
        panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 10 }));
        if ($tmp82.value) {
        {
            panda$core$String* $tmp84 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp85 = panda$core$String$convert$R$panda$core$String($tmp84);
            panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, &$s86);
            name83 = $tmp87;
            org$pandalanguage$pandac$ClassDecl* $tmp89 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl88 = $tmp89;
            PANDA_ASSERT(((panda$core$Bit) { cl88 != NULL }).value);
            panda$core$Bit $tmp90 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl88);
            panda$core$Bit $tmp91 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp90);
            if ($tmp91.value) {
            {
                panda$core$Bit $tmp92 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name83));
                panda$core$Bit $tmp93 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp92);
                if ($tmp93.value) {
                {
                    panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s94, name83);
                    panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s96);
                    panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, name83);
                    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
                    (($fn101) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp100);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name83));
                }
                }
                panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name83, &$s102);
                return $tmp103;
            }
            }
            panda$core$String* $tmp106 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl88, &$s105);
            includePath104 = $tmp106;
            panda$core$Bit $tmp107 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath104));
            panda$core$Bit $tmp108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp107);
            if ($tmp108.value) {
            {
                panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s109, includePath104);
                panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
                (($fn113) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp112);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath104));
            }
            }
            return name83;
        }
        }
        else {
        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 11 }));
        if ($tmp114.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp116 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl115 = $tmp116;
            PANDA_ASSERT(((panda$core$Bit) { cl115 != NULL }).value);
            panda$core$Bit $tmp117 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl115);
            if ($tmp117.value) {
            {
                panda$core$Object* $tmp118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp119 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp118));
                panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s120);
                return $tmp121;
            }
            }
            panda$core$Object* $tmp122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp123 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp122));
            return $tmp123;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 21 }));
        if ($tmp124.value) {
        {
            panda$core$Object* $tmp125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp127 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp125))->name, &$s126);
            if ($tmp127.value) {
            {
                panda$core$Object* $tmp128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp129 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp128));
                panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, &$s130);
                return $tmp131;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp133 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl132 = $tmp133;
            panda$core$Bit $tmp134 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl132);
            if ($tmp134.value) {
            {
                panda$core$String* $tmp136 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp137 = panda$core$String$convert$R$panda$core$String($tmp136);
                panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s138);
                name135 = $tmp139;
                org$pandalanguage$pandac$ClassDecl* $tmp141 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl140 = $tmp141;
                PANDA_ASSERT(((panda$core$Bit) { cl140 != NULL }).value);
                panda$core$Bit $tmp142 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl140);
                panda$core$Bit $tmp143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp142);
                if ($tmp143.value) {
                {
                    panda$core$Bit $tmp144 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name135));
                    panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
                    if ($tmp145.value) {
                    {
                        panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s146, name135);
                        panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
                        panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, name135);
                        panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s151);
                        (($fn153) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp152);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name135));
                    }
                    }
                    {
                        panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name135, &$s155);
                        tmp2154 = $tmp156;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl140));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name135));
                        }
                        return tmp2154;
                    }
                }
                }
                panda$core$String* $tmp159 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl140, &$s158);
                includePath157 = $tmp159;
                panda$core$Bit $tmp160 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath157));
                panda$core$Bit $tmp161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
                if ($tmp161.value) {
                {
                    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s162, includePath157);
                    panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
                    (($fn166) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp165);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath157));
                }
                }
                {
                    tmp3167 = name135;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath157));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl140));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name135));
                    }
                    return tmp3167;
                }
            }
            }
            panda$core$Object* $tmp168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp169 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp168));
            return $tmp169;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1354, ((panda$core$Int64) { 22 }));
        if ($tmp170.value) {
        {
            panda$core$String* $tmp171 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp171;
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
        }
        }
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp172 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp173 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp172);
    return $tmp173;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path174;
    panda$collections$Iterator* f$Iter194;
    org$pandalanguage$pandac$FieldDecl* f207;
    org$pandalanguage$pandac$ClassDecl* value340;
    panda$collections$ListView* valueVTable343;
    if (self->inClass.value) {
    {
        org$pandalanguage$pandac$HCodeGenerator$finish(self);
    }
    }
    panda$io$MemoryOutputStream$clear(self->typeImportStream);
    panda$io$MemoryOutputStream$clear(self->typesBuffer);
    panda$io$MemoryOutputStream$clear(self->bodyImportStream);
    panda$io$MemoryOutputStream$clear(self->bodyBuffer);
    panda$collections$Set$clear(self->typeImports);
    panda$collections$Set$clear(self->bodyImports);
    self->inClass = ((panda$core$Bit) { true });
    panda$io$File* $tmp176 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s175);
    path174 = $tmp176;
    panda$io$File* $tmp177 = panda$io$File$parent$R$panda$io$File$Q(path174);
    panda$io$File$createDirectories($tmp177);
    {
        panda$io$IndentedOutputStream* $tmp178 = (panda$io$IndentedOutputStream*) pandaZAlloc(56);
        $tmp178->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp178->refCount.value = 1;
        panda$io$OutputStream* $tmp180 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path174);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp178, $tmp180);
        self->out = $tmp178;
    }
    (($fn182) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s181);
    (($fn184) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s183);
    (($fn186) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s185);
    {
        self->importStream = self->typeImportStream;
    }
    {
        self->imports = self->typeImports;
    }
    panda$core$String* $tmp188 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s187, $tmp188);
    panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
    (($fn192) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp191);
    panda$core$Int64 $tmp193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp193;
    {
        panda$collections$ListView* $tmp195 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp196 = ((panda$collections$Iterable*) $tmp195)->$class->itable;
        while ($tmp196->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp196 = $tmp196->next;
        }
        $fn198 $tmp197 = $tmp196->methods[0];
        panda$collections$Iterator* $tmp199 = $tmp197(((panda$collections$Iterable*) $tmp195));
        f$Iter194 = $tmp199;
        $l200:;
        ITable* $tmp202 = f$Iter194->$class->itable;
        while ($tmp202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp202 = $tmp202->next;
        }
        $fn204 $tmp203 = $tmp202->methods[0];
        panda$core$Bit $tmp205 = $tmp203(f$Iter194);
        panda$core$Bit $tmp206 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp205);
        if (!$tmp206.value) goto $l201;
        {
            ITable* $tmp208 = f$Iter194->$class->itable;
            while ($tmp208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp208 = $tmp208->next;
            }
            $fn210 $tmp209 = $tmp208->methods[1];
            panda$core$Object* $tmp211 = $tmp209(f$Iter194);
            f207 = ((org$pandalanguage$pandac$FieldDecl*) $tmp211);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f207);
            org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp213 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f207->type, $tmp212);
            if ($tmp213.value) {
            {
                panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s214, ((org$pandalanguage$pandac$Symbol*) f207)->name);
                panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp215, &$s216);
                panda$core$Int64 $tmp218 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp219;
                $tmp219 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
                $tmp219->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp219->refCount = 1;
                $tmp219->value = $tmp218;
                panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp217, ((panda$core$Object*) $tmp219));
                panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
                (($fn223) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp222);
            }
            }
            else {
            {
                panda$core$String* $tmp224 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f207->type);
                panda$core$String* $tmp225 = panda$core$String$convert$R$panda$core$String($tmp224);
                panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
                panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, ((org$pandalanguage$pandac$Symbol*) f207)->name);
                panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s229);
                (($fn231) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp230);
            }
            }
        }
        goto $l200;
        $l201:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
    }
    panda$core$Bit $tmp233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s232);
    if ($tmp233.value) {
    {
        (($fn235) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s234);
        (($fn237) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s236);
        (($fn239) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s238);
        (($fn241) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s240);
    }
    }
    panda$core$Int64 $tmp242 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp242;
    panda$core$String* $tmp244 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, $tmp244);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
    (($fn248) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp247);
    (($fn250) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s249);
    (($fn252) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s251);
    (($fn254) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s253);
    org$pandalanguage$pandac$Type* $tmp256 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp257 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp256);
    panda$core$String* $tmp258 = panda$core$String$convert$R$panda$core$String($tmp257);
    panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
    org$pandalanguage$pandac$Type* $tmp261 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp262 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp261);
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, $tmp262);
    panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s264);
    panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s255, $tmp265);
    panda$collections$ListView* $tmp268 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp269 = ((panda$collections$CollectionView*) $tmp268)->$class->itable;
    while ($tmp269->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp269 = $tmp269->next;
    }
    $fn271 $tmp270 = $tmp269->methods[0];
    panda$core$Int64 $tmp272 = $tmp270(((panda$collections$CollectionView*) $tmp268));
    panda$core$Int64$wrapper* $tmp273;
    $tmp273 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp273->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp273->refCount = 1;
    $tmp273->value = $tmp272;
    panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s267, ((panda$core$Object*) $tmp273));
    panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, &$s275);
    panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, $tmp276);
    panda$core$String* $tmp278 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp279 = panda$core$String$convert$R$panda$core$String($tmp278);
    panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s280);
    panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, $tmp281);
    (($fn283) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp282);
    panda$core$String* $tmp285 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s284, $tmp285);
    panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s287);
    panda$core$String* $tmp289 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, $tmp289);
    panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s291);
    (($fn293) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp292);
    panda$core$Bit $tmp294 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp294.value) {
    {
        panda$core$String* $tmp296 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s295, $tmp296);
        panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s298);
        (($fn300) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp299);
        panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp301;
        (($fn303) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s302);
        (($fn305) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s304);
        org$pandalanguage$pandac$Type* $tmp306 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp307 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp306);
        panda$core$String* $tmp308 = panda$core$String$convert$R$panda$core$String($tmp307);
        panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s309);
        (($fn311) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp310);
        panda$core$Int64 $tmp312 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp312;
        panda$core$String* $tmp314 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s313, $tmp314);
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
        (($fn318) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp317);
        panda$core$String* $tmp320 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s319, $tmp320);
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s322);
        (($fn324) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp323);
        panda$core$Int64 $tmp325 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp325;
        panda$core$String* $tmp326 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp327 = panda$core$String$convert$R$panda$core$String($tmp326);
        panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s328);
        (($fn330) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp329);
        (($fn332) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s331);
        panda$core$Int64 $tmp333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp333;
        panda$core$String* $tmp335 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s334, $tmp335);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
        (($fn339) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp338);
        org$pandalanguage$pandac$Type* $tmp341 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp342 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp341);
        value340 = $tmp342;
        panda$collections$ListView* $tmp344 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value340);
        valueVTable343 = $tmp344;
        panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s345, &$s346);
        ITable* $tmp349 = ((panda$collections$CollectionView*) valueVTable343)->$class->itable;
        while ($tmp349->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp349 = $tmp349->next;
        }
        $fn351 $tmp350 = $tmp349->methods[0];
        panda$core$Int64 $tmp352 = $tmp350(((panda$collections$CollectionView*) valueVTable343));
        panda$core$Int64$wrapper* $tmp353;
        $tmp353 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp353->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp353->refCount = 1;
        $tmp353->value = $tmp352;
        panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s348, ((panda$core$Object*) $tmp353));
        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s355);
        panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, $tmp356);
        panda$core$String* $tmp358 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp359 = panda$core$String$convert$R$panda$core$String($tmp358);
        panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
        panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, $tmp361);
        (($fn363) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp362);
        panda$core$String* $tmp365 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s364, $tmp365);
        panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s367);
        panda$core$String* $tmp369 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp370 = panda$core$String$convert$R$panda$core$String($tmp369);
        panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
        panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, $tmp372);
        (($fn374) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp373);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable343));
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path174));
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result375;
    panda$core$String* tmp4385;
    panda$core$String* tmp5388;
    org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp377 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp376);
    result375 = $tmp377;
    panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp378 = $tmp379.value;
    if (!$tmp378) goto $l380;
    panda$core$Bit $tmp382 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result375, &$s381);
    panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
    $tmp378 = $tmp383.value;
    $l380:;
    panda$core$Bit $tmp384 = { $tmp378 };
    if ($tmp384.value) {
    {
        {
            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result375, &$s386);
            tmp4385 = $tmp387;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result375));
            return tmp4385;
        }
    }
    }
    {
        tmp5388 = result375;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result375));
        return tmp5388;
    }
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result391;
    panda$core$Bit $tmp389 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp389);
    if ($tmp390.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp394 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp393 = $tmp394.value;
    if (!$tmp393) goto $l395;
    panda$core$Bit $tmp396 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp393 = $tmp396.value;
    $l395:;
    panda$core$Bit $tmp397 = { $tmp393 };
    bool $tmp392 = $tmp397.value;
    if (!$tmp392) goto $l398;
    org$pandalanguage$pandac$ClassDecl* $tmp399 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp400 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp399);
    $tmp392 = $tmp400.value;
    $l398:;
    panda$core$Bit $tmp401 = { $tmp392 };
    result391 = $tmp401;
    panda$core$Bit $tmp403 = panda$core$Bit$$NOT$R$panda$core$Bit(result391);
    bool $tmp402 = $tmp403.value;
    if ($tmp402) goto $l404;
    panda$core$Bit $tmp406 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp406);
    bool $tmp405 = $tmp407.value;
    if (!$tmp405) goto $l408;
    panda$core$Bit $tmp410 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp409 = $tmp410.value;
    if ($tmp409) goto $l411;
    panda$core$Bit $tmp412 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp409 = $tmp412.value;
    $l411:;
    panda$core$Bit $tmp413 = { $tmp409 };
    $tmp405 = $tmp413.value;
    $l408:;
    panda$core$Bit $tmp414 = { $tmp405 };
    $tmp402 = $tmp414.value;
    $l404:;
    panda$core$Bit $tmp415 = { $tmp402 };
    PANDA_ASSERT($tmp415.value);
    return result391;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator416;
    panda$collections$Iterator* p$Iter450;
    org$pandalanguage$pandac$MethodDecl$Parameter* p462;
    {
        self->importStream = self->bodyImportStream;
    }
    {
        self->imports = self->bodyImports;
    }
    separator416 = &$s417;
    panda$core$Bit $tmp418 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp418.value) {
    {
        panda$core$String* $tmp420 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s419, $tmp420);
        panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, &$s422);
        panda$core$String* $tmp424 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, $tmp424);
        panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s426);
        (($fn428) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp427);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator416));
            separator416 = &$s429;
        }
    }
    }
    else {
    {
        panda$core$String* $tmp430 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp431 = panda$core$String$convert$R$panda$core$String($tmp430);
        panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, &$s432);
        panda$core$String* $tmp434 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, $tmp434);
        panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
        (($fn438) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp437);
    }
    }
    panda$core$Bit $tmp439 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp439);
    if ($tmp440.value) {
    {
        panda$core$String* $tmp441 = panda$core$String$convert$R$panda$core$String(separator416);
        panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
        panda$core$String* $tmp444 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, $tmp444);
        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s446);
        (($fn448) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp447);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator416));
            separator416 = &$s449;
        }
    }
    }
    {
        ITable* $tmp451 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp451 = $tmp451->next;
        }
        $fn453 $tmp452 = $tmp451->methods[0];
        panda$collections$Iterator* $tmp454 = $tmp452(((panda$collections$Iterable*) p_m->parameters));
        p$Iter450 = $tmp454;
        $l455:;
        ITable* $tmp457 = p$Iter450->$class->itable;
        while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp457 = $tmp457->next;
        }
        $fn459 $tmp458 = $tmp457->methods[0];
        panda$core$Bit $tmp460 = $tmp458(p$Iter450);
        panda$core$Bit $tmp461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp460);
        if (!$tmp461.value) goto $l456;
        {
            ITable* $tmp463 = p$Iter450->$class->itable;
            while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp463 = $tmp463->next;
            }
            $fn465 $tmp464 = $tmp463->methods[1];
            panda$core$Object* $tmp466 = $tmp464(p$Iter450);
            p462 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp466);
            panda$core$String* $tmp467 = panda$core$String$convert$R$panda$core$String(separator416);
            panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp467, &$s468);
            panda$core$String* $tmp470 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p462->type);
            panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, $tmp470);
            panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp471, &$s472);
            panda$core$String* $tmp474 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p462->name);
            panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp473, $tmp474);
            panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
            (($fn478) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp477);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator416));
                separator416 = &$s479;
            }
        }
        goto $l455;
        $l456:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
    }
    (($fn481) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s480);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator416));
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn483) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s482);
    panda$core$String* $tmp484 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn485) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp484);
    panda$core$String* $tmp486 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn487) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp486);
    (($fn489) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s488);
    panda$core$String* $tmp490 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn491) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp490);
    panda$core$String* $tmp492 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn493) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp492);
    (($fn495) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s494);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeImportStream));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typesBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bodyImportStream));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bodyBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeImports));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bodyImports));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->imports));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->importStream));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmCodeGen));
}

