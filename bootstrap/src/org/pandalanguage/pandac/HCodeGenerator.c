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
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
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

typedef panda$core$Object* (*$fn68)(panda$core$Weak*);
typedef panda$core$Object* (*$fn71)(panda$core$Weak*);
typedef void (*$fn84)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn97)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn100)(panda$core$Weak*);
typedef panda$core$Object* (*$fn103)(panda$core$Weak*);
typedef panda$core$Object* (*$fn122)(panda$core$Weak*);
typedef panda$core$Object* (*$fn132)(panda$core$Weak*);
typedef panda$core$Object* (*$fn135)(panda$core$Weak*);
typedef void (*$fn148)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn189)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn192)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn197)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn203)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn211)(panda$core$Weak*);
typedef void (*$fn224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn240)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn255)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn269)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn274)(panda$collections$CollectionView*);
typedef void (*$fn286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn296)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn297)(panda$core$Weak*);
typedef void (*$fn305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn310)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn316)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn323)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn344)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn346)(panda$core$Weak*);
typedef panda$core$Object* (*$fn351)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn360)(panda$collections$CollectionView*);
typedef void (*$fn372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn383)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn408)(panda$core$Weak*);
typedef panda$core$Object* (*$fn410)(panda$core$Weak*);
typedef void (*$fn441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn466)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn472)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn478)(panda$collections$Iterator*);
typedef void (*$fn491)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn494)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn508)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b", 24, -3891582111104392533, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b", 24, 4222731004450900160, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->typeImportStream = NULL;
    self->typesBuffer = NULL;
    self->types = NULL;
    self->bodyImportStream = NULL;
    self->bodyBuffer = NULL;
    self->body = NULL;
    self->typeImports = NULL;
    self->bodyImports = NULL;
    self->imports = NULL;
    self->importStream = NULL;
    self->outDir = NULL;
    self->out = NULL;
    self->llvmCodeGen = NULL;
    panda$io$MemoryOutputStream* $tmp2 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp2);
    self->typeImportStream = $tmp2;
    panda$io$MemoryOutputStream* $tmp3 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp3);
    self->typesBuffer = $tmp3;
    panda$io$IndentedOutputStream* $tmp4 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp4, ((panda$io$OutputStream*) self->typesBuffer));
    self->types = $tmp4;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp5);
    self->bodyImportStream = $tmp5;
    panda$io$MemoryOutputStream* $tmp6 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp6);
    self->bodyBuffer = $tmp6;
    panda$io$IndentedOutputStream* $tmp7 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp7, ((panda$io$OutputStream*) self->bodyBuffer));
    self->body = $tmp7;
    panda$collections$Set* $tmp8 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp8);
    self->typeImports = $tmp8;
    panda$collections$Set* $tmp9 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp9);
    self->bodyImports = $tmp9;
    self->imports = self->typeImports;
    self->importStream = self->typeImportStream;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp10 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp12 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp12);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp10, &$s11, ((panda$io$OutputStream*) $tmp12));
    self->llvmCodeGen = $tmp10;
    self->inClass = ((panda$core$Bit) { false });
    {
        self->outDir = p_outDir;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    }
    {
        panda$io$IndentedOutputStream* $tmp13 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp14 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp14);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp13, ((panda$io$OutputStream*) $tmp14));
        self->out = $tmp13;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp15 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp15;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName16;
    panda$core$String* tmp120;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp21;
    panda$core$String* $tmp17 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName16 = $tmp17;
    panda$core$Bit $tmp19 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName16, &$s18);
    PANDA_ASSERT($tmp19.value);
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp21, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp22 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName16, $tmp21);
        tmp120 = $tmp22;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName16));
        return tmp120;
    }
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp23 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp23;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp26 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s24, &$s25);
    panda$core$String* $tmp29 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp26, &$s27, &$s28);
    panda$core$String* $tmp32 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp29, &$s30, &$s31);
    panda$core$String* $tmp35 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp32, &$s33, &$s34);
    panda$core$String* $tmp38 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp35, &$s36, &$s37);
    panda$core$String* $tmp41 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp38, &$s39, &$s40);
    panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, p_extension);
    return $tmp42;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name62;
    org$pandalanguage$pandac$ClassDecl* cl67;
    panda$core$String* tmp285;
    panda$core$String* includePath88;
    panda$core$String* tmp398;
    org$pandalanguage$pandac$ClassDecl* cl99;
    panda$core$String* tmp4106;
    panda$core$String* tmp5111;
    org$pandalanguage$pandac$ClassDecl* cl121;
    panda$core$String* name126;
    org$pandalanguage$pandac$ClassDecl* cl131;
    panda$core$String* tmp6149;
    panda$core$String* tmp8152;
    panda$core$String* includePath153;
    panda$core$String* tmp7163;
    panda$core$String* tmp9164;
    panda$core$String* tmp10165;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s43;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp45 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp46 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp45, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp47;
            $tmp47 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp47->value = $tmp46;
            panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s44, ((panda$core$Object*) $tmp47));
            panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s49);
            return $tmp50;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp52 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp53 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp52, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp54;
            $tmp54 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp54->value = $tmp53;
            panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s51, ((panda$core$Object*) $tmp54));
            panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s56);
            return $tmp57;
        }
        break;
        case 19:
        {
            return &$s58;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp59 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp59.value) {
                case 4:
                {
                    return &$s60;
                }
                break;
                case 8:
                {
                    return &$s61;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        break;
        case 10:
        {
            panda$core$String* $tmp63 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp64 = panda$core$String$convert$R$panda$core$String($tmp63);
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            name62 = $tmp66;
            panda$core$Object* $tmp69 = (($fn68) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp70 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp69), p_t);
            cl67 = $tmp70;
            PANDA_ASSERT(((panda$core$Bit) { cl67 != NULL }).value);
            panda$core$Object* $tmp72 = (($fn71) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Bit $tmp73 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp72), cl67);
            panda$core$Bit $tmp74 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp73);
            if ($tmp74.value) {
            {
                panda$core$Bit $tmp75 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name62));
                panda$core$Bit $tmp76 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp75);
                if ($tmp76.value) {
                {
                    panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s77, name62);
                    panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp78, &$s79);
                    panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, name62);
                    panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, &$s82);
                    (($fn84) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp83);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name62));
                }
                }
                {
                    panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name62, &$s86);
                    tmp285 = $tmp87;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl67));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name62));
                    }
                    return tmp285;
                }
            }
            }
            panda$core$String* $tmp90 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl67, &$s89);
            includePath88 = $tmp90;
            panda$core$Bit $tmp91 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath88));
            panda$core$Bit $tmp92 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp91);
            if ($tmp92.value) {
            {
                panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s93, includePath88);
                panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s95);
                (($fn97) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp96);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath88));
            }
            }
            {
                tmp398 = name62;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath88));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl67));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name62));
                }
                return tmp398;
            }
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp101 = (($fn100) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp102 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp101), p_t);
            cl99 = $tmp102;
            PANDA_ASSERT(((panda$core$Bit) { cl99 != NULL }).value);
            panda$core$Object* $tmp104 = (($fn103) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Bit $tmp105 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp104), cl99);
            if ($tmp105.value) {
            {
                {
                    panda$core$Object* $tmp107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp108 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp107));
                    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
                    tmp4106 = $tmp110;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl99));
                    return tmp4106;
                }
            }
            }
            {
                panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp113 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp112));
                tmp5111 = $tmp113;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl99));
                return tmp5111;
            }
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp114))->name, &$s115);
            if ($tmp116.value) {
            {
                panda$core$Object* $tmp117 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp118 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp117));
                panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s119);
                return $tmp120;
            }
            }
            panda$core$Object* $tmp123 = (($fn122) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp124 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp123), p_t);
            cl121 = $tmp124;
            panda$core$Bit $tmp125 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl121);
            if ($tmp125.value) {
            {
                panda$core$String* $tmp127 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp128 = panda$core$String$convert$R$panda$core$String($tmp127);
                panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
                name126 = $tmp130;
                panda$core$Object* $tmp133 = (($fn132) self->compiler->$class->vtable[2])(self->compiler);
                org$pandalanguage$pandac$ClassDecl* $tmp134 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp133), p_t);
                cl131 = $tmp134;
                PANDA_ASSERT(((panda$core$Bit) { cl131 != NULL }).value);
                panda$core$Object* $tmp136 = (($fn135) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Bit $tmp137 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp136), cl131);
                panda$core$Bit $tmp138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp137);
                if ($tmp138.value) {
                {
                    panda$core$Bit $tmp139 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name126));
                    panda$core$Bit $tmp140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp139);
                    if ($tmp140.value) {
                    {
                        panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s141, name126);
                        panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s143);
                        panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, name126);
                        panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s146);
                        (($fn148) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp147);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name126));
                    }
                    }
                    {
                        panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name126, &$s150);
                        tmp6149 = $tmp151;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl131));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name126));
                        }
                        {
                            tmp8152 = tmp6149;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl121));
                            return tmp8152;
                        }
                    }
                }
                }
                panda$core$String* $tmp155 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl131, &$s154);
                includePath153 = $tmp155;
                panda$core$Bit $tmp156 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath153));
                panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
                if ($tmp157.value) {
                {
                    panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s158, includePath153);
                    panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, &$s160);
                    (($fn162) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp161);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath153));
                }
                }
                {
                    tmp7163 = name126;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath153));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl131));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name126));
                    }
                    {
                        tmp9164 = tmp7163;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl121));
                        return tmp9164;
                    }
                }
            }
            }
            {
                panda$core$Object* $tmp166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp167 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp166));
                tmp10165 = $tmp167;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl121));
                return tmp10165;
            }
        }
        break;
        case 22:
        {
            panda$core$String* $tmp168 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp168;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        panda$core$Weak* $tmp169 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp169, ((panda$core$Object*) p_compiler));
        self->compiler = $tmp169;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp170 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp171 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp170);
    return $tmp171;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path172;
    panda$collections$Iterator* Iter$163$9191;
    org$pandalanguage$pandac$FieldDecl* f206;
    org$pandalanguage$pandac$ClassDecl* value345;
    panda$collections$ListView* valueVTable350;
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
    panda$io$File* $tmp174 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s173);
    path172 = $tmp174;
    panda$io$File* $tmp175 = panda$io$File$parent$R$panda$io$File$Q(path172);
    panda$io$File$createDirectories($tmp175);
    {
        panda$io$IndentedOutputStream* $tmp176 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp177 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path172);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp176, $tmp177);
        self->out = $tmp176;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
    (($fn179) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s178);
    (($fn181) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s180);
    (($fn183) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s182);
    {
        self->importStream = self->typeImportStream;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->importStream));
    }
    {
        self->imports = self->typeImports;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->imports));
    }
    panda$core$String* $tmp185 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s184, $tmp185);
    panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
    (($fn189) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp188);
    panda$core$Int64 $tmp190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp190;
    {
        panda$core$Object* $tmp193 = (($fn192) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp194 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp193), p_cl);
        ITable* $tmp195 = ((panda$collections$Iterable*) $tmp194)->$class->itable;
        while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp195 = $tmp195->next;
        }
        $fn197 $tmp196 = $tmp195->methods[0];
        panda$collections$Iterator* $tmp198 = $tmp196(((panda$collections$Iterable*) $tmp194));
        Iter$163$9191 = $tmp198;
        $l199:;
        ITable* $tmp201 = Iter$163$9191->$class->itable;
        while ($tmp201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp201 = $tmp201->next;
        }
        $fn203 $tmp202 = $tmp201->methods[0];
        panda$core$Bit $tmp204 = $tmp202(Iter$163$9191);
        panda$core$Bit $tmp205 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp204);
        if (!$tmp205.value) goto $l200;
        {
            ITable* $tmp207 = Iter$163$9191->$class->itable;
            while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp207 = $tmp207->next;
            }
            $fn209 $tmp208 = $tmp207->methods[1];
            panda$core$Object* $tmp210 = $tmp208(Iter$163$9191);
            f206 = ((org$pandalanguage$pandac$FieldDecl*) $tmp210);
            panda$core$Object* $tmp212 = (($fn211) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp212), f206);
            org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp214 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f206->type, $tmp213);
            if ($tmp214.value) {
            {
                panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s215, ((org$pandalanguage$pandac$Symbol*) f206)->name);
                panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s217);
                panda$core$Int64 $tmp219 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp220;
                $tmp220 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp220->value = $tmp219;
                panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp218, ((panda$core$Object*) $tmp220));
                panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s222);
                (($fn224) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp223);
            }
            }
            else {
            {
                panda$core$String* $tmp225 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f206->type);
                panda$core$String* $tmp226 = panda$core$String$convert$R$panda$core$String($tmp225);
                panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s227);
                panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, ((org$pandalanguage$pandac$Symbol*) f206)->name);
                panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s230);
                (($fn232) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp231);
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f206));
        }
        goto $l199;
        $l200:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$9191));
    }
    panda$core$Bit $tmp234 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s233);
    if ($tmp234.value) {
    {
        (($fn236) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s235);
        (($fn238) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s237);
        (($fn240) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s239);
        (($fn242) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s241);
    }
    }
    panda$core$Int64 $tmp243 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp243;
    panda$core$String* $tmp245 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s244, $tmp245);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
    (($fn249) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp248);
    (($fn251) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s250);
    (($fn253) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s252);
    (($fn255) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s254);
    org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp258 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp257);
    panda$core$String* $tmp259 = panda$core$String$convert$R$panda$core$String($tmp258);
    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
    org$pandalanguage$pandac$Type* $tmp262 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp263 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp262);
    panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, $tmp263);
    panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s265);
    panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s256, $tmp266);
    panda$core$Object* $tmp270 = (($fn269) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp271 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp270), p_cl);
    ITable* $tmp272 = ((panda$collections$CollectionView*) $tmp271)->$class->itable;
    while ($tmp272->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp272 = $tmp272->next;
    }
    $fn274 $tmp273 = $tmp272->methods[0];
    panda$core$Int64 $tmp275 = $tmp273(((panda$collections$CollectionView*) $tmp271));
    panda$core$Int64$wrapper* $tmp276;
    $tmp276 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp276->value = $tmp275;
    panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s268, ((panda$core$Object*) $tmp276));
    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s278);
    panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, $tmp279);
    panda$core$String* $tmp281 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp282 = panda$core$String$convert$R$panda$core$String($tmp281);
    panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
    panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, $tmp284);
    (($fn286) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp285);
    panda$core$String* $tmp288 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s287, $tmp288);
    panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s290);
    panda$core$String* $tmp292 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, $tmp292);
    panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, &$s294);
    (($fn296) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp295);
    panda$core$Object* $tmp298 = (($fn297) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp299 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp298), p_cl);
    if ($tmp299.value) {
    {
        panda$core$String* $tmp301 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, $tmp301);
        panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s303);
        (($fn305) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp304);
        panda$core$Int64 $tmp306 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp306;
        (($fn308) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s307);
        (($fn310) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s309);
        org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp312 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp311);
        panda$core$String* $tmp313 = panda$core$String$convert$R$panda$core$String($tmp312);
        panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s314);
        (($fn316) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp315);
        panda$core$Int64 $tmp317 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp317;
        panda$core$String* $tmp319 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s318, $tmp319);
        panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s321);
        (($fn323) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp322);
        panda$core$String* $tmp325 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s324, $tmp325);
        panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s327);
        (($fn329) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp328);
        panda$core$Int64 $tmp330 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp330;
        panda$core$String* $tmp331 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp332 = panda$core$String$convert$R$panda$core$String($tmp331);
        panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
        (($fn335) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp334);
        (($fn337) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s336);
        panda$core$Int64 $tmp338 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp338;
        panda$core$String* $tmp340 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s339, $tmp340);
        panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s342);
        (($fn344) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp343);
        panda$core$Object* $tmp347 = (($fn346) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Type* $tmp348 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp349 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp347), $tmp348);
        value345 = $tmp349;
        panda$core$Object* $tmp352 = (($fn351) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp353 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp352), value345);
        valueVTable350 = $tmp353;
        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s354, &$s355);
        ITable* $tmp358 = ((panda$collections$CollectionView*) valueVTable350)->$class->itable;
        while ($tmp358->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp358 = $tmp358->next;
        }
        $fn360 $tmp359 = $tmp358->methods[0];
        panda$core$Int64 $tmp361 = $tmp359(((panda$collections$CollectionView*) valueVTable350));
        panda$core$Int64$wrapper* $tmp362;
        $tmp362 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp362->value = $tmp361;
        panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s357, ((panda$core$Object*) $tmp362));
        panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
        panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, $tmp365);
        panda$core$String* $tmp367 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp368 = panda$core$String$convert$R$panda$core$String($tmp367);
        panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s369);
        panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, $tmp370);
        (($fn372) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp371);
        panda$core$String* $tmp374 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s373, $tmp374);
        panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
        panda$core$String* $tmp378 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp379 = panda$core$String$convert$R$panda$core$String($tmp378);
        panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp379, &$s380);
        panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, $tmp381);
        (($fn383) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp382);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value345));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable350));
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path172));
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result384;
    panda$core$String* tmp11394;
    panda$core$String* tmp12397;
    org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp386 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp385);
    result384 = $tmp386;
    panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp387 = $tmp388.value;
    if (!$tmp387) goto $l389;
    panda$core$Bit $tmp391 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result384, &$s390);
    panda$core$Bit $tmp392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp391);
    $tmp387 = $tmp392.value;
    $l389:;
    panda$core$Bit $tmp393 = { $tmp387 };
    if ($tmp393.value) {
    {
        {
            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result384, &$s395);
            tmp11394 = $tmp396;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result384));
            return tmp11394;
        }
    }
    }
    {
        tmp12397 = result384;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result384));
        return tmp12397;
    }
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result400;
    panda$core$Bit $tmp398 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp398);
    if ($tmp399.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp403 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp402 = $tmp403.value;
    if (!$tmp402) goto $l404;
    panda$core$Bit $tmp405 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp402 = $tmp405.value;
    $l404:;
    panda$core$Bit $tmp406 = { $tmp402 };
    bool $tmp401 = $tmp406.value;
    if (!$tmp401) goto $l407;
    panda$core$Object* $tmp409 = (($fn408) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp411 = (($fn410) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp412 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp411), p_m->returnType);
    panda$core$Bit $tmp413 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp409), $tmp412);
    $tmp401 = $tmp413.value;
    $l407:;
    panda$core$Bit $tmp414 = { $tmp401 };
    result400 = $tmp414;
    panda$core$Bit $tmp416 = panda$core$Bit$$NOT$R$panda$core$Bit(result400);
    bool $tmp415 = $tmp416.value;
    if ($tmp415) goto $l417;
    panda$core$Bit $tmp419 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp420 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp419);
    bool $tmp418 = $tmp420.value;
    if (!$tmp418) goto $l421;
    panda$core$Bit $tmp423 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp422 = $tmp423.value;
    if ($tmp422) goto $l424;
    panda$core$Bit $tmp425 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp422 = $tmp425.value;
    $l424:;
    panda$core$Bit $tmp426 = { $tmp422 };
    $tmp418 = $tmp426.value;
    $l421:;
    panda$core$Bit $tmp427 = { $tmp418 };
    $tmp415 = $tmp427.value;
    $l417:;
    panda$core$Bit $tmp428 = { $tmp415 };
    PANDA_ASSERT($tmp428.value);
    return result400;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator429;
    panda$collections$Iterator* Iter$268$9463;
    org$pandalanguage$pandac$MethodDecl$Parameter* p475;
    {
        self->importStream = self->bodyImportStream;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->importStream));
    }
    {
        self->imports = self->bodyImports;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->imports));
    }
    separator429 = &$s430;
    panda$core$Bit $tmp431 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp431.value) {
    {
        panda$core$String* $tmp433 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s432, $tmp433);
        panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s435);
        panda$core$String* $tmp437 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, $tmp437);
        panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s439);
        (($fn441) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp440);
        {
            separator429 = &$s442;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator429));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp443 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp444 = panda$core$String$convert$R$panda$core$String($tmp443);
        panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s445);
        panda$core$String* $tmp447 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, $tmp447);
        panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s449);
        (($fn451) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp450);
    }
    }
    panda$core$Bit $tmp452 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp452);
    if ($tmp453.value) {
    {
        panda$core$String* $tmp454 = panda$core$String$convert$R$panda$core$String(separator429);
        panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s455);
        panda$core$String* $tmp457 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, $tmp457);
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s459);
        (($fn461) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp460);
        {
            separator429 = &$s462;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator429));
        }
    }
    }
    {
        ITable* $tmp464 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp464 = $tmp464->next;
        }
        $fn466 $tmp465 = $tmp464->methods[0];
        panda$collections$Iterator* $tmp467 = $tmp465(((panda$collections$Iterable*) p_m->parameters));
        Iter$268$9463 = $tmp467;
        $l468:;
        ITable* $tmp470 = Iter$268$9463->$class->itable;
        while ($tmp470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp470 = $tmp470->next;
        }
        $fn472 $tmp471 = $tmp470->methods[0];
        panda$core$Bit $tmp473 = $tmp471(Iter$268$9463);
        panda$core$Bit $tmp474 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp473);
        if (!$tmp474.value) goto $l469;
        {
            ITable* $tmp476 = Iter$268$9463->$class->itable;
            while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp476 = $tmp476->next;
            }
            $fn478 $tmp477 = $tmp476->methods[1];
            panda$core$Object* $tmp479 = $tmp477(Iter$268$9463);
            p475 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp479);
            panda$core$String* $tmp480 = panda$core$String$convert$R$panda$core$String(separator429);
            panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
            panda$core$String* $tmp483 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p475->type);
            panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, $tmp483);
            panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s485);
            panda$core$String* $tmp487 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p475->name);
            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, $tmp487);
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s489);
            (($fn491) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp490);
            {
                separator429 = &$s492;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator429));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p475));
        }
        goto $l468;
        $l469:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$9463));
    }
    (($fn494) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s493);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator429));
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn496) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s495);
    panda$core$String* $tmp497 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn498) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp497);
    panda$core$String* $tmp499 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn500) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp499);
    (($fn502) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s501);
    panda$core$String* $tmp503 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn504) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp503);
    panda$core$String* $tmp505 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn506) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp505);
    (($fn508) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s507);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
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

