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
#include "panda/collections/HashSet.h"
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
org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn494)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn516)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn527)(panda$collections$Iterator*);
typedef void (*$fn548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn567)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn580)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn582)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn616)(panda$collections$CollectionView*);
typedef void (*$fn631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn689)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn721)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn745)(panda$collections$CollectionView*);
typedef void (*$fn760)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn917)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn929)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn936)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn947)(panda$collections$Iterator*);
typedef void (*$fn971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn978)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn985)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn991)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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
    panda$collections$HashSet* $tmp20;
    panda$collections$HashSet* $tmp21;
    panda$collections$HashSet* $tmp23;
    panda$collections$HashSet* $tmp24;
    panda$collections$HashSet* $tmp26;
    panda$io$MemoryOutputStream* $tmp27;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp28;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp29;
    panda$io$MemoryOutputStream* $tmp32;
    panda$core$Bit $tmp34;
    panda$io$File* $tmp35;
    panda$io$File* $tmp36;
    panda$io$IndentedOutputStream* $tmp37;
    panda$io$IndentedOutputStream* $tmp38;
    panda$io$IndentedOutputStream* $tmp39;
    panda$io$MemoryOutputStream* $tmp41;
    panda$io$IndentedOutputStream* $tmp43;
    panda$io$IndentedOutputStream* $tmp44;
    panda$io$IndentedOutputStream* $tmp45;
    panda$io$MemoryOutputStream* $tmp47;
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
    self->typesOut = NULL;
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
    panda$collections$HashSet* $tmp22 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp22);
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->typeImports = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$HashSet* $tmp25 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp25);
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
    panda$core$Bit$init$builtin_bit(&$tmp34, false);
    self->inClass = $tmp34;
    {
        $tmp35 = self->outDir;
        $tmp36 = p_outDir;
        self->outDir = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
    {
        $tmp37 = self->out;
        panda$io$IndentedOutputStream* $tmp40 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp42 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp42);
        $tmp41 = $tmp42;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp40, ((panda$io$OutputStream*) $tmp41));
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        self->out = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    {
        $tmp43 = self->typesOut;
        panda$io$IndentedOutputStream* $tmp46 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp48 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp48);
        $tmp47 = $tmp48;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp46, ((panda$io$OutputStream*) $tmp47));
        $tmp45 = $tmp46;
        $tmp44 = $tmp45;
        self->typesOut = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $returnValue49;
    panda$core$String* $tmp50;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp51 = $tmp52;
    $tmp50 = $tmp51;
    $returnValue49 = $tmp50;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
    return $returnValue49;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName57 = NULL;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    panda$core$String* $returnValue66;
    panda$core$String* $tmp67;
    panda$core$String* $tmp68;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Bit $tmp71;
    int $tmp56;
    {
        panda$core$String* $tmp60 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp59 = $tmp60;
        $tmp58 = $tmp59;
        llvmName57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Bit $tmp62 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName57, &$s61);
        if ($tmp62.value) goto $l63; else goto $l64;
        $l64:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s65, (panda$core$Int64) { 50 });
        abort();
        $l63:;
        panda$core$Int64$init$builtin_int64(&$tmp70, 1);
        panda$core$Bit$init$builtin_bit(&$tmp71, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp69, ((panda$core$Int64$nullable) { $tmp70, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp71);
        panda$core$String* $tmp72 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName57, $tmp69);
        $tmp68 = $tmp72;
        $tmp67 = $tmp68;
        $returnValue66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        $tmp56 = 0;
        goto $l54;
        $l73:;
        return $returnValue66;
    }
    $l54:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName57));
    llvmName57 = NULL;
    switch ($tmp56) {
        case 0: goto $l73;
    }
    $l75:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue76;
    panda$core$Int64 $tmp77 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue79;
    panda$core$String* $tmp80;
    panda$core$String* $tmp81;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp90 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s88, &$s89);
    $tmp87 = $tmp90;
    panda$core$String* $tmp93 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp87, &$s91, &$s92);
    $tmp86 = $tmp93;
    panda$core$String* $tmp96 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp86, &$s94, &$s95);
    $tmp85 = $tmp96;
    panda$core$String* $tmp99 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp85, &$s97, &$s98);
    $tmp84 = $tmp99;
    panda$core$String* $tmp102 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp84, &$s100, &$s101);
    $tmp83 = $tmp102;
    panda$core$String* $tmp105 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp83, &$s103, &$s104);
    $tmp82 = $tmp105;
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, p_extension);
    $tmp81 = $tmp106;
    $tmp80 = $tmp81;
    $returnValue79 = $tmp80;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    return $returnValue79;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$64_9108;
    panda$core$Int64 $tmp109;
    panda$core$String* $returnValue111;
    panda$core$String* $tmp112;
    panda$core$Int64 $tmp115;
    panda$core$String* $tmp117;
    panda$core$String* $tmp118;
    panda$core$String* $tmp119;
    panda$core$Object* $tmp121;
    panda$core$Int64 $tmp123;
    panda$core$Int64 $tmp130;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    panda$core$Object* $tmp136;
    panda$core$Int64 $tmp138;
    panda$core$Int64 $tmp145;
    panda$core$String* $tmp147;
    panda$core$Int64 $tmp150;
    panda$core$String* $tmp153;
    panda$core$String* $tmp156;
    panda$core$Bit $tmp159;
    panda$core$Int64 $tmp163;
    panda$core$String* name168 = NULL;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp172;
    org$pandalanguage$pandac$ClassDecl* cl177 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp178;
    org$pandalanguage$pandac$ClassDecl* $tmp179;
    panda$core$Object* $tmp180;
    panda$core$Object* $tmp186;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$String* $tmp195;
    panda$core$String* $tmp204;
    panda$core$String* $tmp205;
    panda$core$String* includePath210 = NULL;
    panda$core$String* $tmp211;
    panda$core$String* $tmp212;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    panda$core$String* $tmp224;
    panda$core$Int64 $tmp228;
    org$pandalanguage$pandac$ClassDecl* cl233 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp234;
    org$pandalanguage$pandac$ClassDecl* $tmp235;
    panda$core$Object* $tmp236;
    panda$core$Object* $tmp242;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    panda$core$Object* $tmp248;
    panda$core$Int64 $tmp249;
    panda$core$String* $tmp256;
    panda$core$String* $tmp257;
    panda$core$Object* $tmp258;
    panda$core$Int64 $tmp259;
    panda$core$Int64 $tmp265;
    panda$core$Object* $tmp270;
    panda$core$Int64 $tmp271;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    panda$core$String* $tmp277;
    panda$core$Object* $tmp278;
    panda$core$Int64 $tmp279;
    org$pandalanguage$pandac$ClassDecl* cl286 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp287;
    org$pandalanguage$pandac$ClassDecl* $tmp288;
    panda$core$Object* $tmp289;
    panda$core$String* name296 = NULL;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    org$pandalanguage$pandac$ClassDecl* cl305 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp306;
    org$pandalanguage$pandac$ClassDecl* $tmp307;
    panda$core$Object* $tmp308;
    panda$core$Object* $tmp314;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$String* includePath339 = NULL;
    panda$core$String* $tmp340;
    panda$core$String* $tmp341;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp353;
    panda$core$String* $tmp358;
    panda$core$String* $tmp359;
    panda$core$Object* $tmp360;
    panda$core$Int64 $tmp361;
    panda$core$Int64 $tmp367;
    panda$core$String* $tmp369;
    panda$core$String* $tmp370;
    panda$core$Object* $tmp371;
    panda$core$Int64 $tmp376;
    panda$core$Int64 $tmp379;
    panda$core$String* $tmp382;
    panda$core$String* $tmp383;
    org$pandalanguage$pandac$Type* $tmp384;
    panda$core$Int64 $tmp389;
    panda$core$Int64 $tmp392;
    panda$core$String* $tmp395;
    panda$core$String* $tmp396;
    org$pandalanguage$pandac$Type* $tmp397;
    panda$core$Bit $tmp401;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    {
        $match$64_9108 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp109, 4);
        panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp109);
        if ($tmp110.value) {
        {
            $tmp112 = &$s113;
            $returnValue111 = $tmp112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp115, 2);
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp115);
        if ($tmp116.value) {
        {
            panda$core$Int64 $tmp122 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp123, 8);
            panda$core$Int64 $tmp124 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp122, $tmp123);
            panda$core$Int64$wrapper* $tmp125;
            $tmp125 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp125->value = $tmp124;
            $tmp121 = ((panda$core$Object*) $tmp125);
            panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s120, $tmp121);
            $tmp119 = $tmp126;
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s127);
            $tmp118 = $tmp128;
            $tmp117 = $tmp118;
            $returnValue111 = $tmp117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
            panda$core$Panda$unref$panda$core$Object($tmp121);
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp130, 3);
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp130);
        if ($tmp131.value) {
        {
            panda$core$Int64 $tmp137 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp138, 8);
            panda$core$Int64 $tmp139 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp137, $tmp138);
            panda$core$Int64$wrapper* $tmp140;
            $tmp140 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp140->value = $tmp139;
            $tmp136 = ((panda$core$Object*) $tmp140);
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s135, $tmp136);
            $tmp134 = $tmp141;
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s142);
            $tmp133 = $tmp143;
            $tmp132 = $tmp133;
            $returnValue111 = $tmp132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
            panda$core$Panda$unref$panda$core$Object($tmp136);
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp145, 9);
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp145);
        if ($tmp146.value) {
        {
            $tmp147 = &$s148;
            $returnValue111 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp150, 10);
        panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp150);
        if ($tmp151.value) {
        {
            panda$core$Int64 $tmp152 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp152.value) {
                case 4:
                {
                    $tmp153 = &$s154;
                    $returnValue111 = $tmp153;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                    return $returnValue111;
                }
                break;
                case 8:
                {
                    $tmp156 = &$s157;
                    $returnValue111 = $tmp156;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
                    return $returnValue111;
                }
                break;
                default:
                {
                    panda$core$Bit$init$builtin_bit(&$tmp159, false);
                    if ($tmp159.value) goto $l160; else goto $l161;
                    $l161:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s162, (panda$core$Int64) { 77 });
                    abort();
                    $l160:;
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp163, 0);
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp163);
        if ($tmp164.value) {
        {
            int $tmp167;
            {
                panda$core$String* $tmp173 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp172 = $tmp173;
                panda$core$String* $tmp174 = panda$core$String$convert$R$panda$core$String($tmp172);
                $tmp171 = $tmp174;
                panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s175);
                $tmp170 = $tmp176;
                $tmp169 = $tmp170;
                name168 = $tmp169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
                panda$core$Object* $tmp181 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp180 = $tmp181;
                org$pandalanguage$pandac$ClassDecl* $tmp182 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp180), p_t);
                $tmp179 = $tmp182;
                $tmp178 = $tmp179;
                cl177 = $tmp178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                panda$core$Panda$unref$panda$core$Object($tmp180);
                if (((panda$core$Bit) { cl177 != NULL }).value) goto $l183; else goto $l184;
                $l184:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s185, (panda$core$Int64) { 82 });
                abort();
                $l183:;
                panda$core$Object* $tmp187 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp186 = $tmp187;
                panda$core$Bit $tmp188 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp186), cl177);
                panda$core$Bit $tmp189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp188);
                panda$core$Panda$unref$panda$core$Object($tmp186);
                if ($tmp189.value) {
                {
                    panda$core$Bit $tmp190 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name168));
                    panda$core$Bit $tmp191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp190);
                    if ($tmp191.value) {
                    {
                        panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s196, name168);
                        $tmp195 = $tmp197;
                        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s198);
                        $tmp194 = $tmp199;
                        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, name168);
                        $tmp193 = $tmp200;
                        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s201);
                        $tmp192 = $tmp202;
                        (($fn203) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp192);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                        panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name168));
                    }
                    }
                    panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name168, &$s206);
                    $tmp205 = $tmp207;
                    $tmp204 = $tmp205;
                    $returnValue111 = $tmp204;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
                    $tmp167 = 0;
                    goto $l165;
                    $l208:;
                    return $returnValue111;
                }
                }
                panda$core$String* $tmp214 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl177, &$s213);
                $tmp212 = $tmp214;
                $tmp211 = $tmp212;
                includePath210 = $tmp211;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                panda$core$Bit $tmp215 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath210));
                panda$core$Bit $tmp216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp215);
                if ($tmp216.value) {
                {
                    panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s219, includePath210);
                    $tmp218 = $tmp220;
                    panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s221);
                    $tmp217 = $tmp222;
                    (($fn223) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp217);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath210));
                }
                }
                $tmp224 = name168;
                $returnValue111 = $tmp224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
                $tmp167 = 1;
                goto $l165;
                $l225:;
                return $returnValue111;
            }
            $l165:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name168));
            name168 = NULL;
            cl177 = NULL;
            includePath210 = NULL;
            switch ($tmp167) {
                case 0: goto $l208;
                case 1: goto $l225;
            }
            $l227:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp228, 1);
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp228);
        if ($tmp229.value) {
        {
            int $tmp232;
            {
                panda$core$Object* $tmp237 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp236 = $tmp237;
                org$pandalanguage$pandac$ClassDecl* $tmp238 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp236), p_t);
                $tmp235 = $tmp238;
                $tmp234 = $tmp235;
                cl233 = $tmp234;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
                panda$core$Panda$unref$panda$core$Object($tmp236);
                if (((panda$core$Bit) { cl233 != NULL }).value) goto $l239; else goto $l240;
                $l240:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s241, (panda$core$Int64) { 98 });
                abort();
                $l239:;
                panda$core$Object* $tmp243 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp242 = $tmp243;
                panda$core$Bit $tmp244 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp242), cl233);
                panda$core$Panda$unref$panda$core$Object($tmp242);
                if ($tmp244.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp249, 0);
                    panda$core$Object* $tmp250 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp249);
                    $tmp248 = $tmp250;
                    panda$core$String* $tmp251 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp248));
                    $tmp247 = $tmp251;
                    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s252);
                    $tmp246 = $tmp253;
                    $tmp245 = $tmp246;
                    $returnValue111 = $tmp245;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                    panda$core$Panda$unref$panda$core$Object($tmp248);
                    $tmp232 = 0;
                    goto $l230;
                    $l254:;
                    return $returnValue111;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp259, 0);
                panda$core$Object* $tmp260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp259);
                $tmp258 = $tmp260;
                panda$core$String* $tmp261 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp258));
                $tmp257 = $tmp261;
                $tmp256 = $tmp257;
                $returnValue111 = $tmp256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                panda$core$Panda$unref$panda$core$Object($tmp258);
                $tmp232 = 1;
                goto $l230;
                $l262:;
                return $returnValue111;
            }
            $l230:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl233));
            cl233 = NULL;
            switch ($tmp232) {
                case 1: goto $l262;
                case 0: goto $l254;
            }
            $l264:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp265, 11);
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp265);
        if ($tmp266.value) {
        {
            int $tmp269;
            {
                panda$core$Int64$init$builtin_int64(&$tmp271, 0);
                panda$core$Object* $tmp272 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp271);
                $tmp270 = $tmp272;
                panda$core$Bit $tmp274 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp270))->name, &$s273);
                panda$core$Panda$unref$panda$core$Object($tmp270);
                if ($tmp274.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp279, 1);
                    panda$core$Object* $tmp280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp279);
                    $tmp278 = $tmp280;
                    panda$core$String* $tmp281 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp278));
                    $tmp277 = $tmp281;
                    panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s282);
                    $tmp276 = $tmp283;
                    $tmp275 = $tmp276;
                    $returnValue111 = $tmp275;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
                    panda$core$Panda$unref$panda$core$Object($tmp278);
                    $tmp269 = 0;
                    goto $l267;
                    $l284:;
                    return $returnValue111;
                }
                }
                panda$core$Object* $tmp290 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp289 = $tmp290;
                org$pandalanguage$pandac$ClassDecl* $tmp291 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp289), p_t);
                $tmp288 = $tmp291;
                $tmp287 = $tmp288;
                cl286 = $tmp287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                panda$core$Panda$unref$panda$core$Object($tmp289);
                panda$core$Bit $tmp292 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl286);
                if ($tmp292.value) {
                {
                    int $tmp295;
                    {
                        panda$core$String* $tmp301 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp300 = $tmp301;
                        panda$core$String* $tmp302 = panda$core$String$convert$R$panda$core$String($tmp300);
                        $tmp299 = $tmp302;
                        panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s303);
                        $tmp298 = $tmp304;
                        $tmp297 = $tmp298;
                        name296 = $tmp297;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
                        panda$core$Object* $tmp309 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp308 = $tmp309;
                        org$pandalanguage$pandac$ClassDecl* $tmp310 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp308), p_t);
                        $tmp307 = $tmp310;
                        $tmp306 = $tmp307;
                        cl305 = $tmp306;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                        panda$core$Panda$unref$panda$core$Object($tmp308);
                        if (((panda$core$Bit) { cl305 != NULL }).value) goto $l311; else goto $l312;
                        $l312:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s313, (panda$core$Int64) { 111 });
                        abort();
                        $l311:;
                        panda$core$Object* $tmp315 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp314 = $tmp315;
                        panda$core$Bit $tmp316 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp314), cl305);
                        panda$core$Bit $tmp317 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp316);
                        panda$core$Panda$unref$panda$core$Object($tmp314);
                        if ($tmp317.value) {
                        {
                            panda$core$Bit $tmp318 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name296));
                            panda$core$Bit $tmp319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp318);
                            if ($tmp319.value) {
                            {
                                panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s324, name296);
                                $tmp323 = $tmp325;
                                panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s326);
                                $tmp322 = $tmp327;
                                panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, name296);
                                $tmp321 = $tmp328;
                                panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s329);
                                $tmp320 = $tmp330;
                                (($fn331) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp320);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                                panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name296));
                            }
                            }
                            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name296, &$s334);
                            $tmp333 = $tmp335;
                            $tmp332 = $tmp333;
                            $returnValue111 = $tmp332;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                            $tmp295 = 0;
                            goto $l293;
                            $l336:;
                            $tmp269 = 1;
                            goto $l267;
                            $l337:;
                            return $returnValue111;
                        }
                        }
                        panda$core$String* $tmp343 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl305, &$s342);
                        $tmp341 = $tmp343;
                        $tmp340 = $tmp341;
                        includePath339 = $tmp340;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                        panda$core$Bit $tmp344 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath339));
                        panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
                        if ($tmp345.value) {
                        {
                            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s348, includePath339);
                            $tmp347 = $tmp349;
                            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s350);
                            $tmp346 = $tmp351;
                            (($fn352) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp346);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                            panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath339));
                        }
                        }
                        $tmp353 = name296;
                        $returnValue111 = $tmp353;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                        $tmp295 = 1;
                        goto $l293;
                        $l354:;
                        $tmp269 = 2;
                        goto $l267;
                        $l355:;
                        return $returnValue111;
                    }
                    $l293:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath339));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl305));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name296));
                    name296 = NULL;
                    cl305 = NULL;
                    includePath339 = NULL;
                    switch ($tmp295) {
                        case 1: goto $l354;
                        case 0: goto $l336;
                    }
                    $l357:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp361, 0);
                panda$core$Object* $tmp362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp361);
                $tmp360 = $tmp362;
                panda$core$String* $tmp363 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp360));
                $tmp359 = $tmp363;
                $tmp358 = $tmp359;
                $returnValue111 = $tmp358;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
                panda$core$Panda$unref$panda$core$Object($tmp360);
                $tmp269 = 3;
                goto $l267;
                $l364:;
                return $returnValue111;
            }
            $l267:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl286));
            cl286 = NULL;
            switch ($tmp269) {
                case 1: goto $l337;
                case 0: goto $l284;
                case 3: goto $l364;
                case 2: goto $l355;
            }
            $l366:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp367, 12);
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp367);
        if ($tmp368.value) {
        {
            panda$core$Object* $tmp372 = panda$core$Weak$get$R$panda$core$Weak$T(p_t->parameter);
            $tmp371 = $tmp372;
            panda$core$String* $tmp373 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp371)->bound);
            $tmp370 = $tmp373;
            $tmp369 = $tmp370;
            $returnValue111 = $tmp369;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
            panda$core$Panda$unref$panda$core$Object($tmp371);
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp376, 14);
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp376);
        bool $tmp375 = $tmp377.value;
        if ($tmp375) goto $l378;
        panda$core$Int64$init$builtin_int64(&$tmp379, 15);
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp379);
        $tmp375 = $tmp380.value;
        $l378:;
        panda$core$Bit $tmp381 = { $tmp375 };
        if ($tmp381.value) {
        {
            org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp384 = $tmp385;
            panda$core$String* $tmp386 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp384);
            $tmp383 = $tmp386;
            $tmp382 = $tmp383;
            $returnValue111 = $tmp382;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp389, 16);
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp389);
        bool $tmp388 = $tmp390.value;
        if ($tmp388) goto $l391;
        panda$core$Int64$init$builtin_int64(&$tmp392, 17);
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp392);
        $tmp388 = $tmp393.value;
        $l391:;
        panda$core$Bit $tmp394 = { $tmp388 };
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$Type* $tmp398 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp397 = $tmp398;
            panda$core$String* $tmp399 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp397);
            $tmp396 = $tmp399;
            $tmp395 = $tmp396;
            $returnValue111 = $tmp395;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
            return $returnValue111;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp401, false);
            if ($tmp401.value) goto $l402; else goto $l403;
            $l403:;
            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s407, ((panda$core$Object*) p_t));
            $tmp406 = $tmp408;
            panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s409);
            $tmp405 = $tmp410;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s404, (panda$core$Int64) { 134 }, $tmp405);
            abort();
            $l402:;
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
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_name) {
    panda$core$String* $returnValue411;
    panda$core$String* $tmp412;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp418 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp417 = $tmp418;
    panda$core$String* $tmp419 = panda$core$String$convert$R$panda$core$String($tmp417);
    $tmp416 = $tmp419;
    panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s420);
    $tmp415 = $tmp421;
    panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, p_name);
    $tmp414 = $tmp422;
    panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, &$s423);
    $tmp413 = $tmp424;
    $tmp412 = $tmp413;
    $returnValue411 = $tmp412;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
    return $returnValue411;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp426;
    panda$core$Weak* $tmp427;
    panda$core$Weak* $tmp428;
    {
        $tmp426 = self->compiler;
        panda$core$Weak* $tmp429 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp429, ((panda$core$Object*) p_compiler));
        $tmp428 = $tmp429;
        $tmp427 = $tmp428;
        self->compiler = $tmp427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue430;
    panda$io$File* $tmp431;
    panda$io$File* $tmp432;
    panda$core$String* $tmp433;
    panda$core$String* $tmp434 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp433 = $tmp434;
    panda$io$File* $tmp435 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp433);
    $tmp432 = $tmp435;
    $tmp431 = $tmp432;
    $returnValue430 = $tmp431;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
    return $returnValue430;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp440;
    panda$io$File* path441 = NULL;
    panda$io$File* $tmp442;
    panda$io$File* $tmp443;
    panda$io$File* $tmp446;
    panda$io$IndentedOutputStream* $tmp448;
    panda$io$IndentedOutputStream* $tmp449;
    panda$io$IndentedOutputStream* $tmp450;
    panda$io$OutputStream* $tmp452;
    panda$io$File* typesPath454 = NULL;
    panda$io$File* $tmp455;
    panda$io$File* $tmp456;
    panda$io$IndentedOutputStream* $tmp459;
    panda$io$IndentedOutputStream* $tmp460;
    panda$io$IndentedOutputStream* $tmp461;
    panda$io$OutputStream* $tmp463;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$String* $tmp472;
    panda$io$MemoryOutputStream* $tmp482;
    panda$io$MemoryOutputStream* $tmp483;
    panda$collections$HashSet* $tmp484;
    panda$collections$HashSet* $tmp485;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$String* $tmp489;
    panda$core$Int64 $tmp495;
    panda$collections$Iterator* Iter$178$9500 = NULL;
    panda$collections$Iterator* $tmp501;
    panda$collections$Iterator* $tmp502;
    panda$collections$ListView* $tmp503;
    panda$core$Object* $tmp504;
    org$pandalanguage$pandac$FieldDecl* f522 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp523;
    panda$core$Object* $tmp524;
    panda$core$Object* $tmp529;
    org$pandalanguage$pandac$Type* $tmp531;
    panda$core$String* $tmp534;
    panda$core$String* $tmp535;
    panda$core$String* $tmp536;
    panda$core$String* $tmp537;
    panda$core$Object* $tmp542;
    panda$core$String* $tmp549;
    panda$core$String* $tmp550;
    panda$core$String* $tmp551;
    panda$core$String* $tmp552;
    panda$core$String* $tmp553;
    panda$core$Int64 $tmp570;
    panda$core$String* $tmp572;
    panda$core$String* $tmp573;
    panda$core$String* $tmp575;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $tmp585;
    panda$core$String* $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp589;
    panda$core$String* $tmp590;
    panda$core$String* $tmp591;
    org$pandalanguage$pandac$Type* $tmp592;
    panda$core$String* $tmp598;
    org$pandalanguage$pandac$Type* $tmp599;
    panda$core$String* $tmp606;
    panda$core$String* $tmp607;
    panda$core$Object* $tmp609;
    panda$collections$ListView* $tmp610;
    panda$core$Object* $tmp611;
    panda$core$String* $tmp623;
    panda$core$String* $tmp624;
    panda$core$String* $tmp625;
    panda$core$String* $tmp632;
    panda$core$String* $tmp633;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp637;
    panda$core$String* $tmp642;
    panda$core$Object* $tmp648;
    panda$core$String* $tmp654;
    panda$core$String* $tmp655;
    panda$core$String* $tmp657;
    panda$core$Int64 $tmp663;
    panda$core$String* $tmp669;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    org$pandalanguage$pandac$Type* $tmp672;
    panda$core$Int64 $tmp679;
    panda$core$String* $tmp681;
    panda$core$String* $tmp682;
    panda$core$String* $tmp684;
    panda$core$String* $tmp690;
    panda$core$String* $tmp691;
    panda$core$String* $tmp693;
    panda$core$Int64 $tmp699;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp703;
    panda$core$Int64 $tmp711;
    panda$core$String* $tmp713;
    panda$core$String* $tmp714;
    panda$core$String* $tmp716;
    org$pandalanguage$pandac$ClassDecl* value722 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp723;
    org$pandalanguage$pandac$ClassDecl* $tmp724;
    panda$core$Object* $tmp725;
    org$pandalanguage$pandac$Type* $tmp727;
    panda$collections$ListView* valueVTable730 = NULL;
    panda$collections$ListView* $tmp731;
    panda$collections$ListView* $tmp732;
    panda$core$Object* $tmp733;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    panda$core$String* $tmp739;
    panda$core$String* $tmp740;
    panda$core$Object* $tmp742;
    panda$core$String* $tmp752;
    panda$core$String* $tmp753;
    panda$core$String* $tmp754;
    panda$core$String* $tmp761;
    panda$core$String* $tmp762;
    panda$core$String* $tmp763;
    panda$core$String* $tmp765;
    panda$core$String* $tmp770;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    int $tmp439;
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
        panda$collections$HashSet$clear(self->typeImports);
        panda$collections$HashSet$clear(self->bodyImports);
        panda$core$Bit$init$builtin_bit(&$tmp440, true);
        self->inClass = $tmp440;
        panda$io$File* $tmp445 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s444);
        $tmp443 = $tmp445;
        $tmp442 = $tmp443;
        path441 = $tmp442;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$io$File* $tmp447 = panda$io$File$parent$R$panda$io$File$Q(path441);
        $tmp446 = $tmp447;
        panda$io$File$createDirectories($tmp446);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
        {
            $tmp448 = self->out;
            panda$io$IndentedOutputStream* $tmp451 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp453 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path441);
            $tmp452 = $tmp453;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp451, $tmp452);
            $tmp450 = $tmp451;
            $tmp449 = $tmp450;
            self->out = $tmp449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
        }
        panda$io$File* $tmp458 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s457);
        $tmp456 = $tmp458;
        $tmp455 = $tmp456;
        typesPath454 = $tmp455;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
        {
            $tmp459 = self->typesOut;
            panda$io$IndentedOutputStream* $tmp462 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp464 = panda$io$File$openOutputStream$R$panda$io$OutputStream(typesPath454);
            $tmp463 = $tmp464;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp462, $tmp463);
            $tmp461 = $tmp462;
            $tmp460 = $tmp461;
            self->typesOut = $tmp460;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
        }
        (($fn466) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), &$s465);
        (($fn468) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), &$s467);
        panda$core$String* $tmp473 = panda$io$File$name$R$panda$core$String(typesPath454);
        $tmp472 = $tmp473;
        panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s471, $tmp472);
        $tmp470 = $tmp474;
        panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s475);
        $tmp469 = $tmp476;
        (($fn477) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp469);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        (($fn479) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), &$s478);
        (($fn481) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), &$s480);
        {
            $tmp482 = self->importStream;
            $tmp483 = self->typeImportStream;
            self->importStream = $tmp483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        }
        {
            $tmp484 = self->imports;
            $tmp485 = self->typeImports;
            self->imports = $tmp485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
        }
        panda$core$String* $tmp490 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp489 = $tmp490;
        panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s488, $tmp489);
        $tmp487 = $tmp491;
        panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp487, &$s492);
        $tmp486 = $tmp493;
        (($fn494) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp486);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        panda$core$Int64$init$builtin_int64(&$tmp495, 1);
        panda$core$Int64 $tmp496 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp495);
        self->types->level = $tmp496;
        {
            int $tmp499;
            {
                panda$core$Object* $tmp505 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp504 = $tmp505;
                panda$collections$ListView* $tmp506 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp504), p_cl);
                $tmp503 = $tmp506;
                ITable* $tmp507 = ((panda$collections$Iterable*) $tmp503)->$class->itable;
                while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp507 = $tmp507->next;
                }
                $fn509 $tmp508 = $tmp507->methods[0];
                panda$collections$Iterator* $tmp510 = $tmp508(((panda$collections$Iterable*) $tmp503));
                $tmp502 = $tmp510;
                $tmp501 = $tmp502;
                Iter$178$9500 = $tmp501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
                panda$core$Panda$unref$panda$core$Object($tmp504);
                $l511:;
                ITable* $tmp514 = Iter$178$9500->$class->itable;
                while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp514 = $tmp514->next;
                }
                $fn516 $tmp515 = $tmp514->methods[0];
                panda$core$Bit $tmp517 = $tmp515(Iter$178$9500);
                panda$core$Bit $tmp518 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp517);
                bool $tmp513 = $tmp518.value;
                if (!$tmp513) goto $l512;
                {
                    int $tmp521;
                    {
                        ITable* $tmp525 = Iter$178$9500->$class->itable;
                        while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp525 = $tmp525->next;
                        }
                        $fn527 $tmp526 = $tmp525->methods[1];
                        panda$core$Object* $tmp528 = $tmp526(Iter$178$9500);
                        $tmp524 = $tmp528;
                        $tmp523 = ((org$pandalanguage$pandac$FieldDecl*) $tmp524);
                        f522 = $tmp523;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
                        panda$core$Panda$unref$panda$core$Object($tmp524);
                        panda$core$Object* $tmp530 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp529 = $tmp530;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp529), f522);
                        panda$core$Panda$unref$panda$core$Object($tmp529);
                        org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp531 = $tmp532;
                        panda$core$Bit $tmp533 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f522->type, $tmp531);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
                        if ($tmp533.value) {
                        {
                            panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s538, ((org$pandalanguage$pandac$Symbol*) f522)->name);
                            $tmp537 = $tmp539;
                            panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp537, &$s540);
                            $tmp536 = $tmp541;
                            panda$core$Int64 $tmp543 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp544;
                            $tmp544 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp544->value = $tmp543;
                            $tmp542 = ((panda$core$Object*) $tmp544);
                            panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp536, $tmp542);
                            $tmp535 = $tmp545;
                            panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s546);
                            $tmp534 = $tmp547;
                            (($fn548) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp534);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
                            panda$core$Panda$unref$panda$core$Object($tmp542);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp554 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f522->type);
                            $tmp553 = $tmp554;
                            panda$core$String* $tmp555 = panda$core$String$convert$R$panda$core$String($tmp553);
                            $tmp552 = $tmp555;
                            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s556);
                            $tmp551 = $tmp557;
                            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, ((org$pandalanguage$pandac$Symbol*) f522)->name);
                            $tmp550 = $tmp558;
                            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s559);
                            $tmp549 = $tmp560;
                            (($fn561) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp549);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                        }
                        }
                    }
                    $tmp521 = -1;
                    goto $l519;
                    $l519:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f522));
                    f522 = NULL;
                    switch ($tmp521) {
                        case -1: goto $l562;
                    }
                    $l562:;
                }
                goto $l511;
                $l512:;
            }
            $tmp499 = -1;
            goto $l497;
            $l497:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9500));
            Iter$178$9500 = NULL;
            switch ($tmp499) {
                case -1: goto $l563;
            }
            $l563:;
        }
        panda$core$Bit $tmp565 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s564);
        if ($tmp565.value) {
        {
            (($fn567) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s566);
            (($fn569) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s568);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp570, 1);
        panda$core$Int64 $tmp571 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp570);
        self->types->level = $tmp571;
        panda$core$String* $tmp576 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp575 = $tmp576;
        panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s574, $tmp575);
        $tmp573 = $tmp577;
        panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s578);
        $tmp572 = $tmp579;
        (($fn580) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp572);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
        (($fn582) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s581);
        org$pandalanguage$pandac$Type* $tmp593 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp592 = $tmp593;
        panda$core$String* $tmp594 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp592);
        $tmp591 = $tmp594;
        panda$core$String* $tmp595 = panda$core$String$convert$R$panda$core$String($tmp591);
        $tmp590 = $tmp595;
        panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s596);
        $tmp589 = $tmp597;
        org$pandalanguage$pandac$Type* $tmp600 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp599 = $tmp600;
        panda$core$String* $tmp601 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp599);
        $tmp598 = $tmp601;
        panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, $tmp598);
        $tmp588 = $tmp602;
        panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s603);
        $tmp587 = $tmp604;
        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s586, $tmp587);
        $tmp585 = $tmp605;
        panda$core$Object* $tmp612 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp611 = $tmp612;
        panda$collections$ListView* $tmp613 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp611), p_cl);
        $tmp610 = $tmp613;
        ITable* $tmp614 = ((panda$collections$CollectionView*) $tmp610)->$class->itable;
        while ($tmp614->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp614 = $tmp614->next;
        }
        $fn616 $tmp615 = $tmp614->methods[0];
        panda$core$Int64 $tmp617 = $tmp615(((panda$collections$CollectionView*) $tmp610));
        panda$core$Int64$wrapper* $tmp618;
        $tmp618 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp618->value = $tmp617;
        $tmp609 = ((panda$core$Object*) $tmp618);
        panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s608, $tmp609);
        $tmp607 = $tmp619;
        panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s620);
        $tmp606 = $tmp621;
        panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, $tmp606);
        $tmp584 = $tmp622;
        panda$core$String* $tmp626 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp625 = $tmp626;
        panda$core$String* $tmp627 = panda$core$String$convert$R$panda$core$String($tmp625);
        $tmp624 = $tmp627;
        panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s628);
        $tmp623 = $tmp629;
        panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, $tmp623);
        $tmp583 = $tmp630;
        (($fn631) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp583);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
        panda$core$Panda$unref$panda$core$Object($tmp609);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
        panda$core$Panda$unref$panda$core$Object($tmp611);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        panda$core$String* $tmp638 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp637 = $tmp638;
        panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s636, $tmp637);
        $tmp635 = $tmp639;
        panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s640);
        $tmp634 = $tmp641;
        panda$core$String* $tmp643 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp642 = $tmp643;
        panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, $tmp642);
        $tmp633 = $tmp644;
        panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp633, &$s645);
        $tmp632 = $tmp646;
        (($fn647) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp632);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Object* $tmp649 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp648 = $tmp649;
        panda$core$Bit $tmp650 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp648), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp648);
        if ($tmp650.value) {
        {
            int $tmp653;
            {
                panda$core$String* $tmp658 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp657 = $tmp658;
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s656, $tmp657);
                $tmp655 = $tmp659;
                panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp655, &$s660);
                $tmp654 = $tmp661;
                (($fn662) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp654);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                panda$core$Int64$init$builtin_int64(&$tmp663, 1);
                panda$core$Int64 $tmp664 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp663);
                self->types->level = $tmp664;
                (($fn666) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s665);
                (($fn668) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s667);
                org$pandalanguage$pandac$Type* $tmp673 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp672 = $tmp673;
                panda$core$String* $tmp674 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp672);
                $tmp671 = $tmp674;
                panda$core$String* $tmp675 = panda$core$String$convert$R$panda$core$String($tmp671);
                $tmp670 = $tmp675;
                panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s676);
                $tmp669 = $tmp677;
                (($fn678) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp669);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$Int64$init$builtin_int64(&$tmp679, 1);
                panda$core$Int64 $tmp680 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp679);
                self->types->level = $tmp680;
                panda$core$String* $tmp685 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp684 = $tmp685;
                panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s683, $tmp684);
                $tmp682 = $tmp686;
                panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s687);
                $tmp681 = $tmp688;
                (($fn689) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp681);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                panda$core$String* $tmp694 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp693 = $tmp694;
                panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s692, $tmp693);
                $tmp691 = $tmp695;
                panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s696);
                $tmp690 = $tmp697;
                (($fn698) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp690);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                panda$core$Int64$init$builtin_int64(&$tmp699, 1);
                panda$core$Int64 $tmp700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp699);
                self->types->level = $tmp700;
                panda$core$String* $tmp704 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp703 = $tmp704;
                panda$core$String* $tmp705 = panda$core$String$convert$R$panda$core$String($tmp703);
                $tmp702 = $tmp705;
                panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s706);
                $tmp701 = $tmp707;
                (($fn708) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp701);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                (($fn710) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s709);
                panda$core$Int64$init$builtin_int64(&$tmp711, 1);
                panda$core$Int64 $tmp712 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp711);
                self->types->level = $tmp712;
                panda$core$String* $tmp717 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp716 = $tmp717;
                panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s715, $tmp716);
                $tmp714 = $tmp718;
                panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s719);
                $tmp713 = $tmp720;
                (($fn721) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp713);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                panda$core$Object* $tmp726 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp725 = $tmp726;
                org$pandalanguage$pandac$Type* $tmp728 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp727 = $tmp728;
                org$pandalanguage$pandac$ClassDecl* $tmp729 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp725), $tmp727);
                $tmp724 = $tmp729;
                $tmp723 = $tmp724;
                value722 = $tmp723;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
                panda$core$Panda$unref$panda$core$Object($tmp725);
                panda$core$Object* $tmp734 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp733 = $tmp734;
                panda$collections$ListView* $tmp735 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp733), value722);
                $tmp732 = $tmp735;
                $tmp731 = $tmp732;
                valueVTable730 = $tmp731;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                panda$core$Panda$unref$panda$core$Object($tmp733);
                ITable* $tmp743 = ((panda$collections$CollectionView*) valueVTable730)->$class->itable;
                while ($tmp743->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp743 = $tmp743->next;
                }
                $fn745 $tmp744 = $tmp743->methods[0];
                panda$core$Int64 $tmp746 = $tmp744(((panda$collections$CollectionView*) valueVTable730));
                panda$core$Int64$wrapper* $tmp747;
                $tmp747 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp747->value = $tmp746;
                $tmp742 = ((panda$core$Object*) $tmp747);
                panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s741, $tmp742);
                $tmp740 = $tmp748;
                panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s749);
                $tmp739 = $tmp750;
                panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s738, $tmp739);
                $tmp737 = $tmp751;
                panda$core$String* $tmp755 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp754 = $tmp755;
                panda$core$String* $tmp756 = panda$core$String$convert$R$panda$core$String($tmp754);
                $tmp753 = $tmp756;
                panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s757);
                $tmp752 = $tmp758;
                panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, $tmp752);
                $tmp736 = $tmp759;
                (($fn760) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp736);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                panda$core$Panda$unref$panda$core$Object($tmp742);
                panda$core$String* $tmp766 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp765 = $tmp766;
                panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s764, $tmp765);
                $tmp763 = $tmp767;
                panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s768);
                $tmp762 = $tmp769;
                panda$core$String* $tmp773 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp772 = $tmp773;
                panda$core$String* $tmp774 = panda$core$String$convert$R$panda$core$String($tmp772);
                $tmp771 = $tmp774;
                panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s775);
                $tmp770 = $tmp776;
                panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, $tmp770);
                $tmp761 = $tmp777;
                (($fn778) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp761);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
            }
            $tmp653 = -1;
            goto $l651;
            $l651:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value722));
            value722 = NULL;
            valueVTable730 = NULL;
            switch ($tmp653) {
                case -1: goto $l779;
            }
            $l779:;
        }
        }
    }
    $tmp439 = -1;
    goto $l437;
    $l437:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) typesPath454));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path441));
    path441 = NULL;
    typesPath454 = NULL;
    switch ($tmp439) {
        case -1: goto $l780;
    }
    $l780:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result784 = NULL;
    panda$core$String* $tmp785;
    panda$core$String* $tmp786;
    org$pandalanguage$pandac$Type* $tmp787;
    panda$core$Object* $tmp788;
    panda$core$Int64 $tmp793;
    panda$core$String* $returnValue800;
    panda$core$String* $tmp801;
    panda$core$String* $tmp802;
    panda$core$String* $tmp807;
    int $tmp783;
    {
        panda$core$Object* $tmp789 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp788 = $tmp789;
        org$pandalanguage$pandac$Type* $tmp790 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp788));
        $tmp787 = $tmp790;
        panda$core$String* $tmp791 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp787);
        $tmp786 = $tmp791;
        $tmp785 = $tmp786;
        result784 = $tmp785;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
        panda$core$Panda$unref$panda$core$Object($tmp788);
        panda$core$Int64$init$builtin_int64(&$tmp793, 2);
        panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp793);
        bool $tmp792 = $tmp794.value;
        if (!$tmp792) goto $l795;
        panda$core$Bit $tmp797 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result784, &$s796);
        panda$core$Bit $tmp798 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp797);
        $tmp792 = $tmp798.value;
        $l795:;
        panda$core$Bit $tmp799 = { $tmp792 };
        if ($tmp799.value) {
        {
            panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result784, &$s803);
            $tmp802 = $tmp804;
            $tmp801 = $tmp802;
            $returnValue800 = $tmp801;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp801));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
            $tmp783 = 0;
            goto $l781;
            $l805:;
            return $returnValue800;
        }
        }
        $tmp807 = result784;
        $returnValue800 = $tmp807;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp807));
        $tmp783 = 1;
        goto $l781;
        $l808:;
        return $returnValue800;
    }
    $l781:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result784));
    result784 = NULL;
    switch ($tmp783) {
        case 0: goto $l805;
        case 1: goto $l808;
    }
    $l810:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue813;
    panda$core$Bit $tmp814;
    panda$core$Bit result816;
    panda$core$Object* $tmp824;
    org$pandalanguage$pandac$ClassDecl* $tmp826;
    panda$core$Object* $tmp827;
    panda$core$String* $tmp849;
    panda$core$String* $tmp850;
    panda$core$String* $tmp852;
    panda$core$Bit $tmp811 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp811);
    if ($tmp812.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp814, false);
        $returnValue813 = $tmp814;
        return $returnValue813;
    }
    }
    panda$core$Bit $tmp819 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp818 = $tmp819.value;
    if (!$tmp818) goto $l820;
    panda$core$Bit $tmp821 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp818 = $tmp821.value;
    $l820:;
    panda$core$Bit $tmp822 = { $tmp818 };
    bool $tmp817 = $tmp822.value;
    if (!$tmp817) goto $l823;
    panda$core$Object* $tmp825 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp824 = $tmp825;
    panda$core$Object* $tmp828 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp827 = $tmp828;
    org$pandalanguage$pandac$ClassDecl* $tmp829 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp827), p_m->returnType);
    $tmp826 = $tmp829;
    panda$core$Bit $tmp830 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp824), $tmp826);
    $tmp817 = $tmp830.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
    panda$core$Panda$unref$panda$core$Object($tmp827);
    panda$core$Panda$unref$panda$core$Object($tmp824);
    $l823:;
    panda$core$Bit $tmp831 = { $tmp817 };
    result816 = $tmp831;
    panda$core$Bit $tmp833 = panda$core$Bit$$NOT$R$panda$core$Bit(result816);
    bool $tmp832 = $tmp833.value;
    if ($tmp832) goto $l834;
    panda$core$Bit $tmp836 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp837 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp836);
    bool $tmp835 = $tmp837.value;
    if (!$tmp835) goto $l838;
    panda$core$Bit $tmp840 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp839 = $tmp840.value;
    if ($tmp839) goto $l841;
    panda$core$Bit $tmp842 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp839 = $tmp842.value;
    $l841:;
    panda$core$Bit $tmp843 = { $tmp839 };
    $tmp835 = $tmp843.value;
    $l838:;
    panda$core$Bit $tmp844 = { $tmp835 };
    $tmp832 = $tmp844.value;
    $l834:;
    panda$core$Bit $tmp845 = { $tmp832 };
    if ($tmp845.value) goto $l846; else goto $l847;
    $l847:;
    panda$core$String* $tmp853 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp852 = $tmp853;
    panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, $tmp852);
    $tmp850 = $tmp854;
    panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s855);
    $tmp849 = $tmp856;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s848, (panda$core$Int64) { 258 }, $tmp849);
    abort();
    $l846:;
    $returnValue813 = result816;
    return $returnValue813;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp861;
    panda$io$MemoryOutputStream* $tmp862;
    panda$collections$HashSet* $tmp863;
    panda$collections$HashSet* $tmp864;
    panda$core$String* separator865 = NULL;
    panda$core$String* $tmp866;
    panda$core$String* $tmp869;
    panda$core$String* $tmp870;
    panda$core$String* $tmp871;
    panda$core$String* $tmp872;
    panda$core$String* $tmp874;
    panda$core$String* $tmp879;
    panda$core$String* $tmp885;
    panda$core$String* $tmp886;
    panda$core$String* $tmp888;
    panda$core$String* $tmp889;
    panda$core$String* $tmp890;
    panda$core$String* $tmp891;
    panda$core$String* $tmp892;
    panda$core$String* $tmp897;
    panda$core$String* $tmp905;
    panda$core$String* $tmp906;
    panda$core$String* $tmp907;
    panda$core$String* $tmp908;
    panda$core$String* $tmp912;
    panda$core$String* $tmp918;
    panda$core$String* $tmp919;
    panda$collections$Iterator* Iter$279$9924 = NULL;
    panda$collections$Iterator* $tmp925;
    panda$collections$Iterator* $tmp926;
    org$pandalanguage$pandac$MethodDecl$Parameter* p942 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp943;
    panda$core$Object* $tmp944;
    panda$core$String* name949 = NULL;
    panda$core$String* $tmp950;
    panda$core$String* $tmp951;
    panda$core$String* $tmp952;
    panda$core$String* $tmp954;
    panda$core$String* $tmp959;
    panda$core$String* $tmp960;
    panda$core$String* $tmp961;
    panda$core$String* $tmp962;
    panda$core$String* $tmp966;
    panda$core$String* $tmp972;
    panda$core$String* $tmp973;
    int $tmp860;
    {
        {
            $tmp861 = self->importStream;
            $tmp862 = self->bodyImportStream;
            self->importStream = $tmp862;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
        }
        {
            $tmp863 = self->imports;
            $tmp864 = self->bodyImports;
            self->imports = $tmp864;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
        }
        $tmp866 = &$s867;
        separator865 = $tmp866;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
        panda$core$Bit $tmp868 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp868.value) {
        {
            panda$core$String* $tmp875 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp874 = $tmp875;
            panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s873, $tmp874);
            $tmp872 = $tmp876;
            panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s877);
            $tmp871 = $tmp878;
            panda$core$String* $tmp880 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp879 = $tmp880;
            panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, $tmp879);
            $tmp870 = $tmp881;
            panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, &$s882);
            $tmp869 = $tmp883;
            (($fn884) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp869);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
            {
                $tmp885 = separator865;
                $tmp886 = &$s887;
                separator865 = $tmp886;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp886));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp893 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp892 = $tmp893;
            panda$core$String* $tmp894 = panda$core$String$convert$R$panda$core$String($tmp892);
            $tmp891 = $tmp894;
            panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s895);
            $tmp890 = $tmp896;
            panda$core$String* $tmp898 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp897 = $tmp898;
            panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, $tmp897);
            $tmp889 = $tmp899;
            panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s900);
            $tmp888 = $tmp901;
            (($fn902) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp888);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
        }
        }
        panda$core$Bit $tmp903 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp903);
        if ($tmp904.value) {
        {
            panda$core$String* $tmp909 = panda$core$String$convert$R$panda$core$String(separator865);
            $tmp908 = $tmp909;
            panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s910);
            $tmp907 = $tmp911;
            panda$core$String* $tmp913 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp912 = $tmp913;
            panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, $tmp912);
            $tmp906 = $tmp914;
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s915);
            $tmp905 = $tmp916;
            (($fn917) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp905);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp907));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
            {
                $tmp918 = separator865;
                $tmp919 = &$s920;
                separator865 = $tmp919;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp919));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
            }
        }
        }
        {
            int $tmp923;
            {
                ITable* $tmp927 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp927 = $tmp927->next;
                }
                $fn929 $tmp928 = $tmp927->methods[0];
                panda$collections$Iterator* $tmp930 = $tmp928(((panda$collections$Iterable*) p_m->parameters));
                $tmp926 = $tmp930;
                $tmp925 = $tmp926;
                Iter$279$9924 = $tmp925;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
                $l931:;
                ITable* $tmp934 = Iter$279$9924->$class->itable;
                while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp934 = $tmp934->next;
                }
                $fn936 $tmp935 = $tmp934->methods[0];
                panda$core$Bit $tmp937 = $tmp935(Iter$279$9924);
                panda$core$Bit $tmp938 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp937);
                bool $tmp933 = $tmp938.value;
                if (!$tmp933) goto $l932;
                {
                    int $tmp941;
                    {
                        ITable* $tmp945 = Iter$279$9924->$class->itable;
                        while ($tmp945->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp945 = $tmp945->next;
                        }
                        $fn947 $tmp946 = $tmp945->methods[1];
                        panda$core$Object* $tmp948 = $tmp946(Iter$279$9924);
                        $tmp944 = $tmp948;
                        $tmp943 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp944);
                        p942 = $tmp943;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
                        panda$core$Panda$unref$panda$core$Object($tmp944);
                        panda$core$String* $tmp955 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p942->name);
                        $tmp954 = $tmp955;
                        panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s953, $tmp954);
                        $tmp952 = $tmp956;
                        panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s957);
                        $tmp951 = $tmp958;
                        $tmp950 = $tmp951;
                        name949 = $tmp950;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp950));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                        panda$core$String* $tmp963 = panda$core$String$convert$R$panda$core$String(separator865);
                        $tmp962 = $tmp963;
                        panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, &$s964);
                        $tmp961 = $tmp965;
                        panda$core$String* $tmp967 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p942->type, name949);
                        $tmp966 = $tmp967;
                        panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, $tmp966);
                        $tmp960 = $tmp968;
                        panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s969);
                        $tmp959 = $tmp970;
                        (($fn971) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp959);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp959));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp960));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
                        {
                            $tmp972 = separator865;
                            $tmp973 = &$s974;
                            separator865 = $tmp973;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp973));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp972));
                        }
                    }
                    $tmp941 = -1;
                    goto $l939;
                    $l939:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name949));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p942));
                    p942 = NULL;
                    name949 = NULL;
                    switch ($tmp941) {
                        case -1: goto $l975;
                    }
                    $l975:;
                }
                goto $l931;
                $l932:;
            }
            $tmp923 = -1;
            goto $l921;
            $l921:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$279$9924));
            Iter$279$9924 = NULL;
            switch ($tmp923) {
                case -1: goto $l976;
            }
            $l976:;
        }
        (($fn978) ((panda$io$OutputStream*) self->body)->$class->vtable[21])(((panda$io$OutputStream*) self->body), &$s977);
    }
    $tmp860 = -1;
    goto $l858;
    $l858:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator865));
    separator865 = NULL;
    switch ($tmp860) {
        case -1: goto $l979;
    }
    $l979:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp980;
    panda$core$String* $tmp983;
    panda$core$String* $tmp986;
    panda$core$String* $tmp989;
    panda$core$String* $tmp981 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp980 = $tmp981;
    (($fn982) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), $tmp980);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
    panda$core$String* $tmp984 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp983 = $tmp984;
    (($fn985) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), $tmp983);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
    panda$core$String* $tmp987 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp986 = $tmp987;
    (($fn988) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp986);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
    panda$core$String* $tmp990 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp989 = $tmp990;
    (($fn991) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp989);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp994;
    {
    }
    $tmp994 = -1;
    goto $l992;
    $l992:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp994) {
        case -1: goto $l995;
    }
    $l995:;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typesOut));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmCodeGen));
}

