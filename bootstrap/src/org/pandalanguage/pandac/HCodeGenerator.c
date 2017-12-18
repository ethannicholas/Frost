#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
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
#include "org/pandalanguage/pandac/IRNode.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn89)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn175)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn181)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn193)(panda$collections$Iterator*);
typedef void (*$fn206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn229)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn235)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn247)(panda$collections$CollectionView*);
typedef void (*$fn259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn315)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn327)(panda$collections$CollectionView*);
typedef void (*$fn339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn422)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn427)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn433)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn439)(panda$collections$Iterator*);
typedef void (*$fn452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn469)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b", 24, 4222731004450900160, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 41, -8662367119082393781, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->typeImportStream = $tmp1;
    panda$io$MemoryOutputStream* $tmp3 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3);
    self->typesBuffer = $tmp3;
    panda$io$IndentedOutputStream* $tmp5 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp5->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5, ((panda$io$OutputStream*) self->typesBuffer));
    self->types = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->bodyImportStream = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->bodyBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->bodyBuffer));
    self->body = $tmp11;
    panda$collections$Set* $tmp13 = (panda$collections$Set*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp13->refCount.value = 1;
    panda$collections$Set$init($tmp13);
    self->typeImports = $tmp13;
    panda$collections$Set* $tmp15 = (panda$collections$Set*) malloc(24);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp15->refCount.value = 1;
    panda$collections$Set$init($tmp15);
    self->bodyImports = $tmp15;
    self->imports = self->typeImports;
    self->importStream = self->typeImportStream;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp17 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(216);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp19->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp19);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp17, ((panda$io$OutputStream*) $tmp19));
    self->llvmCodeGen = $tmp17;
    self->inClass = ((panda$core$Bit) { false });
    self->outDir = p_outDir;
    panda$io$IndentedOutputStream* $tmp21 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp21->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp23 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp23->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp23);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp21, ((panda$io$OutputStream*) $tmp23));
    self->out = $tmp21;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp25 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp25;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName26;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp30;
    panda$core$String* $tmp27 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName26 = $tmp27;
    panda$core$Bit $tmp29 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName26, &$s28);
    PANDA_ASSERT($tmp29.value);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp30, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp31 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName26, $tmp30);
    return $tmp31;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp32 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp32;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp35 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s33, &$s34);
    panda$core$String* $tmp38 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp35, &$s36, &$s37);
    panda$core$String* $tmp41 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp38, &$s39, &$s40);
    panda$core$String* $tmp44 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp41, &$s42, &$s43);
    panda$core$String* $tmp47 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp44, &$s45, &$s46);
    panda$core$String* $tmp50 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp47, &$s48, &$s49);
    panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, p_extension);
    return $tmp51;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name71;
    org$pandalanguage$pandac$ClassDecl* cl76;
    panda$core$String* includePath92;
    org$pandalanguage$pandac$ClassDecl* cl102;
    org$pandalanguage$pandac$ClassDecl* cl118;
    panda$core$String* name121;
    org$pandalanguage$pandac$ClassDecl* cl126;
    panda$core$String* includePath142;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s52;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp54 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp55 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp54, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp56;
            $tmp56 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp56->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp56->refCount = 1;
            $tmp56->value = $tmp55;
            panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s53, ((panda$core$Object*) $tmp56));
            panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
            return $tmp59;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp61 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp62 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp61, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp63;
            $tmp63 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp63->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp63->refCount = 1;
            $tmp63->value = $tmp62;
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s60, ((panda$core$Object*) $tmp63));
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            return $tmp66;
        }
        break;
        case 19:
        {
            return &$s67;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp68 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp68.value) {
                case 4:
                {
                    return &$s69;
                }
                break;
                case 8:
                {
                    return &$s70;
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
            panda$core$String* $tmp72 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp73 = panda$core$String$convert$R$panda$core$String($tmp72);
            panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, &$s74);
            name71 = $tmp75;
            org$pandalanguage$pandac$ClassDecl* $tmp77 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl76 = $tmp77;
            PANDA_ASSERT(((panda$core$Bit) { cl76 != NULL }).value);
            panda$core$Bit $tmp78 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl76);
            panda$core$Bit $tmp79 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp78);
            if ($tmp79.value) {
            {
                panda$core$Bit $tmp80 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name71));
                panda$core$Bit $tmp81 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp80);
                if ($tmp81.value) {
                {
                    panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s82, name71);
                    panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s84);
                    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, name71);
                    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
                    (($fn89) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp88);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name71));
                }
                }
                panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name71, &$s90);
                return $tmp91;
            }
            }
            panda$core$String* $tmp94 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl76, &$s93);
            includePath92 = $tmp94;
            panda$core$Bit $tmp95 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath92));
            panda$core$Bit $tmp96 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp95);
            if ($tmp96.value) {
            {
                panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s97, includePath92);
                panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
                (($fn101) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp100);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath92));
            }
            }
            return name71;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp103 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl102 = $tmp103;
            PANDA_ASSERT(((panda$core$Bit) { cl102 != NULL }).value);
            panda$core$Bit $tmp104 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl102);
            if ($tmp104.value) {
            {
                panda$core$Object* $tmp105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp106 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp105));
                panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
                return $tmp108;
            }
            }
            panda$core$Object* $tmp109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp110 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp109));
            return $tmp110;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp111))->name, &$s112);
            if ($tmp113.value) {
            {
                panda$core$Object* $tmp114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp115 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp114));
                panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp115, &$s116);
                return $tmp117;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp119 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl118 = $tmp119;
            panda$core$Bit $tmp120 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl118);
            if ($tmp120.value) {
            {
                panda$core$String* $tmp122 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp123 = panda$core$String$convert$R$panda$core$String($tmp122);
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
                name121 = $tmp125;
                org$pandalanguage$pandac$ClassDecl* $tmp127 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl126 = $tmp127;
                PANDA_ASSERT(((panda$core$Bit) { cl126 != NULL }).value);
                panda$core$Bit $tmp128 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl126);
                panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp128);
                if ($tmp129.value) {
                {
                    panda$core$Bit $tmp130 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name121));
                    panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp130);
                    if ($tmp131.value) {
                    {
                        panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, name121);
                        panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
                        panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, name121);
                        panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s137);
                        (($fn139) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp138);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name121));
                    }
                    }
                    panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name121, &$s140);
                    return $tmp141;
                }
                }
                panda$core$String* $tmp144 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl126, &$s143);
                includePath142 = $tmp144;
                panda$core$Bit $tmp145 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath142));
                panda$core$Bit $tmp146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp145);
                if ($tmp146.value) {
                {
                    panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s147, includePath142);
                    panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s149);
                    (($fn151) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp150);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath142));
                }
                }
                return name121;
            }
            }
            panda$core$Object* $tmp152 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp153 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp152));
            return $tmp153;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp154 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp154;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp155 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp156 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp155);
    return $tmp156;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path157;
    panda$collections$Iterator* f$Iter177;
    org$pandalanguage$pandac$FieldDecl* f190;
    org$pandalanguage$pandac$ClassDecl* value316;
    panda$collections$ListView* valueVTable319;
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
    panda$io$File* $tmp159 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s158);
    path157 = $tmp159;
    panda$io$File* $tmp160 = panda$io$File$parent$R$panda$io$File$Q(path157);
    panda$io$File$createDirectories($tmp160);
    panda$io$IndentedOutputStream* $tmp161 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp161->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp161->refCount.value = 1;
    panda$io$OutputStream* $tmp163 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path157);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp161, $tmp163);
    self->out = $tmp161;
    (($fn165) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s164);
    (($fn167) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s166);
    (($fn169) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s168);
    self->importStream = self->typeImportStream;
    self->imports = self->typeImports;
    panda$core$String* $tmp171 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, $tmp171);
    panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s173);
    (($fn175) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp174);
    panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp176;
    {
        panda$collections$ListView* $tmp178 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp179 = ((panda$collections$Iterable*) $tmp178)->$class->itable;
        while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp179 = $tmp179->next;
        }
        $fn181 $tmp180 = $tmp179->methods[0];
        panda$collections$Iterator* $tmp182 = $tmp180(((panda$collections$Iterable*) $tmp178));
        f$Iter177 = $tmp182;
        $l183:;
        ITable* $tmp185 = f$Iter177->$class->itable;
        while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp185 = $tmp185->next;
        }
        $fn187 $tmp186 = $tmp185->methods[0];
        panda$core$Bit $tmp188 = $tmp186(f$Iter177);
        panda$core$Bit $tmp189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp188);
        if (!$tmp189.value) goto $l184;
        {
            ITable* $tmp191 = f$Iter177->$class->itable;
            while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp191 = $tmp191->next;
            }
            $fn193 $tmp192 = $tmp191->methods[1];
            panda$core$Object* $tmp194 = $tmp192(f$Iter177);
            f190 = ((org$pandalanguage$pandac$FieldDecl*) $tmp194);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f190);
            org$pandalanguage$pandac$Type* $tmp195 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp196 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f190->type, $tmp195);
            if ($tmp196.value) {
            {
                panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s197, ((org$pandalanguage$pandac$Symbol*) f190)->name);
                panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s199);
                panda$core$Int64 $tmp201 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp202;
                $tmp202 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp202->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp202->refCount = 1;
                $tmp202->value = $tmp201;
                panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp200, ((panda$core$Object*) $tmp202));
                panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s204);
                (($fn206) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp205);
            }
            }
            else {
            {
                panda$core$String* $tmp207 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f190->type);
                panda$core$String* $tmp208 = panda$core$String$convert$R$panda$core$String($tmp207);
                panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s209);
                panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, ((org$pandalanguage$pandac$Symbol*) f190)->name);
                panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s212);
                (($fn214) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp213);
            }
            }
        }
        goto $l183;
        $l184:;
    }
    panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s215);
    if ($tmp216.value) {
    {
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
    org$pandalanguage$pandac$Type* $tmp237 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp238 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp237);
    panda$core$String* $tmp239 = panda$core$String$convert$R$panda$core$String($tmp238);
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
    panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s236, $tmp241);
    panda$collections$ListView* $tmp244 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp245 = ((panda$collections$CollectionView*) $tmp244)->$class->itable;
    while ($tmp245->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp245 = $tmp245->next;
    }
    $fn247 $tmp246 = $tmp245->methods[0];
    panda$core$Int64 $tmp248 = $tmp246(((panda$collections$CollectionView*) $tmp244));
    panda$core$Int64$wrapper* $tmp249;
    $tmp249 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp249->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp249->refCount = 1;
    $tmp249->value = $tmp248;
    panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s243, ((panda$core$Object*) $tmp249));
    panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s251);
    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, $tmp252);
    panda$core$String* $tmp254 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp255 = panda$core$String$convert$R$panda$core$String($tmp254);
    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
    panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, $tmp257);
    (($fn259) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp258);
    panda$core$String* $tmp261 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s260, $tmp261);
    panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s263);
    panda$core$String* $tmp265 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, $tmp265);
    panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s267);
    (($fn269) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp268);
    panda$core$Bit $tmp270 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp270.value) {
    {
        panda$core$String* $tmp272 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s271, $tmp272);
        panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s274);
        (($fn276) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp275);
        panda$core$Int64 $tmp277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp277;
        (($fn279) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s278);
        (($fn281) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s280);
        org$pandalanguage$pandac$Type* $tmp282 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp283 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp282);
        panda$core$String* $tmp284 = panda$core$String$convert$R$panda$core$String($tmp283);
        panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s285);
        (($fn287) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp286);
        panda$core$Int64 $tmp288 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp288;
        panda$core$String* $tmp290 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s289, $tmp290);
        panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, &$s292);
        (($fn294) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp293);
        panda$core$String* $tmp296 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s295, $tmp296);
        panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s298);
        (($fn300) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp299);
        panda$core$Int64 $tmp301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp301;
        panda$core$String* $tmp302 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp303 = panda$core$String$convert$R$panda$core$String($tmp302);
        panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s304);
        (($fn306) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp305);
        (($fn308) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s307);
        panda$core$Int64 $tmp309 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp309;
        panda$core$String* $tmp311 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s310, $tmp311);
        panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s313);
        (($fn315) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp314);
        org$pandalanguage$pandac$Type* $tmp317 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp318 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp317);
        value316 = $tmp318;
        panda$collections$ListView* $tmp320 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value316);
        valueVTable319 = $tmp320;
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s321, &$s322);
        ITable* $tmp325 = ((panda$collections$CollectionView*) valueVTable319)->$class->itable;
        while ($tmp325->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp325 = $tmp325->next;
        }
        $fn327 $tmp326 = $tmp325->methods[0];
        panda$core$Int64 $tmp328 = $tmp326(((panda$collections$CollectionView*) valueVTable319));
        panda$core$Int64$wrapper* $tmp329;
        $tmp329 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp329->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp329->refCount = 1;
        $tmp329->value = $tmp328;
        panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s324, ((panda$core$Object*) $tmp329));
        panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
        panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, $tmp332);
        panda$core$String* $tmp334 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp335 = panda$core$String$convert$R$panda$core$String($tmp334);
        panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s336);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, $tmp337);
        (($fn339) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp338);
        panda$core$String* $tmp341 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s340, $tmp341);
        panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s343);
        panda$core$String* $tmp345 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp346 = panda$core$String$convert$R$panda$core$String($tmp345);
        panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s347);
        panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, $tmp348);
        (($fn350) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp349);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result351;
    org$pandalanguage$pandac$Type* $tmp352 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp353 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp352);
    result351 = $tmp353;
    panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp354 = $tmp355.value;
    if (!$tmp354) goto $l356;
    panda$core$Bit $tmp358 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result351, &$s357);
    panda$core$Bit $tmp359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp358);
    $tmp354 = $tmp359.value;
    $l356:;
    panda$core$Bit $tmp360 = { $tmp354 };
    if ($tmp360.value) {
    {
        panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result351, &$s361);
        return $tmp362;
    }
    }
    return result351;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result365;
    panda$core$Bit $tmp363 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
    if ($tmp364.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp368 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp367 = $tmp368.value;
    if (!$tmp367) goto $l369;
    panda$core$Bit $tmp370 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp367 = $tmp370.value;
    $l369:;
    panda$core$Bit $tmp371 = { $tmp367 };
    bool $tmp366 = $tmp371.value;
    if (!$tmp366) goto $l372;
    org$pandalanguage$pandac$ClassDecl* $tmp373 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp374 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp373);
    $tmp366 = $tmp374.value;
    $l372:;
    panda$core$Bit $tmp375 = { $tmp366 };
    result365 = $tmp375;
    panda$core$Bit $tmp377 = panda$core$Bit$$NOT$R$panda$core$Bit(result365);
    bool $tmp376 = $tmp377.value;
    if ($tmp376) goto $l378;
    panda$core$Bit $tmp380 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp380);
    bool $tmp379 = $tmp381.value;
    if (!$tmp379) goto $l382;
    panda$core$Bit $tmp384 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp383 = $tmp384.value;
    if ($tmp383) goto $l385;
    panda$core$Bit $tmp386 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp383 = $tmp386.value;
    $l385:;
    panda$core$Bit $tmp387 = { $tmp383 };
    $tmp379 = $tmp387.value;
    $l382:;
    panda$core$Bit $tmp388 = { $tmp379 };
    $tmp376 = $tmp388.value;
    $l378:;
    panda$core$Bit $tmp389 = { $tmp376 };
    PANDA_ASSERT($tmp389.value);
    return result365;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator390;
    panda$collections$Iterator* p$Iter424;
    org$pandalanguage$pandac$MethodDecl$Parameter* p436;
    self->importStream = self->bodyImportStream;
    self->imports = self->bodyImports;
    separator390 = &$s391;
    panda$core$Bit $tmp392 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp392.value) {
    {
        panda$core$String* $tmp394 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s393, $tmp394);
        panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s396);
        panda$core$String* $tmp398 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, $tmp398);
        panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp399, &$s400);
        (($fn402) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp401);
        separator390 = &$s403;
    }
    }
    else {
    {
        panda$core$String* $tmp404 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp405 = panda$core$String$convert$R$panda$core$String($tmp404);
        panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
        panda$core$String* $tmp408 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, $tmp408);
        panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s410);
        (($fn412) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp411);
    }
    }
    panda$core$Bit $tmp413 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp413);
    if ($tmp414.value) {
    {
        panda$core$String* $tmp415 = panda$core$String$convert$R$panda$core$String(separator390);
        panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
        panda$core$String* $tmp418 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, $tmp418);
        panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s420);
        (($fn422) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp421);
        separator390 = &$s423;
    }
    }
    {
        ITable* $tmp425 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp425 = $tmp425->next;
        }
        $fn427 $tmp426 = $tmp425->methods[0];
        panda$collections$Iterator* $tmp428 = $tmp426(((panda$collections$Iterable*) p_m->parameters));
        p$Iter424 = $tmp428;
        $l429:;
        ITable* $tmp431 = p$Iter424->$class->itable;
        while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp431 = $tmp431->next;
        }
        $fn433 $tmp432 = $tmp431->methods[0];
        panda$core$Bit $tmp434 = $tmp432(p$Iter424);
        panda$core$Bit $tmp435 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp434);
        if (!$tmp435.value) goto $l430;
        {
            ITable* $tmp437 = p$Iter424->$class->itable;
            while ($tmp437->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp437 = $tmp437->next;
            }
            $fn439 $tmp438 = $tmp437->methods[1];
            panda$core$Object* $tmp440 = $tmp438(p$Iter424);
            p436 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp440);
            panda$core$String* $tmp441 = panda$core$String$convert$R$panda$core$String(separator390);
            panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
            panda$core$String* $tmp444 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p436->type);
            panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, $tmp444);
            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s446);
            panda$core$String* $tmp448 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p436->name);
            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, $tmp448);
            panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s450);
            (($fn452) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp451);
            separator390 = &$s453;
        }
        goto $l429;
        $l430:;
    }
    (($fn455) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s454);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn457) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s456);
    panda$core$String* $tmp458 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn459) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp458);
    panda$core$String* $tmp460 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn461) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp460);
    (($fn463) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s462);
    panda$core$String* $tmp464 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn465) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp464);
    panda$core$String* $tmp466 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn467) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp466);
    (($fn469) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s468);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}

