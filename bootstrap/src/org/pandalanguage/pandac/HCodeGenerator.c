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
org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef panda$core$Object* (*$fn163)(panda$core$Weak*);
typedef panda$core$Object* (*$fn170)(panda$core$Weak*);
typedef void (*$fn187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn207)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn220)(panda$core$Weak*);
typedef panda$core$Object* (*$fn227)(panda$core$Weak*);
typedef panda$core$Object* (*$fn270)(panda$core$Weak*);
typedef panda$core$Object* (*$fn290)(panda$core$Weak*);
typedef panda$core$Object* (*$fn297)(panda$core$Weak*);
typedef void (*$fn314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn353)(panda$core$Weak*);
typedef void (*$fn431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn433)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn435)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn448)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn458)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn463)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn470)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn481)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn484)(panda$core$Weak*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn522)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn538)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn540)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn570)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn575)(panda$collections$CollectionView*);
typedef void (*$fn590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn606)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn608)(panda$core$Weak*);
typedef void (*$fn622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn637)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn667)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn677)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn682)(panda$core$Weak*);
typedef panda$core$Object* (*$fn691)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn703)(panda$collections$CollectionView*);
typedef void (*$fn718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn736)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn747)(panda$core$Weak*);
typedef panda$core$Object* (*$fn782)(panda$core$Weak*);
typedef panda$core$Object* (*$fn786)(panda$core$Weak*);
typedef void (*$fn843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn876)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn888)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn895)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn906)(panda$collections$Iterator*);
typedef void (*$fn930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn951)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn956)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

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
    panda$core$String* $returnValue59;
    panda$core$String* $tmp60;
    panda$core$String* $tmp61;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp62;
    int $tmp49;
    {
        panda$core$String* $tmp53 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp52 = $tmp53;
        $tmp51 = $tmp52;
        llvmName50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Bit $tmp55 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName50, &$s54);
        if ($tmp55.value) goto $l56; else goto $l57;
        $l57:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s58, (panda$core$Int64) { 47 });
        abort();
        $l56:;
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp62, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp63 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName50, $tmp62);
        $tmp61 = $tmp63;
        $tmp60 = $tmp61;
        $returnValue59 = $tmp60;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
        $tmp49 = 0;
        goto $l47;
        $l64:;
        return $returnValue59;
    }
    $l47:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName50));
    llvmName50 = NULL;
    switch ($tmp49) {
        case 0: goto $l64;
    }
    $l66:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue67;
    panda$core$Int64 $tmp68 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue67 = $tmp68;
    return $returnValue67;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue70;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp76;
    panda$core$String* $tmp77;
    panda$core$String* $tmp78;
    panda$core$String* $tmp81 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s79, &$s80);
    $tmp78 = $tmp81;
    panda$core$String* $tmp84 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp78, &$s82, &$s83);
    $tmp77 = $tmp84;
    panda$core$String* $tmp87 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp77, &$s85, &$s86);
    $tmp76 = $tmp87;
    panda$core$String* $tmp90 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp76, &$s88, &$s89);
    $tmp75 = $tmp90;
    panda$core$String* $tmp93 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp75, &$s91, &$s92);
    $tmp74 = $tmp93;
    panda$core$String* $tmp96 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp74, &$s94, &$s95);
    $tmp73 = $tmp96;
    panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, p_extension);
    $tmp72 = $tmp97;
    $tmp71 = $tmp72;
    $returnValue70 = $tmp71;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
    return $returnValue70;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$61_999;
    panda$core$String* $returnValue101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp106;
    panda$core$String* $tmp107;
    panda$core$String* $tmp108;
    panda$core$Object* $tmp110;
    panda$core$String* $tmp119;
    panda$core$String* $tmp120;
    panda$core$String* $tmp121;
    panda$core$Object* $tmp123;
    panda$core$String* $tmp132;
    panda$core$String* $tmp137;
    panda$core$String* $tmp140;
    panda$core$String* name150 = NULL;
    panda$core$String* $tmp151;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    org$pandalanguage$pandac$ClassDecl* cl159 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp160;
    org$pandalanguage$pandac$ClassDecl* $tmp161;
    panda$core$Object* $tmp162;
    panda$core$Object* $tmp169;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$String* $tmp188;
    panda$core$String* $tmp189;
    panda$core$String* includePath194 = NULL;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$String* $tmp208;
    org$pandalanguage$pandac$ClassDecl* cl216 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp217;
    org$pandalanguage$pandac$ClassDecl* $tmp218;
    panda$core$Object* $tmp219;
    panda$core$Object* $tmp226;
    panda$core$String* $tmp230;
    panda$core$String* $tmp231;
    panda$core$String* $tmp232;
    panda$core$Object* $tmp233;
    panda$core$String* $tmp240;
    panda$core$String* $tmp241;
    panda$core$Object* $tmp242;
    panda$core$Object* $tmp252;
    panda$core$String* $tmp256;
    panda$core$String* $tmp257;
    panda$core$String* $tmp258;
    panda$core$Object* $tmp259;
    org$pandalanguage$pandac$ClassDecl* cl266 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp267;
    org$pandalanguage$pandac$ClassDecl* $tmp268;
    panda$core$Object* $tmp269;
    panda$core$String* name277 = NULL;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    org$pandalanguage$pandac$ClassDecl* cl286 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp287;
    org$pandalanguage$pandac$ClassDecl* $tmp288;
    panda$core$Object* $tmp289;
    panda$core$Object* $tmp296;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$String* includePath322 = NULL;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp336;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$core$Object* $tmp343;
    panda$core$String* $tmp350;
    panda$core$String* $tmp351;
    panda$core$Object* $tmp352;
    panda$core$String* $tmp362;
    panda$core$String* $tmp363;
    org$pandalanguage$pandac$Type* $tmp364;
    panda$core$String* $tmp373;
    panda$core$String* $tmp374;
    org$pandalanguage$pandac$Type* $tmp375;
    panda$core$String* $tmp382;
    panda$core$String* $tmp383;
    {
        $match$61_999 = p_t->typeKind;
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp100.value) {
        {
            $tmp102 = &$s103;
            $returnValue101 = $tmp102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
            return $returnValue101;
        }
        }
        else {
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp105.value) {
        {
            panda$core$Int64 $tmp111 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp112 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp111, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp113;
            $tmp113 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp113->value = $tmp112;
            $tmp110 = ((panda$core$Object*) $tmp113);
            panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s109, $tmp110);
            $tmp108 = $tmp114;
            panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s115);
            $tmp107 = $tmp116;
            $tmp106 = $tmp107;
            $returnValue101 = $tmp106;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
            panda$core$Panda$unref$panda$core$Object($tmp110);
            return $returnValue101;
        }
        }
        else {
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp118.value) {
        {
            panda$core$Int64 $tmp124 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp125 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp124, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp126;
            $tmp126 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp126->value = $tmp125;
            $tmp123 = ((panda$core$Object*) $tmp126);
            panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s122, $tmp123);
            $tmp121 = $tmp127;
            panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s128);
            $tmp120 = $tmp129;
            $tmp119 = $tmp120;
            $returnValue101 = $tmp119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
            panda$core$Panda$unref$panda$core$Object($tmp123);
            return $returnValue101;
        }
        }
        else {
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp131.value) {
        {
            $tmp132 = &$s133;
            $returnValue101 = $tmp132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
            return $returnValue101;
        }
        }
        else {
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp135.value) {
        {
            panda$core$Int64 $tmp136 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp136.value) {
                case 4:
                {
                    $tmp137 = &$s138;
                    $returnValue101 = $tmp137;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                    return $returnValue101;
                }
                break;
                case 8:
                {
                    $tmp140 = &$s141;
                    $returnValue101 = $tmp140;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
                    return $returnValue101;
                }
                break;
                default:
                {
                    if (((panda$core$Bit) { false }).value) goto $l143; else goto $l144;
                    $l144:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s145, (panda$core$Int64) { 74 });
                    abort();
                    $l143:;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp146.value) {
        {
            int $tmp149;
            {
                panda$core$String* $tmp155 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp154 = $tmp155;
                panda$core$String* $tmp156 = panda$core$String$convert$R$panda$core$String($tmp154);
                $tmp153 = $tmp156;
                panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, &$s157);
                $tmp152 = $tmp158;
                $tmp151 = $tmp152;
                name150 = $tmp151;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                panda$core$Object* $tmp164 = (($fn163) self->compiler->$class->vtable[2])(self->compiler);
                $tmp162 = $tmp164;
                org$pandalanguage$pandac$ClassDecl* $tmp165 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp162), p_t);
                $tmp161 = $tmp165;
                $tmp160 = $tmp161;
                cl159 = $tmp160;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
                panda$core$Panda$unref$panda$core$Object($tmp162);
                if (((panda$core$Bit) { cl159 != NULL }).value) goto $l166; else goto $l167;
                $l167:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s168, (panda$core$Int64) { 79 });
                abort();
                $l166:;
                panda$core$Object* $tmp171 = (($fn170) self->compiler->$class->vtable[2])(self->compiler);
                $tmp169 = $tmp171;
                panda$core$Bit $tmp172 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp169), cl159);
                panda$core$Bit $tmp173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp172);
                panda$core$Panda$unref$panda$core$Object($tmp169);
                if ($tmp173.value) {
                {
                    panda$core$Bit $tmp174 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name150));
                    panda$core$Bit $tmp175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp174);
                    if ($tmp175.value) {
                    {
                        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s180, name150);
                        $tmp179 = $tmp181;
                        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s182);
                        $tmp178 = $tmp183;
                        panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, name150);
                        $tmp177 = $tmp184;
                        panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s185);
                        $tmp176 = $tmp186;
                        (($fn187) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp176);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name150));
                    }
                    }
                    panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name150, &$s190);
                    $tmp189 = $tmp191;
                    $tmp188 = $tmp189;
                    $returnValue101 = $tmp188;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
                    $tmp149 = 0;
                    goto $l147;
                    $l192:;
                    return $returnValue101;
                }
                }
                panda$core$String* $tmp198 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl159, &$s197);
                $tmp196 = $tmp198;
                $tmp195 = $tmp196;
                includePath194 = $tmp195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                panda$core$Bit $tmp199 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath194));
                panda$core$Bit $tmp200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp199);
                if ($tmp200.value) {
                {
                    panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s203, includePath194);
                    $tmp202 = $tmp204;
                    panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s205);
                    $tmp201 = $tmp206;
                    (($fn207) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp201);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath194));
                }
                }
                $tmp208 = name150;
                $returnValue101 = $tmp208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                $tmp149 = 1;
                goto $l147;
                $l209:;
                return $returnValue101;
            }
            $l147:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl159));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name150));
            name150 = NULL;
            cl159 = NULL;
            includePath194 = NULL;
            switch ($tmp149) {
                case 1: goto $l209;
                case 0: goto $l192;
            }
            $l211:;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp212.value) {
        {
            int $tmp215;
            {
                panda$core$Object* $tmp221 = (($fn220) self->compiler->$class->vtable[2])(self->compiler);
                $tmp219 = $tmp221;
                org$pandalanguage$pandac$ClassDecl* $tmp222 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp219), p_t);
                $tmp218 = $tmp222;
                $tmp217 = $tmp218;
                cl216 = $tmp217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object($tmp219);
                if (((panda$core$Bit) { cl216 != NULL }).value) goto $l223; else goto $l224;
                $l224:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s225, (panda$core$Int64) { 95 });
                abort();
                $l223:;
                panda$core$Object* $tmp228 = (($fn227) self->compiler->$class->vtable[2])(self->compiler);
                $tmp226 = $tmp228;
                panda$core$Bit $tmp229 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp226), cl216);
                panda$core$Panda$unref$panda$core$Object($tmp226);
                if ($tmp229.value) {
                {
                    panda$core$Object* $tmp234 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    $tmp233 = $tmp234;
                    panda$core$String* $tmp235 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp233));
                    $tmp232 = $tmp235;
                    panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s236);
                    $tmp231 = $tmp237;
                    $tmp230 = $tmp231;
                    $returnValue101 = $tmp230;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
                    panda$core$Panda$unref$panda$core$Object($tmp233);
                    $tmp215 = 0;
                    goto $l213;
                    $l238:;
                    return $returnValue101;
                }
                }
                panda$core$Object* $tmp243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp242 = $tmp243;
                panda$core$String* $tmp244 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp242));
                $tmp241 = $tmp244;
                $tmp240 = $tmp241;
                $returnValue101 = $tmp240;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                panda$core$Panda$unref$panda$core$Object($tmp242);
                $tmp215 = 1;
                goto $l213;
                $l245:;
                return $returnValue101;
            }
            $l213:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl216));
            cl216 = NULL;
            switch ($tmp215) {
                case 0: goto $l238;
                case 1: goto $l245;
            }
            $l247:;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp248.value) {
        {
            int $tmp251;
            {
                panda$core$Object* $tmp253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp252 = $tmp253;
                panda$core$Bit $tmp255 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp252))->name, &$s254);
                panda$core$Panda$unref$panda$core$Object($tmp252);
                if ($tmp255.value) {
                {
                    panda$core$Object* $tmp260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                    $tmp259 = $tmp260;
                    panda$core$String* $tmp261 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp259));
                    $tmp258 = $tmp261;
                    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s262);
                    $tmp257 = $tmp263;
                    $tmp256 = $tmp257;
                    $returnValue101 = $tmp256;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                    panda$core$Panda$unref$panda$core$Object($tmp259);
                    $tmp251 = 0;
                    goto $l249;
                    $l264:;
                    return $returnValue101;
                }
                }
                panda$core$Object* $tmp271 = (($fn270) self->compiler->$class->vtable[2])(self->compiler);
                $tmp269 = $tmp271;
                org$pandalanguage$pandac$ClassDecl* $tmp272 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp269), p_t);
                $tmp268 = $tmp272;
                $tmp267 = $tmp268;
                cl266 = $tmp267;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                panda$core$Panda$unref$panda$core$Object($tmp269);
                panda$core$Bit $tmp273 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl266);
                if ($tmp273.value) {
                {
                    int $tmp276;
                    {
                        panda$core$String* $tmp282 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp281 = $tmp282;
                        panda$core$String* $tmp283 = panda$core$String$convert$R$panda$core$String($tmp281);
                        $tmp280 = $tmp283;
                        panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, &$s284);
                        $tmp279 = $tmp285;
                        $tmp278 = $tmp279;
                        name277 = $tmp278;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                        panda$core$Object* $tmp291 = (($fn290) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp289 = $tmp291;
                        org$pandalanguage$pandac$ClassDecl* $tmp292 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp289), p_t);
                        $tmp288 = $tmp292;
                        $tmp287 = $tmp288;
                        cl286 = $tmp287;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                        panda$core$Panda$unref$panda$core$Object($tmp289);
                        if (((panda$core$Bit) { cl286 != NULL }).value) goto $l293; else goto $l294;
                        $l294:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s295, (panda$core$Int64) { 108 });
                        abort();
                        $l293:;
                        panda$core$Object* $tmp298 = (($fn297) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp296 = $tmp298;
                        panda$core$Bit $tmp299 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp296), cl286);
                        panda$core$Bit $tmp300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp299);
                        panda$core$Panda$unref$panda$core$Object($tmp296);
                        if ($tmp300.value) {
                        {
                            panda$core$Bit $tmp301 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name277));
                            panda$core$Bit $tmp302 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp301);
                            if ($tmp302.value) {
                            {
                                panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s307, name277);
                                $tmp306 = $tmp308;
                                panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp306, &$s309);
                                $tmp305 = $tmp310;
                                panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp305, name277);
                                $tmp304 = $tmp311;
                                panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s312);
                                $tmp303 = $tmp313;
                                (($fn314) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp303);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name277));
                            }
                            }
                            panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name277, &$s317);
                            $tmp316 = $tmp318;
                            $tmp315 = $tmp316;
                            $returnValue101 = $tmp315;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                            $tmp276 = 0;
                            goto $l274;
                            $l319:;
                            $tmp251 = 1;
                            goto $l249;
                            $l320:;
                            return $returnValue101;
                        }
                        }
                        panda$core$String* $tmp326 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl286, &$s325);
                        $tmp324 = $tmp326;
                        $tmp323 = $tmp324;
                        includePath322 = $tmp323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                        panda$core$Bit $tmp327 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath322));
                        panda$core$Bit $tmp328 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp327);
                        if ($tmp328.value) {
                        {
                            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s331, includePath322);
                            $tmp330 = $tmp332;
                            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s333);
                            $tmp329 = $tmp334;
                            (($fn335) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp329);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                            panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath322));
                        }
                        }
                        $tmp336 = name277;
                        $returnValue101 = $tmp336;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                        $tmp276 = 1;
                        goto $l274;
                        $l337:;
                        $tmp251 = 2;
                        goto $l249;
                        $l338:;
                        return $returnValue101;
                    }
                    $l274:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath322));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl286));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name277));
                    name277 = NULL;
                    cl286 = NULL;
                    includePath322 = NULL;
                    switch ($tmp276) {
                        case 1: goto $l337;
                        case 0: goto $l319;
                    }
                    $l340:;
                }
                }
                panda$core$Object* $tmp344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp343 = $tmp344;
                panda$core$String* $tmp345 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp343));
                $tmp342 = $tmp345;
                $tmp341 = $tmp342;
                $returnValue101 = $tmp341;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
                panda$core$Panda$unref$panda$core$Object($tmp343);
                $tmp251 = 3;
                goto $l249;
                $l346:;
                return $returnValue101;
            }
            $l249:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl266));
            cl266 = NULL;
            switch ($tmp251) {
                case 2: goto $l338;
                case 1: goto $l320;
                case 0: goto $l264;
                case 3: goto $l346;
            }
            $l348:;
        }
        }
        else {
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp349.value) {
        {
            panda$core$Object* $tmp354 = (($fn353) p_t->parameter->$class->vtable[2])(p_t->parameter);
            $tmp352 = $tmp354;
            panda$core$String* $tmp355 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp352)->bound);
            $tmp351 = $tmp355;
            $tmp350 = $tmp351;
            $returnValue101 = $tmp350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
            panda$core$Panda$unref$panda$core$Object($tmp352);
            return $returnValue101;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 14 }));
        bool $tmp357 = $tmp358.value;
        if ($tmp357) goto $l359;
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp357 = $tmp360.value;
        $l359:;
        panda$core$Bit $tmp361 = { $tmp357 };
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$Type* $tmp365 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp364 = $tmp365;
            panda$core$String* $tmp366 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp364);
            $tmp363 = $tmp366;
            $tmp362 = $tmp363;
            $returnValue101 = $tmp362;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
            return $returnValue101;
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 16 }));
        bool $tmp368 = $tmp369.value;
        if ($tmp368) goto $l370;
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_999.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp368 = $tmp371.value;
        $l370:;
        panda$core$Bit $tmp372 = { $tmp368 };
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp375 = $tmp376;
            panda$core$String* $tmp377 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp375);
            $tmp374 = $tmp377;
            $tmp373 = $tmp374;
            $returnValue101 = $tmp373;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
            return $returnValue101;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l379; else goto $l380;
            $l380:;
            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s384, ((panda$core$Object*) p_t));
            $tmp383 = $tmp385;
            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s386);
            $tmp382 = $tmp387;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s381, (panda$core$Int64) { 131 }, $tmp382);
            abort();
            $l379:;
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
    panda$core$String* $returnValue388;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp391;
    panda$core$String* $tmp392;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp394 = $tmp395;
    panda$core$String* $tmp396 = panda$core$String$convert$R$panda$core$String($tmp394);
    $tmp393 = $tmp396;
    panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, &$s397);
    $tmp392 = $tmp398;
    panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, p_name);
    $tmp391 = $tmp399;
    panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp391, &$s400);
    $tmp390 = $tmp401;
    $tmp389 = $tmp390;
    $returnValue388 = $tmp389;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
    return $returnValue388;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp403;
    panda$core$Weak* $tmp404;
    panda$core$Weak* $tmp405;
    {
        $tmp403 = self->compiler;
        panda$core$Weak* $tmp406 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp406, ((panda$core$Object*) p_compiler));
        $tmp405 = $tmp406;
        $tmp404 = $tmp405;
        self->compiler = $tmp404;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue407;
    panda$io$File* $tmp408;
    panda$io$File* $tmp409;
    panda$core$String* $tmp410;
    panda$core$String* $tmp411 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp410 = $tmp411;
    panda$io$File* $tmp412 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp410);
    $tmp409 = $tmp412;
    $tmp408 = $tmp409;
    $returnValue407 = $tmp408;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
    return $returnValue407;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path417 = NULL;
    panda$io$File* $tmp418;
    panda$io$File* $tmp419;
    panda$io$File* $tmp422;
    panda$io$IndentedOutputStream* $tmp424;
    panda$io$IndentedOutputStream* $tmp425;
    panda$io$IndentedOutputStream* $tmp426;
    panda$io$OutputStream* $tmp428;
    panda$io$MemoryOutputStream* $tmp436;
    panda$io$MemoryOutputStream* $tmp437;
    panda$collections$Set* $tmp438;
    panda$collections$Set* $tmp439;
    panda$core$String* $tmp440;
    panda$core$String* $tmp441;
    panda$core$String* $tmp443;
    panda$collections$Iterator* Iter$171$9453 = NULL;
    panda$collections$Iterator* $tmp454;
    panda$collections$Iterator* $tmp455;
    panda$collections$ListView* $tmp456;
    panda$core$Object* $tmp457;
    org$pandalanguage$pandac$FieldDecl* f476 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp477;
    panda$core$Object* $tmp478;
    panda$core$Object* $tmp483;
    org$pandalanguage$pandac$Type* $tmp486;
    panda$core$String* $tmp489;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$Object* $tmp497;
    panda$core$String* $tmp504;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$String* $tmp508;
    panda$core$String* $tmp526;
    panda$core$String* $tmp527;
    panda$core$String* $tmp529;
    panda$core$String* $tmp541;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$String* $tmp549;
    org$pandalanguage$pandac$Type* $tmp550;
    panda$core$String* $tmp556;
    org$pandalanguage$pandac$Type* $tmp557;
    panda$core$String* $tmp564;
    panda$core$String* $tmp565;
    panda$core$Object* $tmp567;
    panda$collections$ListView* $tmp568;
    panda$core$Object* $tmp569;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $tmp591;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    panda$core$String* $tmp594;
    panda$core$String* $tmp596;
    panda$core$String* $tmp601;
    panda$core$Object* $tmp607;
    panda$core$String* $tmp614;
    panda$core$String* $tmp615;
    panda$core$String* $tmp617;
    panda$core$String* $tmp628;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    org$pandalanguage$pandac$Type* $tmp631;
    panda$core$String* $tmp639;
    panda$core$String* $tmp640;
    panda$core$String* $tmp642;
    panda$core$String* $tmp648;
    panda$core$String* $tmp649;
    panda$core$String* $tmp651;
    panda$core$String* $tmp658;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp669;
    panda$core$String* $tmp670;
    panda$core$String* $tmp672;
    org$pandalanguage$pandac$ClassDecl* value678 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp679;
    org$pandalanguage$pandac$ClassDecl* $tmp680;
    panda$core$Object* $tmp681;
    org$pandalanguage$pandac$Type* $tmp684;
    panda$collections$ListView* valueVTable687 = NULL;
    panda$collections$ListView* $tmp688;
    panda$collections$ListView* $tmp689;
    panda$core$Object* $tmp690;
    panda$core$String* $tmp694;
    panda$core$String* $tmp695;
    panda$core$String* $tmp697;
    panda$core$String* $tmp698;
    panda$core$Object* $tmp700;
    panda$core$String* $tmp710;
    panda$core$String* $tmp711;
    panda$core$String* $tmp712;
    panda$core$String* $tmp719;
    panda$core$String* $tmp720;
    panda$core$String* $tmp721;
    panda$core$String* $tmp723;
    panda$core$String* $tmp728;
    panda$core$String* $tmp729;
    panda$core$String* $tmp730;
    int $tmp416;
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
        panda$io$File* $tmp421 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s420);
        $tmp419 = $tmp421;
        $tmp418 = $tmp419;
        path417 = $tmp418;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
        panda$io$File* $tmp423 = panda$io$File$parent$R$panda$io$File$Q(path417);
        $tmp422 = $tmp423;
        panda$io$File$createDirectories($tmp422);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        {
            $tmp424 = self->out;
            panda$io$IndentedOutputStream* $tmp427 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp429 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path417);
            $tmp428 = $tmp429;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp427, $tmp428);
            $tmp426 = $tmp427;
            $tmp425 = $tmp426;
            self->out = $tmp425;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
        }
        (($fn431) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s430);
        (($fn433) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s432);
        (($fn435) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s434);
        {
            $tmp436 = self->importStream;
            $tmp437 = self->typeImportStream;
            self->importStream = $tmp437;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
        }
        {
            $tmp438 = self->imports;
            $tmp439 = self->typeImports;
            self->imports = $tmp439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
        }
        panda$core$String* $tmp444 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp443 = $tmp444;
        panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s442, $tmp443);
        $tmp441 = $tmp445;
        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s446);
        $tmp440 = $tmp447;
        (($fn448) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp440);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$core$Int64 $tmp449 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp449;
        {
            int $tmp452;
            {
                panda$core$Object* $tmp459 = (($fn458) self->compiler->$class->vtable[2])(self->compiler);
                $tmp457 = $tmp459;
                panda$collections$ListView* $tmp460 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp457), p_cl);
                $tmp456 = $tmp460;
                ITable* $tmp461 = ((panda$collections$Iterable*) $tmp456)->$class->itable;
                while ($tmp461->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp461 = $tmp461->next;
                }
                $fn463 $tmp462 = $tmp461->methods[0];
                panda$collections$Iterator* $tmp464 = $tmp462(((panda$collections$Iterable*) $tmp456));
                $tmp455 = $tmp464;
                $tmp454 = $tmp455;
                Iter$171$9453 = $tmp454;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                panda$core$Panda$unref$panda$core$Object($tmp457);
                $l465:;
                ITable* $tmp468 = Iter$171$9453->$class->itable;
                while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp468 = $tmp468->next;
                }
                $fn470 $tmp469 = $tmp468->methods[0];
                panda$core$Bit $tmp471 = $tmp469(Iter$171$9453);
                panda$core$Bit $tmp472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp471);
                bool $tmp467 = $tmp472.value;
                if (!$tmp467) goto $l466;
                {
                    int $tmp475;
                    {
                        ITable* $tmp479 = Iter$171$9453->$class->itable;
                        while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp479 = $tmp479->next;
                        }
                        $fn481 $tmp480 = $tmp479->methods[1];
                        panda$core$Object* $tmp482 = $tmp480(Iter$171$9453);
                        $tmp478 = $tmp482;
                        $tmp477 = ((org$pandalanguage$pandac$FieldDecl*) $tmp478);
                        f476 = $tmp477;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
                        panda$core$Panda$unref$panda$core$Object($tmp478);
                        panda$core$Object* $tmp485 = (($fn484) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp483 = $tmp485;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp483), f476);
                        panda$core$Panda$unref$panda$core$Object($tmp483);
                        org$pandalanguage$pandac$Type* $tmp487 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp486 = $tmp487;
                        panda$core$Bit $tmp488 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f476->type, $tmp486);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
                        if ($tmp488.value) {
                        {
                            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s493, ((org$pandalanguage$pandac$Symbol*) f476)->name);
                            $tmp492 = $tmp494;
                            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s495);
                            $tmp491 = $tmp496;
                            panda$core$Int64 $tmp498 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp499;
                            $tmp499 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp499->value = $tmp498;
                            $tmp497 = ((panda$core$Object*) $tmp499);
                            panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp491, $tmp497);
                            $tmp490 = $tmp500;
                            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s501);
                            $tmp489 = $tmp502;
                            (($fn503) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp489);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                            panda$core$Panda$unref$panda$core$Object($tmp497);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp509 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f476->type);
                            $tmp508 = $tmp509;
                            panda$core$String* $tmp510 = panda$core$String$convert$R$panda$core$String($tmp508);
                            $tmp507 = $tmp510;
                            panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s511);
                            $tmp506 = $tmp512;
                            panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, ((org$pandalanguage$pandac$Symbol*) f476)->name);
                            $tmp505 = $tmp513;
                            panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp505, &$s514);
                            $tmp504 = $tmp515;
                            (($fn516) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp504);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
                        }
                        }
                    }
                    $tmp475 = -1;
                    goto $l473;
                    $l473:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f476));
                    f476 = NULL;
                    switch ($tmp475) {
                        case -1: goto $l517;
                    }
                    $l517:;
                }
                goto $l465;
                $l466:;
            }
            $tmp452 = -1;
            goto $l450;
            $l450:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$9453));
            Iter$171$9453 = NULL;
            switch ($tmp452) {
                case -1: goto $l518;
            }
            $l518:;
        }
        panda$core$Bit $tmp520 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s519);
        if ($tmp520.value) {
        {
            (($fn522) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s521);
            (($fn524) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s523);
        }
        }
        panda$core$Int64 $tmp525 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp525;
        panda$core$String* $tmp530 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp529 = $tmp530;
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s528, $tmp529);
        $tmp527 = $tmp531;
        panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s532);
        $tmp526 = $tmp533;
        (($fn534) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp526);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
        (($fn536) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s535);
        (($fn538) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s537);
        (($fn540) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s539);
        org$pandalanguage$pandac$Type* $tmp551 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp550 = $tmp551;
        panda$core$String* $tmp552 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp550);
        $tmp549 = $tmp552;
        panda$core$String* $tmp553 = panda$core$String$convert$R$panda$core$String($tmp549);
        $tmp548 = $tmp553;
        panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s554);
        $tmp547 = $tmp555;
        org$pandalanguage$pandac$Type* $tmp558 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp557 = $tmp558;
        panda$core$String* $tmp559 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp557);
        $tmp556 = $tmp559;
        panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, $tmp556);
        $tmp546 = $tmp560;
        panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s561);
        $tmp545 = $tmp562;
        panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s544, $tmp545);
        $tmp543 = $tmp563;
        panda$core$Object* $tmp571 = (($fn570) self->compiler->$class->vtable[2])(self->compiler);
        $tmp569 = $tmp571;
        panda$collections$ListView* $tmp572 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp569), p_cl);
        $tmp568 = $tmp572;
        ITable* $tmp573 = ((panda$collections$CollectionView*) $tmp568)->$class->itable;
        while ($tmp573->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp573 = $tmp573->next;
        }
        $fn575 $tmp574 = $tmp573->methods[0];
        panda$core$Int64 $tmp576 = $tmp574(((panda$collections$CollectionView*) $tmp568));
        panda$core$Int64$wrapper* $tmp577;
        $tmp577 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp577->value = $tmp576;
        $tmp567 = ((panda$core$Object*) $tmp577);
        panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s566, $tmp567);
        $tmp565 = $tmp578;
        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s579);
        $tmp564 = $tmp580;
        panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, $tmp564);
        $tmp542 = $tmp581;
        panda$core$String* $tmp585 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp584 = $tmp585;
        panda$core$String* $tmp586 = panda$core$String$convert$R$panda$core$String($tmp584);
        $tmp583 = $tmp586;
        panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s587);
        $tmp582 = $tmp588;
        panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, $tmp582);
        $tmp541 = $tmp589;
        (($fn590) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp541);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
        panda$core$Panda$unref$panda$core$Object($tmp567);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
        panda$core$Panda$unref$panda$core$Object($tmp569);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
        panda$core$String* $tmp597 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp596 = $tmp597;
        panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s595, $tmp596);
        $tmp594 = $tmp598;
        panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s599);
        $tmp593 = $tmp600;
        panda$core$String* $tmp602 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp601 = $tmp602;
        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, $tmp601);
        $tmp592 = $tmp603;
        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s604);
        $tmp591 = $tmp605;
        (($fn606) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp591);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
        panda$core$Object* $tmp609 = (($fn608) self->compiler->$class->vtable[2])(self->compiler);
        $tmp607 = $tmp609;
        panda$core$Bit $tmp610 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp607), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp607);
        if ($tmp610.value) {
        {
            int $tmp613;
            {
                panda$core$String* $tmp618 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp617 = $tmp618;
                panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s616, $tmp617);
                $tmp615 = $tmp619;
                panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s620);
                $tmp614 = $tmp621;
                (($fn622) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp614);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                panda$core$Int64 $tmp623 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp623;
                (($fn625) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s624);
                (($fn627) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s626);
                org$pandalanguage$pandac$Type* $tmp632 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp631 = $tmp632;
                panda$core$String* $tmp633 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp631);
                $tmp630 = $tmp633;
                panda$core$String* $tmp634 = panda$core$String$convert$R$panda$core$String($tmp630);
                $tmp629 = $tmp634;
                panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, &$s635);
                $tmp628 = $tmp636;
                (($fn637) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp628);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                panda$core$Int64 $tmp638 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp638;
                panda$core$String* $tmp643 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp642 = $tmp643;
                panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s641, $tmp642);
                $tmp640 = $tmp644;
                panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s645);
                $tmp639 = $tmp646;
                (($fn647) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp639);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
                panda$core$String* $tmp652 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp651 = $tmp652;
                panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s650, $tmp651);
                $tmp649 = $tmp653;
                panda$core$String* $tmp655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, &$s654);
                $tmp648 = $tmp655;
                (($fn656) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp648);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
                panda$core$Int64 $tmp657 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp657;
                panda$core$String* $tmp661 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp660 = $tmp661;
                panda$core$String* $tmp662 = panda$core$String$convert$R$panda$core$String($tmp660);
                $tmp659 = $tmp662;
                panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s663);
                $tmp658 = $tmp664;
                (($fn665) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp658);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                (($fn667) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s666);
                panda$core$Int64 $tmp668 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp668;
                panda$core$String* $tmp673 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp672 = $tmp673;
                panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s671, $tmp672);
                $tmp670 = $tmp674;
                panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s675);
                $tmp669 = $tmp676;
                (($fn677) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp669);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$Object* $tmp683 = (($fn682) self->compiler->$class->vtable[2])(self->compiler);
                $tmp681 = $tmp683;
                org$pandalanguage$pandac$Type* $tmp685 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp684 = $tmp685;
                org$pandalanguage$pandac$ClassDecl* $tmp686 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp681), $tmp684);
                $tmp680 = $tmp686;
                $tmp679 = $tmp680;
                value678 = $tmp679;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                panda$core$Panda$unref$panda$core$Object($tmp681);
                panda$core$Object* $tmp692 = (($fn691) self->compiler->$class->vtable[2])(self->compiler);
                $tmp690 = $tmp692;
                panda$collections$ListView* $tmp693 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp690), value678);
                $tmp689 = $tmp693;
                $tmp688 = $tmp689;
                valueVTable687 = $tmp688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                panda$core$Panda$unref$panda$core$Object($tmp690);
                ITable* $tmp701 = ((panda$collections$CollectionView*) valueVTable687)->$class->itable;
                while ($tmp701->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp701 = $tmp701->next;
                }
                $fn703 $tmp702 = $tmp701->methods[0];
                panda$core$Int64 $tmp704 = $tmp702(((panda$collections$CollectionView*) valueVTable687));
                panda$core$Int64$wrapper* $tmp705;
                $tmp705 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp705->value = $tmp704;
                $tmp700 = ((panda$core$Object*) $tmp705);
                panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s699, $tmp700);
                $tmp698 = $tmp706;
                panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, &$s707);
                $tmp697 = $tmp708;
                panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s696, $tmp697);
                $tmp695 = $tmp709;
                panda$core$String* $tmp713 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp712 = $tmp713;
                panda$core$String* $tmp714 = panda$core$String$convert$R$panda$core$String($tmp712);
                $tmp711 = $tmp714;
                panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s715);
                $tmp710 = $tmp716;
                panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, $tmp710);
                $tmp694 = $tmp717;
                (($fn718) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp694);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                panda$core$Panda$unref$panda$core$Object($tmp700);
                panda$core$String* $tmp724 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp723 = $tmp724;
                panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s722, $tmp723);
                $tmp721 = $tmp725;
                panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp721, &$s726);
                $tmp720 = $tmp727;
                panda$core$String* $tmp731 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp730 = $tmp731;
                panda$core$String* $tmp732 = panda$core$String$convert$R$panda$core$String($tmp730);
                $tmp729 = $tmp732;
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s733);
                $tmp728 = $tmp734;
                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp720, $tmp728);
                $tmp719 = $tmp735;
                (($fn736) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp719);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
            }
            $tmp613 = -1;
            goto $l611;
            $l611:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable687));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value678));
            value678 = NULL;
            valueVTable687 = NULL;
            switch ($tmp613) {
                case -1: goto $l737;
            }
            $l737:;
        }
        }
    }
    $tmp416 = -1;
    goto $l414;
    $l414:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path417));
    path417 = NULL;
    switch ($tmp416) {
        case -1: goto $l738;
    }
    $l738:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result742 = NULL;
    panda$core$String* $tmp743;
    panda$core$String* $tmp744;
    org$pandalanguage$pandac$Type* $tmp745;
    panda$core$Object* $tmp746;
    panda$core$String* $returnValue758;
    panda$core$String* $tmp759;
    panda$core$String* $tmp760;
    panda$core$String* $tmp765;
    int $tmp741;
    {
        panda$core$Object* $tmp748 = (($fn747) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp746 = $tmp748;
        org$pandalanguage$pandac$Type* $tmp749 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp746));
        $tmp745 = $tmp749;
        panda$core$String* $tmp750 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp745);
        $tmp744 = $tmp750;
        $tmp743 = $tmp744;
        result742 = $tmp743;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
        panda$core$Panda$unref$panda$core$Object($tmp746);
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp751 = $tmp752.value;
        if (!$tmp751) goto $l753;
        panda$core$Bit $tmp755 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result742, &$s754);
        panda$core$Bit $tmp756 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp755);
        $tmp751 = $tmp756.value;
        $l753:;
        panda$core$Bit $tmp757 = { $tmp751 };
        if ($tmp757.value) {
        {
            panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result742, &$s761);
            $tmp760 = $tmp762;
            $tmp759 = $tmp760;
            $returnValue758 = $tmp759;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp759));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
            $tmp741 = 0;
            goto $l739;
            $l763:;
            return $returnValue758;
        }
        }
        $tmp765 = result742;
        $returnValue758 = $tmp765;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp765));
        $tmp741 = 1;
        goto $l739;
        $l766:;
        return $returnValue758;
    }
    $l739:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result742));
    result742 = NULL;
    switch ($tmp741) {
        case 0: goto $l763;
        case 1: goto $l766;
    }
    $l768:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue771;
    panda$core$Bit result773;
    panda$core$Object* $tmp781;
    org$pandalanguage$pandac$ClassDecl* $tmp784;
    panda$core$Object* $tmp785;
    panda$core$String* $tmp808;
    panda$core$String* $tmp809;
    panda$core$String* $tmp811;
    panda$core$Bit $tmp769 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp770 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp769);
    if ($tmp770.value) {
    {
        $returnValue771 = ((panda$core$Bit) { false });
        return $returnValue771;
    }
    }
    panda$core$Bit $tmp776 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp775 = $tmp776.value;
    if (!$tmp775) goto $l777;
    panda$core$Bit $tmp778 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp775 = $tmp778.value;
    $l777:;
    panda$core$Bit $tmp779 = { $tmp775 };
    bool $tmp774 = $tmp779.value;
    if (!$tmp774) goto $l780;
    panda$core$Object* $tmp783 = (($fn782) self->compiler->$class->vtable[2])(self->compiler);
    $tmp781 = $tmp783;
    panda$core$Object* $tmp787 = (($fn786) self->compiler->$class->vtable[2])(self->compiler);
    $tmp785 = $tmp787;
    org$pandalanguage$pandac$ClassDecl* $tmp788 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp785), p_m->returnType);
    $tmp784 = $tmp788;
    panda$core$Bit $tmp789 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp781), $tmp784);
    $tmp774 = $tmp789.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
    panda$core$Panda$unref$panda$core$Object($tmp785);
    panda$core$Panda$unref$panda$core$Object($tmp781);
    $l780:;
    panda$core$Bit $tmp790 = { $tmp774 };
    result773 = $tmp790;
    panda$core$Bit $tmp792 = panda$core$Bit$$NOT$R$panda$core$Bit(result773);
    bool $tmp791 = $tmp792.value;
    if ($tmp791) goto $l793;
    panda$core$Bit $tmp795 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp796 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp795);
    bool $tmp794 = $tmp796.value;
    if (!$tmp794) goto $l797;
    panda$core$Bit $tmp799 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp798 = $tmp799.value;
    if ($tmp798) goto $l800;
    panda$core$Bit $tmp801 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp798 = $tmp801.value;
    $l800:;
    panda$core$Bit $tmp802 = { $tmp798 };
    $tmp794 = $tmp802.value;
    $l797:;
    panda$core$Bit $tmp803 = { $tmp794 };
    $tmp791 = $tmp803.value;
    $l793:;
    panda$core$Bit $tmp804 = { $tmp791 };
    if ($tmp804.value) goto $l805; else goto $l806;
    $l806:;
    panda$core$String* $tmp812 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp811 = $tmp812;
    panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s810, $tmp811);
    $tmp809 = $tmp813;
    panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, &$s814);
    $tmp808 = $tmp815;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s807, (panda$core$Int64) { 253 }, $tmp808);
    abort();
    $l805:;
    $returnValue771 = result773;
    return $returnValue771;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp820;
    panda$io$MemoryOutputStream* $tmp821;
    panda$collections$Set* $tmp822;
    panda$collections$Set* $tmp823;
    panda$core$String* separator824 = NULL;
    panda$core$String* $tmp825;
    panda$core$String* $tmp828;
    panda$core$String* $tmp829;
    panda$core$String* $tmp830;
    panda$core$String* $tmp831;
    panda$core$String* $tmp833;
    panda$core$String* $tmp838;
    panda$core$String* $tmp844;
    panda$core$String* $tmp845;
    panda$core$String* $tmp847;
    panda$core$String* $tmp848;
    panda$core$String* $tmp849;
    panda$core$String* $tmp850;
    panda$core$String* $tmp851;
    panda$core$String* $tmp856;
    panda$core$String* $tmp864;
    panda$core$String* $tmp865;
    panda$core$String* $tmp866;
    panda$core$String* $tmp867;
    panda$core$String* $tmp871;
    panda$core$String* $tmp877;
    panda$core$String* $tmp878;
    panda$collections$Iterator* Iter$274$9883 = NULL;
    panda$collections$Iterator* $tmp884;
    panda$collections$Iterator* $tmp885;
    org$pandalanguage$pandac$MethodDecl$Parameter* p901 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp902;
    panda$core$Object* $tmp903;
    panda$core$String* name908 = NULL;
    panda$core$String* $tmp909;
    panda$core$String* $tmp910;
    panda$core$String* $tmp911;
    panda$core$String* $tmp913;
    panda$core$String* $tmp918;
    panda$core$String* $tmp919;
    panda$core$String* $tmp920;
    panda$core$String* $tmp921;
    panda$core$String* $tmp925;
    panda$core$String* $tmp931;
    panda$core$String* $tmp932;
    int $tmp819;
    {
        {
            $tmp820 = self->importStream;
            $tmp821 = self->bodyImportStream;
            self->importStream = $tmp821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp820));
        }
        {
            $tmp822 = self->imports;
            $tmp823 = self->bodyImports;
            self->imports = $tmp823;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
        }
        $tmp825 = &$s826;
        separator824 = $tmp825;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
        panda$core$Bit $tmp827 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp827.value) {
        {
            panda$core$String* $tmp834 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp833 = $tmp834;
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s832, $tmp833);
            $tmp831 = $tmp835;
            panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp831, &$s836);
            $tmp830 = $tmp837;
            panda$core$String* $tmp839 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp838 = $tmp839;
            panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, $tmp838);
            $tmp829 = $tmp840;
            panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, &$s841);
            $tmp828 = $tmp842;
            (($fn843) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp828);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
            {
                $tmp844 = separator824;
                $tmp845 = &$s846;
                separator824 = $tmp845;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp852 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp851 = $tmp852;
            panda$core$String* $tmp853 = panda$core$String$convert$R$panda$core$String($tmp851);
            $tmp850 = $tmp853;
            panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s854);
            $tmp849 = $tmp855;
            panda$core$String* $tmp857 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp856 = $tmp857;
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, $tmp856);
            $tmp848 = $tmp858;
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, &$s859);
            $tmp847 = $tmp860;
            (($fn861) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp847);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp856));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
        }
        }
        panda$core$Bit $tmp862 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp863 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp862);
        if ($tmp863.value) {
        {
            panda$core$String* $tmp868 = panda$core$String$convert$R$panda$core$String(separator824);
            $tmp867 = $tmp868;
            panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, &$s869);
            $tmp866 = $tmp870;
            panda$core$String* $tmp872 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp871 = $tmp872;
            panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, $tmp871);
            $tmp865 = $tmp873;
            panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s874);
            $tmp864 = $tmp875;
            (($fn876) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp864);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp865));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
            {
                $tmp877 = separator824;
                $tmp878 = &$s879;
                separator824 = $tmp878;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
            }
        }
        }
        {
            int $tmp882;
            {
                ITable* $tmp886 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp886 = $tmp886->next;
                }
                $fn888 $tmp887 = $tmp886->methods[0];
                panda$collections$Iterator* $tmp889 = $tmp887(((panda$collections$Iterable*) p_m->parameters));
                $tmp885 = $tmp889;
                $tmp884 = $tmp885;
                Iter$274$9883 = $tmp884;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp884));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
                $l890:;
                ITable* $tmp893 = Iter$274$9883->$class->itable;
                while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp893 = $tmp893->next;
                }
                $fn895 $tmp894 = $tmp893->methods[0];
                panda$core$Bit $tmp896 = $tmp894(Iter$274$9883);
                panda$core$Bit $tmp897 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp896);
                bool $tmp892 = $tmp897.value;
                if (!$tmp892) goto $l891;
                {
                    int $tmp900;
                    {
                        ITable* $tmp904 = Iter$274$9883->$class->itable;
                        while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp904 = $tmp904->next;
                        }
                        $fn906 $tmp905 = $tmp904->methods[1];
                        panda$core$Object* $tmp907 = $tmp905(Iter$274$9883);
                        $tmp903 = $tmp907;
                        $tmp902 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp903);
                        p901 = $tmp902;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp902));
                        panda$core$Panda$unref$panda$core$Object($tmp903);
                        panda$core$String* $tmp914 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p901->name);
                        $tmp913 = $tmp914;
                        panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s912, $tmp913);
                        $tmp911 = $tmp915;
                        panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s916);
                        $tmp910 = $tmp917;
                        $tmp909 = $tmp910;
                        name908 = $tmp909;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
                        panda$core$String* $tmp922 = panda$core$String$convert$R$panda$core$String(separator824);
                        $tmp921 = $tmp922;
                        panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, &$s923);
                        $tmp920 = $tmp924;
                        panda$core$String* $tmp926 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p901->type, name908);
                        $tmp925 = $tmp926;
                        panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp920, $tmp925);
                        $tmp919 = $tmp927;
                        panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s928);
                        $tmp918 = $tmp929;
                        (($fn930) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp918);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
                        {
                            $tmp931 = separator824;
                            $tmp932 = &$s933;
                            separator824 = $tmp932;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
                        }
                    }
                    $tmp900 = -1;
                    goto $l898;
                    $l898:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p901));
                    p901 = NULL;
                    name908 = NULL;
                    switch ($tmp900) {
                        case -1: goto $l934;
                    }
                    $l934:;
                }
                goto $l890;
                $l891:;
            }
            $tmp882 = -1;
            goto $l880;
            $l880:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$9883));
            Iter$274$9883 = NULL;
            switch ($tmp882) {
                case -1: goto $l935;
            }
            $l935:;
        }
        (($fn937) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s936);
    }
    $tmp819 = -1;
    goto $l817;
    $l817:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator824));
    separator824 = NULL;
    switch ($tmp819) {
        case -1: goto $l938;
    }
    $l938:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp941;
    panda$core$String* $tmp944;
    panda$core$String* $tmp949;
    panda$core$String* $tmp952;
    (($fn940) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s939);
    panda$core$String* $tmp942 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp941 = $tmp942;
    (($fn943) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp941);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp941));
    panda$core$String* $tmp945 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp944 = $tmp945;
    (($fn946) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp944);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
    (($fn948) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s947);
    panda$core$String* $tmp950 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp949 = $tmp950;
    (($fn951) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp949);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
    panda$core$String* $tmp953 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp952 = $tmp953;
    (($fn954) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp952);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
    (($fn956) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s955);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp959;
    {
    }
    $tmp959 = -1;
    goto $l957;
    $l957:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp959) {
        case -1: goto $l960;
    }
    $l960:;
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

