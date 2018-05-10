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

typedef panda$core$Object* (*$fn155)(panda$core$Weak*);
typedef panda$core$Object* (*$fn159)(panda$core$Weak*);
typedef void (*$fn176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn197)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn210)(panda$core$Weak*);
typedef panda$core$Object* (*$fn214)(panda$core$Weak*);
typedef panda$core$Object* (*$fn259)(panda$core$Weak*);
typedef panda$core$Object* (*$fn279)(panda$core$Weak*);
typedef panda$core$Object* (*$fn283)(panda$core$Weak*);
typedef void (*$fn300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn388)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn398)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn403)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn421)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn424)(panda$core$Weak*);
typedef void (*$fn443)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn478)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn480)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn510)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn515)(panda$collections$CollectionView*);
typedef void (*$fn530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn546)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn548)(panda$core$Weak*);
typedef void (*$fn562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn565)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn567)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn577)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn587)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn596)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn605)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn617)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn622)(panda$core$Weak*);
typedef panda$core$Object* (*$fn631)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn646)(panda$collections$CollectionView*);
typedef void (*$fn661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn679)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn723)(panda$core$Weak*);
typedef panda$core$Object* (*$fn727)(panda$core$Weak*);
typedef void (*$fn774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn807)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn819)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn826)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn837)(panda$collections$Iterator*);
typedef void (*$fn858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn884)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

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
    panda$core$String* llvmName50;
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
    panda$core$String* $tmp78 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s76, &$s77);
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
    panda$core$String* $finallyReturn95;
    panda$core$String* $tmp97;
    panda$core$String* $finallyReturn99;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$Object* $tmp105;
    panda$core$String* $finallyReturn112;
    panda$core$String* $tmp114;
    panda$core$String* $tmp115;
    panda$core$String* $tmp116;
    panda$core$Object* $tmp118;
    panda$core$String* $finallyReturn125;
    panda$core$String* $tmp127;
    panda$core$String* $finallyReturn130;
    panda$core$String* $tmp132;
    panda$core$String* $finallyReturn134;
    panda$core$String* $tmp136;
    panda$core$String* name142;
    panda$core$String* $tmp143;
    panda$core$String* $tmp144;
    panda$core$String* $tmp145;
    panda$core$String* $tmp146;
    org$pandalanguage$pandac$ClassDecl* cl151;
    org$pandalanguage$pandac$ClassDecl* $tmp152;
    org$pandalanguage$pandac$ClassDecl* $tmp153;
    panda$core$Object* $tmp154;
    panda$core$Object* $tmp158;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $finallyReturn176;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$String* includePath184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $finallyReturn197;
    panda$core$String* $tmp199;
    org$pandalanguage$pandac$ClassDecl* cl206;
    org$pandalanguage$pandac$ClassDecl* $tmp207;
    org$pandalanguage$pandac$ClassDecl* $tmp208;
    panda$core$Object* $tmp209;
    panda$core$Object* $tmp213;
    panda$core$String* $finallyReturn216;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$Object* $tmp221;
    panda$core$String* $finallyReturn227;
    panda$core$String* $tmp229;
    panda$core$String* $tmp230;
    panda$core$Object* $tmp231;
    panda$core$Object* $tmp240;
    panda$core$String* $finallyReturn243;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    panda$core$Object* $tmp248;
    org$pandalanguage$pandac$ClassDecl* cl255;
    org$pandalanguage$pandac$ClassDecl* $tmp256;
    org$pandalanguage$pandac$ClassDecl* $tmp257;
    panda$core$Object* $tmp258;
    panda$core$String* name266;
    panda$core$String* $tmp267;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    panda$core$String* $tmp270;
    org$pandalanguage$pandac$ClassDecl* cl275;
    org$pandalanguage$pandac$ClassDecl* $tmp276;
    org$pandalanguage$pandac$ClassDecl* $tmp277;
    panda$core$Object* $tmp278;
    panda$core$Object* $tmp282;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$core$String* $tmp292;
    panda$core$String* $finallyReturn300;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$String* includePath309;
    panda$core$String* $tmp310;
    panda$core$String* $tmp311;
    panda$core$String* $tmp316;
    panda$core$String* $tmp317;
    panda$core$String* $finallyReturn322;
    panda$core$String* $tmp324;
    panda$core$String* $finallyReturn328;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$Object* $tmp332;
    panda$core$String* $finallyReturn337;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    switch (p_t->typeKind.value) {
        case 14:
        {
            $tmp97 = &$s98;
            $finallyReturn95 = $tmp97;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
            return $finallyReturn95;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp106 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp107 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp106, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp108;
            $tmp108 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp108->value = $tmp107;
            $tmp105 = ((panda$core$Object*) $tmp108);
            panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s104, $tmp105);
            $tmp103 = $tmp109;
            panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s110);
            $tmp102 = $tmp111;
            $tmp101 = $tmp102;
            $finallyReturn99 = $tmp101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
            panda$core$Panda$unref$panda$core$Object($tmp105);
            return $finallyReturn99;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp119 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp120 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp119, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp121;
            $tmp121 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp121->value = $tmp120;
            $tmp118 = ((panda$core$Object*) $tmp121);
            panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s117, $tmp118);
            $tmp116 = $tmp122;
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s123);
            $tmp115 = $tmp124;
            $tmp114 = $tmp115;
            $finallyReturn112 = $tmp114;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
            panda$core$Panda$unref$panda$core$Object($tmp118);
            return $finallyReturn112;
        }
        break;
        case 19:
        {
            $tmp127 = &$s128;
            $finallyReturn125 = $tmp127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
            return $finallyReturn125;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp130 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp130.value) {
                case 4:
                {
                    $tmp132 = &$s133;
                    $finallyReturn130 = $tmp132;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
                    return $finallyReturn130;
                }
                break;
                case 8:
                {
                    $tmp136 = &$s137;
                    $finallyReturn134 = $tmp136;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                    return $finallyReturn134;
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
            int $tmp141;
            {
                panda$core$String* $tmp147 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp146 = $tmp147;
                panda$core$String* $tmp148 = panda$core$String$convert$R$panda$core$String($tmp146);
                $tmp145 = $tmp148;
                panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s149);
                $tmp144 = $tmp150;
                $tmp143 = $tmp144;
                name142 = $tmp143;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                panda$core$Object* $tmp156 = (($fn155) self->compiler->$class->vtable[2])(self->compiler);
                $tmp154 = $tmp156;
                org$pandalanguage$pandac$ClassDecl* $tmp157 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp154), p_t);
                $tmp153 = $tmp157;
                $tmp152 = $tmp153;
                cl151 = $tmp152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Panda$unref$panda$core$Object($tmp154);
                PANDA_ASSERT(((panda$core$Bit) { cl151 != NULL }).value);
                panda$core$Object* $tmp160 = (($fn159) self->compiler->$class->vtable[2])(self->compiler);
                $tmp158 = $tmp160;
                panda$core$Bit $tmp161 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp158), cl151);
                panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
                panda$core$Panda$unref$panda$core$Object($tmp158);
                if ($tmp162.value) {
                {
                    panda$core$Bit $tmp163 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name142));
                    panda$core$Bit $tmp164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp163);
                    if ($tmp164.value) {
                    {
                        panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s169, name142);
                        $tmp168 = $tmp170;
                        panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s171);
                        $tmp167 = $tmp172;
                        panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, name142);
                        $tmp166 = $tmp173;
                        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s174);
                        $tmp165 = $tmp175;
                        (($fn176) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp165);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name142));
                    }
                    }
                    panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name142, &$s180);
                    $tmp179 = $tmp181;
                    $tmp178 = $tmp179;
                    $finallyReturn176 = $tmp178;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                    $tmp141 = 0;
                    goto $l139;
                    $l182:;
                    return $finallyReturn176;
                }
                }
                panda$core$String* $tmp188 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl151, &$s187);
                $tmp186 = $tmp188;
                $tmp185 = $tmp186;
                includePath184 = $tmp185;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Bit $tmp189 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath184));
                panda$core$Bit $tmp190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp189);
                if ($tmp190.value) {
                {
                    panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s193, includePath184);
                    $tmp192 = $tmp194;
                    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s195);
                    $tmp191 = $tmp196;
                    (($fn197) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp191);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath184));
                }
                }
                $tmp199 = name142;
                $finallyReturn197 = $tmp199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                $tmp141 = 1;
                goto $l139;
                $l200:;
                return $finallyReturn197;
            }
            $l139:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath184));
            switch ($tmp141) {
                case 1: goto $l200;
                case 0: goto $l182;
            }
            $l202:;
        }
        break;
        case 11:
        {
            int $tmp205;
            {
                panda$core$Object* $tmp211 = (($fn210) self->compiler->$class->vtable[2])(self->compiler);
                $tmp209 = $tmp211;
                org$pandalanguage$pandac$ClassDecl* $tmp212 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp209), p_t);
                $tmp208 = $tmp212;
                $tmp207 = $tmp208;
                cl206 = $tmp207;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object($tmp209);
                PANDA_ASSERT(((panda$core$Bit) { cl206 != NULL }).value);
                panda$core$Object* $tmp215 = (($fn214) self->compiler->$class->vtable[2])(self->compiler);
                $tmp213 = $tmp215;
                panda$core$Bit $tmp216 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp213), cl206);
                panda$core$Panda$unref$panda$core$Object($tmp213);
                if ($tmp216.value) {
                {
                    panda$core$Object* $tmp222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    $tmp221 = $tmp222;
                    panda$core$String* $tmp223 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp221));
                    $tmp220 = $tmp223;
                    panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s224);
                    $tmp219 = $tmp225;
                    $tmp218 = $tmp219;
                    $finallyReturn216 = $tmp218;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                    panda$core$Panda$unref$panda$core$Object($tmp221);
                    $tmp205 = 0;
                    goto $l203;
                    $l226:;
                    return $finallyReturn216;
                }
                }
                panda$core$Object* $tmp232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp231 = $tmp232;
                panda$core$String* $tmp233 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp231));
                $tmp230 = $tmp233;
                $tmp229 = $tmp230;
                $finallyReturn227 = $tmp229;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
                panda$core$Panda$unref$panda$core$Object($tmp231);
                $tmp205 = 1;
                goto $l203;
                $l234:;
                return $finallyReturn227;
            }
            $l203:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl206));
            switch ($tmp205) {
                case 0: goto $l226;
                case 1: goto $l234;
            }
            $l236:;
        }
        break;
        case 21:
        {
            int $tmp239;
            {
                panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp240 = $tmp241;
                panda$core$Bit $tmp243 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp240))->name, &$s242);
                panda$core$Panda$unref$panda$core$Object($tmp240);
                if ($tmp243.value) {
                {
                    panda$core$Object* $tmp249 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                    $tmp248 = $tmp249;
                    panda$core$String* $tmp250 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp248));
                    $tmp247 = $tmp250;
                    panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s251);
                    $tmp246 = $tmp252;
                    $tmp245 = $tmp246;
                    $finallyReturn243 = $tmp245;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                    panda$core$Panda$unref$panda$core$Object($tmp248);
                    $tmp239 = 0;
                    goto $l237;
                    $l253:;
                    return $finallyReturn243;
                }
                }
                panda$core$Object* $tmp260 = (($fn259) self->compiler->$class->vtable[2])(self->compiler);
                $tmp258 = $tmp260;
                org$pandalanguage$pandac$ClassDecl* $tmp261 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp258), p_t);
                $tmp257 = $tmp261;
                $tmp256 = $tmp257;
                cl255 = $tmp256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                panda$core$Panda$unref$panda$core$Object($tmp258);
                panda$core$Bit $tmp262 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl255);
                if ($tmp262.value) {
                {
                    int $tmp265;
                    {
                        panda$core$String* $tmp271 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp270 = $tmp271;
                        panda$core$String* $tmp272 = panda$core$String$convert$R$panda$core$String($tmp270);
                        $tmp269 = $tmp272;
                        panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s273);
                        $tmp268 = $tmp274;
                        $tmp267 = $tmp268;
                        name266 = $tmp267;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                        panda$core$Object* $tmp280 = (($fn279) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp278 = $tmp280;
                        org$pandalanguage$pandac$ClassDecl* $tmp281 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp278), p_t);
                        $tmp277 = $tmp281;
                        $tmp276 = $tmp277;
                        cl275 = $tmp276;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
                        panda$core$Panda$unref$panda$core$Object($tmp278);
                        PANDA_ASSERT(((panda$core$Bit) { cl275 != NULL }).value);
                        panda$core$Object* $tmp284 = (($fn283) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp282 = $tmp284;
                        panda$core$Bit $tmp285 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp282), cl275);
                        panda$core$Bit $tmp286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp285);
                        panda$core$Panda$unref$panda$core$Object($tmp282);
                        if ($tmp286.value) {
                        {
                            panda$core$Bit $tmp287 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name266));
                            panda$core$Bit $tmp288 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp287);
                            if ($tmp288.value) {
                            {
                                panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s293, name266);
                                $tmp292 = $tmp294;
                                panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s295);
                                $tmp291 = $tmp296;
                                panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, name266);
                                $tmp290 = $tmp297;
                                panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s298);
                                $tmp289 = $tmp299;
                                (($fn300) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp289);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
                                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name266));
                            }
                            }
                            panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name266, &$s304);
                            $tmp303 = $tmp305;
                            $tmp302 = $tmp303;
                            $finallyReturn300 = $tmp302;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                            $tmp265 = 0;
                            goto $l263;
                            $l306:;
                            $tmp239 = 1;
                            goto $l237;
                            $l307:;
                            return $finallyReturn300;
                        }
                        }
                        panda$core$String* $tmp313 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl275, &$s312);
                        $tmp311 = $tmp313;
                        $tmp310 = $tmp311;
                        includePath309 = $tmp310;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp310));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                        panda$core$Bit $tmp314 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath309));
                        panda$core$Bit $tmp315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp314);
                        if ($tmp315.value) {
                        {
                            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s318, includePath309);
                            $tmp317 = $tmp319;
                            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s320);
                            $tmp316 = $tmp321;
                            (($fn322) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp316);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                            panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath309));
                        }
                        }
                        $tmp324 = name266;
                        $finallyReturn322 = $tmp324;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                        $tmp265 = 1;
                        goto $l263;
                        $l325:;
                        $tmp239 = 2;
                        goto $l237;
                        $l326:;
                        return $finallyReturn322;
                    }
                    $l263:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name266));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl275));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath309));
                    switch ($tmp265) {
                        case 0: goto $l306;
                        case 1: goto $l325;
                    }
                    $l328:;
                }
                }
                panda$core$Object* $tmp333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp332 = $tmp333;
                panda$core$String* $tmp334 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp332));
                $tmp331 = $tmp334;
                $tmp330 = $tmp331;
                $finallyReturn328 = $tmp330;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object($tmp332);
                $tmp239 = 3;
                goto $l237;
                $l335:;
                return $finallyReturn328;
            }
            $l237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl255));
            switch ($tmp239) {
                case 2: goto $l326;
                case 1: goto $l307;
                case 3: goto $l335;
                case 0: goto $l253;
            }
            $l337:;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp341 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            $tmp340 = $tmp341;
            $tmp339 = $tmp340;
            $finallyReturn337 = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
            return $finallyReturn337;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp343;
    panda$core$Weak* $tmp344;
    panda$core$Weak* $tmp345;
    {
        $tmp343 = self->compiler;
        panda$core$Weak* $tmp346 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp346, ((panda$core$Object*) p_compiler));
        $tmp345 = $tmp346;
        $tmp344 = $tmp345;
        self->compiler = $tmp344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $finallyReturn346;
    panda$io$File* $tmp348;
    panda$io$File* $tmp349;
    panda$core$String* $tmp350;
    panda$core$String* $tmp351 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp350 = $tmp351;
    panda$io$File* $tmp352 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp350);
    $tmp349 = $tmp352;
    $tmp348 = $tmp349;
    $finallyReturn346 = $tmp348;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    return $finallyReturn346;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path357;
    panda$io$File* $tmp358;
    panda$io$File* $tmp359;
    panda$io$File* $tmp362;
    panda$io$IndentedOutputStream* $tmp364;
    panda$io$IndentedOutputStream* $tmp365;
    panda$io$IndentedOutputStream* $tmp366;
    panda$io$OutputStream* $tmp368;
    panda$io$MemoryOutputStream* $tmp376;
    panda$io$MemoryOutputStream* $tmp377;
    panda$collections$Set* $tmp378;
    panda$collections$Set* $tmp379;
    panda$core$String* $tmp380;
    panda$core$String* $tmp381;
    panda$core$String* $tmp383;
    panda$collections$Iterator* Iter$163$9393;
    panda$collections$Iterator* $tmp394;
    panda$collections$Iterator* $tmp395;
    panda$collections$ListView* $tmp396;
    panda$core$Object* $tmp397;
    org$pandalanguage$pandac$FieldDecl* f416;
    org$pandalanguage$pandac$FieldDecl* $tmp417;
    panda$core$Object* $tmp418;
    panda$core$Object* $tmp423;
    org$pandalanguage$pandac$Type* $tmp426;
    panda$core$String* $tmp429;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    panda$core$String* $tmp432;
    panda$core$Object* $tmp437;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$core$String* $tmp466;
    panda$core$String* $tmp467;
    panda$core$String* $tmp469;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$String* $tmp488;
    panda$core$String* $tmp489;
    org$pandalanguage$pandac$Type* $tmp490;
    panda$core$String* $tmp496;
    org$pandalanguage$pandac$Type* $tmp497;
    panda$core$String* $tmp504;
    panda$core$String* $tmp505;
    panda$core$Object* $tmp507;
    panda$collections$ListView* $tmp508;
    panda$core$Object* $tmp509;
    panda$core$String* $tmp522;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$core$String* $tmp531;
    panda$core$String* $tmp532;
    panda$core$String* $tmp533;
    panda$core$String* $tmp534;
    panda$core$String* $tmp536;
    panda$core$String* $tmp541;
    panda$core$Object* $tmp547;
    panda$core$String* $tmp554;
    panda$core$String* $tmp555;
    panda$core$String* $tmp557;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    panda$core$String* $tmp570;
    org$pandalanguage$pandac$Type* $tmp571;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$String* $tmp582;
    panda$core$String* $tmp588;
    panda$core$String* $tmp589;
    panda$core$String* $tmp591;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $tmp600;
    panda$core$String* $tmp609;
    panda$core$String* $tmp610;
    panda$core$String* $tmp612;
    org$pandalanguage$pandac$ClassDecl* value618;
    org$pandalanguage$pandac$ClassDecl* $tmp619;
    org$pandalanguage$pandac$ClassDecl* $tmp620;
    panda$core$Object* $tmp621;
    org$pandalanguage$pandac$Type* $tmp624;
    panda$collections$ListView* valueVTable627;
    panda$collections$ListView* $tmp628;
    panda$collections$ListView* $tmp629;
    panda$core$Object* $tmp630;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp640;
    panda$core$String* $tmp641;
    panda$core$Object* $tmp643;
    panda$core$String* $tmp653;
    panda$core$String* $tmp654;
    panda$core$String* $tmp655;
    panda$core$String* $tmp662;
    panda$core$String* $tmp663;
    panda$core$String* $tmp664;
    panda$core$String* $tmp666;
    panda$core$String* $tmp671;
    panda$core$String* $tmp672;
    panda$core$String* $tmp673;
    int $tmp356;
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
        panda$io$File* $tmp361 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s360);
        $tmp359 = $tmp361;
        $tmp358 = $tmp359;
        path357 = $tmp358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
        panda$io$File* $tmp363 = panda$io$File$parent$R$panda$io$File$Q(path357);
        $tmp362 = $tmp363;
        panda$io$File$createDirectories($tmp362);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
        {
            $tmp364 = self->out;
            panda$io$IndentedOutputStream* $tmp367 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp369 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path357);
            $tmp368 = $tmp369;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp367, $tmp368);
            $tmp366 = $tmp367;
            $tmp365 = $tmp366;
            self->out = $tmp365;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
        }
        (($fn371) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s370);
        (($fn373) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s372);
        (($fn375) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s374);
        {
            $tmp376 = self->importStream;
            $tmp377 = self->typeImportStream;
            self->importStream = $tmp377;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        }
        {
            $tmp378 = self->imports;
            $tmp379 = self->typeImports;
            self->imports = $tmp379;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
        }
        panda$core$String* $tmp384 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        $tmp383 = $tmp384;
        panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s382, $tmp383);
        $tmp381 = $tmp385;
        panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s386);
        $tmp380 = $tmp387;
        (($fn388) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp380);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
        panda$core$Int64 $tmp389 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp389;
        {
            int $tmp392;
            {
                panda$core$Object* $tmp399 = (($fn398) self->compiler->$class->vtable[2])(self->compiler);
                $tmp397 = $tmp399;
                panda$collections$ListView* $tmp400 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp397), p_cl);
                $tmp396 = $tmp400;
                ITable* $tmp401 = ((panda$collections$Iterable*) $tmp396)->$class->itable;
                while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp401 = $tmp401->next;
                }
                $fn403 $tmp402 = $tmp401->methods[0];
                panda$collections$Iterator* $tmp404 = $tmp402(((panda$collections$Iterable*) $tmp396));
                $tmp395 = $tmp404;
                $tmp394 = $tmp395;
                Iter$163$9393 = $tmp394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                panda$core$Panda$unref$panda$core$Object($tmp397);
                $l405:;
                ITable* $tmp408 = Iter$163$9393->$class->itable;
                while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp408 = $tmp408->next;
                }
                $fn410 $tmp409 = $tmp408->methods[0];
                panda$core$Bit $tmp411 = $tmp409(Iter$163$9393);
                panda$core$Bit $tmp412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp411);
                bool $tmp407 = $tmp412.value;
                if (!$tmp407) goto $l406;
                {
                    int $tmp415;
                    {
                        ITable* $tmp419 = Iter$163$9393->$class->itable;
                        while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp419 = $tmp419->next;
                        }
                        $fn421 $tmp420 = $tmp419->methods[1];
                        panda$core$Object* $tmp422 = $tmp420(Iter$163$9393);
                        $tmp418 = $tmp422;
                        $tmp417 = ((org$pandalanguage$pandac$FieldDecl*) $tmp418);
                        f416 = $tmp417;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp417));
                        panda$core$Panda$unref$panda$core$Object($tmp418);
                        panda$core$Object* $tmp425 = (($fn424) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp423 = $tmp425;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp423), f416);
                        panda$core$Panda$unref$panda$core$Object($tmp423);
                        org$pandalanguage$pandac$Type* $tmp427 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp426 = $tmp427;
                        panda$core$Bit $tmp428 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f416->type, $tmp426);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
                        if ($tmp428.value) {
                        {
                            panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s433, ((org$pandalanguage$pandac$Symbol*) f416)->name);
                            $tmp432 = $tmp434;
                            panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp432, &$s435);
                            $tmp431 = $tmp436;
                            panda$core$Int64 $tmp438 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp439;
                            $tmp439 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp439->value = $tmp438;
                            $tmp437 = ((panda$core$Object*) $tmp439);
                            panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp431, $tmp437);
                            $tmp430 = $tmp440;
                            panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, &$s441);
                            $tmp429 = $tmp442;
                            (($fn443) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp429);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                            panda$core$Panda$unref$panda$core$Object($tmp437);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp449 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f416->type);
                            $tmp448 = $tmp449;
                            panda$core$String* $tmp450 = panda$core$String$convert$R$panda$core$String($tmp448);
                            $tmp447 = $tmp450;
                            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s451);
                            $tmp446 = $tmp452;
                            panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, ((org$pandalanguage$pandac$Symbol*) f416)->name);
                            $tmp445 = $tmp453;
                            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s454);
                            $tmp444 = $tmp455;
                            (($fn456) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp444);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                        }
                        }
                    }
                    $tmp415 = -1;
                    goto $l413;
                    $l413:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f416));
                    switch ($tmp415) {
                        case -1: goto $l457;
                    }
                    $l457:;
                }
                goto $l405;
                $l406:;
            }
            $tmp392 = -1;
            goto $l390;
            $l390:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$9393));
            switch ($tmp392) {
                case -1: goto $l458;
            }
            $l458:;
        }
        panda$core$Bit $tmp460 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s459);
        if ($tmp460.value) {
        {
            (($fn462) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s461);
            (($fn464) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s463);
        }
        }
        panda$core$Int64 $tmp465 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp465;
        panda$core$String* $tmp470 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        $tmp469 = $tmp470;
        panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s468, $tmp469);
        $tmp467 = $tmp471;
        panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp467, &$s472);
        $tmp466 = $tmp473;
        (($fn474) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp466);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        (($fn476) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s475);
        (($fn478) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s477);
        (($fn480) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s479);
        org$pandalanguage$pandac$Type* $tmp491 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp490 = $tmp491;
        panda$core$String* $tmp492 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp490);
        $tmp489 = $tmp492;
        panda$core$String* $tmp493 = panda$core$String$convert$R$panda$core$String($tmp489);
        $tmp488 = $tmp493;
        panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s494);
        $tmp487 = $tmp495;
        org$pandalanguage$pandac$Type* $tmp498 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp497 = $tmp498;
        panda$core$String* $tmp499 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp497);
        $tmp496 = $tmp499;
        panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp487, $tmp496);
        $tmp486 = $tmp500;
        panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s501);
        $tmp485 = $tmp502;
        panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s484, $tmp485);
        $tmp483 = $tmp503;
        panda$core$Object* $tmp511 = (($fn510) self->compiler->$class->vtable[2])(self->compiler);
        $tmp509 = $tmp511;
        panda$collections$ListView* $tmp512 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp509), p_cl);
        $tmp508 = $tmp512;
        ITable* $tmp513 = ((panda$collections$CollectionView*) $tmp508)->$class->itable;
        while ($tmp513->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp513 = $tmp513->next;
        }
        $fn515 $tmp514 = $tmp513->methods[0];
        panda$core$Int64 $tmp516 = $tmp514(((panda$collections$CollectionView*) $tmp508));
        panda$core$Int64$wrapper* $tmp517;
        $tmp517 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp517->value = $tmp516;
        $tmp507 = ((panda$core$Object*) $tmp517);
        panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s506, $tmp507);
        $tmp505 = $tmp518;
        panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp505, &$s519);
        $tmp504 = $tmp520;
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, $tmp504);
        $tmp482 = $tmp521;
        panda$core$String* $tmp525 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        $tmp524 = $tmp525;
        panda$core$String* $tmp526 = panda$core$String$convert$R$panda$core$String($tmp524);
        $tmp523 = $tmp526;
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s527);
        $tmp522 = $tmp528;
        panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, $tmp522);
        $tmp481 = $tmp529;
        (($fn530) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp481);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$Panda$unref$panda$core$Object($tmp507);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object($tmp509);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        panda$core$String* $tmp537 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        $tmp536 = $tmp537;
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s535, $tmp536);
        $tmp534 = $tmp538;
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s539);
        $tmp533 = $tmp540;
        panda$core$String* $tmp542 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        $tmp541 = $tmp542;
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, $tmp541);
        $tmp532 = $tmp543;
        panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s544);
        $tmp531 = $tmp545;
        (($fn546) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp531);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
        panda$core$Object* $tmp549 = (($fn548) self->compiler->$class->vtable[2])(self->compiler);
        $tmp547 = $tmp549;
        panda$core$Bit $tmp550 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp547), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp547);
        if ($tmp550.value) {
        {
            int $tmp553;
            {
                panda$core$String* $tmp558 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp557 = $tmp558;
                panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s556, $tmp557);
                $tmp555 = $tmp559;
                panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s560);
                $tmp554 = $tmp561;
                (($fn562) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp554);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                panda$core$Int64 $tmp563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp563;
                (($fn565) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s564);
                (($fn567) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s566);
                org$pandalanguage$pandac$Type* $tmp572 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp571 = $tmp572;
                panda$core$String* $tmp573 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp571);
                $tmp570 = $tmp573;
                panda$core$String* $tmp574 = panda$core$String$convert$R$panda$core$String($tmp570);
                $tmp569 = $tmp574;
                panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s575);
                $tmp568 = $tmp576;
                (($fn577) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp568);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
                panda$core$Int64 $tmp578 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp578;
                panda$core$String* $tmp583 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp582 = $tmp583;
                panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s581, $tmp582);
                $tmp580 = $tmp584;
                panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s585);
                $tmp579 = $tmp586;
                (($fn587) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp579);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                panda$core$String* $tmp592 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp591 = $tmp592;
                panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s590, $tmp591);
                $tmp589 = $tmp593;
                panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s594);
                $tmp588 = $tmp595;
                (($fn596) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp588);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                panda$core$Int64 $tmp597 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp597;
                panda$core$String* $tmp601 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp600 = $tmp601;
                panda$core$String* $tmp602 = panda$core$String$convert$R$panda$core$String($tmp600);
                $tmp599 = $tmp602;
                panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s603);
                $tmp598 = $tmp604;
                (($fn605) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp598);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                (($fn607) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s606);
                panda$core$Int64 $tmp608 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp608;
                panda$core$String* $tmp613 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp612 = $tmp613;
                panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s611, $tmp612);
                $tmp610 = $tmp614;
                panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s615);
                $tmp609 = $tmp616;
                (($fn617) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp609);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                panda$core$Object* $tmp623 = (($fn622) self->compiler->$class->vtable[2])(self->compiler);
                $tmp621 = $tmp623;
                org$pandalanguage$pandac$Type* $tmp625 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp624 = $tmp625;
                org$pandalanguage$pandac$ClassDecl* $tmp626 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp621), $tmp624);
                $tmp620 = $tmp626;
                $tmp619 = $tmp620;
                value618 = $tmp619;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                panda$core$Panda$unref$panda$core$Object($tmp621);
                panda$core$Object* $tmp632 = (($fn631) self->compiler->$class->vtable[2])(self->compiler);
                $tmp630 = $tmp632;
                panda$collections$ListView* $tmp633 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp630), value618);
                $tmp629 = $tmp633;
                $tmp628 = $tmp629;
                valueVTable627 = $tmp628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                panda$core$Panda$unref$panda$core$Object($tmp630);
                panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s637, &$s638);
                $tmp636 = $tmp639;
                ITable* $tmp644 = ((panda$collections$CollectionView*) valueVTable627)->$class->itable;
                while ($tmp644->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp644 = $tmp644->next;
                }
                $fn646 $tmp645 = $tmp644->methods[0];
                panda$core$Int64 $tmp647 = $tmp645(((panda$collections$CollectionView*) valueVTable627));
                panda$core$Int64$wrapper* $tmp648;
                $tmp648 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp648->value = $tmp647;
                $tmp643 = ((panda$core$Object*) $tmp648);
                panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s642, $tmp643);
                $tmp641 = $tmp649;
                panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s650);
                $tmp640 = $tmp651;
                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, $tmp640);
                $tmp635 = $tmp652;
                panda$core$String* $tmp656 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp655 = $tmp656;
                panda$core$String* $tmp657 = panda$core$String$convert$R$panda$core$String($tmp655);
                $tmp654 = $tmp657;
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s658);
                $tmp653 = $tmp659;
                panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, $tmp653);
                $tmp634 = $tmp660;
                (($fn661) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp634);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
                panda$core$Panda$unref$panda$core$Object($tmp643);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                panda$core$String* $tmp667 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp666 = $tmp667;
                panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s665, $tmp666);
                $tmp664 = $tmp668;
                panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s669);
                $tmp663 = $tmp670;
                panda$core$String* $tmp674 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                $tmp673 = $tmp674;
                panda$core$String* $tmp675 = panda$core$String$convert$R$panda$core$String($tmp673);
                $tmp672 = $tmp675;
                panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp672, &$s676);
                $tmp671 = $tmp677;
                panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp663, $tmp671);
                $tmp662 = $tmp678;
                (($fn679) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp662);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
            }
            $tmp553 = -1;
            goto $l551;
            $l551:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable627));
            switch ($tmp553) {
                case -1: goto $l680;
            }
            $l680:;
        }
        }
    }
    $tmp356 = -1;
    goto $l354;
    $l354:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path357));
    switch ($tmp356) {
        case -1: goto $l681;
    }
    $l681:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result685;
    panda$core$String* $tmp686;
    panda$core$String* $tmp687;
    org$pandalanguage$pandac$Type* $tmp688;
    panda$core$String* $finallyReturn697;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    panda$core$String* $finallyReturn704;
    panda$core$String* $tmp706;
    int $tmp684;
    {
        org$pandalanguage$pandac$Type* $tmp689 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
        $tmp688 = $tmp689;
        panda$core$String* $tmp690 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp688);
        $tmp687 = $tmp690;
        $tmp686 = $tmp687;
        result685 = $tmp686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp691 = $tmp692.value;
        if (!$tmp691) goto $l693;
        panda$core$Bit $tmp695 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result685, &$s694);
        panda$core$Bit $tmp696 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp695);
        $tmp691 = $tmp696.value;
        $l693:;
        panda$core$Bit $tmp697 = { $tmp691 };
        if ($tmp697.value) {
        {
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result685, &$s701);
            $tmp700 = $tmp702;
            $tmp699 = $tmp700;
            $finallyReturn697 = $tmp699;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
            $tmp684 = 0;
            goto $l682;
            $l703:;
            return $finallyReturn697;
        }
        }
        $tmp706 = result685;
        $finallyReturn704 = $tmp706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp706));
        $tmp684 = 1;
        goto $l682;
        $l707:;
        return $finallyReturn704;
    }
    $l682:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result685));
    switch ($tmp684) {
        case 0: goto $l703;
        case 1: goto $l707;
    }
    $l709:;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $finallyReturn711;
    panda$core$Bit result714;
    panda$core$Object* $tmp722;
    org$pandalanguage$pandac$ClassDecl* $tmp725;
    panda$core$Object* $tmp726;
    panda$core$Bit $finallyReturn745;
    panda$core$Bit $tmp710 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp710);
    if ($tmp711.value) {
    {
        $finallyReturn711 = ((panda$core$Bit) { false });
        return $finallyReturn711;
    }
    }
    panda$core$Bit $tmp717 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp716 = $tmp717.value;
    if (!$tmp716) goto $l718;
    panda$core$Bit $tmp719 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp716 = $tmp719.value;
    $l718:;
    panda$core$Bit $tmp720 = { $tmp716 };
    bool $tmp715 = $tmp720.value;
    if (!$tmp715) goto $l721;
    panda$core$Object* $tmp724 = (($fn723) self->compiler->$class->vtable[2])(self->compiler);
    $tmp722 = $tmp724;
    panda$core$Object* $tmp728 = (($fn727) self->compiler->$class->vtable[2])(self->compiler);
    $tmp726 = $tmp728;
    org$pandalanguage$pandac$ClassDecl* $tmp729 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp726), p_m->returnType);
    $tmp725 = $tmp729;
    panda$core$Bit $tmp730 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp722), $tmp725);
    $tmp715 = $tmp730.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
    panda$core$Panda$unref$panda$core$Object($tmp726);
    panda$core$Panda$unref$panda$core$Object($tmp722);
    $l721:;
    panda$core$Bit $tmp731 = { $tmp715 };
    result714 = $tmp731;
    panda$core$Bit $tmp733 = panda$core$Bit$$NOT$R$panda$core$Bit(result714);
    bool $tmp732 = $tmp733.value;
    if ($tmp732) goto $l734;
    panda$core$Bit $tmp736 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp736);
    bool $tmp735 = $tmp737.value;
    if (!$tmp735) goto $l738;
    panda$core$Bit $tmp740 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp739 = $tmp740.value;
    if ($tmp739) goto $l741;
    panda$core$Bit $tmp742 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp739 = $tmp742.value;
    $l741:;
    panda$core$Bit $tmp743 = { $tmp739 };
    $tmp735 = $tmp743.value;
    $l738:;
    panda$core$Bit $tmp744 = { $tmp735 };
    $tmp732 = $tmp744.value;
    $l734:;
    panda$core$Bit $tmp745 = { $tmp732 };
    PANDA_ASSERT($tmp745.value);
    $finallyReturn745 = result714;
    return $finallyReturn745;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp751;
    panda$io$MemoryOutputStream* $tmp752;
    panda$collections$Set* $tmp753;
    panda$collections$Set* $tmp754;
    panda$core$String* separator755;
    panda$core$String* $tmp756;
    panda$core$String* $tmp759;
    panda$core$String* $tmp760;
    panda$core$String* $tmp761;
    panda$core$String* $tmp762;
    panda$core$String* $tmp764;
    panda$core$String* $tmp769;
    panda$core$String* $tmp775;
    panda$core$String* $tmp776;
    panda$core$String* $tmp778;
    panda$core$String* $tmp779;
    panda$core$String* $tmp780;
    panda$core$String* $tmp781;
    panda$core$String* $tmp782;
    panda$core$String* $tmp787;
    panda$core$String* $tmp795;
    panda$core$String* $tmp796;
    panda$core$String* $tmp797;
    panda$core$String* $tmp798;
    panda$core$String* $tmp802;
    panda$core$String* $tmp808;
    panda$core$String* $tmp809;
    panda$collections$Iterator* Iter$266$9814;
    panda$collections$Iterator* $tmp815;
    panda$collections$Iterator* $tmp816;
    org$pandalanguage$pandac$MethodDecl$Parameter* p832;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp833;
    panda$core$Object* $tmp834;
    panda$core$String* $tmp839;
    panda$core$String* $tmp840;
    panda$core$String* $tmp841;
    panda$core$String* $tmp842;
    panda$core$String* $tmp843;
    panda$core$String* $tmp844;
    panda$core$String* $tmp848;
    panda$core$String* $tmp853;
    panda$core$String* $tmp859;
    panda$core$String* $tmp860;
    int $tmp750;
    {
        {
            $tmp751 = self->importStream;
            $tmp752 = self->bodyImportStream;
            self->importStream = $tmp752;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
        }
        {
            $tmp753 = self->imports;
            $tmp754 = self->bodyImports;
            self->imports = $tmp754;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
        }
        $tmp756 = &$s757;
        separator755 = $tmp756;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
        panda$core$Bit $tmp758 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp758.value) {
        {
            panda$core$String* $tmp765 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp764 = $tmp765;
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s763, $tmp764);
            $tmp762 = $tmp766;
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s767);
            $tmp761 = $tmp768;
            panda$core$String* $tmp770 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp769 = $tmp770;
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp761, $tmp769);
            $tmp760 = $tmp771;
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp760, &$s772);
            $tmp759 = $tmp773;
            (($fn774) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp759);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
            {
                $tmp775 = separator755;
                $tmp776 = &$s777;
                separator755 = $tmp776;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp783 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp782 = $tmp783;
            panda$core$String* $tmp784 = panda$core$String$convert$R$panda$core$String($tmp782);
            $tmp781 = $tmp784;
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, &$s785);
            $tmp780 = $tmp786;
            panda$core$String* $tmp788 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp787 = $tmp788;
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, $tmp787);
            $tmp779 = $tmp789;
            panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s790);
            $tmp778 = $tmp791;
            (($fn792) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp778);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp781));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
        }
        }
        panda$core$Bit $tmp793 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp793);
        if ($tmp794.value) {
        {
            panda$core$String* $tmp799 = panda$core$String$convert$R$panda$core$String(separator755);
            $tmp798 = $tmp799;
            panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, &$s800);
            $tmp797 = $tmp801;
            panda$core$String* $tmp803 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp802 = $tmp803;
            panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, $tmp802);
            $tmp796 = $tmp804;
            panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp796, &$s805);
            $tmp795 = $tmp806;
            (($fn807) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp795);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
            {
                $tmp808 = separator755;
                $tmp809 = &$s810;
                separator755 = $tmp809;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp809));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
            }
        }
        }
        {
            int $tmp813;
            {
                ITable* $tmp817 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp817->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp817 = $tmp817->next;
                }
                $fn819 $tmp818 = $tmp817->methods[0];
                panda$collections$Iterator* $tmp820 = $tmp818(((panda$collections$Iterable*) p_m->parameters));
                $tmp816 = $tmp820;
                $tmp815 = $tmp816;
                Iter$266$9814 = $tmp815;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
                $l821:;
                ITable* $tmp824 = Iter$266$9814->$class->itable;
                while ($tmp824->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp824 = $tmp824->next;
                }
                $fn826 $tmp825 = $tmp824->methods[0];
                panda$core$Bit $tmp827 = $tmp825(Iter$266$9814);
                panda$core$Bit $tmp828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp827);
                bool $tmp823 = $tmp828.value;
                if (!$tmp823) goto $l822;
                {
                    int $tmp831;
                    {
                        ITable* $tmp835 = Iter$266$9814->$class->itable;
                        while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp835 = $tmp835->next;
                        }
                        $fn837 $tmp836 = $tmp835->methods[1];
                        panda$core$Object* $tmp838 = $tmp836(Iter$266$9814);
                        $tmp834 = $tmp838;
                        $tmp833 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp834);
                        p832 = $tmp833;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp833));
                        panda$core$Panda$unref$panda$core$Object($tmp834);
                        panda$core$String* $tmp845 = panda$core$String$convert$R$panda$core$String(separator755);
                        $tmp844 = $tmp845;
                        panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s846);
                        $tmp843 = $tmp847;
                        panda$core$String* $tmp849 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p832->type);
                        $tmp848 = $tmp849;
                        panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, $tmp848);
                        $tmp842 = $tmp850;
                        panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s851);
                        $tmp841 = $tmp852;
                        panda$core$String* $tmp854 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p832->name);
                        $tmp853 = $tmp854;
                        panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp841, $tmp853);
                        $tmp840 = $tmp855;
                        panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp840, &$s856);
                        $tmp839 = $tmp857;
                        (($fn858) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp839);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp841));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp843));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                        {
                            $tmp859 = separator755;
                            $tmp860 = &$s861;
                            separator755 = $tmp860;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
                        }
                    }
                    $tmp831 = -1;
                    goto $l829;
                    $l829:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p832));
                    switch ($tmp831) {
                        case -1: goto $l862;
                    }
                    $l862:;
                }
                goto $l821;
                $l822:;
            }
            $tmp813 = -1;
            goto $l811;
            $l811:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$266$9814));
            switch ($tmp813) {
                case -1: goto $l863;
            }
            $l863:;
        }
        (($fn865) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s864);
    }
    $tmp750 = -1;
    goto $l748;
    $l748:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator755));
    switch ($tmp750) {
        case -1: goto $l866;
    }
    $l866:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp869;
    panda$core$String* $tmp872;
    panda$core$String* $tmp877;
    panda$core$String* $tmp880;
    (($fn868) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s867);
    panda$core$String* $tmp870 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp869 = $tmp870;
    (($fn871) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp869);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
    panda$core$String* $tmp873 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp872 = $tmp873;
    (($fn874) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp872);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp872));
    (($fn876) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s875);
    panda$core$String* $tmp878 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp877 = $tmp878;
    (($fn879) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp877);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
    panda$core$String* $tmp881 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp880 = $tmp881;
    (($fn882) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp880);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
    (($fn884) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s883);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp887;
    {
    }
    $tmp887 = -1;
    goto $l885;
    $l885:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp887) {
        case -1: goto $l888;
    }
    $l888:;
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

