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
#include "panda/core/Panda.h"
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
#include "panda/collections/ImmutableArray.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn104)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn117)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn204)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn222)(panda$collections$Iterator*);
typedef void (*$fn235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn264)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn276)(panda$collections$CollectionView*);
typedef void (*$fn288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn310)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn316)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn323)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn344)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn358)(panda$collections$CollectionView*);
typedef void (*$fn370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn381)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn448)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn458)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn464)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn470)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn476)(panda$collections$Iterator*);
typedef void (*$fn489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn507)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b", 24, 4222731004450900160, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
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
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 41, -8662367119082393781, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    self->compiler = NULL;
    self->out = NULL;
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->typeImportStream = $tmp1;
    panda$io$MemoryOutputStream* $tmp3 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3);
    self->typesBuffer = $tmp3;
    panda$io$IndentedOutputStream* $tmp5 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp5->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5, ((panda$io$OutputStream*) self->typesBuffer));
    self->types = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->bodyImportStream = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->bodyBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->bodyBuffer));
    self->body = $tmp11;
    panda$collections$Set* $tmp13 = (panda$collections$Set*) pandaAlloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp13->refCount.value = 1;
    panda$collections$Set$init($tmp13);
    self->typeImports = $tmp13;
    panda$collections$Set* $tmp15 = (panda$collections$Set*) pandaAlloc(24);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp15->refCount.value = 1;
    panda$collections$Set$init($tmp15);
    self->bodyImports = $tmp15;
    self->imports = self->typeImports;
    self->importStream = self->typeImportStream;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp17 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaAlloc(216);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
    $tmp19->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp19);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp17, ((panda$io$OutputStream*) $tmp19));
    self->llvmCodeGen = $tmp17;
    self->inClass = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp21 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_outDir));
        self->outDir = ((panda$io$File*) $tmp21);
    }
    {
        panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
        $tmp22->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp22->refCount.value = 1;
        panda$io$MemoryOutputStream* $tmp24 = (panda$io$MemoryOutputStream*) pandaAlloc(24);
        $tmp24->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
        $tmp24->refCount.value = 1;
        panda$io$MemoryOutputStream$init($tmp24);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp22, ((panda$io$OutputStream*) $tmp24));
        panda$core$Object* $tmp26 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp22));
        self->out = ((panda$io$IndentedOutputStream*) $tmp26);
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp27 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp27;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName28;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp33;
    panda$core$String* $tmp29 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    panda$core$Object* $tmp30 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp29));
    llvmName28 = ((panda$core$String*) $tmp30);
    panda$core$Bit $tmp32 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName28, &$s31);
    PANDA_ASSERT($tmp32.value);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp33, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp34 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName28, $tmp33);
    return $tmp34;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp35 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp35;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp38 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s36, &$s37);
    panda$core$String* $tmp41 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp38, &$s39, &$s40);
    panda$core$String* $tmp44 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp41, &$s42, &$s43);
    panda$core$String* $tmp47 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp44, &$s45, &$s46);
    panda$core$String* $tmp50 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp47, &$s48, &$s49);
    panda$core$String* $tmp53 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp50, &$s51, &$s52);
    panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, p_extension);
    return $tmp54;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$61_1355;
    panda$core$Int64 $match$71_2177;
    panda$core$String* name84;
    org$pandalanguage$pandac$ClassDecl* cl90;
    panda$core$String* includePath107;
    org$pandalanguage$pandac$ClassDecl* cl119;
    org$pandalanguage$pandac$ClassDecl* cl137;
    panda$core$String* name141;
    org$pandalanguage$pandac$ClassDecl* cl147;
    panda$core$String* includePath164;
    {
        $match$61_1355 = p_t->typeKind;
        panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 14 }));
        if ($tmp56.value) {
        {
            return &$s57;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 12 }));
        if ($tmp58.value) {
        {
            panda$core$Int64 $tmp60 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp61 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp60, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp62;
            $tmp62 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp62->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp62->refCount = 1;
            $tmp62->value = $tmp61;
            panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s59, ((panda$core$Object*) $tmp62));
            panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
            return $tmp65;
        }
        }
        else {
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 13 }));
        if ($tmp66.value) {
        {
            panda$core$Int64 $tmp68 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp69 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp68, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp70;
            $tmp70 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp70->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp70->refCount = 1;
            $tmp70->value = $tmp69;
            panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s67, ((panda$core$Object*) $tmp70));
            panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s72);
            return $tmp73;
        }
        }
        else {
        panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 19 }));
        if ($tmp74.value) {
        {
            return &$s75;
        }
        }
        else {
        panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 20 }));
        if ($tmp76.value) {
        {
            {
                panda$core$Int64 $tmp78 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
                $match$71_2177 = $tmp78;
                panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_2177, ((panda$core$Int64) { 4 }));
                if ($tmp79.value) {
                {
                    return &$s80;
                }
                }
                else {
                panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_2177, ((panda$core$Int64) { 8 }));
                if ($tmp81.value) {
                {
                    return &$s82;
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
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 10 }));
        if ($tmp83.value) {
        {
            panda$core$String* $tmp85 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp86 = panda$core$String$convert$R$panda$core$String($tmp85);
            panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
            panda$core$Object* $tmp89 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp88));
            name84 = ((panda$core$String*) $tmp89);
            org$pandalanguage$pandac$ClassDecl* $tmp91 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            panda$core$Object* $tmp92 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp91));
            cl90 = ((org$pandalanguage$pandac$ClassDecl*) $tmp92);
            PANDA_ASSERT(((panda$core$Bit) { cl90 != NULL }).value);
            panda$core$Bit $tmp93 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl90);
            panda$core$Bit $tmp94 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp93);
            if ($tmp94.value) {
            {
                panda$core$Bit $tmp95 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name84));
                panda$core$Bit $tmp96 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp95);
                if ($tmp96.value) {
                {
                    panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s97, name84);
                    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
                    panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, name84);
                    panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
                    (($fn104) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp103);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name84));
                }
                }
                panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name84, &$s105);
                return $tmp106;
            }
            }
            panda$core$String* $tmp109 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl90, &$s108);
            panda$core$Object* $tmp110 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp109));
            includePath107 = ((panda$core$String*) $tmp110);
            panda$core$Bit $tmp111 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath107));
            panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
            if ($tmp112.value) {
            {
                panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s113, includePath107);
                panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s115);
                (($fn117) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp116);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath107));
            }
            }
            return name84;
        }
        }
        else {
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 11 }));
        if ($tmp118.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp120 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            panda$core$Object* $tmp121 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp120));
            cl119 = ((org$pandalanguage$pandac$ClassDecl*) $tmp121);
            PANDA_ASSERT(((panda$core$Bit) { cl119 != NULL }).value);
            panda$core$Bit $tmp122 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl119);
            if ($tmp122.value) {
            {
                panda$core$Object* $tmp123 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp124 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp123));
                panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, &$s125);
                return $tmp126;
            }
            }
            panda$core$Object* $tmp127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp128 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp127));
            return $tmp128;
        }
        }
        else {
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 21 }));
        if ($tmp129.value) {
        {
            panda$core$Object* $tmp130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp132 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp130))->name, &$s131);
            if ($tmp132.value) {
            {
                panda$core$Object* $tmp133 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp134 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp133));
                panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
                return $tmp136;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp138 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            panda$core$Object* $tmp139 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp138));
            cl137 = ((org$pandalanguage$pandac$ClassDecl*) $tmp139);
            panda$core$Bit $tmp140 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl137);
            if ($tmp140.value) {
            {
                panda$core$String* $tmp142 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp143 = panda$core$String$convert$R$panda$core$String($tmp142);
                panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s144);
                panda$core$Object* $tmp146 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp145));
                name141 = ((panda$core$String*) $tmp146);
                org$pandalanguage$pandac$ClassDecl* $tmp148 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                panda$core$Object* $tmp149 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp148));
                cl147 = ((org$pandalanguage$pandac$ClassDecl*) $tmp149);
                PANDA_ASSERT(((panda$core$Bit) { cl147 != NULL }).value);
                panda$core$Bit $tmp150 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl147);
                panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
                if ($tmp151.value) {
                {
                    panda$core$Bit $tmp152 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name141));
                    panda$core$Bit $tmp153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp152);
                    if ($tmp153.value) {
                    {
                        panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s154, name141);
                        panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s156);
                        panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, name141);
                        panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, &$s159);
                        (($fn161) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp160);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name141));
                    }
                    }
                    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name141, &$s162);
                    return $tmp163;
                }
                }
                panda$core$String* $tmp166 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl147, &$s165);
                panda$core$Object* $tmp167 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp166));
                includePath164 = ((panda$core$String*) $tmp167);
                panda$core$Bit $tmp168 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath164));
                panda$core$Bit $tmp169 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp168);
                if ($tmp169.value) {
                {
                    panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, includePath164);
                    panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
                    (($fn174) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp173);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath164));
                }
                }
                return name141;
            }
            }
            panda$core$Object* $tmp175 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp176 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp175));
            return $tmp176;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_1355, ((panda$core$Int64) { 22 }));
        if ($tmp177.value) {
        {
            panda$core$String* $tmp178 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp178;
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
        panda$core$Object* $tmp179 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_compiler));
        self->compiler = ((org$pandalanguage$pandac$Compiler*) $tmp179);
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp180 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp181 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp180);
    return $tmp181;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path182;
    panda$collections$Iterator* f$Iter206;
    org$pandalanguage$pandac$FieldDecl* f219;
    org$pandalanguage$pandac$ClassDecl* value345;
    panda$collections$ListView* valueVTable349;
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
    panda$io$File* $tmp184 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s183);
    panda$core$Object* $tmp185 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp184));
    path182 = ((panda$io$File*) $tmp185);
    panda$io$File* $tmp186 = panda$io$File$parent$R$panda$io$File$Q(path182);
    panda$io$File$createDirectories($tmp186);
    {
        panda$io$IndentedOutputStream* $tmp187 = (panda$io$IndentedOutputStream*) pandaAlloc(56);
        $tmp187->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
        $tmp187->refCount.value = 1;
        panda$io$OutputStream* $tmp189 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path182);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp187, $tmp189);
        panda$core$Object* $tmp190 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp187));
        self->out = ((panda$io$IndentedOutputStream*) $tmp190);
    }
    (($fn192) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s191);
    (($fn194) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s193);
    (($fn196) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s195);
    {
        panda$core$Object* $tmp197 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->typeImportStream));
        self->importStream = ((panda$io$MemoryOutputStream*) $tmp197);
    }
    {
        panda$core$Object* $tmp198 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->typeImports));
        self->imports = ((panda$collections$Set*) $tmp198);
    }
    panda$core$String* $tmp200 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s199, $tmp200);
    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
    (($fn204) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp203);
    panda$core$Int64 $tmp205 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp205;
    {
        panda$collections$ListView* $tmp207 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp208 = ((panda$collections$Iterable*) $tmp207)->$class->itable;
        while ($tmp208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp208 = $tmp208->next;
        }
        $fn210 $tmp209 = $tmp208->methods[0];
        panda$collections$Iterator* $tmp211 = $tmp209(((panda$collections$Iterable*) $tmp207));
        f$Iter206 = $tmp211;
        $l212:;
        ITable* $tmp214 = f$Iter206->$class->itable;
        while ($tmp214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp214 = $tmp214->next;
        }
        $fn216 $tmp215 = $tmp214->methods[0];
        panda$core$Bit $tmp217 = $tmp215(f$Iter206);
        panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
        if (!$tmp218.value) goto $l213;
        {
            ITable* $tmp220 = f$Iter206->$class->itable;
            while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp220 = $tmp220->next;
            }
            $fn222 $tmp221 = $tmp220->methods[1];
            panda$core$Object* $tmp223 = $tmp221(f$Iter206);
            f219 = ((org$pandalanguage$pandac$FieldDecl*) $tmp223);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f219);
            org$pandalanguage$pandac$Type* $tmp224 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp225 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f219->type, $tmp224);
            if ($tmp225.value) {
            {
                panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s226, ((org$pandalanguage$pandac$Symbol*) f219)->name);
                panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s228);
                panda$core$Int64 $tmp230 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp231;
                $tmp231 = (panda$core$Int64$wrapper*) pandaAlloc(24);
                $tmp231->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp231->refCount = 1;
                $tmp231->value = $tmp230;
                panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp229, ((panda$core$Object*) $tmp231));
                panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
                (($fn235) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp234);
            }
            }
            else {
            {
                panda$core$String* $tmp236 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f219->type);
                panda$core$String* $tmp237 = panda$core$String$convert$R$panda$core$String($tmp236);
                panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s238);
                panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, ((org$pandalanguage$pandac$Symbol*) f219)->name);
                panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
                (($fn243) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp242);
            }
            }
        }
        goto $l212;
        $l213:;
    }
    panda$core$Bit $tmp245 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s244);
    if ($tmp245.value) {
    {
        (($fn247) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s246);
        (($fn249) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s248);
        (($fn251) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s250);
    }
    }
    panda$core$Int64 $tmp252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp252;
    panda$core$String* $tmp254 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s253, $tmp254);
    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
    (($fn258) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp257);
    (($fn260) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s259);
    (($fn262) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s261);
    (($fn264) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s263);
    org$pandalanguage$pandac$Type* $tmp266 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp267 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp266);
    panda$core$String* $tmp268 = panda$core$String$convert$R$panda$core$String($tmp267);
    panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s269);
    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, $tmp270);
    panda$collections$ListView* $tmp273 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp274 = ((panda$collections$CollectionView*) $tmp273)->$class->itable;
    while ($tmp274->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp274 = $tmp274->next;
    }
    $fn276 $tmp275 = $tmp274->methods[0];
    panda$core$Int64 $tmp277 = $tmp275(((panda$collections$CollectionView*) $tmp273));
    panda$core$Int64$wrapper* $tmp278;
    $tmp278 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp278->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp278->refCount = 1;
    $tmp278->value = $tmp277;
    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s272, ((panda$core$Object*) $tmp278));
    panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s280);
    panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, $tmp281);
    panda$core$String* $tmp283 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp284 = panda$core$String$convert$R$panda$core$String($tmp283);
    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s285);
    panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, $tmp286);
    (($fn288) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp287);
    panda$core$String* $tmp290 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s289, $tmp290);
    panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, &$s292);
    panda$core$String* $tmp294 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, $tmp294);
    panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp295, &$s296);
    (($fn298) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp297);
    panda$core$Bit $tmp299 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
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
        org$pandalanguage$pandac$Type* $tmp346 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp347 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp346);
        panda$core$Object* $tmp348 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp347));
        value345 = ((org$pandalanguage$pandac$ClassDecl*) $tmp348);
        panda$collections$ListView* $tmp350 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value345);
        panda$core$Object* $tmp351 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp350));
        valueVTable349 = ((panda$collections$ListView*) $tmp351);
        panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s352, &$s353);
        ITable* $tmp356 = ((panda$collections$CollectionView*) valueVTable349)->$class->itable;
        while ($tmp356->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp356 = $tmp356->next;
        }
        $fn358 $tmp357 = $tmp356->methods[0];
        panda$core$Int64 $tmp359 = $tmp357(((panda$collections$CollectionView*) valueVTable349));
        panda$core$Int64$wrapper* $tmp360;
        $tmp360 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp360->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp360->refCount = 1;
        $tmp360->value = $tmp359;
        panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s355, ((panda$core$Object*) $tmp360));
        panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s362);
        panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, $tmp363);
        panda$core$String* $tmp365 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp366 = panda$core$String$convert$R$panda$core$String($tmp365);
        panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s367);
        panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, $tmp368);
        (($fn370) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp369);
        panda$core$String* $tmp372 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s371, $tmp372);
        panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s374);
        panda$core$String* $tmp376 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp377 = panda$core$String$convert$R$panda$core$String($tmp376);
        panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s378);
        panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, $tmp379);
        (($fn381) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp380);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result382;
    org$pandalanguage$pandac$Type* $tmp383 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp384 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp383);
    panda$core$Object* $tmp385 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp384));
    result382 = ((panda$core$String*) $tmp385);
    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp386 = $tmp387.value;
    if (!$tmp386) goto $l388;
    panda$core$Bit $tmp390 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result382, &$s389);
    panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
    $tmp386 = $tmp391.value;
    $l388:;
    panda$core$Bit $tmp392 = { $tmp386 };
    if ($tmp392.value) {
    {
        panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result382, &$s393);
        return $tmp394;
    }
    }
    return result382;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result397;
    panda$core$Bit $tmp395 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp395);
    if ($tmp396.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp400 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp399 = $tmp400.value;
    if (!$tmp399) goto $l401;
    panda$core$Bit $tmp402 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp399 = $tmp402.value;
    $l401:;
    panda$core$Bit $tmp403 = { $tmp399 };
    bool $tmp398 = $tmp403.value;
    if (!$tmp398) goto $l404;
    org$pandalanguage$pandac$ClassDecl* $tmp405 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp406 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp405);
    $tmp398 = $tmp406.value;
    $l404:;
    panda$core$Bit $tmp407 = { $tmp398 };
    result397 = $tmp407;
    panda$core$Bit $tmp409 = panda$core$Bit$$NOT$R$panda$core$Bit(result397);
    bool $tmp408 = $tmp409.value;
    if ($tmp408) goto $l410;
    panda$core$Bit $tmp412 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp412);
    bool $tmp411 = $tmp413.value;
    if (!$tmp411) goto $l414;
    panda$core$Bit $tmp416 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp415 = $tmp416.value;
    if ($tmp415) goto $l417;
    panda$core$Bit $tmp418 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp415 = $tmp418.value;
    $l417:;
    panda$core$Bit $tmp419 = { $tmp415 };
    $tmp411 = $tmp419.value;
    $l414:;
    panda$core$Bit $tmp420 = { $tmp411 };
    $tmp408 = $tmp420.value;
    $l410:;
    panda$core$Bit $tmp421 = { $tmp408 };
    PANDA_ASSERT($tmp421.value);
    return result397;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator424;
    panda$collections$Iterator* p$Iter461;
    org$pandalanguage$pandac$MethodDecl$Parameter* p473;
    {
        panda$core$Object* $tmp422 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->bodyImportStream));
        self->importStream = ((panda$io$MemoryOutputStream*) $tmp422);
    }
    {
        panda$core$Object* $tmp423 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->bodyImports));
        self->imports = ((panda$collections$Set*) $tmp423);
    }
    panda$core$Object* $tmp426 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s425));
    separator424 = ((panda$core$String*) $tmp426);
    panda$core$Bit $tmp427 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp427.value) {
    {
        panda$core$String* $tmp429 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s428, $tmp429);
        panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, &$s431);
        panda$core$String* $tmp433 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp432, $tmp433);
        panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s435);
        (($fn437) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp436);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator424));
            panda$core$Object* $tmp439 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s438));
            separator424 = ((panda$core$String*) $tmp439);
        }
    }
    }
    else {
    {
        panda$core$String* $tmp440 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp441 = panda$core$String$convert$R$panda$core$String($tmp440);
        panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
        panda$core$String* $tmp444 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, $tmp444);
        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s446);
        (($fn448) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp447);
    }
    }
    panda$core$Bit $tmp449 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp449);
    if ($tmp450.value) {
    {
        panda$core$String* $tmp451 = panda$core$String$convert$R$panda$core$String(separator424);
        panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s452);
        panda$core$String* $tmp454 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, $tmp454);
        panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s456);
        (($fn458) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp457);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator424));
            panda$core$Object* $tmp460 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s459));
            separator424 = ((panda$core$String*) $tmp460);
        }
    }
    }
    {
        ITable* $tmp462 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp462 = $tmp462->next;
        }
        $fn464 $tmp463 = $tmp462->methods[0];
        panda$collections$Iterator* $tmp465 = $tmp463(((panda$collections$Iterable*) p_m->parameters));
        p$Iter461 = $tmp465;
        $l466:;
        ITable* $tmp468 = p$Iter461->$class->itable;
        while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp468 = $tmp468->next;
        }
        $fn470 $tmp469 = $tmp468->methods[0];
        panda$core$Bit $tmp471 = $tmp469(p$Iter461);
        panda$core$Bit $tmp472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp471);
        if (!$tmp472.value) goto $l467;
        {
            ITable* $tmp474 = p$Iter461->$class->itable;
            while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp474 = $tmp474->next;
            }
            $fn476 $tmp475 = $tmp474->methods[1];
            panda$core$Object* $tmp477 = $tmp475(p$Iter461);
            p473 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp477);
            panda$core$String* $tmp478 = panda$core$String$convert$R$panda$core$String(separator424);
            panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s479);
            panda$core$String* $tmp481 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p473->type);
            panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, $tmp481);
            panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s483);
            panda$core$String* $tmp485 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p473->name);
            panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, $tmp485);
            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s487);
            (($fn489) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp488);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator424));
                panda$core$Object* $tmp491 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s490));
                separator424 = ((panda$core$String*) $tmp491);
            }
        }
        goto $l466;
        $l467:;
    }
    (($fn493) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s492);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn495) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s494);
    panda$core$String* $tmp496 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn497) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp496);
    panda$core$String* $tmp498 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn499) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp498);
    (($fn501) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s500);
    panda$core$String* $tmp502 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn503) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp502);
    panda$core$String* $tmp504 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn505) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp504);
    (($fn507) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s506);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}

