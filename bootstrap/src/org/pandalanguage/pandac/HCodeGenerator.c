#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/core/Panda.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Bit.h"
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

typedef panda$core$Object* (*$fn138)(panda$core$Weak*);
typedef panda$core$Object* (*$fn142)(panda$core$Weak*);
typedef void (*$fn159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn179)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn187)(panda$core$Weak*);
typedef panda$core$Object* (*$fn191)(panda$core$Weak*);
typedef panda$core$Object* (*$fn228)(panda$core$Weak*);
typedef panda$core$Object* (*$fn245)(panda$core$Weak*);
typedef panda$core$Object* (*$fn249)(panda$core$Weak*);
typedef void (*$fn266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn344)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn351)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn356)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn371)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$core$Weak*);
typedef void (*$fn393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn428)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn458)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn463)(panda$collections$CollectionView*);
typedef void (*$fn478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn494)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn496)(panda$core$Weak*);
typedef void (*$fn507)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn562)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn567)(panda$core$Weak*);
typedef panda$core$Object* (*$fn576)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn591)(panda$collections$CollectionView*);
typedef void (*$fn606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn624)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn659)(panda$core$Weak*);
typedef panda$core$Object* (*$fn663)(panda$core$Weak*);
typedef void (*$fn706)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn739)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn748)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn755)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn763)(panda$collections$Iterator*);
typedef void (*$fn784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn789)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn807)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

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
    panda$io$MemoryOutputStream* $tmp4 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp4);
    panda$io$MemoryOutputStream* $tmp3 = $tmp4;
    panda$io$MemoryOutputStream* $tmp2 = $tmp3;
    self->typeImportStream = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    panda$io$MemoryOutputStream* $tmp6 = $tmp7;
    panda$io$MemoryOutputStream* $tmp5 = $tmp6;
    self->typesBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$io$IndentedOutputStream* $tmp10 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp10, ((panda$io$OutputStream*) self->typesBuffer));
    panda$io$IndentedOutputStream* $tmp9 = $tmp10;
    panda$io$IndentedOutputStream* $tmp8 = $tmp9;
    self->types = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp13);
    panda$io$MemoryOutputStream* $tmp12 = $tmp13;
    panda$io$MemoryOutputStream* $tmp11 = $tmp12;
    self->bodyImportStream = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp16);
    panda$io$MemoryOutputStream* $tmp15 = $tmp16;
    panda$io$MemoryOutputStream* $tmp14 = $tmp15;
    self->bodyBuffer = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->bodyBuffer));
    panda$io$IndentedOutputStream* $tmp18 = $tmp19;
    panda$io$IndentedOutputStream* $tmp17 = $tmp18;
    self->body = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$collections$Set* $tmp22 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp22);
    panda$collections$Set* $tmp21 = $tmp22;
    panda$collections$Set* $tmp20 = $tmp21;
    self->typeImports = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$Set* $tmp25 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp25);
    panda$collections$Set* $tmp24 = $tmp25;
    panda$collections$Set* $tmp23 = $tmp24;
    self->bodyImports = $tmp23;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$collections$Set* $tmp26 = self->typeImports;
    self->imports = $tmp26;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
    panda$io$MemoryOutputStream* $tmp27 = self->typeImportStream;
    self->importStream = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp30 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp33 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp33);
    panda$io$MemoryOutputStream* $tmp32 = $tmp33;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp30, &$s31, ((panda$io$OutputStream*) $tmp32));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp29 = $tmp30;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp28 = $tmp29;
    self->llvmCodeGen = $tmp28;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    self->inClass = ((panda$core$Bit) { false });
    {
        panda$io$File* $tmp34 = self->outDir;
        panda$io$File* $tmp35 = p_outDir;
        self->outDir = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    }
    {
        panda$io$IndentedOutputStream* $tmp36 = self->out;
        panda$io$IndentedOutputStream* $tmp39 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp41 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp41);
        panda$io$MemoryOutputStream* $tmp40 = $tmp41;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp39, ((panda$io$OutputStream*) $tmp40));
        panda$io$IndentedOutputStream* $tmp38 = $tmp39;
        panda$io$IndentedOutputStream* $tmp37 = $tmp38;
        self->out = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp45 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    panda$core$String* $tmp44 = $tmp45;
    panda$core$String* $tmp43 = $tmp44;
    panda$core$String* $tmp42 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    return $tmp42;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName46;
    panda$core$String* tmp152;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp55;
    panda$core$String* $tmp49 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    panda$core$String* $tmp48 = $tmp49;
    panda$core$String* $tmp47 = $tmp48;
    llvmName46 = $tmp47;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    panda$core$Bit $tmp51 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName46, &$s50);
    PANDA_ASSERT($tmp51.value);
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp55, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp56 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName46, $tmp55);
        panda$core$String* $tmp54 = $tmp56;
        panda$core$String* $tmp53 = $tmp54;
        tmp152 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName46));
        panda$core$String* $tmp57 = tmp152;
        return $tmp57;
    }
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp59 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    panda$core$Int64 $tmp58 = $tmp59;
    return $tmp58;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp71 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s69, &$s70);
    panda$core$String* $tmp68 = $tmp71;
    panda$core$String* $tmp74 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp68, &$s72, &$s73);
    panda$core$String* $tmp67 = $tmp74;
    panda$core$String* $tmp77 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp67, &$s75, &$s76);
    panda$core$String* $tmp66 = $tmp77;
    panda$core$String* $tmp80 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp66, &$s78, &$s79);
    panda$core$String* $tmp65 = $tmp80;
    panda$core$String* $tmp83 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp65, &$s81, &$s82);
    panda$core$String* $tmp64 = $tmp83;
    panda$core$String* $tmp86 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp64, &$s84, &$s85);
    panda$core$String* $tmp63 = $tmp86;
    panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, p_extension);
    panda$core$String* $tmp62 = $tmp87;
    panda$core$String* $tmp61 = $tmp62;
    panda$core$String* $tmp60 = $tmp61;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    return $tmp60;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name125;
    org$pandalanguage$pandac$ClassDecl* cl134;
    panda$core$String* tmp2160;
    panda$core$String* includePath166;
    panda$core$String* tmp3180;
    org$pandalanguage$pandac$ClassDecl* cl183;
    panda$core$String* tmp4194;
    panda$core$String* tmp5204;
    org$pandalanguage$pandac$ClassDecl* cl224;
    panda$core$String* name232;
    org$pandalanguage$pandac$ClassDecl* cl241;
    panda$core$String* tmp6267;
    panda$core$String* tmp8272;
    panda$core$String* includePath274;
    panda$core$String* tmp7288;
    panda$core$String* tmp9290;
    panda$core$String* tmp10292;
    switch (p_t->typeKind.value) {
        case 14:
        {
            panda$core$String* $tmp89 = &$s90;
            panda$core$String* $tmp88 = $tmp89;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
            return $tmp88;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp97 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp98 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp97, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp99;
            $tmp99 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp99->value = $tmp98;
            panda$core$Object* $tmp96 = ((panda$core$Object*) $tmp99);
            panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s95, $tmp96);
            panda$core$String* $tmp94 = $tmp100;
            panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s101);
            panda$core$String* $tmp93 = $tmp102;
            panda$core$String* $tmp92 = $tmp93;
            panda$core$String* $tmp91 = $tmp92;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
            panda$core$Panda$unref$panda$core$Object($tmp96);
            return $tmp91;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp109 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp110 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp109, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp111;
            $tmp111 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp111->value = $tmp110;
            panda$core$Object* $tmp108 = ((panda$core$Object*) $tmp111);
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s107, $tmp108);
            panda$core$String* $tmp106 = $tmp112;
            panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s113);
            panda$core$String* $tmp105 = $tmp114;
            panda$core$String* $tmp104 = $tmp105;
            panda$core$String* $tmp103 = $tmp104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            panda$core$Panda$unref$panda$core$Object($tmp108);
            return $tmp103;
        }
        break;
        case 19:
        {
            panda$core$String* $tmp116 = &$s117;
            panda$core$String* $tmp115 = $tmp116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
            return $tmp115;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp118 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp118.value) {
                case 4:
                {
                    panda$core$String* $tmp120 = &$s121;
                    panda$core$String* $tmp119 = $tmp120;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
                    return $tmp119;
                }
                break;
                case 8:
                {
                    panda$core$String* $tmp123 = &$s124;
                    panda$core$String* $tmp122 = $tmp123;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
                    return $tmp122;
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
            panda$core$String* $tmp130 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp129 = $tmp130;
            panda$core$String* $tmp131 = panda$core$String$convert$R$panda$core$String($tmp129);
            panda$core$String* $tmp128 = $tmp131;
            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s132);
            panda$core$String* $tmp127 = $tmp133;
            panda$core$String* $tmp126 = $tmp127;
            name125 = $tmp126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
            panda$core$Object* $tmp139 = (($fn138) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp137 = $tmp139;
            org$pandalanguage$pandac$ClassDecl* $tmp140 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp137), p_t);
            org$pandalanguage$pandac$ClassDecl* $tmp136 = $tmp140;
            org$pandalanguage$pandac$ClassDecl* $tmp135 = $tmp136;
            cl134 = $tmp135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
            panda$core$Panda$unref$panda$core$Object($tmp137);
            PANDA_ASSERT(((panda$core$Bit) { cl134 != NULL }).value);
            panda$core$Object* $tmp143 = (($fn142) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp141 = $tmp143;
            panda$core$Bit $tmp144 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp141), cl134);
            panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
            panda$core$Panda$unref$panda$core$Object($tmp141);
            if ($tmp145.value) {
            {
                panda$core$Bit $tmp146 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name125));
                panda$core$Bit $tmp147 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp146);
                if ($tmp147.value) {
                {
                    panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s152, name125);
                    panda$core$String* $tmp151 = $tmp153;
                    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s154);
                    panda$core$String* $tmp150 = $tmp155;
                    panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, name125);
                    panda$core$String* $tmp149 = $tmp156;
                    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s157);
                    panda$core$String* $tmp148 = $tmp158;
                    (($fn159) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp148);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name125));
                }
                }
                {
                    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name125, &$s163);
                    panda$core$String* $tmp162 = $tmp164;
                    panda$core$String* $tmp161 = $tmp162;
                    tmp2160 = $tmp161;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl134));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name125));
                    }
                    panda$core$String* $tmp165 = tmp2160;
                    return $tmp165;
                }
            }
            }
            panda$core$String* $tmp170 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl134, &$s169);
            panda$core$String* $tmp168 = $tmp170;
            panda$core$String* $tmp167 = $tmp168;
            includePath166 = $tmp167;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
            panda$core$Bit $tmp171 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath166));
            panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp171);
            if ($tmp172.value) {
            {
                panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s175, includePath166);
                panda$core$String* $tmp174 = $tmp176;
                panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s177);
                panda$core$String* $tmp173 = $tmp178;
                (($fn179) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp173);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath166));
            }
            }
            {
                panda$core$String* $tmp181 = name125;
                tmp3180 = $tmp181;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath166));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl134));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name125));
                }
                panda$core$String* $tmp182 = tmp3180;
                return $tmp182;
            }
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp188 = (($fn187) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp186 = $tmp188;
            org$pandalanguage$pandac$ClassDecl* $tmp189 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp186), p_t);
            org$pandalanguage$pandac$ClassDecl* $tmp185 = $tmp189;
            org$pandalanguage$pandac$ClassDecl* $tmp184 = $tmp185;
            cl183 = $tmp184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
            panda$core$Panda$unref$panda$core$Object($tmp186);
            PANDA_ASSERT(((panda$core$Bit) { cl183 != NULL }).value);
            panda$core$Object* $tmp192 = (($fn191) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp190 = $tmp192;
            panda$core$Bit $tmp193 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp190), cl183);
            panda$core$Panda$unref$panda$core$Object($tmp190);
            if ($tmp193.value) {
            {
                {
                    panda$core$Object* $tmp199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp198 = $tmp199;
                    panda$core$String* $tmp200 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp198));
                    panda$core$String* $tmp197 = $tmp200;
                    panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s201);
                    panda$core$String* $tmp196 = $tmp202;
                    panda$core$String* $tmp195 = $tmp196;
                    tmp4194 = $tmp195;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
                    panda$core$Panda$unref$panda$core$Object($tmp198);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl183));
                    panda$core$String* $tmp203 = tmp4194;
                    return $tmp203;
                }
            }
            }
            {
                panda$core$Object* $tmp208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp207 = $tmp208;
                panda$core$String* $tmp209 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp207));
                panda$core$String* $tmp206 = $tmp209;
                panda$core$String* $tmp205 = $tmp206;
                tmp5204 = $tmp205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                panda$core$Panda$unref$panda$core$Object($tmp207);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl183));
                panda$core$String* $tmp210 = tmp5204;
                return $tmp210;
            }
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp211 = $tmp212;
            panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp211))->name, &$s213);
            panda$core$Panda$unref$panda$core$Object($tmp211);
            if ($tmp214.value) {
            {
                panda$core$Object* $tmp220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp219 = $tmp220;
                panda$core$String* $tmp221 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp219));
                panda$core$String* $tmp218 = $tmp221;
                panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s222);
                panda$core$String* $tmp217 = $tmp223;
                panda$core$String* $tmp216 = $tmp217;
                panda$core$String* $tmp215 = $tmp216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object($tmp219);
                return $tmp215;
            }
            }
            panda$core$Object* $tmp229 = (($fn228) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp227 = $tmp229;
            org$pandalanguage$pandac$ClassDecl* $tmp230 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp227), p_t);
            org$pandalanguage$pandac$ClassDecl* $tmp226 = $tmp230;
            org$pandalanguage$pandac$ClassDecl* $tmp225 = $tmp226;
            cl224 = $tmp225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
            panda$core$Panda$unref$panda$core$Object($tmp227);
            panda$core$Bit $tmp231 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl224);
            if ($tmp231.value) {
            {
                panda$core$String* $tmp237 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp236 = $tmp237;
                panda$core$String* $tmp238 = panda$core$String$convert$R$panda$core$String($tmp236);
                panda$core$String* $tmp235 = $tmp238;
                panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s239);
                panda$core$String* $tmp234 = $tmp240;
                panda$core$String* $tmp233 = $tmp234;
                name232 = $tmp233;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
                panda$core$Object* $tmp246 = (($fn245) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Object* $tmp244 = $tmp246;
                org$pandalanguage$pandac$ClassDecl* $tmp247 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp244), p_t);
                org$pandalanguage$pandac$ClassDecl* $tmp243 = $tmp247;
                org$pandalanguage$pandac$ClassDecl* $tmp242 = $tmp243;
                cl241 = $tmp242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                panda$core$Panda$unref$panda$core$Object($tmp244);
                PANDA_ASSERT(((panda$core$Bit) { cl241 != NULL }).value);
                panda$core$Object* $tmp250 = (($fn249) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Object* $tmp248 = $tmp250;
                panda$core$Bit $tmp251 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp248), cl241);
                panda$core$Bit $tmp252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp251);
                panda$core$Panda$unref$panda$core$Object($tmp248);
                if ($tmp252.value) {
                {
                    panda$core$Bit $tmp253 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name232));
                    panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
                    if ($tmp254.value) {
                    {
                        panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s259, name232);
                        panda$core$String* $tmp258 = $tmp260;
                        panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s261);
                        panda$core$String* $tmp257 = $tmp262;
                        panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, name232);
                        panda$core$String* $tmp256 = $tmp263;
                        panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s264);
                        panda$core$String* $tmp255 = $tmp265;
                        (($fn266) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp255);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name232));
                    }
                    }
                    {
                        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name232, &$s270);
                        panda$core$String* $tmp269 = $tmp271;
                        panda$core$String* $tmp268 = $tmp269;
                        tmp6267 = $tmp268;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl241));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name232));
                        }
                        {
                            tmp8272 = tmp6267;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl224));
                            panda$core$String* $tmp273 = tmp8272;
                            return $tmp273;
                        }
                    }
                }
                }
                panda$core$String* $tmp278 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl241, &$s277);
                panda$core$String* $tmp276 = $tmp278;
                panda$core$String* $tmp275 = $tmp276;
                includePath274 = $tmp275;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                panda$core$Bit $tmp279 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath274));
                panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
                if ($tmp280.value) {
                {
                    panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, includePath274);
                    panda$core$String* $tmp282 = $tmp284;
                    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s285);
                    panda$core$String* $tmp281 = $tmp286;
                    (($fn287) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp281);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath274));
                }
                }
                {
                    panda$core$String* $tmp289 = name232;
                    tmp7288 = $tmp289;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name232));
                    }
                    {
                        tmp9290 = tmp7288;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl224));
                        panda$core$String* $tmp291 = tmp9290;
                        return $tmp291;
                    }
                }
            }
            }
            {
                panda$core$Object* $tmp296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp295 = $tmp296;
                panda$core$String* $tmp297 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp295));
                panda$core$String* $tmp294 = $tmp297;
                panda$core$String* $tmp293 = $tmp294;
                tmp10292 = $tmp293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                panda$core$Panda$unref$panda$core$Object($tmp295);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl224));
                panda$core$String* $tmp298 = tmp10292;
                return $tmp298;
            }
        }
        break;
        case 22:
        {
            panda$core$String* $tmp302 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            panda$core$String* $tmp301 = $tmp302;
            panda$core$String* $tmp300 = $tmp301;
            panda$core$String* $tmp299 = $tmp300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
            return $tmp299;
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
        panda$core$Weak* $tmp303 = self->compiler;
        panda$core$Weak* $tmp306 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp306, ((panda$core$Object*) p_compiler));
        panda$core$Weak* $tmp305 = $tmp306;
        panda$core$Weak* $tmp304 = $tmp305;
        self->compiler = $tmp304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp311 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$core$String* $tmp310 = $tmp311;
    panda$io$File* $tmp312 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp310);
    panda$io$File* $tmp309 = $tmp312;
    panda$io$File* $tmp308 = $tmp309;
    panda$io$File* $tmp307 = $tmp308;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
    return $tmp307;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path313;
    panda$collections$Iterator* Iter$163$9346;
    org$pandalanguage$pandac$FieldDecl* f366;
    org$pandalanguage$pandac$ClassDecl* value563;
    panda$collections$ListView* valueVTable572;
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
    panda$io$File* $tmp317 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s316);
    panda$io$File* $tmp315 = $tmp317;
    panda$io$File* $tmp314 = $tmp315;
    path313 = $tmp314;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
    panda$io$File* $tmp319 = panda$io$File$parent$R$panda$io$File$Q(path313);
    panda$io$File* $tmp318 = $tmp319;
    panda$io$File$createDirectories($tmp318);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
    {
        panda$io$IndentedOutputStream* $tmp320 = self->out;
        panda$io$IndentedOutputStream* $tmp323 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp325 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path313);
        panda$io$OutputStream* $tmp324 = $tmp325;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp323, $tmp324);
        panda$io$IndentedOutputStream* $tmp322 = $tmp323;
        panda$io$IndentedOutputStream* $tmp321 = $tmp322;
        self->out = $tmp321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
    }
    (($fn327) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s326);
    (($fn329) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s328);
    (($fn331) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s330);
    {
        panda$io$MemoryOutputStream* $tmp332 = self->importStream;
        panda$io$MemoryOutputStream* $tmp333 = self->typeImportStream;
        self->importStream = $tmp333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
    }
    {
        panda$collections$Set* $tmp334 = self->imports;
        panda$collections$Set* $tmp335 = self->typeImports;
        self->imports = $tmp335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
    }
    panda$core$String* $tmp340 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp339 = $tmp340;
    panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, $tmp339);
    panda$core$String* $tmp337 = $tmp341;
    panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s342);
    panda$core$String* $tmp336 = $tmp343;
    (($fn344) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp336);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
    panda$core$Int64 $tmp345 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp345;
    {
        panda$core$Object* $tmp352 = (($fn351) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp350 = $tmp352;
        panda$collections$ListView* $tmp353 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp350), p_cl);
        panda$collections$ListView* $tmp349 = $tmp353;
        ITable* $tmp354 = ((panda$collections$Iterable*) $tmp349)->$class->itable;
        while ($tmp354->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp354 = $tmp354->next;
        }
        $fn356 $tmp355 = $tmp354->methods[0];
        panda$collections$Iterator* $tmp357 = $tmp355(((panda$collections$Iterable*) $tmp349));
        panda$collections$Iterator* $tmp348 = $tmp357;
        panda$collections$Iterator* $tmp347 = $tmp348;
        Iter$163$9346 = $tmp347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
        panda$core$Panda$unref$panda$core$Object($tmp350);
        $l358:;
        ITable* $tmp361 = Iter$163$9346->$class->itable;
        while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp361 = $tmp361->next;
        }
        $fn363 $tmp362 = $tmp361->methods[0];
        panda$core$Bit $tmp364 = $tmp362(Iter$163$9346);
        panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
        bool $tmp360 = $tmp365.value;
        if (!$tmp360) goto $l359;
        {
            ITable* $tmp369 = Iter$163$9346->$class->itable;
            while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp369 = $tmp369->next;
            }
            $fn371 $tmp370 = $tmp369->methods[1];
            panda$core$Object* $tmp372 = $tmp370(Iter$163$9346);
            panda$core$Object* $tmp368 = $tmp372;
            org$pandalanguage$pandac$FieldDecl* $tmp367 = ((org$pandalanguage$pandac$FieldDecl*) $tmp368);
            f366 = $tmp367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
            panda$core$Panda$unref$panda$core$Object($tmp368);
            panda$core$Object* $tmp375 = (($fn374) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp373 = $tmp375;
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp373), f366);
            panda$core$Panda$unref$panda$core$Object($tmp373);
            org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp376 = $tmp377;
            panda$core$Bit $tmp378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f366->type, $tmp376);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
            if ($tmp378.value) {
            {
                panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s383, ((org$pandalanguage$pandac$Symbol*) f366)->name);
                panda$core$String* $tmp382 = $tmp384;
                panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s385);
                panda$core$String* $tmp381 = $tmp386;
                panda$core$Int64 $tmp388 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp389;
                $tmp389 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp389->value = $tmp388;
                panda$core$Object* $tmp387 = ((panda$core$Object*) $tmp389);
                panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp381, $tmp387);
                panda$core$String* $tmp380 = $tmp390;
                panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s391);
                panda$core$String* $tmp379 = $tmp392;
                (($fn393) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp379);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                panda$core$Panda$unref$panda$core$Object($tmp387);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
            }
            }
            else {
            {
                panda$core$String* $tmp399 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f366->type);
                panda$core$String* $tmp398 = $tmp399;
                panda$core$String* $tmp400 = panda$core$String$convert$R$panda$core$String($tmp398);
                panda$core$String* $tmp397 = $tmp400;
                panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s401);
                panda$core$String* $tmp396 = $tmp402;
                panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, ((org$pandalanguage$pandac$Symbol*) f366)->name);
                panda$core$String* $tmp395 = $tmp403;
                panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s404);
                panda$core$String* $tmp394 = $tmp405;
                (($fn406) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp394);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f366));
        }
        goto $l358;
        $l359:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$9346));
    }
    panda$core$Bit $tmp408 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s407);
    if ($tmp408.value) {
    {
        (($fn410) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s409);
        (($fn412) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s411);
    }
    }
    panda$core$Int64 $tmp413 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp413;
    panda$core$String* $tmp418 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp417 = $tmp418;
    panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s416, $tmp417);
    panda$core$String* $tmp415 = $tmp419;
    panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s420);
    panda$core$String* $tmp414 = $tmp421;
    (($fn422) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp414);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
    (($fn424) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s423);
    (($fn426) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s425);
    (($fn428) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s427);
    org$pandalanguage$pandac$Type* $tmp439 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp438 = $tmp439;
    panda$core$String* $tmp440 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp438);
    panda$core$String* $tmp437 = $tmp440;
    panda$core$String* $tmp441 = panda$core$String$convert$R$panda$core$String($tmp437);
    panda$core$String* $tmp436 = $tmp441;
    panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, &$s442);
    panda$core$String* $tmp435 = $tmp443;
    org$pandalanguage$pandac$Type* $tmp446 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp445 = $tmp446;
    panda$core$String* $tmp447 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp445);
    panda$core$String* $tmp444 = $tmp447;
    panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, $tmp444);
    panda$core$String* $tmp434 = $tmp448;
    panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s449);
    panda$core$String* $tmp433 = $tmp450;
    panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s432, $tmp433);
    panda$core$String* $tmp431 = $tmp451;
    panda$core$Object* $tmp459 = (($fn458) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp457 = $tmp459;
    panda$collections$ListView* $tmp460 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp457), p_cl);
    panda$collections$ListView* $tmp456 = $tmp460;
    ITable* $tmp461 = ((panda$collections$CollectionView*) $tmp456)->$class->itable;
    while ($tmp461->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp461 = $tmp461->next;
    }
    $fn463 $tmp462 = $tmp461->methods[0];
    panda$core$Int64 $tmp464 = $tmp462(((panda$collections$CollectionView*) $tmp456));
    panda$core$Int64$wrapper* $tmp465;
    $tmp465 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp465->value = $tmp464;
    panda$core$Object* $tmp455 = ((panda$core$Object*) $tmp465);
    panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s454, $tmp455);
    panda$core$String* $tmp453 = $tmp466;
    panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s467);
    panda$core$String* $tmp452 = $tmp468;
    panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, $tmp452);
    panda$core$String* $tmp430 = $tmp469;
    panda$core$String* $tmp473 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp472 = $tmp473;
    panda$core$String* $tmp474 = panda$core$String$convert$R$panda$core$String($tmp472);
    panda$core$String* $tmp471 = $tmp474;
    panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp471, &$s475);
    panda$core$String* $tmp470 = $tmp476;
    panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, $tmp470);
    panda$core$String* $tmp429 = $tmp477;
    (($fn478) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp429);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
    panda$core$Panda$unref$panda$core$Object($tmp455);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
    panda$core$Panda$unref$panda$core$Object($tmp457);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
    panda$core$String* $tmp485 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp484 = $tmp485;
    panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s483, $tmp484);
    panda$core$String* $tmp482 = $tmp486;
    panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s487);
    panda$core$String* $tmp481 = $tmp488;
    panda$core$String* $tmp490 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp489 = $tmp490;
    panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, $tmp489);
    panda$core$String* $tmp480 = $tmp491;
    panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s492);
    panda$core$String* $tmp479 = $tmp493;
    (($fn494) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp479);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
    panda$core$Object* $tmp497 = (($fn496) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp495 = $tmp497;
    panda$core$Bit $tmp498 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp495), p_cl);
    panda$core$Panda$unref$panda$core$Object($tmp495);
    if ($tmp498.value) {
    {
        panda$core$String* $tmp503 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp502 = $tmp503;
        panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s501, $tmp502);
        panda$core$String* $tmp500 = $tmp504;
        panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp500, &$s505);
        panda$core$String* $tmp499 = $tmp506;
        (($fn507) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp499);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Int64 $tmp508 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp508;
        (($fn510) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s509);
        (($fn512) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s511);
        org$pandalanguage$pandac$Type* $tmp517 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        org$pandalanguage$pandac$Type* $tmp516 = $tmp517;
        panda$core$String* $tmp518 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp516);
        panda$core$String* $tmp515 = $tmp518;
        panda$core$String* $tmp519 = panda$core$String$convert$R$panda$core$String($tmp515);
        panda$core$String* $tmp514 = $tmp519;
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s520);
        panda$core$String* $tmp513 = $tmp521;
        (($fn522) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp513);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        panda$core$Int64 $tmp523 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp523;
        panda$core$String* $tmp528 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp527 = $tmp528;
        panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s526, $tmp527);
        panda$core$String* $tmp525 = $tmp529;
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s530);
        panda$core$String* $tmp524 = $tmp531;
        (($fn532) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp524);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
        panda$core$String* $tmp537 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp536 = $tmp537;
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s535, $tmp536);
        panda$core$String* $tmp534 = $tmp538;
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s539);
        panda$core$String* $tmp533 = $tmp540;
        (($fn541) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp533);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
        panda$core$Int64 $tmp542 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp542;
        panda$core$String* $tmp546 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp545 = $tmp546;
        panda$core$String* $tmp547 = panda$core$String$convert$R$panda$core$String($tmp545);
        panda$core$String* $tmp544 = $tmp547;
        panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s548);
        panda$core$String* $tmp543 = $tmp549;
        (($fn550) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp543);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
        (($fn552) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s551);
        panda$core$Int64 $tmp553 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp553;
        panda$core$String* $tmp558 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp557 = $tmp558;
        panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s556, $tmp557);
        panda$core$String* $tmp555 = $tmp559;
        panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s560);
        panda$core$String* $tmp554 = $tmp561;
        (($fn562) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp554);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Object* $tmp568 = (($fn567) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp566 = $tmp568;
        org$pandalanguage$pandac$Type* $tmp570 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp569 = $tmp570;
        org$pandalanguage$pandac$ClassDecl* $tmp571 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp566), $tmp569);
        org$pandalanguage$pandac$ClassDecl* $tmp565 = $tmp571;
        org$pandalanguage$pandac$ClassDecl* $tmp564 = $tmp565;
        value563 = $tmp564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
        panda$core$Panda$unref$panda$core$Object($tmp566);
        panda$core$Object* $tmp577 = (($fn576) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp575 = $tmp577;
        panda$collections$ListView* $tmp578 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp575), value563);
        panda$collections$ListView* $tmp574 = $tmp578;
        panda$collections$ListView* $tmp573 = $tmp574;
        valueVTable572 = $tmp573;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
        panda$core$Panda$unref$panda$core$Object($tmp575);
        panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s582, &$s583);
        panda$core$String* $tmp581 = $tmp584;
        ITable* $tmp589 = ((panda$collections$CollectionView*) valueVTable572)->$class->itable;
        while ($tmp589->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp589 = $tmp589->next;
        }
        $fn591 $tmp590 = $tmp589->methods[0];
        panda$core$Int64 $tmp592 = $tmp590(((panda$collections$CollectionView*) valueVTable572));
        panda$core$Int64$wrapper* $tmp593;
        $tmp593 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp593->value = $tmp592;
        panda$core$Object* $tmp588 = ((panda$core$Object*) $tmp593);
        panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s587, $tmp588);
        panda$core$String* $tmp586 = $tmp594;
        panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s595);
        panda$core$String* $tmp585 = $tmp596;
        panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, $tmp585);
        panda$core$String* $tmp580 = $tmp597;
        panda$core$String* $tmp601 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp600 = $tmp601;
        panda$core$String* $tmp602 = panda$core$String$convert$R$panda$core$String($tmp600);
        panda$core$String* $tmp599 = $tmp602;
        panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s603);
        panda$core$String* $tmp598 = $tmp604;
        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, $tmp598);
        panda$core$String* $tmp579 = $tmp605;
        (($fn606) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp579);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
        panda$core$Panda$unref$panda$core$Object($tmp588);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
        panda$core$String* $tmp612 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp611 = $tmp612;
        panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s610, $tmp611);
        panda$core$String* $tmp609 = $tmp613;
        panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s614);
        panda$core$String* $tmp608 = $tmp615;
        panda$core$String* $tmp619 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp618 = $tmp619;
        panda$core$String* $tmp620 = panda$core$String$convert$R$panda$core$String($tmp618);
        panda$core$String* $tmp617 = $tmp620;
        panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s621);
        panda$core$String* $tmp616 = $tmp622;
        panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, $tmp616);
        panda$core$String* $tmp607 = $tmp623;
        (($fn624) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp607);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value563));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable572));
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path313));
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result625;
    panda$core$String* tmp11638;
    panda$core$String* tmp12644;
    org$pandalanguage$pandac$Type* $tmp629 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp628 = $tmp629;
    panda$core$String* $tmp630 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp628);
    panda$core$String* $tmp627 = $tmp630;
    panda$core$String* $tmp626 = $tmp627;
    result625 = $tmp626;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
    panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp631 = $tmp632.value;
    if (!$tmp631) goto $l633;
    panda$core$Bit $tmp635 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result625, &$s634);
    panda$core$Bit $tmp636 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp635);
    $tmp631 = $tmp636.value;
    $l633:;
    panda$core$Bit $tmp637 = { $tmp631 };
    if ($tmp637.value) {
    {
        {
            panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result625, &$s641);
            panda$core$String* $tmp640 = $tmp642;
            panda$core$String* $tmp639 = $tmp640;
            tmp11638 = $tmp639;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result625));
            panda$core$String* $tmp643 = tmp11638;
            return $tmp643;
        }
    }
    }
    {
        panda$core$String* $tmp645 = result625;
        tmp12644 = $tmp645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result625));
        panda$core$String* $tmp646 = tmp12644;
        return $tmp646;
    }
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result650;
    panda$core$Bit $tmp647 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp647);
    if ($tmp648.value) {
    {
        panda$core$Bit $tmp649 = ((panda$core$Bit) { false });
        return $tmp649;
    }
    }
    panda$core$Bit $tmp653 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp652 = $tmp653.value;
    if (!$tmp652) goto $l654;
    panda$core$Bit $tmp655 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp652 = $tmp655.value;
    $l654:;
    panda$core$Bit $tmp656 = { $tmp652 };
    bool $tmp651 = $tmp656.value;
    if (!$tmp651) goto $l657;
    panda$core$Object* $tmp660 = (($fn659) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp658 = $tmp660;
    panda$core$Object* $tmp664 = (($fn663) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp662 = $tmp664;
    org$pandalanguage$pandac$ClassDecl* $tmp665 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp662), p_m->returnType);
    org$pandalanguage$pandac$ClassDecl* $tmp661 = $tmp665;
    panda$core$Bit $tmp666 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp658), $tmp661);
    $tmp651 = $tmp666.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
    panda$core$Panda$unref$panda$core$Object($tmp662);
    panda$core$Panda$unref$panda$core$Object($tmp658);
    $l657:;
    panda$core$Bit $tmp667 = { $tmp651 };
    result650 = $tmp667;
    panda$core$Bit $tmp669 = panda$core$Bit$$NOT$R$panda$core$Bit(result650);
    bool $tmp668 = $tmp669.value;
    if ($tmp668) goto $l670;
    panda$core$Bit $tmp672 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp673 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp672);
    bool $tmp671 = $tmp673.value;
    if (!$tmp671) goto $l674;
    panda$core$Bit $tmp676 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp675 = $tmp676.value;
    if ($tmp675) goto $l677;
    panda$core$Bit $tmp678 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp675 = $tmp678.value;
    $l677:;
    panda$core$Bit $tmp679 = { $tmp675 };
    $tmp671 = $tmp679.value;
    $l674:;
    panda$core$Bit $tmp680 = { $tmp671 };
    $tmp668 = $tmp680.value;
    $l670:;
    panda$core$Bit $tmp681 = { $tmp668 };
    PANDA_ASSERT($tmp681.value);
    panda$core$Bit $tmp682 = result650;
    return $tmp682;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator687;
    panda$collections$Iterator* Iter$266$9743;
    org$pandalanguage$pandac$MethodDecl$Parameter* p758;
    {
        panda$io$MemoryOutputStream* $tmp683 = self->importStream;
        panda$io$MemoryOutputStream* $tmp684 = self->bodyImportStream;
        self->importStream = $tmp684;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
    }
    {
        panda$collections$Set* $tmp685 = self->imports;
        panda$collections$Set* $tmp686 = self->bodyImports;
        self->imports = $tmp686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
    }
    panda$core$String* $tmp688 = &$s689;
    separator687 = $tmp688;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
    panda$core$Bit $tmp690 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp690.value) {
    {
        panda$core$String* $tmp697 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp696 = $tmp697;
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s695, $tmp696);
        panda$core$String* $tmp694 = $tmp698;
        panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s699);
        panda$core$String* $tmp693 = $tmp700;
        panda$core$String* $tmp702 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp701 = $tmp702;
        panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, $tmp701);
        panda$core$String* $tmp692 = $tmp703;
        panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s704);
        panda$core$String* $tmp691 = $tmp705;
        (($fn706) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp691);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
        {
            panda$core$String* $tmp707 = separator687;
            panda$core$String* $tmp708 = &$s709;
            separator687 = $tmp708;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp708));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp715 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp714 = $tmp715;
        panda$core$String* $tmp716 = panda$core$String$convert$R$panda$core$String($tmp714);
        panda$core$String* $tmp713 = $tmp716;
        panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp713, &$s717);
        panda$core$String* $tmp712 = $tmp718;
        panda$core$String* $tmp720 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp719 = $tmp720;
        panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, $tmp719);
        panda$core$String* $tmp711 = $tmp721;
        panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s722);
        panda$core$String* $tmp710 = $tmp723;
        (($fn724) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp710);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
    }
    }
    panda$core$Bit $tmp725 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp726 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp725);
    if ($tmp726.value) {
    {
        panda$core$String* $tmp731 = panda$core$String$convert$R$panda$core$String(separator687);
        panda$core$String* $tmp730 = $tmp731;
        panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s732);
        panda$core$String* $tmp729 = $tmp733;
        panda$core$String* $tmp735 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp734 = $tmp735;
        panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, $tmp734);
        panda$core$String* $tmp728 = $tmp736;
        panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s737);
        panda$core$String* $tmp727 = $tmp738;
        (($fn739) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp727);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
        {
            panda$core$String* $tmp740 = separator687;
            panda$core$String* $tmp741 = &$s742;
            separator687 = $tmp741;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp741));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
        }
    }
    }
    {
        ITable* $tmp746 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp746 = $tmp746->next;
        }
        $fn748 $tmp747 = $tmp746->methods[0];
        panda$collections$Iterator* $tmp749 = $tmp747(((panda$collections$Iterable*) p_m->parameters));
        panda$collections$Iterator* $tmp745 = $tmp749;
        panda$collections$Iterator* $tmp744 = $tmp745;
        Iter$266$9743 = $tmp744;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
        $l750:;
        ITable* $tmp753 = Iter$266$9743->$class->itable;
        while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp753 = $tmp753->next;
        }
        $fn755 $tmp754 = $tmp753->methods[0];
        panda$core$Bit $tmp756 = $tmp754(Iter$266$9743);
        panda$core$Bit $tmp757 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp756);
        bool $tmp752 = $tmp757.value;
        if (!$tmp752) goto $l751;
        {
            ITable* $tmp761 = Iter$266$9743->$class->itable;
            while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp761 = $tmp761->next;
            }
            $fn763 $tmp762 = $tmp761->methods[1];
            panda$core$Object* $tmp764 = $tmp762(Iter$266$9743);
            panda$core$Object* $tmp760 = $tmp764;
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp759 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp760);
            p758 = $tmp759;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp759));
            panda$core$Panda$unref$panda$core$Object($tmp760);
            panda$core$String* $tmp771 = panda$core$String$convert$R$panda$core$String(separator687);
            panda$core$String* $tmp770 = $tmp771;
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, &$s772);
            panda$core$String* $tmp769 = $tmp773;
            panda$core$String* $tmp775 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p758->type);
            panda$core$String* $tmp774 = $tmp775;
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, $tmp774);
            panda$core$String* $tmp768 = $tmp776;
            panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, &$s777);
            panda$core$String* $tmp767 = $tmp778;
            panda$core$String* $tmp780 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p758->name);
            panda$core$String* $tmp779 = $tmp780;
            panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, $tmp779);
            panda$core$String* $tmp766 = $tmp781;
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s782);
            panda$core$String* $tmp765 = $tmp783;
            (($fn784) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp765);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
            {
                panda$core$String* $tmp785 = separator687;
                panda$core$String* $tmp786 = &$s787;
                separator687 = $tmp786;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p758));
        }
        goto $l750;
        $l751:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$266$9743));
    }
    (($fn789) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s788);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator687));
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn791) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s790);
    panda$core$String* $tmp793 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    panda$core$String* $tmp792 = $tmp793;
    (($fn794) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp792);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
    panda$core$String* $tmp796 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    panda$core$String* $tmp795 = $tmp796;
    (($fn797) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp795);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
    (($fn799) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s798);
    panda$core$String* $tmp801 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    panda$core$String* $tmp800 = $tmp801;
    (($fn802) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp800);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
    panda$core$String* $tmp804 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    panda$core$String* $tmp803 = $tmp804;
    (($fn805) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp803);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
    (($fn807) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s806);
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

