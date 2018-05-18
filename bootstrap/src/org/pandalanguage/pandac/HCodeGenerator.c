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

typedef panda$core$Object* (*$fn157)(panda$core$Weak*);
typedef panda$core$Object* (*$fn161)(panda$core$Weak*);
typedef void (*$fn178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn198)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn211)(panda$core$Weak*);
typedef panda$core$Object* (*$fn215)(panda$core$Weak*);
typedef panda$core$Object* (*$fn258)(panda$core$Weak*);
typedef panda$core$Object* (*$fn278)(panda$core$Weak*);
typedef panda$core$Object* (*$fn282)(panda$core$Weak*);
typedef void (*$fn299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn320)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn338)(panda$core$Weak*);
typedef void (*$fn370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn387)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn397)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn402)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn409)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn420)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn423)(panda$core$Weak*);
typedef void (*$fn442)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn479)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn509)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn514)(panda$collections$CollectionView*);
typedef void (*$fn529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn545)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn547)(panda$core$Weak*);
typedef void (*$fn561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn616)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn621)(panda$core$Weak*);
typedef panda$core$Object* (*$fn630)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn645)(panda$collections$CollectionView*);
typedef void (*$fn660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn678)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn689)(panda$core$Weak*);
typedef panda$core$Object* (*$fn724)(panda$core$Weak*);
typedef panda$core$Object* (*$fn728)(panda$core$Weak*);
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
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
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
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp30 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
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
    panda$core$String* $returnValue42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp44 = $tmp45;
    $tmp43 = $tmp44;
    $returnValue42 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    return $returnValue42;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName50 = NULL;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$String* $returnValue56;
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
        $returnValue56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        $tmp49 = 0;
        goto $l47;
        $l61:;
        return $returnValue56;
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
    panda$core$Int64 $returnValue64;
    panda$core$Int64 $tmp65 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue64 = $tmp65;
    return $returnValue64;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue67;
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
    $returnValue67 = $tmp68;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    return $returnValue67;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$61_996;
    panda$core$String* $returnValue98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$Object* $tmp107;
    panda$core$String* $tmp116;
    panda$core$String* $tmp117;
    panda$core$String* $tmp118;
    panda$core$Object* $tmp120;
    panda$core$String* $tmp129;
    panda$core$String* $tmp134;
    panda$core$String* $tmp137;
    panda$core$String* name144 = NULL;
    panda$core$String* $tmp145;
    panda$core$String* $tmp146;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    org$pandalanguage$pandac$ClassDecl* cl153 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp154;
    org$pandalanguage$pandac$ClassDecl* $tmp155;
    panda$core$Object* $tmp156;
    panda$core$Object* $tmp160;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp179;
    panda$core$String* $tmp180;
    panda$core$String* includePath185 = NULL;
    panda$core$String* $tmp186;
    panda$core$String* $tmp187;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp199;
    org$pandalanguage$pandac$ClassDecl* cl207 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp208;
    org$pandalanguage$pandac$ClassDecl* $tmp209;
    panda$core$Object* $tmp210;
    panda$core$Object* $tmp214;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$Object* $tmp221;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$core$Object* $tmp230;
    panda$core$Object* $tmp240;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$Object* $tmp247;
    org$pandalanguage$pandac$ClassDecl* cl254 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp255;
    org$pandalanguage$pandac$ClassDecl* $tmp256;
    panda$core$Object* $tmp257;
    panda$core$String* name265 = NULL;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    org$pandalanguage$pandac$ClassDecl* cl274 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp275;
    org$pandalanguage$pandac$ClassDecl* $tmp276;
    panda$core$Object* $tmp277;
    panda$core$Object* $tmp281;
    panda$core$String* $tmp288;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$core$String* $tmp300;
    panda$core$String* $tmp301;
    panda$core$String* includePath307 = NULL;
    panda$core$String* $tmp308;
    panda$core$String* $tmp309;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp321;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$Object* $tmp328;
    panda$core$String* $tmp335;
    panda$core$String* $tmp336;
    panda$core$Object* $tmp337;
    {
        $match$61_996 = p_t->typeKind;
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp97.value) {
        {
            $tmp99 = &$s100;
            $returnValue98 = $tmp99;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp102.value) {
        {
            panda$core$Int64 $tmp108 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp109 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp108, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp110;
            $tmp110 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp110->value = $tmp109;
            $tmp107 = ((panda$core$Object*) $tmp110);
            panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s106, $tmp107);
            $tmp105 = $tmp111;
            panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s112);
            $tmp104 = $tmp113;
            $tmp103 = $tmp104;
            $returnValue98 = $tmp103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object($tmp107);
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp115.value) {
        {
            panda$core$Int64 $tmp121 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp122 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp121, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp123;
            $tmp123 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp123->value = $tmp122;
            $tmp120 = ((panda$core$Object*) $tmp123);
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s119, $tmp120);
            $tmp118 = $tmp124;
            panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s125);
            $tmp117 = $tmp126;
            $tmp116 = $tmp117;
            $returnValue98 = $tmp116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object($tmp120);
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp128.value) {
        {
            $tmp129 = &$s130;
            $returnValue98 = $tmp129;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp132.value) {
        {
            panda$core$Int64 $tmp133 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp133.value) {
                case 4:
                {
                    $tmp134 = &$s135;
                    $returnValue98 = $tmp134;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
                    return $returnValue98;
                }
                break;
                case 8:
                {
                    $tmp137 = &$s138;
                    $returnValue98 = $tmp137;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                    return $returnValue98;
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
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp140.value) {
        {
            int $tmp143;
            {
                panda$core$String* $tmp149 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp148 = $tmp149;
                panda$core$String* $tmp150 = panda$core$String$convert$R$panda$core$String($tmp148);
                $tmp147 = $tmp150;
                panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s151);
                $tmp146 = $tmp152;
                $tmp145 = $tmp146;
                name144 = $tmp145;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                panda$core$Object* $tmp158 = (($fn157) self->compiler->$class->vtable[2])(self->compiler);
                $tmp156 = $tmp158;
                org$pandalanguage$pandac$ClassDecl* $tmp159 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp156), p_t);
                $tmp155 = $tmp159;
                $tmp154 = $tmp155;
                cl153 = $tmp154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                panda$core$Panda$unref$panda$core$Object($tmp156);
                PANDA_ASSERT(((panda$core$Bit) { cl153 != NULL }).value);
                panda$core$Object* $tmp162 = (($fn161) self->compiler->$class->vtable[2])(self->compiler);
                $tmp160 = $tmp162;
                panda$core$Bit $tmp163 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp160), cl153);
                panda$core$Bit $tmp164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp163);
                panda$core$Panda$unref$panda$core$Object($tmp160);
                if ($tmp164.value) {
                {
                    panda$core$Bit $tmp165 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name144));
                    panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
                    if ($tmp166.value) {
                    {
                        panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s171, name144);
                        $tmp170 = $tmp172;
                        panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s173);
                        $tmp169 = $tmp174;
                        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, name144);
                        $tmp168 = $tmp175;
                        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s176);
                        $tmp167 = $tmp177;
                        (($fn178) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp167);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name144));
                    }
                    }
                    panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name144, &$s181);
                    $tmp180 = $tmp182;
                    $tmp179 = $tmp180;
                    $returnValue98 = $tmp179;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
                    $tmp143 = 0;
                    goto $l141;
                    $l183:;
                    return $returnValue98;
                }
                }
                panda$core$String* $tmp189 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl153, &$s188);
                $tmp187 = $tmp189;
                $tmp186 = $tmp187;
                includePath185 = $tmp186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
                panda$core$Bit $tmp190 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath185));
                panda$core$Bit $tmp191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp190);
                if ($tmp191.value) {
                {
                    panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s194, includePath185);
                    $tmp193 = $tmp195;
                    panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s196);
                    $tmp192 = $tmp197;
                    (($fn198) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp192);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath185));
                }
                }
                $tmp199 = name144;
                $returnValue98 = $tmp199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                $tmp143 = 1;
                goto $l141;
                $l200:;
                return $returnValue98;
            }
            $l141:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name144));
            name144 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl153));
            cl153 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath185));
            includePath185 = NULL;
            switch ($tmp143) {
                case 1: goto $l200;
                case 0: goto $l183;
            }
            $l202:;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp203.value) {
        {
            int $tmp206;
            {
                panda$core$Object* $tmp212 = (($fn211) self->compiler->$class->vtable[2])(self->compiler);
                $tmp210 = $tmp212;
                org$pandalanguage$pandac$ClassDecl* $tmp213 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp210), p_t);
                $tmp209 = $tmp213;
                $tmp208 = $tmp209;
                cl207 = $tmp208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
                panda$core$Panda$unref$panda$core$Object($tmp210);
                PANDA_ASSERT(((panda$core$Bit) { cl207 != NULL }).value);
                panda$core$Object* $tmp216 = (($fn215) self->compiler->$class->vtable[2])(self->compiler);
                $tmp214 = $tmp216;
                panda$core$Bit $tmp217 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp214), cl207);
                panda$core$Panda$unref$panda$core$Object($tmp214);
                if ($tmp217.value) {
                {
                    panda$core$Object* $tmp222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    $tmp221 = $tmp222;
                    panda$core$String* $tmp223 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp221));
                    $tmp220 = $tmp223;
                    panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s224);
                    $tmp219 = $tmp225;
                    $tmp218 = $tmp219;
                    $returnValue98 = $tmp218;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                    panda$core$Panda$unref$panda$core$Object($tmp221);
                    $tmp206 = 0;
                    goto $l204;
                    $l226:;
                    return $returnValue98;
                }
                }
                panda$core$Object* $tmp231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp230 = $tmp231;
                panda$core$String* $tmp232 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp230));
                $tmp229 = $tmp232;
                $tmp228 = $tmp229;
                $returnValue98 = $tmp228;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                panda$core$Panda$unref$panda$core$Object($tmp230);
                $tmp206 = 1;
                goto $l204;
                $l233:;
                return $returnValue98;
            }
            $l204:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl207));
            cl207 = NULL;
            switch ($tmp206) {
                case 0: goto $l226;
                case 1: goto $l233;
            }
            $l235:;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp236.value) {
        {
            int $tmp239;
            {
                panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp240 = $tmp241;
                panda$core$Bit $tmp243 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp240))->name, &$s242);
                panda$core$Panda$unref$panda$core$Object($tmp240);
                if ($tmp243.value) {
                {
                    panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                    $tmp247 = $tmp248;
                    panda$core$String* $tmp249 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp247));
                    $tmp246 = $tmp249;
                    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s250);
                    $tmp245 = $tmp251;
                    $tmp244 = $tmp245;
                    $returnValue98 = $tmp244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object($tmp247);
                    $tmp239 = 0;
                    goto $l237;
                    $l252:;
                    return $returnValue98;
                }
                }
                panda$core$Object* $tmp259 = (($fn258) self->compiler->$class->vtable[2])(self->compiler);
                $tmp257 = $tmp259;
                org$pandalanguage$pandac$ClassDecl* $tmp260 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp257), p_t);
                $tmp256 = $tmp260;
                $tmp255 = $tmp256;
                cl254 = $tmp255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                panda$core$Panda$unref$panda$core$Object($tmp257);
                panda$core$Bit $tmp261 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl254);
                if ($tmp261.value) {
                {
                    int $tmp264;
                    {
                        panda$core$String* $tmp270 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp269 = $tmp270;
                        panda$core$String* $tmp271 = panda$core$String$convert$R$panda$core$String($tmp269);
                        $tmp268 = $tmp271;
                        panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s272);
                        $tmp267 = $tmp273;
                        $tmp266 = $tmp267;
                        name265 = $tmp266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Object* $tmp279 = (($fn278) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp277 = $tmp279;
                        org$pandalanguage$pandac$ClassDecl* $tmp280 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp277), p_t);
                        $tmp276 = $tmp280;
                        $tmp275 = $tmp276;
                        cl274 = $tmp275;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                        panda$core$Panda$unref$panda$core$Object($tmp277);
                        PANDA_ASSERT(((panda$core$Bit) { cl274 != NULL }).value);
                        panda$core$Object* $tmp283 = (($fn282) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp281 = $tmp283;
                        panda$core$Bit $tmp284 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp281), cl274);
                        panda$core$Bit $tmp285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp284);
                        panda$core$Panda$unref$panda$core$Object($tmp281);
                        if ($tmp285.value) {
                        {
                            panda$core$Bit $tmp286 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name265));
                            panda$core$Bit $tmp287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp286);
                            if ($tmp287.value) {
                            {
                                panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s292, name265);
                                $tmp291 = $tmp293;
                                panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, &$s294);
                                $tmp290 = $tmp295;
                                panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, name265);
                                $tmp289 = $tmp296;
                                panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s297);
                                $tmp288 = $tmp298;
                                (($fn299) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp288);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name265));
                            }
                            }
                            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name265, &$s302);
                            $tmp301 = $tmp303;
                            $tmp300 = $tmp301;
                            $returnValue98 = $tmp300;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                            $tmp264 = 0;
                            goto $l262;
                            $l304:;
                            $tmp239 = 1;
                            goto $l237;
                            $l305:;
                            return $returnValue98;
                        }
                        }
                        panda$core$String* $tmp311 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl274, &$s310);
                        $tmp309 = $tmp311;
                        $tmp308 = $tmp309;
                        includePath307 = $tmp308;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                        panda$core$Bit $tmp312 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath307));
                        panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
                        if ($tmp313.value) {
                        {
                            panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s316, includePath307);
                            $tmp315 = $tmp317;
                            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s318);
                            $tmp314 = $tmp319;
                            (($fn320) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp314);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath307));
                        }
                        }
                        $tmp321 = name265;
                        $returnValue98 = $tmp321;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
                        $tmp264 = 1;
                        goto $l262;
                        $l322:;
                        $tmp239 = 2;
                        goto $l237;
                        $l323:;
                        return $returnValue98;
                    }
                    $l262:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name265));
                    name265 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl274));
                    cl274 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath307));
                    includePath307 = NULL;
                    switch ($tmp264) {
                        case 0: goto $l304;
                        case 1: goto $l322;
                    }
                    $l325:;
                }
                }
                panda$core$Object* $tmp329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp328 = $tmp329;
                panda$core$String* $tmp330 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp328));
                $tmp327 = $tmp330;
                $tmp326 = $tmp327;
                $returnValue98 = $tmp326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                panda$core$Panda$unref$panda$core$Object($tmp328);
                $tmp239 = 3;
                goto $l237;
                $l331:;
                return $returnValue98;
            }
            $l237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl254));
            cl254 = NULL;
            switch ($tmp239) {
                case 2: goto $l323;
                case 3: goto $l331;
                case 0: goto $l252;
                case 1: goto $l305;
            }
            $l333:;
        }
        }
        else {
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp334.value) {
        {
            panda$core$Object* $tmp339 = (($fn338) p_t->parameter->$class->vtable[2])(p_t->parameter);
            $tmp337 = $tmp339;
            panda$core$String* $tmp340 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp337)->bound);
            $tmp336 = $tmp340;
            $tmp335 = $tmp336;
            $returnValue98 = $tmp335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
            panda$core$Panda$unref$panda$core$Object($tmp337);
            return $returnValue98;
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
    panda$core$Weak* $tmp342;
    panda$core$Weak* $tmp343;
    panda$core$Weak* $tmp344;
    {
        $tmp342 = self->compiler;
        panda$core$Weak* $tmp345 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp345, ((panda$core$Object*) p_compiler));
        $tmp344 = $tmp345;
        $tmp343 = $tmp344;
        self->compiler = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue346;
    panda$io$File* $tmp347;
    panda$io$File* $tmp348;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp349 = $tmp350;
    panda$io$File* $tmp351 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp349);
    $tmp348 = $tmp351;
    $tmp347 = $tmp348;
    $returnValue346 = $tmp347;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    return $returnValue346;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path356 = NULL;
    panda$io$File* $tmp357;
    panda$io$File* $tmp358;
    panda$io$File* $tmp361;
    panda$io$IndentedOutputStream* $tmp363;
    panda$io$IndentedOutputStream* $tmp364;
    panda$io$IndentedOutputStream* $tmp365;
    panda$io$OutputStream* $tmp367;
    panda$io$MemoryOutputStream* $tmp375;
    panda$io$MemoryOutputStream* $tmp376;
    panda$collections$Set* $tmp377;
    panda$collections$Set* $tmp378;
    panda$core$String* $tmp379;
    panda$core$String* $tmp380;
    panda$core$String* $tmp382;
    panda$collections$Iterator* Iter$163$9392 = NULL;
    panda$collections$Iterator* $tmp393;
    panda$collections$Iterator* $tmp394;
    panda$collections$ListView* $tmp395;
    panda$core$Object* $tmp396;
    org$pandalanguage$pandac$FieldDecl* f415 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp416;
    panda$core$Object* $tmp417;
    panda$core$Object* $tmp422;
    org$pandalanguage$pandac$Type* $tmp425;
    panda$core$String* $tmp428;
    panda$core$String* $tmp429;
    panda$core$String* $tmp430;
    panda$core$String* $tmp431;
    panda$core$Object* $tmp436;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466;
    panda$core$String* $tmp468;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp484;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$String* $tmp488;
    org$pandalanguage$pandac$Type* $tmp489;
    panda$core$String* $tmp495;
    org$pandalanguage$pandac$Type* $tmp496;
    panda$core$String* $tmp503;
    panda$core$String* $tmp504;
    panda$core$Object* $tmp506;
    panda$collections$ListView* $tmp507;
    panda$core$Object* $tmp508;
    panda$core$String* $tmp521;
    panda$core$String* $tmp522;
    panda$core$String* $tmp523;
    panda$core$String* $tmp530;
    panda$core$String* $tmp531;
    panda$core$String* $tmp532;
    panda$core$String* $tmp533;
    panda$core$String* $tmp535;
    panda$core$String* $tmp540;
    panda$core$Object* $tmp546;
    panda$core$String* $tmp553;
    panda$core$String* $tmp554;
    panda$core$String* $tmp556;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    org$pandalanguage$pandac$Type* $tmp570;
    panda$core$String* $tmp578;
    panda$core$String* $tmp579;
    panda$core$String* $tmp581;
    panda$core$String* $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp590;
    panda$core$String* $tmp597;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $tmp608;
    panda$core$String* $tmp609;
    panda$core$String* $tmp611;
    org$pandalanguage$pandac$ClassDecl* value617 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp618;
    org$pandalanguage$pandac$ClassDecl* $tmp619;
    panda$core$Object* $tmp620;
    org$pandalanguage$pandac$Type* $tmp623;
    panda$collections$ListView* valueVTable626 = NULL;
    panda$collections$ListView* $tmp627;
    panda$collections$ListView* $tmp628;
    panda$core$Object* $tmp629;
    panda$core$String* $tmp633;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp639;
    panda$core$String* $tmp640;
    panda$core$Object* $tmp642;
    panda$core$String* $tmp652;
    panda$core$String* $tmp653;
    panda$core$String* $tmp654;
    panda$core$String* $tmp661;
    panda$core$String* $tmp662;
    panda$core$String* $tmp663;
    panda$core$String* $tmp665;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    panda$core$String* $tmp672;
    int $tmp355;
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
        panda$io$File* $tmp360 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s359);
        $tmp358 = $tmp360;
        $tmp357 = $tmp358;
        path356 = $tmp357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
        panda$io$File* $tmp362 = panda$io$File$parent$R$panda$io$File$Q(path356);
        $tmp361 = $tmp362;
        panda$io$File$createDirectories($tmp361);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
        {
            $tmp363 = self->out;
            panda$io$IndentedOutputStream* $tmp366 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp368 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path356);
            $tmp367 = $tmp368;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp366, $tmp367);
            $tmp365 = $tmp366;
            $tmp364 = $tmp365;
            self->out = $tmp364;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
        }
        (($fn370) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s369);
        (($fn372) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s371);
        (($fn374) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s373);
        {
            $tmp375 = self->importStream;
            $tmp376 = self->typeImportStream;
            self->importStream = $tmp376;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
        }
        {
            $tmp377 = self->imports;
            $tmp378 = self->typeImports;
            self->imports = $tmp378;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
        }
        panda$core$String* $tmp383 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp382 = $tmp383;
        panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s381, $tmp382);
        $tmp380 = $tmp384;
        panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s385);
        $tmp379 = $tmp386;
        (($fn387) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp379);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
        panda$core$Int64 $tmp388 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp388;
        {
            int $tmp391;
            {
                panda$core$Object* $tmp398 = (($fn397) self->compiler->$class->vtable[2])(self->compiler);
                $tmp396 = $tmp398;
                panda$collections$ListView* $tmp399 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp396), p_cl);
                $tmp395 = $tmp399;
                ITable* $tmp400 = ((panda$collections$Iterable*) $tmp395)->$class->itable;
                while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp400 = $tmp400->next;
                }
                $fn402 $tmp401 = $tmp400->methods[0];
                panda$collections$Iterator* $tmp403 = $tmp401(((panda$collections$Iterable*) $tmp395));
                $tmp394 = $tmp403;
                $tmp393 = $tmp394;
                Iter$163$9392 = $tmp393;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                panda$core$Panda$unref$panda$core$Object($tmp396);
                $l404:;
                ITable* $tmp407 = Iter$163$9392->$class->itable;
                while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp407 = $tmp407->next;
                }
                $fn409 $tmp408 = $tmp407->methods[0];
                panda$core$Bit $tmp410 = $tmp408(Iter$163$9392);
                panda$core$Bit $tmp411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp410);
                bool $tmp406 = $tmp411.value;
                if (!$tmp406) goto $l405;
                {
                    int $tmp414;
                    {
                        ITable* $tmp418 = Iter$163$9392->$class->itable;
                        while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp418 = $tmp418->next;
                        }
                        $fn420 $tmp419 = $tmp418->methods[1];
                        panda$core$Object* $tmp421 = $tmp419(Iter$163$9392);
                        $tmp417 = $tmp421;
                        $tmp416 = ((org$pandalanguage$pandac$FieldDecl*) $tmp417);
                        f415 = $tmp416;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                        panda$core$Panda$unref$panda$core$Object($tmp417);
                        panda$core$Object* $tmp424 = (($fn423) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp422 = $tmp424;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp422), f415);
                        panda$core$Panda$unref$panda$core$Object($tmp422);
                        org$pandalanguage$pandac$Type* $tmp426 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp425 = $tmp426;
                        panda$core$Bit $tmp427 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f415->type, $tmp425);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                        if ($tmp427.value) {
                        {
                            panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s432, ((org$pandalanguage$pandac$Symbol*) f415)->name);
                            $tmp431 = $tmp433;
                            panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, &$s434);
                            $tmp430 = $tmp435;
                            panda$core$Int64 $tmp437 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp438;
                            $tmp438 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp438->value = $tmp437;
                            $tmp436 = ((panda$core$Object*) $tmp438);
                            panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp430, $tmp436);
                            $tmp429 = $tmp439;
                            panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, &$s440);
                            $tmp428 = $tmp441;
                            (($fn442) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp428);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
                            panda$core$Panda$unref$panda$core$Object($tmp436);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp448 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f415->type);
                            $tmp447 = $tmp448;
                            panda$core$String* $tmp449 = panda$core$String$convert$R$panda$core$String($tmp447);
                            $tmp446 = $tmp449;
                            panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s450);
                            $tmp445 = $tmp451;
                            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, ((org$pandalanguage$pandac$Symbol*) f415)->name);
                            $tmp444 = $tmp452;
                            panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s453);
                            $tmp443 = $tmp454;
                            (($fn455) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp443);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                        }
                        }
                    }
                    $tmp414 = -1;
                    goto $l412;
                    $l412:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f415));
                    f415 = NULL;
                    switch ($tmp414) {
                        case -1: goto $l456;
                    }
                    $l456:;
                }
                goto $l404;
                $l405:;
            }
            $tmp391 = -1;
            goto $l389;
            $l389:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$9392));
            Iter$163$9392 = NULL;
            switch ($tmp391) {
                case -1: goto $l457;
            }
            $l457:;
        }
        panda$core$Bit $tmp459 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s458);
        if ($tmp459.value) {
        {
            (($fn461) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s460);
            (($fn463) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s462);
        }
        }
        panda$core$Int64 $tmp464 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp464;
        panda$core$String* $tmp469 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp468 = $tmp469;
        panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s467, $tmp468);
        $tmp466 = $tmp470;
        panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s471);
        $tmp465 = $tmp472;
        (($fn473) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp465);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
        (($fn475) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s474);
        (($fn477) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s476);
        (($fn479) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s478);
        org$pandalanguage$pandac$Type* $tmp490 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp489 = $tmp490;
        panda$core$String* $tmp491 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp489);
        $tmp488 = $tmp491;
        panda$core$String* $tmp492 = panda$core$String$convert$R$panda$core$String($tmp488);
        $tmp487 = $tmp492;
        panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp487, &$s493);
        $tmp486 = $tmp494;
        org$pandalanguage$pandac$Type* $tmp497 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp496 = $tmp497;
        panda$core$String* $tmp498 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp496);
        $tmp495 = $tmp498;
        panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, $tmp495);
        $tmp485 = $tmp499;
        panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s500);
        $tmp484 = $tmp501;
        panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s483, $tmp484);
        $tmp482 = $tmp502;
        panda$core$Object* $tmp510 = (($fn509) self->compiler->$class->vtable[2])(self->compiler);
        $tmp508 = $tmp510;
        panda$collections$ListView* $tmp511 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp508), p_cl);
        $tmp507 = $tmp511;
        ITable* $tmp512 = ((panda$collections$CollectionView*) $tmp507)->$class->itable;
        while ($tmp512->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp512 = $tmp512->next;
        }
        $fn514 $tmp513 = $tmp512->methods[0];
        panda$core$Int64 $tmp515 = $tmp513(((panda$collections$CollectionView*) $tmp507));
        panda$core$Int64$wrapper* $tmp516;
        $tmp516 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp516->value = $tmp515;
        $tmp506 = ((panda$core$Object*) $tmp516);
        panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s505, $tmp506);
        $tmp504 = $tmp517;
        panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, &$s518);
        $tmp503 = $tmp519;
        panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, $tmp503);
        $tmp481 = $tmp520;
        panda$core$String* $tmp524 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp523 = $tmp524;
        panda$core$String* $tmp525 = panda$core$String$convert$R$panda$core$String($tmp523);
        $tmp522 = $tmp525;
        panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s526);
        $tmp521 = $tmp527;
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, $tmp521);
        $tmp480 = $tmp528;
        (($fn529) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp480);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
        panda$core$Panda$unref$panda$core$Object($tmp506);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
        panda$core$Panda$unref$panda$core$Object($tmp508);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        panda$core$String* $tmp536 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp535 = $tmp536;
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s534, $tmp535);
        $tmp533 = $tmp537;
        panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, &$s538);
        $tmp532 = $tmp539;
        panda$core$String* $tmp541 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp540 = $tmp541;
        panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, $tmp540);
        $tmp531 = $tmp542;
        panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s543);
        $tmp530 = $tmp544;
        (($fn545) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp530);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
        panda$core$Object* $tmp548 = (($fn547) self->compiler->$class->vtable[2])(self->compiler);
        $tmp546 = $tmp548;
        panda$core$Bit $tmp549 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp546), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp546);
        if ($tmp549.value) {
        {
            int $tmp552;
            {
                panda$core$String* $tmp557 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp556 = $tmp557;
                panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s555, $tmp556);
                $tmp554 = $tmp558;
                panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s559);
                $tmp553 = $tmp560;
                (($fn561) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp553);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                panda$core$Int64 $tmp562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp562;
                (($fn564) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s563);
                (($fn566) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s565);
                org$pandalanguage$pandac$Type* $tmp571 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp570 = $tmp571;
                panda$core$String* $tmp572 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp570);
                $tmp569 = $tmp572;
                panda$core$String* $tmp573 = panda$core$String$convert$R$panda$core$String($tmp569);
                $tmp568 = $tmp573;
                panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s574);
                $tmp567 = $tmp575;
                (($fn576) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp567);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                panda$core$Int64 $tmp577 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp577;
                panda$core$String* $tmp582 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp581 = $tmp582;
                panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s580, $tmp581);
                $tmp579 = $tmp583;
                panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s584);
                $tmp578 = $tmp585;
                (($fn586) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp578);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                panda$core$String* $tmp591 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp590 = $tmp591;
                panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s589, $tmp590);
                $tmp588 = $tmp592;
                panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s593);
                $tmp587 = $tmp594;
                (($fn595) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp587);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                panda$core$Int64 $tmp596 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp596;
                panda$core$String* $tmp600 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp599 = $tmp600;
                panda$core$String* $tmp601 = panda$core$String$convert$R$panda$core$String($tmp599);
                $tmp598 = $tmp601;
                panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s602);
                $tmp597 = $tmp603;
                (($fn604) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp597);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                (($fn606) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s605);
                panda$core$Int64 $tmp607 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp607;
                panda$core$String* $tmp612 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp611 = $tmp612;
                panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s610, $tmp611);
                $tmp609 = $tmp613;
                panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s614);
                $tmp608 = $tmp615;
                (($fn616) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp608);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                panda$core$Object* $tmp622 = (($fn621) self->compiler->$class->vtable[2])(self->compiler);
                $tmp620 = $tmp622;
                org$pandalanguage$pandac$Type* $tmp624 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp623 = $tmp624;
                org$pandalanguage$pandac$ClassDecl* $tmp625 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp620), $tmp623);
                $tmp619 = $tmp625;
                $tmp618 = $tmp619;
                value617 = $tmp618;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                panda$core$Panda$unref$panda$core$Object($tmp620);
                panda$core$Object* $tmp631 = (($fn630) self->compiler->$class->vtable[2])(self->compiler);
                $tmp629 = $tmp631;
                panda$collections$ListView* $tmp632 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp629), value617);
                $tmp628 = $tmp632;
                $tmp627 = $tmp628;
                valueVTable626 = $tmp627;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object($tmp629);
                panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s636, &$s637);
                $tmp635 = $tmp638;
                ITable* $tmp643 = ((panda$collections$CollectionView*) valueVTable626)->$class->itable;
                while ($tmp643->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp643 = $tmp643->next;
                }
                $fn645 $tmp644 = $tmp643->methods[0];
                panda$core$Int64 $tmp646 = $tmp644(((panda$collections$CollectionView*) valueVTable626));
                panda$core$Int64$wrapper* $tmp647;
                $tmp647 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp647->value = $tmp646;
                $tmp642 = ((panda$core$Object*) $tmp647);
                panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s641, $tmp642);
                $tmp640 = $tmp648;
                panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s649);
                $tmp639 = $tmp650;
                panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, $tmp639);
                $tmp634 = $tmp651;
                panda$core$String* $tmp655 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp654 = $tmp655;
                panda$core$String* $tmp656 = panda$core$String$convert$R$panda$core$String($tmp654);
                $tmp653 = $tmp656;
                panda$core$String* $tmp658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp653, &$s657);
                $tmp652 = $tmp658;
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, $tmp652);
                $tmp633 = $tmp659;
                (($fn660) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp633);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                panda$core$Panda$unref$panda$core$Object($tmp642);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                panda$core$String* $tmp666 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp665 = $tmp666;
                panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s664, $tmp665);
                $tmp663 = $tmp667;
                panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp663, &$s668);
                $tmp662 = $tmp669;
                panda$core$String* $tmp673 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp672 = $tmp673;
                panda$core$String* $tmp674 = panda$core$String$convert$R$panda$core$String($tmp672);
                $tmp671 = $tmp674;
                panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s675);
                $tmp670 = $tmp676;
                panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, $tmp670);
                $tmp661 = $tmp677;
                (($fn678) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp661);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
            }
            $tmp552 = -1;
            goto $l550;
            $l550:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value617));
            value617 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable626));
            valueVTable626 = NULL;
            switch ($tmp552) {
                case -1: goto $l679;
            }
            $l679:;
        }
        }
    }
    $tmp355 = -1;
    goto $l353;
    $l353:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path356));
    path356 = NULL;
    switch ($tmp355) {
        case -1: goto $l680;
    }
    $l680:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result684 = NULL;
    panda$core$String* $tmp685;
    panda$core$String* $tmp686;
    org$pandalanguage$pandac$Type* $tmp687;
    panda$core$Object* $tmp688;
    panda$core$String* $returnValue700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp707;
    int $tmp683;
    {
        panda$core$Object* $tmp690 = (($fn689) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp688 = $tmp690;
        org$pandalanguage$pandac$Type* $tmp691 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp688));
        $tmp687 = $tmp691;
        panda$core$String* $tmp692 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp687);
        $tmp686 = $tmp692;
        $tmp685 = $tmp686;
        result684 = $tmp685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
        panda$core$Panda$unref$panda$core$Object($tmp688);
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp693 = $tmp694.value;
        if (!$tmp693) goto $l695;
        panda$core$Bit $tmp697 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result684, &$s696);
        panda$core$Bit $tmp698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp697);
        $tmp693 = $tmp698.value;
        $l695:;
        panda$core$Bit $tmp699 = { $tmp693 };
        if ($tmp699.value) {
        {
            panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result684, &$s703);
            $tmp702 = $tmp704;
            $tmp701 = $tmp702;
            $returnValue700 = $tmp701;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
            $tmp683 = 0;
            goto $l681;
            $l705:;
            return $returnValue700;
        }
        }
        $tmp707 = result684;
        $returnValue700 = $tmp707;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
        $tmp683 = 1;
        goto $l681;
        $l708:;
        return $returnValue700;
    }
    $l681:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result684));
    result684 = NULL;
    switch ($tmp683) {
        case 0: goto $l705;
        case 1: goto $l708;
    }
    $l710:;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue713;
    panda$core$Bit result715;
    panda$core$Object* $tmp723;
    org$pandalanguage$pandac$ClassDecl* $tmp726;
    panda$core$Object* $tmp727;
    panda$core$Bit $tmp711 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp712 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp711);
    if ($tmp712.value) {
    {
        $returnValue713 = ((panda$core$Bit) { false });
        return $returnValue713;
    }
    }
    panda$core$Bit $tmp718 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp717 = $tmp718.value;
    if (!$tmp717) goto $l719;
    panda$core$Bit $tmp720 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp717 = $tmp720.value;
    $l719:;
    panda$core$Bit $tmp721 = { $tmp717 };
    bool $tmp716 = $tmp721.value;
    if (!$tmp716) goto $l722;
    panda$core$Object* $tmp725 = (($fn724) self->compiler->$class->vtable[2])(self->compiler);
    $tmp723 = $tmp725;
    panda$core$Object* $tmp729 = (($fn728) self->compiler->$class->vtable[2])(self->compiler);
    $tmp727 = $tmp729;
    org$pandalanguage$pandac$ClassDecl* $tmp730 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp727), p_m->returnType);
    $tmp726 = $tmp730;
    panda$core$Bit $tmp731 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp723), $tmp726);
    $tmp716 = $tmp731.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
    panda$core$Panda$unref$panda$core$Object($tmp727);
    panda$core$Panda$unref$panda$core$Object($tmp723);
    $l722:;
    panda$core$Bit $tmp732 = { $tmp716 };
    result715 = $tmp732;
    panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit(result715);
    bool $tmp733 = $tmp734.value;
    if ($tmp733) goto $l735;
    panda$core$Bit $tmp737 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
    bool $tmp736 = $tmp738.value;
    if (!$tmp736) goto $l739;
    panda$core$Bit $tmp741 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp740 = $tmp741.value;
    if ($tmp740) goto $l742;
    panda$core$Bit $tmp743 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp740 = $tmp743.value;
    $l742:;
    panda$core$Bit $tmp744 = { $tmp740 };
    $tmp736 = $tmp744.value;
    $l739:;
    panda$core$Bit $tmp745 = { $tmp736 };
    $tmp733 = $tmp745.value;
    $l735:;
    panda$core$Bit $tmp746 = { $tmp733 };
    PANDA_ASSERT($tmp746.value);
    $returnValue713 = result715;
    return $returnValue713;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp751;
    panda$io$MemoryOutputStream* $tmp752;
    panda$collections$Set* $tmp753;
    panda$collections$Set* $tmp754;
    panda$core$String* separator755 = NULL;
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
    panda$collections$Iterator* Iter$266$9814 = NULL;
    panda$collections$Iterator* $tmp815;
    panda$collections$Iterator* $tmp816;
    org$pandalanguage$pandac$MethodDecl$Parameter* p832 = NULL;
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
                    p832 = NULL;
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
            Iter$266$9814 = NULL;
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
    separator755 = NULL;
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

