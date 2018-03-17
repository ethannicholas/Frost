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

typedef void (*$fn79)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn92)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn173)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn191)(panda$collections$Iterator*);
typedef void (*$fn204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn229)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn235)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn252)(panda$collections$CollectionView*);
typedef void (*$fn264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn284)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn320)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn332)(panda$collections$CollectionView*);
typedef void (*$fn344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn429)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn434)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn440)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn446)(panda$collections$Iterator*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn476)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b", 24, -3891582111104392533, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b", 24, 4222731004450900160, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->out = NULL;
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
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp11);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp10, ((panda$io$OutputStream*) $tmp11));
    self->llvmCodeGen = $tmp10;
    self->inClass = ((panda$core$Bit) { false });
    {
        self->outDir = p_outDir;
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
        panda$io$IndentedOutputStream* $tmp12 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp13);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp12, ((panda$io$OutputStream*) $tmp13));
        self->out = $tmp12;
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp14 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp14;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName15;
    panda$core$String* tmp119;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp20;
    panda$core$String* $tmp16 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName15 = $tmp16;
    panda$core$Bit $tmp18 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName15, &$s17);
    PANDA_ASSERT($tmp18.value);
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp20, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp21 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName15, $tmp20);
        tmp119 = $tmp21;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName15));
        return tmp119;
    }
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp22 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp22;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp25 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s23, &$s24);
    panda$core$String* $tmp28 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp25, &$s26, &$s27);
    panda$core$String* $tmp31 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp28, &$s29, &$s30);
    panda$core$String* $tmp34 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp31, &$s32, &$s33);
    panda$core$String* $tmp37 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp34, &$s35, &$s36);
    panda$core$String* $tmp40 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp37, &$s38, &$s39);
    panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, p_extension);
    return $tmp41;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name61;
    org$pandalanguage$pandac$ClassDecl* cl66;
    panda$core$String* tmp280;
    panda$core$String* includePath83;
    panda$core$String* tmp393;
    org$pandalanguage$pandac$ClassDecl* cl94;
    panda$core$String* tmp497;
    panda$core$String* tmp5102;
    org$pandalanguage$pandac$ClassDecl* cl112;
    panda$core$String* name115;
    org$pandalanguage$pandac$ClassDecl* cl120;
    panda$core$String* tmp6134;
    panda$core$String* tmp8137;
    panda$core$String* includePath138;
    panda$core$String* tmp7148;
    panda$core$String* tmp9149;
    panda$core$String* tmp10150;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s42;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp44 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp45 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp44, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp46;
            $tmp46 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp46->value = $tmp45;
            panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s43, ((panda$core$Object*) $tmp46));
            panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s48);
            return $tmp49;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp51 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp52 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp51, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp53;
            $tmp53 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp53->value = $tmp52;
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s50, ((panda$core$Object*) $tmp53));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
            return $tmp56;
        }
        break;
        case 19:
        {
            return &$s57;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp58 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp58.value) {
                case 4:
                {
                    return &$s59;
                }
                break;
                case 8:
                {
                    return &$s60;
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
            panda$core$String* $tmp62 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp63 = panda$core$String$convert$R$panda$core$String($tmp62);
            panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
            name61 = $tmp65;
            org$pandalanguage$pandac$ClassDecl* $tmp67 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl66 = $tmp67;
            PANDA_ASSERT(((panda$core$Bit) { cl66 != NULL }).value);
            panda$core$Bit $tmp68 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl66);
            panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
            if ($tmp69.value) {
            {
                panda$core$Bit $tmp70 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name61));
                panda$core$Bit $tmp71 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp70);
                if ($tmp71.value) {
                {
                    panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s72, name61);
                    panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, &$s74);
                    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp75, name61);
                    panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, &$s77);
                    (($fn79) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp78);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name61));
                }
                }
                {
                    panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name61, &$s81);
                    tmp280 = $tmp82;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl66));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name61));
                    }
                    return tmp280;
                }
            }
            }
            panda$core$String* $tmp85 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl66, &$s84);
            includePath83 = $tmp85;
            panda$core$Bit $tmp86 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath83));
            panda$core$Bit $tmp87 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp86);
            if ($tmp87.value) {
            {
                panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s88, includePath83);
                panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s90);
                (($fn92) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp91);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath83));
            }
            }
            {
                tmp393 = name61;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath83));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl66));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name61));
                }
                return tmp393;
            }
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp95 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl94 = $tmp95;
            PANDA_ASSERT(((panda$core$Bit) { cl94 != NULL }).value);
            panda$core$Bit $tmp96 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl94);
            if ($tmp96.value) {
            {
                {
                    panda$core$Object* $tmp98 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp99 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp98));
                    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s100);
                    tmp497 = $tmp101;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl94));
                    return tmp497;
                }
            }
            }
            {
                panda$core$Object* $tmp103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp104 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp103));
                tmp5102 = $tmp104;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl94));
                return tmp5102;
            }
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp107 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp105))->name, &$s106);
            if ($tmp107.value) {
            {
                panda$core$Object* $tmp108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp109 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp108));
                panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s110);
                return $tmp111;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp113 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl112 = $tmp113;
            panda$core$Bit $tmp114 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl112);
            if ($tmp114.value) {
            {
                panda$core$String* $tmp116 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp117 = panda$core$String$convert$R$panda$core$String($tmp116);
                panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp117, &$s118);
                name115 = $tmp119;
                org$pandalanguage$pandac$ClassDecl* $tmp121 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl120 = $tmp121;
                PANDA_ASSERT(((panda$core$Bit) { cl120 != NULL }).value);
                panda$core$Bit $tmp122 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl120);
                panda$core$Bit $tmp123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp122);
                if ($tmp123.value) {
                {
                    panda$core$Bit $tmp124 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name115));
                    panda$core$Bit $tmp125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp124);
                    if ($tmp125.value) {
                    {
                        panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s126, name115);
                        panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s128);
                        panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, name115);
                        panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, &$s131);
                        (($fn133) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp132);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name115));
                    }
                    }
                    {
                        panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name115, &$s135);
                        tmp6134 = $tmp136;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl120));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name115));
                        }
                        {
                            tmp8137 = tmp6134;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl112));
                            return tmp8137;
                        }
                    }
                }
                }
                panda$core$String* $tmp140 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl120, &$s139);
                includePath138 = $tmp140;
                panda$core$Bit $tmp141 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath138));
                panda$core$Bit $tmp142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp141);
                if ($tmp142.value) {
                {
                    panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s143, includePath138);
                    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s145);
                    (($fn147) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp146);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath138));
                }
                }
                {
                    tmp7148 = name115;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath138));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl120));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name115));
                    }
                    {
                        tmp9149 = tmp7148;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl112));
                        return tmp9149;
                    }
                }
            }
            }
            {
                panda$core$Object* $tmp151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp152 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp151));
                tmp10150 = $tmp152;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl112));
                return tmp10150;
            }
        }
        break;
        case 22:
        {
            panda$core$String* $tmp153 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp153;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
        self->compiler = p_compiler;
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp154 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp155 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp154);
    return $tmp155;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path156;
    panda$collections$Iterator* Iter$162$9175;
    org$pandalanguage$pandac$FieldDecl* f188;
    org$pandalanguage$pandac$ClassDecl* value321;
    panda$collections$ListView* valueVTable324;
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
    panda$io$File* $tmp158 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s157);
    path156 = $tmp158;
    panda$io$File* $tmp159 = panda$io$File$parent$R$panda$io$File$Q(path156);
    panda$io$File$createDirectories($tmp159);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
        panda$io$IndentedOutputStream* $tmp160 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp161 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path156);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp160, $tmp161);
        self->out = $tmp160;
    }
    (($fn163) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s162);
    (($fn165) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s164);
    (($fn167) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s166);
    {
        self->importStream = self->typeImportStream;
    }
    {
        self->imports = self->typeImports;
    }
    panda$core$String* $tmp169 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s168, $tmp169);
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s171);
    (($fn173) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp172);
    panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp174;
    {
        panda$collections$ListView* $tmp176 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp177 = ((panda$collections$Iterable*) $tmp176)->$class->itable;
        while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp177 = $tmp177->next;
        }
        $fn179 $tmp178 = $tmp177->methods[0];
        panda$collections$Iterator* $tmp180 = $tmp178(((panda$collections$Iterable*) $tmp176));
        Iter$162$9175 = $tmp180;
        $l181:;
        ITable* $tmp183 = Iter$162$9175->$class->itable;
        while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp183 = $tmp183->next;
        }
        $fn185 $tmp184 = $tmp183->methods[0];
        panda$core$Bit $tmp186 = $tmp184(Iter$162$9175);
        panda$core$Bit $tmp187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp186);
        if (!$tmp187.value) goto $l182;
        {
            ITable* $tmp189 = Iter$162$9175->$class->itable;
            while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp189 = $tmp189->next;
            }
            $fn191 $tmp190 = $tmp189->methods[1];
            panda$core$Object* $tmp192 = $tmp190(Iter$162$9175);
            f188 = ((org$pandalanguage$pandac$FieldDecl*) $tmp192);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f188);
            org$pandalanguage$pandac$Type* $tmp193 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp194 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f188->type, $tmp193);
            if ($tmp194.value) {
            {
                panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s195, ((org$pandalanguage$pandac$Symbol*) f188)->name);
                panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
                panda$core$Int64 $tmp199 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp200;
                $tmp200 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp200->value = $tmp199;
                panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp198, ((panda$core$Object*) $tmp200));
                panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
                (($fn204) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp203);
            }
            }
            else {
            {
                panda$core$String* $tmp205 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f188->type);
                panda$core$String* $tmp206 = panda$core$String$convert$R$panda$core$String($tmp205);
                panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s207);
                panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, ((org$pandalanguage$pandac$Symbol*) f188)->name);
                panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s210);
                (($fn212) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp211);
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f188));
        }
        goto $l181;
        $l182:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$162$9175));
    }
    panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s213);
    if ($tmp214.value) {
    {
        (($fn216) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s215);
        (($fn218) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s217);
        (($fn220) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s219);
        (($fn222) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s221);
    }
    }
    panda$core$Int64 $tmp223 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp223;
    panda$core$String* $tmp225 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s224, $tmp225);
    panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s227);
    (($fn229) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp228);
    (($fn231) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s230);
    (($fn233) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s232);
    (($fn235) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s234);
    org$pandalanguage$pandac$Type* $tmp237 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp238 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp237);
    panda$core$String* $tmp239 = panda$core$String$convert$R$panda$core$String($tmp238);
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
    org$pandalanguage$pandac$Type* $tmp242 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp243 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp242);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, $tmp243);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s236, $tmp246);
    panda$collections$ListView* $tmp249 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp250 = ((panda$collections$CollectionView*) $tmp249)->$class->itable;
    while ($tmp250->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp250 = $tmp250->next;
    }
    $fn252 $tmp251 = $tmp250->methods[0];
    panda$core$Int64 $tmp253 = $tmp251(((panda$collections$CollectionView*) $tmp249));
    panda$core$Int64$wrapper* $tmp254;
    $tmp254 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp254->value = $tmp253;
    panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s248, ((panda$core$Object*) $tmp254));
    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
    panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, $tmp257);
    panda$core$String* $tmp259 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp260 = panda$core$String$convert$R$panda$core$String($tmp259);
    panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, &$s261);
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, $tmp262);
    (($fn264) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp263);
    panda$core$String* $tmp266 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, $tmp266);
    panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s268);
    panda$core$String* $tmp270 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, $tmp270);
    panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
    (($fn274) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp273);
    panda$core$Bit $tmp275 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp275.value) {
    {
        panda$core$String* $tmp277 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s276, $tmp277);
        panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s279);
        (($fn281) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp280);
        panda$core$Int64 $tmp282 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp282;
        (($fn284) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s283);
        (($fn286) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s285);
        org$pandalanguage$pandac$Type* $tmp287 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp288 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp287);
        panda$core$String* $tmp289 = panda$core$String$convert$R$panda$core$String($tmp288);
        panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s290);
        (($fn292) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp291);
        panda$core$Int64 $tmp293 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp293;
        panda$core$String* $tmp295 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s294, $tmp295);
        panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s297);
        (($fn299) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp298);
        panda$core$String* $tmp301 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, $tmp301);
        panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s303);
        (($fn305) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp304);
        panda$core$Int64 $tmp306 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp306;
        panda$core$String* $tmp307 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp308 = panda$core$String$convert$R$panda$core$String($tmp307);
        panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s309);
        (($fn311) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp310);
        (($fn313) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s312);
        panda$core$Int64 $tmp314 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp314;
        panda$core$String* $tmp316 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s315, $tmp316);
        panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s318);
        (($fn320) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp319);
        org$pandalanguage$pandac$Type* $tmp322 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp323 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp322);
        value321 = $tmp323;
        panda$collections$ListView* $tmp325 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value321);
        valueVTable324 = $tmp325;
        panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s326, &$s327);
        ITable* $tmp330 = ((panda$collections$CollectionView*) valueVTable324)->$class->itable;
        while ($tmp330->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp330 = $tmp330->next;
        }
        $fn332 $tmp331 = $tmp330->methods[0];
        panda$core$Int64 $tmp333 = $tmp331(((panda$collections$CollectionView*) valueVTable324));
        panda$core$Int64$wrapper* $tmp334;
        $tmp334 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp334->value = $tmp333;
        panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s329, ((panda$core$Object*) $tmp334));
        panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s336);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp328, $tmp337);
        panda$core$String* $tmp339 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp340 = panda$core$String$convert$R$panda$core$String($tmp339);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
        panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, $tmp342);
        (($fn344) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp343);
        panda$core$String* $tmp346 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s345, $tmp346);
        panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s348);
        panda$core$String* $tmp350 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp351 = panda$core$String$convert$R$panda$core$String($tmp350);
        panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
        panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, $tmp353);
        (($fn355) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp354);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable324));
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path156));
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result356;
    panda$core$String* tmp11366;
    panda$core$String* tmp12369;
    org$pandalanguage$pandac$Type* $tmp357 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp358 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp357);
    result356 = $tmp358;
    panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp359 = $tmp360.value;
    if (!$tmp359) goto $l361;
    panda$core$Bit $tmp363 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result356, &$s362);
    panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
    $tmp359 = $tmp364.value;
    $l361:;
    panda$core$Bit $tmp365 = { $tmp359 };
    if ($tmp365.value) {
    {
        {
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result356, &$s367);
            tmp11366 = $tmp368;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result356));
            return tmp11366;
        }
    }
    }
    {
        tmp12369 = result356;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result356));
        return tmp12369;
    }
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result372;
    panda$core$Bit $tmp370 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp371 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp370);
    if ($tmp371.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp375 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp374 = $tmp375.value;
    if (!$tmp374) goto $l376;
    panda$core$Bit $tmp377 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp374 = $tmp377.value;
    $l376:;
    panda$core$Bit $tmp378 = { $tmp374 };
    bool $tmp373 = $tmp378.value;
    if (!$tmp373) goto $l379;
    org$pandalanguage$pandac$ClassDecl* $tmp380 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp381 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp380);
    $tmp373 = $tmp381.value;
    $l379:;
    panda$core$Bit $tmp382 = { $tmp373 };
    result372 = $tmp382;
    panda$core$Bit $tmp384 = panda$core$Bit$$NOT$R$panda$core$Bit(result372);
    bool $tmp383 = $tmp384.value;
    if ($tmp383) goto $l385;
    panda$core$Bit $tmp387 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp387);
    bool $tmp386 = $tmp388.value;
    if (!$tmp386) goto $l389;
    panda$core$Bit $tmp391 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp390 = $tmp391.value;
    if ($tmp390) goto $l392;
    panda$core$Bit $tmp393 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp390 = $tmp393.value;
    $l392:;
    panda$core$Bit $tmp394 = { $tmp390 };
    $tmp386 = $tmp394.value;
    $l389:;
    panda$core$Bit $tmp395 = { $tmp386 };
    $tmp383 = $tmp395.value;
    $l385:;
    panda$core$Bit $tmp396 = { $tmp383 };
    PANDA_ASSERT($tmp396.value);
    return result372;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator397;
    panda$collections$Iterator* Iter$267$9431;
    org$pandalanguage$pandac$MethodDecl$Parameter* p443;
    {
        self->importStream = self->bodyImportStream;
    }
    {
        self->imports = self->bodyImports;
    }
    separator397 = &$s398;
    panda$core$Bit $tmp399 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp399.value) {
    {
        panda$core$String* $tmp401 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s400, $tmp401);
        panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s403);
        panda$core$String* $tmp405 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, $tmp405);
        panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s407);
        (($fn409) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp408);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator397));
            separator397 = &$s410;
        }
    }
    }
    else {
    {
        panda$core$String* $tmp411 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp412 = panda$core$String$convert$R$panda$core$String($tmp411);
        panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
        panda$core$String* $tmp415 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, $tmp415);
        panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
        (($fn419) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp418);
    }
    }
    panda$core$Bit $tmp420 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp420);
    if ($tmp421.value) {
    {
        panda$core$String* $tmp422 = panda$core$String$convert$R$panda$core$String(separator397);
        panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
        panda$core$String* $tmp425 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, $tmp425);
        panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s427);
        (($fn429) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp428);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator397));
            separator397 = &$s430;
        }
    }
    }
    {
        ITable* $tmp432 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp432 = $tmp432->next;
        }
        $fn434 $tmp433 = $tmp432->methods[0];
        panda$collections$Iterator* $tmp435 = $tmp433(((panda$collections$Iterable*) p_m->parameters));
        Iter$267$9431 = $tmp435;
        $l436:;
        ITable* $tmp438 = Iter$267$9431->$class->itable;
        while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp438 = $tmp438->next;
        }
        $fn440 $tmp439 = $tmp438->methods[0];
        panda$core$Bit $tmp441 = $tmp439(Iter$267$9431);
        panda$core$Bit $tmp442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp441);
        if (!$tmp442.value) goto $l437;
        {
            ITable* $tmp444 = Iter$267$9431->$class->itable;
            while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp444 = $tmp444->next;
            }
            $fn446 $tmp445 = $tmp444->methods[1];
            panda$core$Object* $tmp447 = $tmp445(Iter$267$9431);
            p443 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp447);
            panda$core$String* $tmp448 = panda$core$String$convert$R$panda$core$String(separator397);
            panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s449);
            panda$core$String* $tmp451 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p443->type);
            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, $tmp451);
            panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s453);
            panda$core$String* $tmp455 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p443->name);
            panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, $tmp455);
            panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s457);
            (($fn459) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp458);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator397));
                separator397 = &$s460;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p443));
        }
        goto $l436;
        $l437:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$267$9431));
    }
    (($fn462) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s461);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator397));
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn464) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s463);
    panda$core$String* $tmp465 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn466) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp465);
    panda$core$String* $tmp467 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn468) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp467);
    (($fn470) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s469);
    panda$core$String* $tmp471 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn472) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp471);
    panda$core$String* $tmp473 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn474) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp473);
    (($fn476) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s475);
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

