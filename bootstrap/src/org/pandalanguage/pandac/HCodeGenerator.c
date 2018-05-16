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
#include "org/pandalanguage/pandac/Type/Kind.h"
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

typedef panda$core$Object* (*$fn162)(panda$core$Weak*);
typedef panda$core$Object* (*$fn166)(panda$core$Weak*);
typedef void (*$fn183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn204)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn218)(panda$core$Weak*);
typedef panda$core$Object* (*$fn222)(panda$core$Weak*);
typedef panda$core$Object* (*$fn268)(panda$core$Weak*);
typedef panda$core$Object* (*$fn288)(panda$core$Weak*);
typedef panda$core$Object* (*$fn292)(panda$core$Weak*);
typedef void (*$fn309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn331)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn352)(panda$core$Weak*);
typedef void (*$fn384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn401)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn411)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn423)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn437)(panda$core$Weak*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn491)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn493)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn523)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn528)(panda$collections$CollectionView*);
typedef void (*$fn543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn559)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn561)(panda$core$Weak*);
typedef void (*$fn575)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn618)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn630)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn635)(panda$core$Weak*);
typedef panda$core$Object* (*$fn644)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn659)(panda$collections$CollectionView*);
typedef void (*$fn674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn692)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn703)(panda$core$Weak*);
typedef panda$core$Object* (*$fn739)(panda$core$Weak*);
typedef panda$core$Object* (*$fn743)(panda$core$Weak*);
typedef void (*$fn790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn823)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn835)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn842)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef void (*$fn874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn900)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    panda$io$MemoryOutputStream* $tmp2;
    panda$io$MemoryOutputStream* $tmp3;
    panda$io$MemoryOutputStream* $tmp5;
    panda$io$MemoryOutputStream* $tmp6;
    panda$io$IndentedOutputStream* $tmp8;
    panda$io$IndentedOutputStream* $tmp9;
    panda$io$MemoryOutputStream* $tmp11;
    panda$io$MemoryOutputStream* $tmp12;
    panda$io$MemoryOutputStream* $tmp14;
    panda$io$MemoryOutputStream* $tmp15;
    panda$io$IndentedOutputStream* $tmp17;
    panda$io$IndentedOutputStream* $tmp18;
    panda$collections$Set* $tmp20;
    panda$collections$Set* $tmp21;
    panda$collections$Set* $tmp23;
    panda$collections$Set* $tmp24;
    panda$collections$Set* $tmp26;
    panda$io$MemoryOutputStream* $tmp27;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp28;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp29;
    panda$io$MemoryOutputStream* $tmp32;
    panda$io$File* $tmp34;
    panda$io$File* $tmp35;
    panda$io$IndentedOutputStream* $tmp36;
    panda$io$IndentedOutputStream* $tmp37;
    panda$io$IndentedOutputStream* $tmp38;
    panda$io$MemoryOutputStream* $tmp40;
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
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->typeImportStream = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->typesBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$io$IndentedOutputStream* $tmp10 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp10, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->types = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->bodyImportStream = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->bodyBuffer = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->body = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$collections$Set* $tmp22 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp22);
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->typeImports = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$Set* $tmp25 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp25);
    $tmp24 = $tmp25;
    $tmp23 = $tmp24;
    self->bodyImports = $tmp23;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    $tmp26 = self->typeImports;
    self->imports = $tmp26;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
    $tmp27 = self->typeImportStream;
    self->importStream = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp30 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp33 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp33);
    $tmp32 = $tmp33;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp30, &$s31, ((panda$io$OutputStream*) $tmp32));
    $tmp29 = $tmp30;
    $tmp28 = $tmp29;
    self->llvmCodeGen = $tmp28;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    self->inClass = ((panda$core$Bit) { false });
    {
        $tmp34 = self->outDir;
        $tmp35 = p_outDir;
        self->outDir = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    }
    {
        $tmp36 = self->out;
        panda$io$IndentedOutputStream* $tmp39 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp41 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp41);
        $tmp40 = $tmp41;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp39, ((panda$io$OutputStream*) $tmp40));
        $tmp38 = $tmp39;
        $tmp37 = $tmp38;
        self->out = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $finallyReturn41;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp44 = $tmp45;
    $tmp43 = $tmp44;
    $finallyReturn41 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    return $finallyReturn41;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName50 = NULL;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$String* $finallyReturn55;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp59;
    int $tmp49;
    {
        panda$core$String* $tmp53 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp52 = $tmp53;
        $tmp51 = $tmp52;
        llvmName50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Bit $tmp55 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName50, &$s54);
        PANDA_ASSERT($tmp55.value);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp59, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp60 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName50, $tmp59);
        $tmp58 = $tmp60;
        $tmp57 = $tmp58;
        $finallyReturn55 = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        $tmp49 = 0;
        goto $l47;
        $l61:;
        return $finallyReturn55;
    }
    $l47:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName50));
    llvmName50 = NULL;
    switch ($tmp49) {
        case 0: goto $l61;
    }
    $l63:;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $finallyReturn63;
    panda$core$Int64 $tmp65 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $finallyReturn63 = $tmp65;
    return $finallyReturn63;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $finallyReturn66;
    panda$core$String* $tmp68;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp78 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s76, &$s77);
    $tmp75 = $tmp78;
    panda$core$String* $tmp81 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp75, &$s79, &$s80);
    $tmp74 = $tmp81;
    panda$core$String* $tmp84 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp74, &$s82, &$s83);
    $tmp73 = $tmp84;
    panda$core$String* $tmp87 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp73, &$s85, &$s86);
    $tmp72 = $tmp87;
    panda$core$String* $tmp90 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp72, &$s88, &$s89);
    $tmp71 = $tmp90;
    panda$core$String* $tmp93 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp71, &$s91, &$s92);
    $tmp70 = $tmp93;
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, p_extension);
    $tmp69 = $tmp94;
    $tmp68 = $tmp69;
    $finallyReturn66 = $tmp68;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    return $finallyReturn66;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$61_996;
    panda$core$String* $finallyReturn97;
    panda$core$String* $tmp99;
    panda$core$String* $finallyReturn102;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106;
    panda$core$Object* $tmp108;
    panda$core$String* $finallyReturn116;
    panda$core$String* $tmp118;
    panda$core$String* $tmp119;
    panda$core$String* $tmp120;
    panda$core$Object* $tmp122;
    panda$core$String* $finallyReturn130;
    panda$core$String* $tmp132;
    panda$core$String* $finallyReturn136;
    panda$core$String* $tmp138;
    panda$core$String* $finallyReturn140;
    panda$core$String* $tmp142;
    panda$core$String* name149 = NULL;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    org$pandalanguage$pandac$ClassDecl* cl158 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp159;
    org$pandalanguage$pandac$ClassDecl* $tmp160;
    panda$core$Object* $tmp161;
    panda$core$Object* $tmp165;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $finallyReturn183;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* includePath191 = NULL;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$String* $finallyReturn204;
    panda$core$String* $tmp206;
    org$pandalanguage$pandac$ClassDecl* cl214 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp215;
    org$pandalanguage$pandac$ClassDecl* $tmp216;
    panda$core$Object* $tmp217;
    panda$core$Object* $tmp221;
    panda$core$String* $finallyReturn224;
    panda$core$String* $tmp226;
    panda$core$String* $tmp227;
    panda$core$String* $tmp228;
    panda$core$Object* $tmp229;
    panda$core$String* $finallyReturn235;
    panda$core$String* $tmp237;
    panda$core$String* $tmp238;
    panda$core$Object* $tmp239;
    panda$core$Object* $tmp249;
    panda$core$String* $finallyReturn252;
    panda$core$String* $tmp254;
    panda$core$String* $tmp255;
    panda$core$String* $tmp256;
    panda$core$Object* $tmp257;
    org$pandalanguage$pandac$ClassDecl* cl264 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp265;
    org$pandalanguage$pandac$ClassDecl* $tmp266;
    panda$core$Object* $tmp267;
    panda$core$String* name275 = NULL;
    panda$core$String* $tmp276;
    panda$core$String* $tmp277;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    org$pandalanguage$pandac$ClassDecl* cl284 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp285;
    org$pandalanguage$pandac$ClassDecl* $tmp286;
    panda$core$Object* $tmp287;
    panda$core$Object* $tmp291;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$String* $tmp301;
    panda$core$String* $finallyReturn309;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$String* includePath318 = NULL;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$String* $finallyReturn331;
    panda$core$String* $tmp333;
    panda$core$String* $finallyReturn337;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$Object* $tmp341;
    panda$core$String* $finallyReturn347;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350;
    panda$core$Object* $tmp351;
    {
        $match$61_996 = p_t->typeKind;
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp97.value) {
        {
            $tmp99 = &$s100;
            $finallyReturn97 = $tmp99;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
            return $finallyReturn97;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp102.value) {
        {
            panda$core$Int64 $tmp109 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp110 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp109, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp111;
            $tmp111 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp111->value = $tmp110;
            $tmp108 = ((panda$core$Object*) $tmp111);
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s107, $tmp108);
            $tmp106 = $tmp112;
            panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s113);
            $tmp105 = $tmp114;
            $tmp104 = $tmp105;
            $finallyReturn102 = $tmp104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            panda$core$Panda$unref$panda$core$Object($tmp108);
            return $finallyReturn102;
        }
        }
        else {
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp116.value) {
        {
            panda$core$Int64 $tmp123 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp124 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp123, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp125;
            $tmp125 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp125->value = $tmp124;
            $tmp122 = ((panda$core$Object*) $tmp125);
            panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s121, $tmp122);
            $tmp120 = $tmp126;
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s127);
            $tmp119 = $tmp128;
            $tmp118 = $tmp119;
            $finallyReturn116 = $tmp118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
            panda$core$Panda$unref$panda$core$Object($tmp122);
            return $finallyReturn116;
        }
        }
        else {
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp130.value) {
        {
            $tmp132 = &$s133;
            $finallyReturn130 = $tmp132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
            return $finallyReturn130;
        }
        }
        else {
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp135.value) {
        {
            panda$core$Int64 $tmp136 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp136.value) {
                case 4:
                {
                    $tmp138 = &$s139;
                    $finallyReturn136 = $tmp138;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
                    return $finallyReturn136;
                }
                break;
                case 8:
                {
                    $tmp142 = &$s143;
                    $finallyReturn140 = $tmp142;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                    return $finallyReturn140;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp145.value) {
        {
            int $tmp148;
            {
                panda$core$String* $tmp154 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp153 = $tmp154;
                panda$core$String* $tmp155 = panda$core$String$convert$R$panda$core$String($tmp153);
                $tmp152 = $tmp155;
                panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s156);
                $tmp151 = $tmp157;
                $tmp150 = $tmp151;
                name149 = $tmp150;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Object* $tmp163 = (($fn162) self->compiler->$class->vtable[2])(self->compiler);
                $tmp161 = $tmp163;
                org$pandalanguage$pandac$ClassDecl* $tmp164 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp161), p_t);
                $tmp160 = $tmp164;
                $tmp159 = $tmp160;
                cl158 = $tmp159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
                panda$core$Panda$unref$panda$core$Object($tmp161);
                PANDA_ASSERT(((panda$core$Bit) { cl158 != NULL }).value);
                panda$core$Object* $tmp167 = (($fn166) self->compiler->$class->vtable[2])(self->compiler);
                $tmp165 = $tmp167;
                panda$core$Bit $tmp168 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp165), cl158);
                panda$core$Bit $tmp169 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp168);
                panda$core$Panda$unref$panda$core$Object($tmp165);
                if ($tmp169.value) {
                {
                    panda$core$Bit $tmp170 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name149));
                    panda$core$Bit $tmp171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp170);
                    if ($tmp171.value) {
                    {
                        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s176, name149);
                        $tmp175 = $tmp177;
                        panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s178);
                        $tmp174 = $tmp179;
                        panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, name149);
                        $tmp173 = $tmp180;
                        panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s181);
                        $tmp172 = $tmp182;
                        (($fn183) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp172);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name149));
                    }
                    }
                    panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name149, &$s187);
                    $tmp186 = $tmp188;
                    $tmp185 = $tmp186;
                    $finallyReturn183 = $tmp185;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                    $tmp148 = 0;
                    goto $l146;
                    $l189:;
                    return $finallyReturn183;
                }
                }
                panda$core$String* $tmp195 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl158, &$s194);
                $tmp193 = $tmp195;
                $tmp192 = $tmp193;
                includePath191 = $tmp192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
                panda$core$Bit $tmp196 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath191));
                panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp196);
                if ($tmp197.value) {
                {
                    panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s200, includePath191);
                    $tmp199 = $tmp201;
                    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s202);
                    $tmp198 = $tmp203;
                    (($fn204) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp198);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath191));
                }
                }
                $tmp206 = name149;
                $finallyReturn204 = $tmp206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                $tmp148 = 1;
                goto $l146;
                $l207:;
                return $finallyReturn204;
            }
            $l146:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name149));
            name149 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl158));
            cl158 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath191));
            includePath191 = NULL;
            switch ($tmp148) {
                case 1: goto $l207;
                case 0: goto $l189;
            }
            $l209:;
        }
        }
        else {
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp210.value) {
        {
            int $tmp213;
            {
                panda$core$Object* $tmp219 = (($fn218) self->compiler->$class->vtable[2])(self->compiler);
                $tmp217 = $tmp219;
                org$pandalanguage$pandac$ClassDecl* $tmp220 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp217), p_t);
                $tmp216 = $tmp220;
                $tmp215 = $tmp216;
                cl214 = $tmp215;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object($tmp217);
                PANDA_ASSERT(((panda$core$Bit) { cl214 != NULL }).value);
                panda$core$Object* $tmp223 = (($fn222) self->compiler->$class->vtable[2])(self->compiler);
                $tmp221 = $tmp223;
                panda$core$Bit $tmp224 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp221), cl214);
                panda$core$Panda$unref$panda$core$Object($tmp221);
                if ($tmp224.value) {
                {
                    panda$core$Object* $tmp230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    $tmp229 = $tmp230;
                    panda$core$String* $tmp231 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp229));
                    $tmp228 = $tmp231;
                    panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s232);
                    $tmp227 = $tmp233;
                    $tmp226 = $tmp227;
                    $finallyReturn224 = $tmp226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
                    panda$core$Panda$unref$panda$core$Object($tmp229);
                    $tmp213 = 0;
                    goto $l211;
                    $l234:;
                    return $finallyReturn224;
                }
                }
                panda$core$Object* $tmp240 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp239 = $tmp240;
                panda$core$String* $tmp241 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp239));
                $tmp238 = $tmp241;
                $tmp237 = $tmp238;
                $finallyReturn235 = $tmp237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
                panda$core$Panda$unref$panda$core$Object($tmp239);
                $tmp213 = 1;
                goto $l211;
                $l242:;
                return $finallyReturn235;
            }
            $l211:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl214));
            cl214 = NULL;
            switch ($tmp213) {
                case 1: goto $l242;
                case 0: goto $l234;
            }
            $l244:;
        }
        }
        else {
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp245.value) {
        {
            int $tmp248;
            {
                panda$core$Object* $tmp250 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp249 = $tmp250;
                panda$core$Bit $tmp252 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp249))->name, &$s251);
                panda$core$Panda$unref$panda$core$Object($tmp249);
                if ($tmp252.value) {
                {
                    panda$core$Object* $tmp258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                    $tmp257 = $tmp258;
                    panda$core$String* $tmp259 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp257));
                    $tmp256 = $tmp259;
                    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s260);
                    $tmp255 = $tmp261;
                    $tmp254 = $tmp255;
                    $finallyReturn252 = $tmp254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                    panda$core$Panda$unref$panda$core$Object($tmp257);
                    $tmp248 = 0;
                    goto $l246;
                    $l262:;
                    return $finallyReturn252;
                }
                }
                panda$core$Object* $tmp269 = (($fn268) self->compiler->$class->vtable[2])(self->compiler);
                $tmp267 = $tmp269;
                org$pandalanguage$pandac$ClassDecl* $tmp270 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp267), p_t);
                $tmp266 = $tmp270;
                $tmp265 = $tmp266;
                cl264 = $tmp265;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object($tmp267);
                panda$core$Bit $tmp271 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl264);
                if ($tmp271.value) {
                {
                    int $tmp274;
                    {
                        panda$core$String* $tmp280 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp279 = $tmp280;
                        panda$core$String* $tmp281 = panda$core$String$convert$R$panda$core$String($tmp279);
                        $tmp278 = $tmp281;
                        panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s282);
                        $tmp277 = $tmp283;
                        $tmp276 = $tmp277;
                        name275 = $tmp276;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                        panda$core$Object* $tmp289 = (($fn288) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp287 = $tmp289;
                        org$pandalanguage$pandac$ClassDecl* $tmp290 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp287), p_t);
                        $tmp286 = $tmp290;
                        $tmp285 = $tmp286;
                        cl284 = $tmp285;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                        panda$core$Panda$unref$panda$core$Object($tmp287);
                        PANDA_ASSERT(((panda$core$Bit) { cl284 != NULL }).value);
                        panda$core$Object* $tmp293 = (($fn292) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp291 = $tmp293;
                        panda$core$Bit $tmp294 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp291), cl284);
                        panda$core$Bit $tmp295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp294);
                        panda$core$Panda$unref$panda$core$Object($tmp291);
                        if ($tmp295.value) {
                        {
                            panda$core$Bit $tmp296 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name275));
                            panda$core$Bit $tmp297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp296);
                            if ($tmp297.value) {
                            {
                                panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s302, name275);
                                $tmp301 = $tmp303;
                                panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp301, &$s304);
                                $tmp300 = $tmp305;
                                panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, name275);
                                $tmp299 = $tmp306;
                                panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s307);
                                $tmp298 = $tmp308;
                                (($fn309) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp298);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name275));
                            }
                            }
                            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name275, &$s313);
                            $tmp312 = $tmp314;
                            $tmp311 = $tmp312;
                            $finallyReturn309 = $tmp311;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                            $tmp274 = 0;
                            goto $l272;
                            $l315:;
                            $tmp248 = 1;
                            goto $l246;
                            $l316:;
                            return $finallyReturn309;
                        }
                        }
                        panda$core$String* $tmp322 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl284, &$s321);
                        $tmp320 = $tmp322;
                        $tmp319 = $tmp320;
                        includePath318 = $tmp319;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                        panda$core$Bit $tmp323 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath318));
                        panda$core$Bit $tmp324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp323);
                        if ($tmp324.value) {
                        {
                            panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, includePath318);
                            $tmp326 = $tmp328;
                            panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s329);
                            $tmp325 = $tmp330;
                            (($fn331) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp325);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                            panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath318));
                        }
                        }
                        $tmp333 = name275;
                        $finallyReturn331 = $tmp333;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                        $tmp274 = 1;
                        goto $l272;
                        $l334:;
                        $tmp248 = 2;
                        goto $l246;
                        $l335:;
                        return $finallyReturn331;
                    }
                    $l272:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name275));
                    name275 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl284));
                    cl284 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath318));
                    includePath318 = NULL;
                    switch ($tmp274) {
                        case 1: goto $l334;
                        case 0: goto $l315;
                    }
                    $l337:;
                }
                }
                panda$core$Object* $tmp342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp341 = $tmp342;
                panda$core$String* $tmp343 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp341));
                $tmp340 = $tmp343;
                $tmp339 = $tmp340;
                $finallyReturn337 = $tmp339;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                panda$core$Panda$unref$panda$core$Object($tmp341);
                $tmp248 = 3;
                goto $l246;
                $l344:;
                return $finallyReturn337;
            }
            $l246:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl264));
            cl264 = NULL;
            switch ($tmp248) {
                case 1: goto $l316;
                case 3: goto $l344;
                case 0: goto $l262;
                case 2: goto $l335;
            }
            $l346:;
        }
        }
        else {
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp347.value) {
        {
            panda$core$Object* $tmp353 = (($fn352) p_t->parameter->$class->vtable[2])(p_t->parameter);
            $tmp351 = $tmp353;
            panda$core$String* $tmp354 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp351)->bound);
            $tmp350 = $tmp354;
            $tmp349 = $tmp350;
            $finallyReturn347 = $tmp349;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
            panda$core$Panda$unref$panda$core$Object($tmp351);
            return $finallyReturn347;
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
    panda$core$Weak* $tmp356;
    panda$core$Weak* $tmp357;
    panda$core$Weak* $tmp358;
    {
        $tmp356 = self->compiler;
        panda$core$Weak* $tmp359 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp359, ((panda$core$Object*) p_compiler));
        $tmp358 = $tmp359;
        $tmp357 = $tmp358;
        self->compiler = $tmp357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $finallyReturn359;
    panda$io$File* $tmp361;
    panda$io$File* $tmp362;
    panda$core$String* $tmp363;
    panda$core$String* $tmp364 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp363 = $tmp364;
    panda$io$File* $tmp365 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp363);
    $tmp362 = $tmp365;
    $tmp361 = $tmp362;
    $finallyReturn359 = $tmp361;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
    return $finallyReturn359;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path370 = NULL;
    panda$io$File* $tmp371;
    panda$io$File* $tmp372;
    panda$io$File* $tmp375;
    panda$io$IndentedOutputStream* $tmp377;
    panda$io$IndentedOutputStream* $tmp378;
    panda$io$IndentedOutputStream* $tmp379;
    panda$io$OutputStream* $tmp381;
    panda$io$MemoryOutputStream* $tmp389;
    panda$io$MemoryOutputStream* $tmp390;
    panda$collections$Set* $tmp391;
    panda$collections$Set* $tmp392;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp396;
    panda$collections$Iterator* Iter$163$9406 = NULL;
    panda$collections$Iterator* $tmp407;
    panda$collections$Iterator* $tmp408;
    panda$collections$ListView* $tmp409;
    panda$core$Object* $tmp410;
    org$pandalanguage$pandac$FieldDecl* f429 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp430;
    panda$core$Object* $tmp431;
    panda$core$Object* $tmp436;
    org$pandalanguage$pandac$Type* $tmp439;
    panda$core$String* $tmp442;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$Object* $tmp450;
    panda$core$String* $tmp457;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp461;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp482;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$String* $tmp498;
    panda$core$String* $tmp499;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    panda$core$String* $tmp502;
    org$pandalanguage$pandac$Type* $tmp503;
    panda$core$String* $tmp509;
    org$pandalanguage$pandac$Type* $tmp510;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    panda$core$Object* $tmp520;
    panda$collections$ListView* $tmp521;
    panda$core$Object* $tmp522;
    panda$core$String* $tmp535;
    panda$core$String* $tmp536;
    panda$core$String* $tmp537;
    panda$core$String* $tmp544;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp549;
    panda$core$String* $tmp554;
    panda$core$Object* $tmp560;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    panda$core$String* $tmp570;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    org$pandalanguage$pandac$Type* $tmp584;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    panda$core$String* $tmp595;
    panda$core$String* $tmp601;
    panda$core$String* $tmp602;
    panda$core$String* $tmp604;
    panda$core$String* $tmp611;
    panda$core$String* $tmp612;
    panda$core$String* $tmp613;
    panda$core$String* $tmp622;
    panda$core$String* $tmp623;
    panda$core$String* $tmp625;
    org$pandalanguage$pandac$ClassDecl* value631 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp632;
    org$pandalanguage$pandac$ClassDecl* $tmp633;
    panda$core$Object* $tmp634;
    org$pandalanguage$pandac$Type* $tmp637;
    panda$collections$ListView* valueVTable640 = NULL;
    panda$collections$ListView* $tmp641;
    panda$collections$ListView* $tmp642;
    panda$core$Object* $tmp643;
    panda$core$String* $tmp647;
    panda$core$String* $tmp648;
    panda$core$String* $tmp649;
    panda$core$String* $tmp653;
    panda$core$String* $tmp654;
    panda$core$Object* $tmp656;
    panda$core$String* $tmp666;
    panda$core$String* $tmp667;
    panda$core$String* $tmp668;
    panda$core$String* $tmp675;
    panda$core$String* $tmp676;
    panda$core$String* $tmp677;
    panda$core$String* $tmp679;
    panda$core$String* $tmp684;
    panda$core$String* $tmp685;
    panda$core$String* $tmp686;
    int $tmp369;
    {
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
        panda$io$File* $tmp374 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s373);
        $tmp372 = $tmp374;
        $tmp371 = $tmp372;
        path370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
        panda$io$File* $tmp376 = panda$io$File$parent$R$panda$io$File$Q(path370);
        $tmp375 = $tmp376;
        panda$io$File$createDirectories($tmp375);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
        {
            $tmp377 = self->out;
            panda$io$IndentedOutputStream* $tmp380 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp382 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path370);
            $tmp381 = $tmp382;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp380, $tmp381);
            $tmp379 = $tmp380;
            $tmp378 = $tmp379;
            self->out = $tmp378;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
        }
        (($fn384) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s383);
        (($fn386) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s385);
        (($fn388) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s387);
        {
            $tmp389 = self->importStream;
            $tmp390 = self->typeImportStream;
            self->importStream = $tmp390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
        }
        {
            $tmp391 = self->imports;
            $tmp392 = self->typeImports;
            self->imports = $tmp392;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
        }
        panda$core$String* $tmp397 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp396 = $tmp397;
        panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s395, $tmp396);
        $tmp394 = $tmp398;
        panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s399);
        $tmp393 = $tmp400;
        (($fn401) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp393);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
        panda$core$Int64 $tmp402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp402;
        {
            int $tmp405;
            {
                panda$core$Object* $tmp412 = (($fn411) self->compiler->$class->vtable[2])(self->compiler);
                $tmp410 = $tmp412;
                panda$collections$ListView* $tmp413 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp410), p_cl);
                $tmp409 = $tmp413;
                ITable* $tmp414 = ((panda$collections$Iterable*) $tmp409)->$class->itable;
                while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp414 = $tmp414->next;
                }
                $fn416 $tmp415 = $tmp414->methods[0];
                panda$collections$Iterator* $tmp417 = $tmp415(((panda$collections$Iterable*) $tmp409));
                $tmp408 = $tmp417;
                $tmp407 = $tmp408;
                Iter$163$9406 = $tmp407;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                panda$core$Panda$unref$panda$core$Object($tmp410);
                $l418:;
                ITable* $tmp421 = Iter$163$9406->$class->itable;
                while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp421 = $tmp421->next;
                }
                $fn423 $tmp422 = $tmp421->methods[0];
                panda$core$Bit $tmp424 = $tmp422(Iter$163$9406);
                panda$core$Bit $tmp425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp424);
                bool $tmp420 = $tmp425.value;
                if (!$tmp420) goto $l419;
                {
                    int $tmp428;
                    {
                        ITable* $tmp432 = Iter$163$9406->$class->itable;
                        while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp432 = $tmp432->next;
                        }
                        $fn434 $tmp433 = $tmp432->methods[1];
                        panda$core$Object* $tmp435 = $tmp433(Iter$163$9406);
                        $tmp431 = $tmp435;
                        $tmp430 = ((org$pandalanguage$pandac$FieldDecl*) $tmp431);
                        f429 = $tmp430;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                        panda$core$Panda$unref$panda$core$Object($tmp431);
                        panda$core$Object* $tmp438 = (($fn437) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp436 = $tmp438;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp436), f429);
                        panda$core$Panda$unref$panda$core$Object($tmp436);
                        org$pandalanguage$pandac$Type* $tmp440 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp439 = $tmp440;
                        panda$core$Bit $tmp441 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f429->type, $tmp439);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                        if ($tmp441.value) {
                        {
                            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s446, ((org$pandalanguage$pandac$Symbol*) f429)->name);
                            $tmp445 = $tmp447;
                            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s448);
                            $tmp444 = $tmp449;
                            panda$core$Int64 $tmp451 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp452;
                            $tmp452 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp452->value = $tmp451;
                            $tmp450 = ((panda$core$Object*) $tmp452);
                            panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp444, $tmp450);
                            $tmp443 = $tmp453;
                            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s454);
                            $tmp442 = $tmp455;
                            (($fn456) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp442);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                            panda$core$Panda$unref$panda$core$Object($tmp450);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp462 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f429->type);
                            $tmp461 = $tmp462;
                            panda$core$String* $tmp463 = panda$core$String$convert$R$panda$core$String($tmp461);
                            $tmp460 = $tmp463;
                            panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s464);
                            $tmp459 = $tmp465;
                            panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, ((org$pandalanguage$pandac$Symbol*) f429)->name);
                            $tmp458 = $tmp466;
                            panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s467);
                            $tmp457 = $tmp468;
                            (($fn469) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp457);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                        }
                        }
                    }
                    $tmp428 = -1;
                    goto $l426;
                    $l426:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f429));
                    f429 = NULL;
                    switch ($tmp428) {
                        case -1: goto $l470;
                    }
                    $l470:;
                }
                goto $l418;
                $l419:;
            }
            $tmp405 = -1;
            goto $l403;
            $l403:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$9406));
            Iter$163$9406 = NULL;
            switch ($tmp405) {
                case -1: goto $l471;
            }
            $l471:;
        }
        panda$core$Bit $tmp473 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s472);
        if ($tmp473.value) {
        {
            (($fn475) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s474);
            (($fn477) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s476);
        }
        }
        panda$core$Int64 $tmp478 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp478;
        panda$core$String* $tmp483 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp482 = $tmp483;
        panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s481, $tmp482);
        $tmp480 = $tmp484;
        panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s485);
        $tmp479 = $tmp486;
        (($fn487) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp479);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        (($fn489) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s488);
        (($fn491) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s490);
        (($fn493) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s492);
        org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp503 = $tmp504;
        panda$core$String* $tmp505 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp503);
        $tmp502 = $tmp505;
        panda$core$String* $tmp506 = panda$core$String$convert$R$panda$core$String($tmp502);
        $tmp501 = $tmp506;
        panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp501, &$s507);
        $tmp500 = $tmp508;
        org$pandalanguage$pandac$Type* $tmp511 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp510 = $tmp511;
        panda$core$String* $tmp512 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp510);
        $tmp509 = $tmp512;
        panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp500, $tmp509);
        $tmp499 = $tmp513;
        panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s514);
        $tmp498 = $tmp515;
        panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s497, $tmp498);
        $tmp496 = $tmp516;
        panda$core$Object* $tmp524 = (($fn523) self->compiler->$class->vtable[2])(self->compiler);
        $tmp522 = $tmp524;
        panda$collections$ListView* $tmp525 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp522), p_cl);
        $tmp521 = $tmp525;
        ITable* $tmp526 = ((panda$collections$CollectionView*) $tmp521)->$class->itable;
        while ($tmp526->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp526 = $tmp526->next;
        }
        $fn528 $tmp527 = $tmp526->methods[0];
        panda$core$Int64 $tmp529 = $tmp527(((panda$collections$CollectionView*) $tmp521));
        panda$core$Int64$wrapper* $tmp530;
        $tmp530 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp530->value = $tmp529;
        $tmp520 = ((panda$core$Object*) $tmp530);
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s519, $tmp520);
        $tmp518 = $tmp531;
        panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s532);
        $tmp517 = $tmp533;
        panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp496, $tmp517);
        $tmp495 = $tmp534;
        panda$core$String* $tmp538 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp537 = $tmp538;
        panda$core$String* $tmp539 = panda$core$String$convert$R$panda$core$String($tmp537);
        $tmp536 = $tmp539;
        panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s540);
        $tmp535 = $tmp541;
        panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp495, $tmp535);
        $tmp494 = $tmp542;
        (($fn543) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp494);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
        panda$core$Panda$unref$panda$core$Object($tmp520);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
        panda$core$Panda$unref$panda$core$Object($tmp522);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$core$String* $tmp550 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp549 = $tmp550;
        panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s548, $tmp549);
        $tmp547 = $tmp551;
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s552);
        $tmp546 = $tmp553;
        panda$core$String* $tmp555 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp554 = $tmp555;
        panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, $tmp554);
        $tmp545 = $tmp556;
        panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s557);
        $tmp544 = $tmp558;
        (($fn559) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp544);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        panda$core$Object* $tmp562 = (($fn561) self->compiler->$class->vtable[2])(self->compiler);
        $tmp560 = $tmp562;
        panda$core$Bit $tmp563 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp560), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp560);
        if ($tmp563.value) {
        {
            int $tmp566;
            {
                panda$core$String* $tmp571 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp570 = $tmp571;
                panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s569, $tmp570);
                $tmp568 = $tmp572;
                panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s573);
                $tmp567 = $tmp574;
                (($fn575) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp567);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                panda$core$Int64 $tmp576 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp576;
                (($fn578) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s577);
                (($fn580) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s579);
                org$pandalanguage$pandac$Type* $tmp585 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp584 = $tmp585;
                panda$core$String* $tmp586 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp584);
                $tmp583 = $tmp586;
                panda$core$String* $tmp587 = panda$core$String$convert$R$panda$core$String($tmp583);
                $tmp582 = $tmp587;
                panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s588);
                $tmp581 = $tmp589;
                (($fn590) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp581);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                panda$core$Int64 $tmp591 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp591;
                panda$core$String* $tmp596 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp595 = $tmp596;
                panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s594, $tmp595);
                $tmp593 = $tmp597;
                panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s598);
                $tmp592 = $tmp599;
                (($fn600) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp592);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                panda$core$String* $tmp605 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp604 = $tmp605;
                panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s603, $tmp604);
                $tmp602 = $tmp606;
                panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s607);
                $tmp601 = $tmp608;
                (($fn609) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp601);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                panda$core$Int64 $tmp610 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp610;
                panda$core$String* $tmp614 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp613 = $tmp614;
                panda$core$String* $tmp615 = panda$core$String$convert$R$panda$core$String($tmp613);
                $tmp612 = $tmp615;
                panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s616);
                $tmp611 = $tmp617;
                (($fn618) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp611);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
                (($fn620) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s619);
                panda$core$Int64 $tmp621 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp621;
                panda$core$String* $tmp626 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp625 = $tmp626;
                panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s624, $tmp625);
                $tmp623 = $tmp627;
                panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s628);
                $tmp622 = $tmp629;
                (($fn630) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp622);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                panda$core$Object* $tmp636 = (($fn635) self->compiler->$class->vtable[2])(self->compiler);
                $tmp634 = $tmp636;
                org$pandalanguage$pandac$Type* $tmp638 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp637 = $tmp638;
                org$pandalanguage$pandac$ClassDecl* $tmp639 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp634), $tmp637);
                $tmp633 = $tmp639;
                $tmp632 = $tmp633;
                value631 = $tmp632;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp632));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                panda$core$Panda$unref$panda$core$Object($tmp634);
                panda$core$Object* $tmp645 = (($fn644) self->compiler->$class->vtable[2])(self->compiler);
                $tmp643 = $tmp645;
                panda$collections$ListView* $tmp646 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp643), value631);
                $tmp642 = $tmp646;
                $tmp641 = $tmp642;
                valueVTable640 = $tmp641;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
                panda$core$Panda$unref$panda$core$Object($tmp643);
                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s650, &$s651);
                $tmp649 = $tmp652;
                ITable* $tmp657 = ((panda$collections$CollectionView*) valueVTable640)->$class->itable;
                while ($tmp657->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp657 = $tmp657->next;
                }
                $fn659 $tmp658 = $tmp657->methods[0];
                panda$core$Int64 $tmp660 = $tmp658(((panda$collections$CollectionView*) valueVTable640));
                panda$core$Int64$wrapper* $tmp661;
                $tmp661 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp661->value = $tmp660;
                $tmp656 = ((panda$core$Object*) $tmp661);
                panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s655, $tmp656);
                $tmp654 = $tmp662;
                panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s663);
                $tmp653 = $tmp664;
                panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, $tmp653);
                $tmp648 = $tmp665;
                panda$core$String* $tmp669 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp668 = $tmp669;
                panda$core$String* $tmp670 = panda$core$String$convert$R$panda$core$String($tmp668);
                $tmp667 = $tmp670;
                panda$core$String* $tmp672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s671);
                $tmp666 = $tmp672;
                panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, $tmp666);
                $tmp647 = $tmp673;
                (($fn674) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp647);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object($tmp656);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                panda$core$String* $tmp680 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp679 = $tmp680;
                panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s678, $tmp679);
                $tmp677 = $tmp681;
                panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s682);
                $tmp676 = $tmp683;
                panda$core$String* $tmp687 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp686 = $tmp687;
                panda$core$String* $tmp688 = panda$core$String$convert$R$panda$core$String($tmp686);
                $tmp685 = $tmp688;
                panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s689);
                $tmp684 = $tmp690;
                panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, $tmp684);
                $tmp675 = $tmp691;
                (($fn692) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp675);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
            }
            $tmp566 = -1;
            goto $l564;
            $l564:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value631));
            value631 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable640));
            valueVTable640 = NULL;
            switch ($tmp566) {
                case -1: goto $l693;
            }
            $l693:;
        }
        }
    }
    $tmp369 = -1;
    goto $l367;
    $l367:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path370));
    path370 = NULL;
    switch ($tmp369) {
        case -1: goto $l694;
    }
    $l694:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result698 = NULL;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    org$pandalanguage$pandac$Type* $tmp701;
    panda$core$Object* $tmp702;
    panda$core$String* $finallyReturn713;
    panda$core$String* $tmp715;
    panda$core$String* $tmp716;
    panda$core$String* $finallyReturn720;
    panda$core$String* $tmp722;
    int $tmp697;
    {
        panda$core$Object* $tmp704 = (($fn703) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp702 = $tmp704;
        org$pandalanguage$pandac$Type* $tmp705 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp702));
        $tmp701 = $tmp705;
        panda$core$String* $tmp706 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp701);
        $tmp700 = $tmp706;
        $tmp699 = $tmp700;
        result698 = $tmp699;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
        panda$core$Panda$unref$panda$core$Object($tmp702);
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp707 = $tmp708.value;
        if (!$tmp707) goto $l709;
        panda$core$Bit $tmp711 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result698, &$s710);
        panda$core$Bit $tmp712 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp711);
        $tmp707 = $tmp712.value;
        $l709:;
        panda$core$Bit $tmp713 = { $tmp707 };
        if ($tmp713.value) {
        {
            panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result698, &$s717);
            $tmp716 = $tmp718;
            $tmp715 = $tmp716;
            $finallyReturn713 = $tmp715;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp715));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
            $tmp697 = 0;
            goto $l695;
            $l719:;
            return $finallyReturn713;
        }
        }
        $tmp722 = result698;
        $finallyReturn720 = $tmp722;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp722));
        $tmp697 = 1;
        goto $l695;
        $l723:;
        return $finallyReturn720;
    }
    $l695:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result698));
    result698 = NULL;
    switch ($tmp697) {
        case 0: goto $l719;
        case 1: goto $l723;
    }
    $l725:;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $finallyReturn727;
    panda$core$Bit result730;
    panda$core$Object* $tmp738;
    org$pandalanguage$pandac$ClassDecl* $tmp741;
    panda$core$Object* $tmp742;
    panda$core$Bit $finallyReturn761;
    panda$core$Bit $tmp726 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
    if ($tmp727.value) {
    {
        $finallyReturn727 = ((panda$core$Bit) { false });
        return $finallyReturn727;
    }
    }
    panda$core$Bit $tmp733 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp732 = $tmp733.value;
    if (!$tmp732) goto $l734;
    panda$core$Bit $tmp735 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp732 = $tmp735.value;
    $l734:;
    panda$core$Bit $tmp736 = { $tmp732 };
    bool $tmp731 = $tmp736.value;
    if (!$tmp731) goto $l737;
    panda$core$Object* $tmp740 = (($fn739) self->compiler->$class->vtable[2])(self->compiler);
    $tmp738 = $tmp740;
    panda$core$Object* $tmp744 = (($fn743) self->compiler->$class->vtable[2])(self->compiler);
    $tmp742 = $tmp744;
    org$pandalanguage$pandac$ClassDecl* $tmp745 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp742), p_m->returnType);
    $tmp741 = $tmp745;
    panda$core$Bit $tmp746 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp738), $tmp741);
    $tmp731 = $tmp746.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
    panda$core$Panda$unref$panda$core$Object($tmp742);
    panda$core$Panda$unref$panda$core$Object($tmp738);
    $l737:;
    panda$core$Bit $tmp747 = { $tmp731 };
    result730 = $tmp747;
    panda$core$Bit $tmp749 = panda$core$Bit$$NOT$R$panda$core$Bit(result730);
    bool $tmp748 = $tmp749.value;
    if ($tmp748) goto $l750;
    panda$core$Bit $tmp752 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp753 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp752);
    bool $tmp751 = $tmp753.value;
    if (!$tmp751) goto $l754;
    panda$core$Bit $tmp756 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp755 = $tmp756.value;
    if ($tmp755) goto $l757;
    panda$core$Bit $tmp758 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp755 = $tmp758.value;
    $l757:;
    panda$core$Bit $tmp759 = { $tmp755 };
    $tmp751 = $tmp759.value;
    $l754:;
    panda$core$Bit $tmp760 = { $tmp751 };
    $tmp748 = $tmp760.value;
    $l750:;
    panda$core$Bit $tmp761 = { $tmp748 };
    PANDA_ASSERT($tmp761.value);
    $finallyReturn761 = result730;
    return $finallyReturn761;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp767;
    panda$io$MemoryOutputStream* $tmp768;
    panda$collections$Set* $tmp769;
    panda$collections$Set* $tmp770;
    panda$core$String* separator771 = NULL;
    panda$core$String* $tmp772;
    panda$core$String* $tmp775;
    panda$core$String* $tmp776;
    panda$core$String* $tmp777;
    panda$core$String* $tmp778;
    panda$core$String* $tmp780;
    panda$core$String* $tmp785;
    panda$core$String* $tmp791;
    panda$core$String* $tmp792;
    panda$core$String* $tmp794;
    panda$core$String* $tmp795;
    panda$core$String* $tmp796;
    panda$core$String* $tmp797;
    panda$core$String* $tmp798;
    panda$core$String* $tmp803;
    panda$core$String* $tmp811;
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    panda$core$String* $tmp814;
    panda$core$String* $tmp818;
    panda$core$String* $tmp824;
    panda$core$String* $tmp825;
    panda$collections$Iterator* Iter$266$9830 = NULL;
    panda$collections$Iterator* $tmp831;
    panda$collections$Iterator* $tmp832;
    org$pandalanguage$pandac$MethodDecl$Parameter* p848 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp849;
    panda$core$Object* $tmp850;
    panda$core$String* $tmp855;
    panda$core$String* $tmp856;
    panda$core$String* $tmp857;
    panda$core$String* $tmp858;
    panda$core$String* $tmp859;
    panda$core$String* $tmp860;
    panda$core$String* $tmp864;
    panda$core$String* $tmp869;
    panda$core$String* $tmp875;
    panda$core$String* $tmp876;
    int $tmp766;
    {
        {
            $tmp767 = self->importStream;
            $tmp768 = self->bodyImportStream;
            self->importStream = $tmp768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
        }
        {
            $tmp769 = self->imports;
            $tmp770 = self->bodyImports;
            self->imports = $tmp770;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp770));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
        }
        $tmp772 = &$s773;
        separator771 = $tmp772;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
        panda$core$Bit $tmp774 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp774.value) {
        {
            panda$core$String* $tmp781 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp780 = $tmp781;
            panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s779, $tmp780);
            $tmp778 = $tmp782;
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp778, &$s783);
            $tmp777 = $tmp784;
            panda$core$String* $tmp786 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp785 = $tmp786;
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, $tmp785);
            $tmp776 = $tmp787;
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, &$s788);
            $tmp775 = $tmp789;
            (($fn790) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp775);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp776));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
            {
                $tmp791 = separator771;
                $tmp792 = &$s793;
                separator771 = $tmp792;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp799 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp798 = $tmp799;
            panda$core$String* $tmp800 = panda$core$String$convert$R$panda$core$String($tmp798);
            $tmp797 = $tmp800;
            panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s801);
            $tmp796 = $tmp802;
            panda$core$String* $tmp804 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp803 = $tmp804;
            panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp796, $tmp803);
            $tmp795 = $tmp805;
            panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp795, &$s806);
            $tmp794 = $tmp807;
            (($fn808) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp794);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
        }
        }
        panda$core$Bit $tmp809 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp809);
        if ($tmp810.value) {
        {
            panda$core$String* $tmp815 = panda$core$String$convert$R$panda$core$String(separator771);
            $tmp814 = $tmp815;
            panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s816);
            $tmp813 = $tmp817;
            panda$core$String* $tmp819 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp818 = $tmp819;
            panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, $tmp818);
            $tmp812 = $tmp820;
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, &$s821);
            $tmp811 = $tmp822;
            (($fn823) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp811);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp811));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
            {
                $tmp824 = separator771;
                $tmp825 = &$s826;
                separator771 = $tmp825;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
            }
        }
        }
        {
            int $tmp829;
            {
                ITable* $tmp833 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp833->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp833 = $tmp833->next;
                }
                $fn835 $tmp834 = $tmp833->methods[0];
                panda$collections$Iterator* $tmp836 = $tmp834(((panda$collections$Iterable*) p_m->parameters));
                $tmp832 = $tmp836;
                $tmp831 = $tmp832;
                Iter$266$9830 = $tmp831;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp831));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
                $l837:;
                ITable* $tmp840 = Iter$266$9830->$class->itable;
                while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp840 = $tmp840->next;
                }
                $fn842 $tmp841 = $tmp840->methods[0];
                panda$core$Bit $tmp843 = $tmp841(Iter$266$9830);
                panda$core$Bit $tmp844 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp843);
                bool $tmp839 = $tmp844.value;
                if (!$tmp839) goto $l838;
                {
                    int $tmp847;
                    {
                        ITable* $tmp851 = Iter$266$9830->$class->itable;
                        while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp851 = $tmp851->next;
                        }
                        $fn853 $tmp852 = $tmp851->methods[1];
                        panda$core$Object* $tmp854 = $tmp852(Iter$266$9830);
                        $tmp850 = $tmp854;
                        $tmp849 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp850);
                        p848 = $tmp849;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                        panda$core$Panda$unref$panda$core$Object($tmp850);
                        panda$core$String* $tmp861 = panda$core$String$convert$R$panda$core$String(separator771);
                        $tmp860 = $tmp861;
                        panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s862);
                        $tmp859 = $tmp863;
                        panda$core$String* $tmp865 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p848->type);
                        $tmp864 = $tmp865;
                        panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, $tmp864);
                        $tmp858 = $tmp866;
                        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s867);
                        $tmp857 = $tmp868;
                        panda$core$String* $tmp870 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p848->name);
                        $tmp869 = $tmp870;
                        panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp857, $tmp869);
                        $tmp856 = $tmp871;
                        panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s872);
                        $tmp855 = $tmp873;
                        (($fn874) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp855);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp856));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp860));
                        {
                            $tmp875 = separator771;
                            $tmp876 = &$s877;
                            separator771 = $tmp876;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp876));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
                        }
                    }
                    $tmp847 = -1;
                    goto $l845;
                    $l845:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p848));
                    p848 = NULL;
                    switch ($tmp847) {
                        case -1: goto $l878;
                    }
                    $l878:;
                }
                goto $l837;
                $l838:;
            }
            $tmp829 = -1;
            goto $l827;
            $l827:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$266$9830));
            Iter$266$9830 = NULL;
            switch ($tmp829) {
                case -1: goto $l879;
            }
            $l879:;
        }
        (($fn881) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s880);
    }
    $tmp766 = -1;
    goto $l764;
    $l764:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator771));
    separator771 = NULL;
    switch ($tmp766) {
        case -1: goto $l882;
    }
    $l882:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp885;
    panda$core$String* $tmp888;
    panda$core$String* $tmp893;
    panda$core$String* $tmp896;
    (($fn884) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s883);
    panda$core$String* $tmp886 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp885 = $tmp886;
    (($fn887) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp885);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
    panda$core$String* $tmp889 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp888 = $tmp889;
    (($fn890) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp888);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
    (($fn892) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s891);
    panda$core$String* $tmp894 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp893 = $tmp894;
    (($fn895) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp893);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
    panda$core$String* $tmp897 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp896 = $tmp897;
    (($fn898) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp896);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
    (($fn900) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s899);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp903;
    {
    }
    $tmp903 = -1;
    goto $l901;
    $l901:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp903) {
        case -1: goto $l904;
    }
    $l904:;
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

