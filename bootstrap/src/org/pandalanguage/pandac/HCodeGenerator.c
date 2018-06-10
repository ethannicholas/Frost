#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "panda/io/MemoryOutputStream.h"
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

typedef void (*$fn206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn471)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn480)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn482)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn497)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn512)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn530)(panda$collections$Iterator*);
typedef void (*$fn551)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn570)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn585)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn619)(panda$collections$CollectionView*);
typedef void (*$fn634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn671)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn692)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn724)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn748)(panda$collections$CollectionView*);
typedef void (*$fn763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn920)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn932)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn939)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn950)(panda$collections$Iterator*);
typedef void (*$fn974)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn985)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn994)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$io$MemoryOutputStream* $tmp5;
    panda$io$MemoryOutputStream* $tmp6;
    panda$io$MemoryOutputStream* $tmp8;
    panda$io$MemoryOutputStream* $tmp9;
    panda$io$IndentedOutputStream* $tmp11;
    panda$io$IndentedOutputStream* $tmp12;
    panda$io$MemoryOutputStream* $tmp14;
    panda$io$MemoryOutputStream* $tmp15;
    panda$io$MemoryOutputStream* $tmp17;
    panda$io$MemoryOutputStream* $tmp18;
    panda$io$IndentedOutputStream* $tmp20;
    panda$io$IndentedOutputStream* $tmp21;
    panda$collections$HashSet* $tmp23;
    panda$collections$HashSet* $tmp24;
    panda$collections$HashSet* $tmp26;
    panda$collections$HashSet* $tmp27;
    panda$collections$HashSet* $tmp29;
    panda$io$MemoryOutputStream* $tmp30;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp31;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp32;
    panda$io$MemoryOutputStream* $tmp35;
    panda$core$Bit $tmp37;
    panda$io$File* $tmp38;
    panda$io$File* $tmp39;
    panda$io$IndentedOutputStream* $tmp40;
    panda$io$IndentedOutputStream* $tmp41;
    panda$io$IndentedOutputStream* $tmp42;
    panda$io$MemoryOutputStream* $tmp44;
    panda$io$IndentedOutputStream* $tmp46;
    panda$io$IndentedOutputStream* $tmp47;
    panda$io$IndentedOutputStream* $tmp48;
    panda$io$MemoryOutputStream* $tmp50;
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
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->compiler = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->typeImportStream = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$io$MemoryOutputStream* $tmp10 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->typesBuffer = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$io$IndentedOutputStream* $tmp13 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp13, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->types = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->bodyImportStream = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp19);
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->bodyBuffer = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp22, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->body = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$HashSet* $tmp25 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp25);
    $tmp24 = $tmp25;
    $tmp23 = $tmp24;
    self->typeImports = $tmp23;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$collections$HashSet* $tmp28 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp28);
    $tmp27 = $tmp28;
    $tmp26 = $tmp27;
    self->bodyImports = $tmp26;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    $tmp29 = self->typeImports;
    self->imports = $tmp29;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
    $tmp30 = self->typeImportStream;
    self->importStream = $tmp30;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp33 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp36 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp36);
    $tmp35 = $tmp36;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp33, &$s34, ((panda$io$OutputStream*) $tmp35));
    $tmp32 = $tmp33;
    $tmp31 = $tmp32;
    self->llvmCodeGen = $tmp31;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    panda$core$Bit$init$builtin_bit(&$tmp37, false);
    self->inClass = $tmp37;
    {
        $tmp38 = self->outDir;
        $tmp39 = p_outDir;
        self->outDir = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
    }
    {
        $tmp40 = self->out;
        panda$io$IndentedOutputStream* $tmp43 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp45 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp45);
        $tmp44 = $tmp45;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp43, ((panda$io$OutputStream*) $tmp44));
        $tmp42 = $tmp43;
        $tmp41 = $tmp42;
        self->out = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    }
    {
        $tmp46 = self->typesOut;
        panda$io$IndentedOutputStream* $tmp49 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp51 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp51);
        $tmp50 = $tmp51;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp49, ((panda$io$OutputStream*) $tmp50));
        $tmp48 = $tmp49;
        $tmp47 = $tmp48;
        self->typesOut = $tmp47;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$String* $tmp54;
    panda$core$String* $tmp55 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp54 = $tmp55;
    $tmp53 = $tmp54;
    $returnValue52 = $tmp53;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
    return $returnValue52;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName60 = NULL;
    panda$core$String* $tmp61;
    panda$core$String* $tmp62;
    panda$core$String* $returnValue69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp72;
    panda$core$Int64 $tmp73;
    panda$core$Bit $tmp74;
    int $tmp59;
    {
        panda$core$String* $tmp63 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp62 = $tmp63;
        $tmp61 = $tmp62;
        llvmName60 = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Bit $tmp65 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName60, &$s64);
        if ($tmp65.value) goto $l66; else goto $l67;
        $l67:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s68, (panda$core$Int64) { 50 });
        abort();
        $l66:;
        panda$core$Int64$init$builtin_int64(&$tmp73, 1);
        panda$core$Bit$init$builtin_bit(&$tmp74, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp72, ((panda$core$Int64$nullable) { $tmp73, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp74);
        panda$core$String* $tmp75 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName60, $tmp72);
        $tmp71 = $tmp75;
        $tmp70 = $tmp71;
        $returnValue69 = $tmp70;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        $tmp59 = 0;
        goto $l57;
        $l76:;
        return $returnValue69;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName60));
    llvmName60 = NULL;
    switch ($tmp59) {
        case 0: goto $l76;
    }
    $l78:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue79;
    panda$core$Int64 $tmp80 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue79 = $tmp80;
    return $returnValue79;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue82;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$String* $tmp93 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s91, &$s92);
    $tmp90 = $tmp93;
    panda$core$String* $tmp96 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp90, &$s94, &$s95);
    $tmp89 = $tmp96;
    panda$core$String* $tmp99 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp89, &$s97, &$s98);
    $tmp88 = $tmp99;
    panda$core$String* $tmp102 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp88, &$s100, &$s101);
    $tmp87 = $tmp102;
    panda$core$String* $tmp105 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp87, &$s103, &$s104);
    $tmp86 = $tmp105;
    panda$core$String* $tmp108 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp86, &$s106, &$s107);
    $tmp85 = $tmp108;
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, p_extension);
    $tmp84 = $tmp109;
    $tmp83 = $tmp84;
    $returnValue82 = $tmp83;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    return $returnValue82;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$64_9111;
    panda$core$Int64 $tmp112;
    panda$core$String* $returnValue114;
    panda$core$String* $tmp115;
    panda$core$Int64 $tmp118;
    panda$core$String* $tmp120;
    panda$core$String* $tmp121;
    panda$core$String* $tmp122;
    panda$core$Object* $tmp124;
    panda$core$Int64 $tmp126;
    panda$core$Int64 $tmp133;
    panda$core$String* $tmp135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp137;
    panda$core$Object* $tmp139;
    panda$core$Int64 $tmp141;
    panda$core$Int64 $tmp148;
    panda$core$String* $tmp150;
    panda$core$Int64 $tmp153;
    panda$core$String* $tmp156;
    panda$core$String* $tmp159;
    panda$core$Bit $tmp162;
    panda$core$Int64 $tmp166;
    panda$core$String* name171 = NULL;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    org$pandalanguage$pandac$ClassDecl* cl180 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp181;
    org$pandalanguage$pandac$ClassDecl* $tmp182;
    panda$core$Object* $tmp183;
    panda$core$Object* $tmp189;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$String* includePath213 = NULL;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    panda$core$String* $tmp227;
    panda$core$Int64 $tmp231;
    org$pandalanguage$pandac$ClassDecl* cl236 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp237;
    org$pandalanguage$pandac$ClassDecl* $tmp238;
    panda$core$Object* $tmp239;
    panda$core$Object* $tmp245;
    panda$core$String* $tmp248;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    panda$core$Object* $tmp251;
    panda$core$Int64 $tmp252;
    panda$core$String* $tmp259;
    panda$core$String* $tmp260;
    panda$core$Object* $tmp261;
    panda$core$Int64 $tmp262;
    panda$core$Int64 $tmp268;
    panda$core$Object* $tmp273;
    panda$core$Int64 $tmp274;
    panda$core$String* $tmp278;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$Object* $tmp281;
    panda$core$Int64 $tmp282;
    org$pandalanguage$pandac$ClassDecl* cl289 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp290;
    org$pandalanguage$pandac$ClassDecl* $tmp291;
    panda$core$Object* $tmp292;
    panda$core$String* name299 = NULL;
    panda$core$String* $tmp300;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    org$pandalanguage$pandac$ClassDecl* cl308 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp309;
    org$pandalanguage$pandac$ClassDecl* $tmp310;
    panda$core$Object* $tmp311;
    panda$core$Object* $tmp317;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$String* $tmp335;
    panda$core$String* $tmp336;
    panda$core$String* includePath342 = NULL;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350;
    panda$core$String* $tmp356;
    panda$core$String* $tmp361;
    panda$core$String* $tmp362;
    panda$core$Object* $tmp363;
    panda$core$Int64 $tmp364;
    panda$core$Int64 $tmp370;
    panda$core$String* $tmp372;
    panda$core$String* $tmp373;
    panda$core$Object* $tmp374;
    panda$core$Int64 $tmp379;
    panda$core$Int64 $tmp382;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    org$pandalanguage$pandac$Type* $tmp387;
    panda$core$Int64 $tmp392;
    panda$core$Int64 $tmp395;
    panda$core$String* $tmp398;
    panda$core$String* $tmp399;
    org$pandalanguage$pandac$Type* $tmp400;
    panda$core$Bit $tmp404;
    panda$core$String* $tmp408;
    panda$core$String* $tmp409;
    {
        $match$64_9111 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp112, 4);
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp112);
        if ($tmp113.value) {
        {
            $tmp115 = &$s116;
            $returnValue114 = $tmp115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
            return $returnValue114;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp118, 2);
        panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp118);
        if ($tmp119.value) {
        {
            panda$core$Int64 $tmp125 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp126, 8);
            panda$core$Int64 $tmp127 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp125, $tmp126);
            panda$core$Int64$wrapper* $tmp128;
            $tmp128 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp128->value = $tmp127;
            $tmp124 = ((panda$core$Object*) $tmp128);
            panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s123, $tmp124);
            $tmp122 = $tmp129;
            panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s130);
            $tmp121 = $tmp131;
            $tmp120 = $tmp121;
            $returnValue114 = $tmp120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
            panda$core$Panda$unref$panda$core$Object($tmp124);
            return $returnValue114;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp133, 3);
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp133);
        if ($tmp134.value) {
        {
            panda$core$Int64 $tmp140 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp141, 8);
            panda$core$Int64 $tmp142 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp140, $tmp141);
            panda$core$Int64$wrapper* $tmp143;
            $tmp143 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp143->value = $tmp142;
            $tmp139 = ((panda$core$Object*) $tmp143);
            panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s138, $tmp139);
            $tmp137 = $tmp144;
            panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp137, &$s145);
            $tmp136 = $tmp146;
            $tmp135 = $tmp136;
            $returnValue114 = $tmp135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
            panda$core$Panda$unref$panda$core$Object($tmp139);
            return $returnValue114;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp148, 9);
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp148);
        if ($tmp149.value) {
        {
            $tmp150 = &$s151;
            $returnValue114 = $tmp150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
            return $returnValue114;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp153, 10);
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp153);
        if ($tmp154.value) {
        {
            panda$core$Int64 $tmp155 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp155.value) {
                case 4:
                {
                    $tmp156 = &$s157;
                    $returnValue114 = $tmp156;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
                    return $returnValue114;
                }
                break;
                case 8:
                {
                    $tmp159 = &$s160;
                    $returnValue114 = $tmp159;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
                    return $returnValue114;
                }
                break;
                default:
                {
                    panda$core$Bit$init$builtin_bit(&$tmp162, false);
                    if ($tmp162.value) goto $l163; else goto $l164;
                    $l164:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s165, (panda$core$Int64) { 77 });
                    abort();
                    $l163:;
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp166, 0);
        panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp166);
        if ($tmp167.value) {
        {
            int $tmp170;
            {
                panda$core$String* $tmp176 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp175 = $tmp176;
                panda$core$String* $tmp177 = panda$core$String$convert$R$panda$core$String($tmp175);
                $tmp174 = $tmp177;
                panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s178);
                $tmp173 = $tmp179;
                $tmp172 = $tmp173;
                name171 = $tmp172;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
                panda$core$Object* $tmp184 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp183 = $tmp184;
                org$pandalanguage$pandac$ClassDecl* $tmp185 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp183), p_t);
                $tmp182 = $tmp185;
                $tmp181 = $tmp182;
                cl180 = $tmp181;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
                panda$core$Panda$unref$panda$core$Object($tmp183);
                if (((panda$core$Bit) { cl180 != NULL }).value) goto $l186; else goto $l187;
                $l187:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s188, (panda$core$Int64) { 82 });
                abort();
                $l186:;
                panda$core$Object* $tmp190 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp189 = $tmp190;
                panda$core$Bit $tmp191 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp189), cl180);
                panda$core$Bit $tmp192 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp191);
                panda$core$Panda$unref$panda$core$Object($tmp189);
                if ($tmp192.value) {
                {
                    panda$core$Bit $tmp193 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name171));
                    panda$core$Bit $tmp194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp193);
                    if ($tmp194.value) {
                    {
                        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s199, name171);
                        $tmp198 = $tmp200;
                        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s201);
                        $tmp197 = $tmp202;
                        panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, name171);
                        $tmp196 = $tmp203;
                        panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s204);
                        $tmp195 = $tmp205;
                        (($fn206) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp195);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                        panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name171));
                    }
                    }
                    panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name171, &$s209);
                    $tmp208 = $tmp210;
                    $tmp207 = $tmp208;
                    $returnValue114 = $tmp207;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                    $tmp170 = 0;
                    goto $l168;
                    $l211:;
                    return $returnValue114;
                }
                }
                panda$core$String* $tmp217 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl180, &$s216);
                $tmp215 = $tmp217;
                $tmp214 = $tmp215;
                includePath213 = $tmp214;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                panda$core$Bit $tmp218 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath213));
                panda$core$Bit $tmp219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp218);
                if ($tmp219.value) {
                {
                    panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s222, includePath213);
                    $tmp221 = $tmp223;
                    panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s224);
                    $tmp220 = $tmp225;
                    (($fn226) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp220);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath213));
                }
                }
                $tmp227 = name171;
                $returnValue114 = $tmp227;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
                $tmp170 = 1;
                goto $l168;
                $l228:;
                return $returnValue114;
            }
            $l168:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name171));
            name171 = NULL;
            cl180 = NULL;
            includePath213 = NULL;
            switch ($tmp170) {
                case 1: goto $l228;
                case 0: goto $l211;
            }
            $l230:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp231, 1);
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp231);
        if ($tmp232.value) {
        {
            int $tmp235;
            {
                panda$core$Object* $tmp240 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp239 = $tmp240;
                org$pandalanguage$pandac$ClassDecl* $tmp241 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp239), p_t);
                $tmp238 = $tmp241;
                $tmp237 = $tmp238;
                cl236 = $tmp237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
                panda$core$Panda$unref$panda$core$Object($tmp239);
                if (((panda$core$Bit) { cl236 != NULL }).value) goto $l242; else goto $l243;
                $l243:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s244, (panda$core$Int64) { 98 });
                abort();
                $l242:;
                panda$core$Object* $tmp246 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp245 = $tmp246;
                panda$core$Bit $tmp247 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp245), cl236);
                panda$core$Panda$unref$panda$core$Object($tmp245);
                if ($tmp247.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp252, 0);
                    panda$core$Object* $tmp253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp252);
                    $tmp251 = $tmp253;
                    panda$core$String* $tmp254 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp251));
                    $tmp250 = $tmp254;
                    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s255);
                    $tmp249 = $tmp256;
                    $tmp248 = $tmp249;
                    $returnValue114 = $tmp248;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
                    panda$core$Panda$unref$panda$core$Object($tmp251);
                    $tmp235 = 0;
                    goto $l233;
                    $l257:;
                    return $returnValue114;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp262, 0);
                panda$core$Object* $tmp263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp262);
                $tmp261 = $tmp263;
                panda$core$String* $tmp264 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp261));
                $tmp260 = $tmp264;
                $tmp259 = $tmp260;
                $returnValue114 = $tmp259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
                panda$core$Panda$unref$panda$core$Object($tmp261);
                $tmp235 = 1;
                goto $l233;
                $l265:;
                return $returnValue114;
            }
            $l233:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl236));
            cl236 = NULL;
            switch ($tmp235) {
                case 1: goto $l265;
                case 0: goto $l257;
            }
            $l267:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp268, 11);
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp268);
        if ($tmp269.value) {
        {
            int $tmp272;
            {
                panda$core$Int64$init$builtin_int64(&$tmp274, 0);
                panda$core$Object* $tmp275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp274);
                $tmp273 = $tmp275;
                panda$core$Bit $tmp277 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp273))->name, &$s276);
                panda$core$Panda$unref$panda$core$Object($tmp273);
                if ($tmp277.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp282, 1);
                    panda$core$Object* $tmp283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp282);
                    $tmp281 = $tmp283;
                    panda$core$String* $tmp284 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp281));
                    $tmp280 = $tmp284;
                    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp280, &$s285);
                    $tmp279 = $tmp286;
                    $tmp278 = $tmp279;
                    $returnValue114 = $tmp278;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                    panda$core$Panda$unref$panda$core$Object($tmp281);
                    $tmp272 = 0;
                    goto $l270;
                    $l287:;
                    return $returnValue114;
                }
                }
                panda$core$Object* $tmp293 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp292 = $tmp293;
                org$pandalanguage$pandac$ClassDecl* $tmp294 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp292), p_t);
                $tmp291 = $tmp294;
                $tmp290 = $tmp291;
                cl289 = $tmp290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                panda$core$Panda$unref$panda$core$Object($tmp292);
                panda$core$Bit $tmp295 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl289);
                if ($tmp295.value) {
                {
                    int $tmp298;
                    {
                        panda$core$String* $tmp304 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp303 = $tmp304;
                        panda$core$String* $tmp305 = panda$core$String$convert$R$panda$core$String($tmp303);
                        $tmp302 = $tmp305;
                        panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s306);
                        $tmp301 = $tmp307;
                        $tmp300 = $tmp301;
                        name299 = $tmp300;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                        panda$core$Object* $tmp312 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp311 = $tmp312;
                        org$pandalanguage$pandac$ClassDecl* $tmp313 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp311), p_t);
                        $tmp310 = $tmp313;
                        $tmp309 = $tmp310;
                        cl308 = $tmp309;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                        panda$core$Panda$unref$panda$core$Object($tmp311);
                        if (((panda$core$Bit) { cl308 != NULL }).value) goto $l314; else goto $l315;
                        $l315:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s316, (panda$core$Int64) { 111 });
                        abort();
                        $l314:;
                        panda$core$Object* $tmp318 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp317 = $tmp318;
                        panda$core$Bit $tmp319 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp317), cl308);
                        panda$core$Bit $tmp320 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp319);
                        panda$core$Panda$unref$panda$core$Object($tmp317);
                        if ($tmp320.value) {
                        {
                            panda$core$Bit $tmp321 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name299));
                            panda$core$Bit $tmp322 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp321);
                            if ($tmp322.value) {
                            {
                                panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, name299);
                                $tmp326 = $tmp328;
                                panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s329);
                                $tmp325 = $tmp330;
                                panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, name299);
                                $tmp324 = $tmp331;
                                panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s332);
                                $tmp323 = $tmp333;
                                (($fn334) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp323);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                                panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name299));
                            }
                            }
                            panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name299, &$s337);
                            $tmp336 = $tmp338;
                            $tmp335 = $tmp336;
                            $returnValue114 = $tmp335;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
                            $tmp298 = 0;
                            goto $l296;
                            $l339:;
                            $tmp272 = 1;
                            goto $l270;
                            $l340:;
                            return $returnValue114;
                        }
                        }
                        panda$core$String* $tmp346 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl308, &$s345);
                        $tmp344 = $tmp346;
                        $tmp343 = $tmp344;
                        includePath342 = $tmp343;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                        panda$core$Bit $tmp347 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath342));
                        panda$core$Bit $tmp348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp347);
                        if ($tmp348.value) {
                        {
                            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s351, includePath342);
                            $tmp350 = $tmp352;
                            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s353);
                            $tmp349 = $tmp354;
                            (($fn355) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp349);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
                            panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath342));
                        }
                        }
                        $tmp356 = name299;
                        $returnValue114 = $tmp356;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
                        $tmp298 = 1;
                        goto $l296;
                        $l357:;
                        $tmp272 = 2;
                        goto $l270;
                        $l358:;
                        return $returnValue114;
                    }
                    $l296:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath342));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl308));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name299));
                    name299 = NULL;
                    cl308 = NULL;
                    includePath342 = NULL;
                    switch ($tmp298) {
                        case 0: goto $l339;
                        case 1: goto $l357;
                    }
                    $l360:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp364, 0);
                panda$core$Object* $tmp365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp364);
                $tmp363 = $tmp365;
                panda$core$String* $tmp366 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp363));
                $tmp362 = $tmp366;
                $tmp361 = $tmp362;
                $returnValue114 = $tmp361;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
                panda$core$Panda$unref$panda$core$Object($tmp363);
                $tmp272 = 3;
                goto $l270;
                $l367:;
                return $returnValue114;
            }
            $l270:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl289));
            cl289 = NULL;
            switch ($tmp272) {
                case 2: goto $l358;
                case 0: goto $l287;
                case 3: goto $l367;
                case 1: goto $l340;
            }
            $l369:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp370, 12);
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp370);
        if ($tmp371.value) {
        {
            panda$core$Object* $tmp375 = panda$core$Weak$get$R$panda$core$Weak$T(p_t->parameter);
            $tmp374 = $tmp375;
            panda$core$String* $tmp376 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp374)->bound);
            $tmp373 = $tmp376;
            $tmp372 = $tmp373;
            $returnValue114 = $tmp372;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
            panda$core$Panda$unref$panda$core$Object($tmp374);
            return $returnValue114;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp379, 14);
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp379);
        bool $tmp378 = $tmp380.value;
        if ($tmp378) goto $l381;
        panda$core$Int64$init$builtin_int64(&$tmp382, 15);
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp382);
        $tmp378 = $tmp383.value;
        $l381:;
        panda$core$Bit $tmp384 = { $tmp378 };
        if ($tmp384.value) {
        {
            org$pandalanguage$pandac$Type* $tmp388 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp387 = $tmp388;
            panda$core$String* $tmp389 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp387);
            $tmp386 = $tmp389;
            $tmp385 = $tmp386;
            $returnValue114 = $tmp385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
            return $returnValue114;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp392, 16);
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp392);
        bool $tmp391 = $tmp393.value;
        if ($tmp391) goto $l394;
        panda$core$Int64$init$builtin_int64(&$tmp395, 17);
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9111.$rawValue, $tmp395);
        $tmp391 = $tmp396.value;
        $l394:;
        panda$core$Bit $tmp397 = { $tmp391 };
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$Type* $tmp401 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp400 = $tmp401;
            panda$core$String* $tmp402 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp400);
            $tmp399 = $tmp402;
            $tmp398 = $tmp399;
            $returnValue114 = $tmp398;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
            return $returnValue114;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp404, false);
            if ($tmp404.value) goto $l405; else goto $l406;
            $l406:;
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s410, ((panda$core$Object*) p_t));
            $tmp409 = $tmp411;
            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s412);
            $tmp408 = $tmp413;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s407, (panda$core$Int64) { 134 }, $tmp408);
            abort();
            $l405:;
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
    panda$core$String* $returnValue414;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp418;
    panda$core$String* $tmp419;
    panda$core$String* $tmp420;
    panda$core$String* $tmp421 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp420 = $tmp421;
    panda$core$String* $tmp422 = panda$core$String$convert$R$panda$core$String($tmp420);
    $tmp419 = $tmp422;
    panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s423);
    $tmp418 = $tmp424;
    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, p_name);
    $tmp417 = $tmp425;
    panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s426);
    $tmp416 = $tmp427;
    $tmp415 = $tmp416;
    $returnValue414 = $tmp415;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
    return $returnValue414;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp429;
    panda$core$Weak* $tmp430;
    panda$core$Weak* $tmp431;
    {
        $tmp429 = self->compiler;
        panda$core$Weak* $tmp432 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp432, ((panda$core$Object*) p_compiler));
        $tmp431 = $tmp432;
        $tmp430 = $tmp431;
        self->compiler = $tmp430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue433;
    panda$io$File* $tmp434;
    panda$io$File* $tmp435;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp436 = $tmp437;
    panda$io$File* $tmp438 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp436);
    $tmp435 = $tmp438;
    $tmp434 = $tmp435;
    $returnValue433 = $tmp434;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
    return $returnValue433;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp443;
    panda$io$File* path444 = NULL;
    panda$io$File* $tmp445;
    panda$io$File* $tmp446;
    panda$io$File* $tmp449;
    panda$io$IndentedOutputStream* $tmp451;
    panda$io$IndentedOutputStream* $tmp452;
    panda$io$IndentedOutputStream* $tmp453;
    panda$io$OutputStream* $tmp455;
    panda$io$File* typesPath457 = NULL;
    panda$io$File* $tmp458;
    panda$io$File* $tmp459;
    panda$io$IndentedOutputStream* $tmp462;
    panda$io$IndentedOutputStream* $tmp463;
    panda$io$IndentedOutputStream* $tmp464;
    panda$io$OutputStream* $tmp466;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$String* $tmp475;
    panda$io$MemoryOutputStream* $tmp485;
    panda$io$MemoryOutputStream* $tmp486;
    panda$collections$HashSet* $tmp487;
    panda$collections$HashSet* $tmp488;
    panda$core$String* $tmp489;
    panda$core$String* $tmp490;
    panda$core$String* $tmp492;
    panda$core$Int64 $tmp498;
    panda$collections$Iterator* Iter$178$9503 = NULL;
    panda$collections$Iterator* $tmp504;
    panda$collections$Iterator* $tmp505;
    panda$collections$ListView* $tmp506;
    panda$core$Object* $tmp507;
    org$pandalanguage$pandac$FieldDecl* f525 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp526;
    panda$core$Object* $tmp527;
    panda$core$Object* $tmp532;
    org$pandalanguage$pandac$Type* $tmp534;
    panda$core$String* $tmp537;
    panda$core$String* $tmp538;
    panda$core$String* $tmp539;
    panda$core$String* $tmp540;
    panda$core$Object* $tmp545;
    panda$core$String* $tmp552;
    panda$core$String* $tmp553;
    panda$core$String* $tmp554;
    panda$core$String* $tmp555;
    panda$core$String* $tmp556;
    panda$core$Int64 $tmp573;
    panda$core$String* $tmp575;
    panda$core$String* $tmp576;
    panda$core$String* $tmp578;
    panda$core$String* $tmp586;
    panda$core$String* $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp590;
    panda$core$String* $tmp591;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    panda$core$String* $tmp594;
    org$pandalanguage$pandac$Type* $tmp595;
    panda$core$String* $tmp601;
    org$pandalanguage$pandac$Type* $tmp602;
    panda$core$String* $tmp609;
    panda$core$String* $tmp610;
    panda$core$Object* $tmp612;
    panda$collections$ListView* $tmp613;
    panda$core$Object* $tmp614;
    panda$core$String* $tmp626;
    panda$core$String* $tmp627;
    panda$core$String* $tmp628;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    panda$core$String* $tmp640;
    panda$core$String* $tmp645;
    panda$core$Object* $tmp651;
    panda$core$String* $tmp657;
    panda$core$String* $tmp658;
    panda$core$String* $tmp660;
    panda$core$Int64 $tmp666;
    panda$core$String* $tmp672;
    panda$core$String* $tmp673;
    panda$core$String* $tmp674;
    org$pandalanguage$pandac$Type* $tmp675;
    panda$core$Int64 $tmp682;
    panda$core$String* $tmp684;
    panda$core$String* $tmp685;
    panda$core$String* $tmp687;
    panda$core$String* $tmp693;
    panda$core$String* $tmp694;
    panda$core$String* $tmp696;
    panda$core$Int64 $tmp702;
    panda$core$String* $tmp704;
    panda$core$String* $tmp705;
    panda$core$String* $tmp706;
    panda$core$Int64 $tmp714;
    panda$core$String* $tmp716;
    panda$core$String* $tmp717;
    panda$core$String* $tmp719;
    org$pandalanguage$pandac$ClassDecl* value725 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp726;
    org$pandalanguage$pandac$ClassDecl* $tmp727;
    panda$core$Object* $tmp728;
    org$pandalanguage$pandac$Type* $tmp730;
    panda$collections$ListView* valueVTable733 = NULL;
    panda$collections$ListView* $tmp734;
    panda$collections$ListView* $tmp735;
    panda$core$Object* $tmp736;
    panda$core$String* $tmp739;
    panda$core$String* $tmp740;
    panda$core$String* $tmp742;
    panda$core$String* $tmp743;
    panda$core$Object* $tmp745;
    panda$core$String* $tmp755;
    panda$core$String* $tmp756;
    panda$core$String* $tmp757;
    panda$core$String* $tmp764;
    panda$core$String* $tmp765;
    panda$core$String* $tmp766;
    panda$core$String* $tmp768;
    panda$core$String* $tmp773;
    panda$core$String* $tmp774;
    panda$core$String* $tmp775;
    int $tmp442;
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
        panda$core$Bit$init$builtin_bit(&$tmp443, true);
        self->inClass = $tmp443;
        panda$io$File* $tmp448 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s447);
        $tmp446 = $tmp448;
        $tmp445 = $tmp446;
        path444 = $tmp445;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
        panda$io$File* $tmp450 = panda$io$File$parent$R$panda$io$File$Q(path444);
        $tmp449 = $tmp450;
        panda$io$File$createDirectories($tmp449);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
        {
            $tmp451 = self->out;
            panda$io$IndentedOutputStream* $tmp454 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp456 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path444);
            $tmp455 = $tmp456;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp454, $tmp455);
            $tmp453 = $tmp454;
            $tmp452 = $tmp453;
            self->out = $tmp452;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp452));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
        }
        panda$io$File* $tmp461 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s460);
        $tmp459 = $tmp461;
        $tmp458 = $tmp459;
        typesPath457 = $tmp458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
        {
            $tmp462 = self->typesOut;
            panda$io$IndentedOutputStream* $tmp465 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp467 = panda$io$File$openOutputStream$R$panda$io$OutputStream(typesPath457);
            $tmp466 = $tmp467;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp465, $tmp466);
            $tmp464 = $tmp465;
            $tmp463 = $tmp464;
            self->typesOut = $tmp463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
        }
        (($fn469) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), &$s468);
        (($fn471) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), &$s470);
        panda$core$String* $tmp476 = panda$io$File$name$R$panda$core$String(typesPath457);
        $tmp475 = $tmp476;
        panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s474, $tmp475);
        $tmp473 = $tmp477;
        panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp473, &$s478);
        $tmp472 = $tmp479;
        (($fn480) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp472);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
        (($fn482) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), &$s481);
        (($fn484) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), &$s483);
        {
            $tmp485 = self->importStream;
            $tmp486 = self->typeImportStream;
            self->importStream = $tmp486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
        }
        {
            $tmp487 = self->imports;
            $tmp488 = self->typeImports;
            self->imports = $tmp488;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
        }
        panda$core$String* $tmp493 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp492 = $tmp493;
        panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s491, $tmp492);
        $tmp490 = $tmp494;
        panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s495);
        $tmp489 = $tmp496;
        (($fn497) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp489);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        panda$core$Int64$init$builtin_int64(&$tmp498, 1);
        panda$core$Int64 $tmp499 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp498);
        self->types->level = $tmp499;
        {
            int $tmp502;
            {
                panda$core$Object* $tmp508 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp507 = $tmp508;
                panda$collections$ListView* $tmp509 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp507), p_cl);
                $tmp506 = $tmp509;
                ITable* $tmp510 = ((panda$collections$Iterable*) $tmp506)->$class->itable;
                while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp510 = $tmp510->next;
                }
                $fn512 $tmp511 = $tmp510->methods[0];
                panda$collections$Iterator* $tmp513 = $tmp511(((panda$collections$Iterable*) $tmp506));
                $tmp505 = $tmp513;
                $tmp504 = $tmp505;
                Iter$178$9503 = $tmp504;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
                panda$core$Panda$unref$panda$core$Object($tmp507);
                $l514:;
                ITable* $tmp517 = Iter$178$9503->$class->itable;
                while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp517 = $tmp517->next;
                }
                $fn519 $tmp518 = $tmp517->methods[0];
                panda$core$Bit $tmp520 = $tmp518(Iter$178$9503);
                panda$core$Bit $tmp521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp520);
                bool $tmp516 = $tmp521.value;
                if (!$tmp516) goto $l515;
                {
                    int $tmp524;
                    {
                        ITable* $tmp528 = Iter$178$9503->$class->itable;
                        while ($tmp528->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp528 = $tmp528->next;
                        }
                        $fn530 $tmp529 = $tmp528->methods[1];
                        panda$core$Object* $tmp531 = $tmp529(Iter$178$9503);
                        $tmp527 = $tmp531;
                        $tmp526 = ((org$pandalanguage$pandac$FieldDecl*) $tmp527);
                        f525 = $tmp526;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
                        panda$core$Panda$unref$panda$core$Object($tmp527);
                        panda$core$Object* $tmp533 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp532 = $tmp533;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp532), f525);
                        panda$core$Panda$unref$panda$core$Object($tmp532);
                        org$pandalanguage$pandac$Type* $tmp535 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp534 = $tmp535;
                        panda$core$Bit $tmp536 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f525->type, $tmp534);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                        if ($tmp536.value) {
                        {
                            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s541, ((org$pandalanguage$pandac$Symbol*) f525)->name);
                            $tmp540 = $tmp542;
                            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s543);
                            $tmp539 = $tmp544;
                            panda$core$Int64 $tmp546 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp547;
                            $tmp547 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp547->value = $tmp546;
                            $tmp545 = ((panda$core$Object*) $tmp547);
                            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp539, $tmp545);
                            $tmp538 = $tmp548;
                            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s549);
                            $tmp537 = $tmp550;
                            (($fn551) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp537);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
                            panda$core$Panda$unref$panda$core$Object($tmp545);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp557 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f525->type);
                            $tmp556 = $tmp557;
                            panda$core$String* $tmp558 = panda$core$String$convert$R$panda$core$String($tmp556);
                            $tmp555 = $tmp558;
                            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s559);
                            $tmp554 = $tmp560;
                            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, ((org$pandalanguage$pandac$Symbol*) f525)->name);
                            $tmp553 = $tmp561;
                            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s562);
                            $tmp552 = $tmp563;
                            (($fn564) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp552);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                        }
                        }
                    }
                    $tmp524 = -1;
                    goto $l522;
                    $l522:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f525));
                    f525 = NULL;
                    switch ($tmp524) {
                        case -1: goto $l565;
                    }
                    $l565:;
                }
                goto $l514;
                $l515:;
            }
            $tmp502 = -1;
            goto $l500;
            $l500:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9503));
            Iter$178$9503 = NULL;
            switch ($tmp502) {
                case -1: goto $l566;
            }
            $l566:;
        }
        panda$core$Bit $tmp568 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s567);
        if ($tmp568.value) {
        {
            (($fn570) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s569);
            (($fn572) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s571);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp573, 1);
        panda$core$Int64 $tmp574 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp573);
        self->types->level = $tmp574;
        panda$core$String* $tmp579 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp578 = $tmp579;
        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s577, $tmp578);
        $tmp576 = $tmp580;
        panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s581);
        $tmp575 = $tmp582;
        (($fn583) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp575);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
        (($fn585) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s584);
        org$pandalanguage$pandac$Type* $tmp596 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp595 = $tmp596;
        panda$core$String* $tmp597 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp595);
        $tmp594 = $tmp597;
        panda$core$String* $tmp598 = panda$core$String$convert$R$panda$core$String($tmp594);
        $tmp593 = $tmp598;
        panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s599);
        $tmp592 = $tmp600;
        org$pandalanguage$pandac$Type* $tmp603 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp602 = $tmp603;
        panda$core$String* $tmp604 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp602);
        $tmp601 = $tmp604;
        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, $tmp601);
        $tmp591 = $tmp605;
        panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s606);
        $tmp590 = $tmp607;
        panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s589, $tmp590);
        $tmp588 = $tmp608;
        panda$core$Object* $tmp615 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp614 = $tmp615;
        panda$collections$ListView* $tmp616 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp614), p_cl);
        $tmp613 = $tmp616;
        ITable* $tmp617 = ((panda$collections$CollectionView*) $tmp613)->$class->itable;
        while ($tmp617->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp617 = $tmp617->next;
        }
        $fn619 $tmp618 = $tmp617->methods[0];
        panda$core$Int64 $tmp620 = $tmp618(((panda$collections$CollectionView*) $tmp613));
        panda$core$Int64$wrapper* $tmp621;
        $tmp621 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp621->value = $tmp620;
        $tmp612 = ((panda$core$Object*) $tmp621);
        panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s611, $tmp612);
        $tmp610 = $tmp622;
        panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s623);
        $tmp609 = $tmp624;
        panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, $tmp609);
        $tmp587 = $tmp625;
        panda$core$String* $tmp629 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp628 = $tmp629;
        panda$core$String* $tmp630 = panda$core$String$convert$R$panda$core$String($tmp628);
        $tmp627 = $tmp630;
        panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, &$s631);
        $tmp626 = $tmp632;
        panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, $tmp626);
        $tmp586 = $tmp633;
        (($fn634) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp586);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
        panda$core$Panda$unref$panda$core$Object($tmp612);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
        panda$core$Panda$unref$panda$core$Object($tmp614);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
        panda$core$String* $tmp641 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp640 = $tmp641;
        panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s639, $tmp640);
        $tmp638 = $tmp642;
        panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, &$s643);
        $tmp637 = $tmp644;
        panda$core$String* $tmp646 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp645 = $tmp646;
        panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, $tmp645);
        $tmp636 = $tmp647;
        panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s648);
        $tmp635 = $tmp649;
        (($fn650) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp635);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
        panda$core$Object* $tmp652 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp651 = $tmp652;
        panda$core$Bit $tmp653 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp651), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp651);
        if ($tmp653.value) {
        {
            int $tmp656;
            {
                panda$core$String* $tmp661 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp660 = $tmp661;
                panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s659, $tmp660);
                $tmp658 = $tmp662;
                panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp658, &$s663);
                $tmp657 = $tmp664;
                (($fn665) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp657);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                panda$core$Int64$init$builtin_int64(&$tmp666, 1);
                panda$core$Int64 $tmp667 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp666);
                self->types->level = $tmp667;
                (($fn669) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s668);
                (($fn671) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s670);
                org$pandalanguage$pandac$Type* $tmp676 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp675 = $tmp676;
                panda$core$String* $tmp677 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp675);
                $tmp674 = $tmp677;
                panda$core$String* $tmp678 = panda$core$String$convert$R$panda$core$String($tmp674);
                $tmp673 = $tmp678;
                panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, &$s679);
                $tmp672 = $tmp680;
                (($fn681) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp672);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                panda$core$Int64$init$builtin_int64(&$tmp682, 1);
                panda$core$Int64 $tmp683 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp682);
                self->types->level = $tmp683;
                panda$core$String* $tmp688 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp687 = $tmp688;
                panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s686, $tmp687);
                $tmp685 = $tmp689;
                panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s690);
                $tmp684 = $tmp691;
                (($fn692) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp684);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                panda$core$String* $tmp697 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp696 = $tmp697;
                panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s695, $tmp696);
                $tmp694 = $tmp698;
                panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s699);
                $tmp693 = $tmp700;
                (($fn701) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp693);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                panda$core$Int64$init$builtin_int64(&$tmp702, 1);
                panda$core$Int64 $tmp703 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp702);
                self->types->level = $tmp703;
                panda$core$String* $tmp707 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp706 = $tmp707;
                panda$core$String* $tmp708 = panda$core$String$convert$R$panda$core$String($tmp706);
                $tmp705 = $tmp708;
                panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s709);
                $tmp704 = $tmp710;
                (($fn711) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp704);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                (($fn713) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s712);
                panda$core$Int64$init$builtin_int64(&$tmp714, 1);
                panda$core$Int64 $tmp715 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp714);
                self->types->level = $tmp715;
                panda$core$String* $tmp720 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp719 = $tmp720;
                panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s718, $tmp719);
                $tmp717 = $tmp721;
                panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp717, &$s722);
                $tmp716 = $tmp723;
                (($fn724) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp716);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                panda$core$Object* $tmp729 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp728 = $tmp729;
                org$pandalanguage$pandac$Type* $tmp731 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp730 = $tmp731;
                org$pandalanguage$pandac$ClassDecl* $tmp732 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp728), $tmp730);
                $tmp727 = $tmp732;
                $tmp726 = $tmp727;
                value725 = $tmp726;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                panda$core$Panda$unref$panda$core$Object($tmp728);
                panda$core$Object* $tmp737 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp736 = $tmp737;
                panda$collections$ListView* $tmp738 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp736), value725);
                $tmp735 = $tmp738;
                $tmp734 = $tmp735;
                valueVTable733 = $tmp734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                panda$core$Panda$unref$panda$core$Object($tmp736);
                ITable* $tmp746 = ((panda$collections$CollectionView*) valueVTable733)->$class->itable;
                while ($tmp746->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp746 = $tmp746->next;
                }
                $fn748 $tmp747 = $tmp746->methods[0];
                panda$core$Int64 $tmp749 = $tmp747(((panda$collections$CollectionView*) valueVTable733));
                panda$core$Int64$wrapper* $tmp750;
                $tmp750 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp750->value = $tmp749;
                $tmp745 = ((panda$core$Object*) $tmp750);
                panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s744, $tmp745);
                $tmp743 = $tmp751;
                panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s752);
                $tmp742 = $tmp753;
                panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s741, $tmp742);
                $tmp740 = $tmp754;
                panda$core$String* $tmp758 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp757 = $tmp758;
                panda$core$String* $tmp759 = panda$core$String$convert$R$panda$core$String($tmp757);
                $tmp756 = $tmp759;
                panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s760);
                $tmp755 = $tmp761;
                panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, $tmp755);
                $tmp739 = $tmp762;
                (($fn763) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp739);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
                panda$core$Panda$unref$panda$core$Object($tmp745);
                panda$core$String* $tmp769 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp768 = $tmp769;
                panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s767, $tmp768);
                $tmp766 = $tmp770;
                panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s771);
                $tmp765 = $tmp772;
                panda$core$String* $tmp776 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp775 = $tmp776;
                panda$core$String* $tmp777 = panda$core$String$convert$R$panda$core$String($tmp775);
                $tmp774 = $tmp777;
                panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, &$s778);
                $tmp773 = $tmp779;
                panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, $tmp773);
                $tmp764 = $tmp780;
                (($fn781) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp764);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
            }
            $tmp656 = -1;
            goto $l654;
            $l654:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable733));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value725));
            value725 = NULL;
            valueVTable733 = NULL;
            switch ($tmp656) {
                case -1: goto $l782;
            }
            $l782:;
        }
        }
    }
    $tmp442 = -1;
    goto $l440;
    $l440:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) typesPath457));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path444));
    path444 = NULL;
    typesPath457 = NULL;
    switch ($tmp442) {
        case -1: goto $l783;
    }
    $l783:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result787 = NULL;
    panda$core$String* $tmp788;
    panda$core$String* $tmp789;
    org$pandalanguage$pandac$Type* $tmp790;
    panda$core$Object* $tmp791;
    panda$core$Int64 $tmp796;
    panda$core$String* $returnValue803;
    panda$core$String* $tmp804;
    panda$core$String* $tmp805;
    panda$core$String* $tmp810;
    int $tmp786;
    {
        panda$core$Object* $tmp792 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp791 = $tmp792;
        org$pandalanguage$pandac$Type* $tmp793 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp791));
        $tmp790 = $tmp793;
        panda$core$String* $tmp794 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp790);
        $tmp789 = $tmp794;
        $tmp788 = $tmp789;
        result787 = $tmp788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
        panda$core$Panda$unref$panda$core$Object($tmp791);
        panda$core$Int64$init$builtin_int64(&$tmp796, 2);
        panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp796);
        bool $tmp795 = $tmp797.value;
        if (!$tmp795) goto $l798;
        panda$core$Bit $tmp800 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result787, &$s799);
        panda$core$Bit $tmp801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp800);
        $tmp795 = $tmp801.value;
        $l798:;
        panda$core$Bit $tmp802 = { $tmp795 };
        if ($tmp802.value) {
        {
            panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result787, &$s806);
            $tmp805 = $tmp807;
            $tmp804 = $tmp805;
            $returnValue803 = $tmp804;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
            $tmp786 = 0;
            goto $l784;
            $l808:;
            return $returnValue803;
        }
        }
        $tmp810 = result787;
        $returnValue803 = $tmp810;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp810));
        $tmp786 = 1;
        goto $l784;
        $l811:;
        return $returnValue803;
    }
    $l784:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result787));
    result787 = NULL;
    switch ($tmp786) {
        case 1: goto $l811;
        case 0: goto $l808;
    }
    $l813:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue816;
    panda$core$Bit $tmp817;
    panda$core$Bit result819;
    panda$core$Object* $tmp827;
    org$pandalanguage$pandac$ClassDecl* $tmp829;
    panda$core$Object* $tmp830;
    panda$core$String* $tmp852;
    panda$core$String* $tmp853;
    panda$core$String* $tmp855;
    panda$core$Bit $tmp814 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp815 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp814);
    if ($tmp815.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp817, false);
        $returnValue816 = $tmp817;
        return $returnValue816;
    }
    }
    panda$core$Bit $tmp822 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp821 = $tmp822.value;
    if (!$tmp821) goto $l823;
    panda$core$Bit $tmp824 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp821 = $tmp824.value;
    $l823:;
    panda$core$Bit $tmp825 = { $tmp821 };
    bool $tmp820 = $tmp825.value;
    if (!$tmp820) goto $l826;
    panda$core$Object* $tmp828 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp827 = $tmp828;
    panda$core$Object* $tmp831 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp830 = $tmp831;
    org$pandalanguage$pandac$ClassDecl* $tmp832 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp830), p_m->returnType);
    $tmp829 = $tmp832;
    panda$core$Bit $tmp833 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp827), $tmp829);
    $tmp820 = $tmp833.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
    panda$core$Panda$unref$panda$core$Object($tmp830);
    panda$core$Panda$unref$panda$core$Object($tmp827);
    $l826:;
    panda$core$Bit $tmp834 = { $tmp820 };
    result819 = $tmp834;
    panda$core$Bit $tmp836 = panda$core$Bit$$NOT$R$panda$core$Bit(result819);
    bool $tmp835 = $tmp836.value;
    if ($tmp835) goto $l837;
    panda$core$Bit $tmp839 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp840 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp839);
    bool $tmp838 = $tmp840.value;
    if (!$tmp838) goto $l841;
    panda$core$Bit $tmp843 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp842 = $tmp843.value;
    if ($tmp842) goto $l844;
    panda$core$Bit $tmp845 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp842 = $tmp845.value;
    $l844:;
    panda$core$Bit $tmp846 = { $tmp842 };
    $tmp838 = $tmp846.value;
    $l841:;
    panda$core$Bit $tmp847 = { $tmp838 };
    $tmp835 = $tmp847.value;
    $l837:;
    panda$core$Bit $tmp848 = { $tmp835 };
    if ($tmp848.value) goto $l849; else goto $l850;
    $l850:;
    panda$core$String* $tmp856 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp855 = $tmp856;
    panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s854, $tmp855);
    $tmp853 = $tmp857;
    panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp853, &$s858);
    $tmp852 = $tmp859;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s851, (panda$core$Int64) { 258 }, $tmp852);
    abort();
    $l849:;
    $returnValue816 = result819;
    return $returnValue816;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp864;
    panda$io$MemoryOutputStream* $tmp865;
    panda$collections$HashSet* $tmp866;
    panda$collections$HashSet* $tmp867;
    panda$core$String* separator868 = NULL;
    panda$core$String* $tmp869;
    panda$core$String* $tmp872;
    panda$core$String* $tmp873;
    panda$core$String* $tmp874;
    panda$core$String* $tmp875;
    panda$core$String* $tmp877;
    panda$core$String* $tmp882;
    panda$core$String* $tmp888;
    panda$core$String* $tmp889;
    panda$core$String* $tmp891;
    panda$core$String* $tmp892;
    panda$core$String* $tmp893;
    panda$core$String* $tmp894;
    panda$core$String* $tmp895;
    panda$core$String* $tmp900;
    panda$core$String* $tmp908;
    panda$core$String* $tmp909;
    panda$core$String* $tmp910;
    panda$core$String* $tmp911;
    panda$core$String* $tmp915;
    panda$core$String* $tmp921;
    panda$core$String* $tmp922;
    panda$collections$Iterator* Iter$279$9927 = NULL;
    panda$collections$Iterator* $tmp928;
    panda$collections$Iterator* $tmp929;
    org$pandalanguage$pandac$MethodDecl$Parameter* p945 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp946;
    panda$core$Object* $tmp947;
    panda$core$String* name952 = NULL;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    panda$core$String* $tmp955;
    panda$core$String* $tmp957;
    panda$core$String* $tmp962;
    panda$core$String* $tmp963;
    panda$core$String* $tmp964;
    panda$core$String* $tmp965;
    panda$core$String* $tmp969;
    panda$core$String* $tmp975;
    panda$core$String* $tmp976;
    int $tmp863;
    {
        {
            $tmp864 = self->importStream;
            $tmp865 = self->bodyImportStream;
            self->importStream = $tmp865;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp865));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
        }
        {
            $tmp866 = self->imports;
            $tmp867 = self->bodyImports;
            self->imports = $tmp867;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
        }
        $tmp869 = &$s870;
        separator868 = $tmp869;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
        panda$core$Bit $tmp871 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp871.value) {
        {
            panda$core$String* $tmp878 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp877 = $tmp878;
            panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s876, $tmp877);
            $tmp875 = $tmp879;
            panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s880);
            $tmp874 = $tmp881;
            panda$core$String* $tmp883 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp882 = $tmp883;
            panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp874, $tmp882);
            $tmp873 = $tmp884;
            panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, &$s885);
            $tmp872 = $tmp886;
            (($fn887) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp872);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
            {
                $tmp888 = separator868;
                $tmp889 = &$s890;
                separator868 = $tmp889;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp896 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp895 = $tmp896;
            panda$core$String* $tmp897 = panda$core$String$convert$R$panda$core$String($tmp895);
            $tmp894 = $tmp897;
            panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp894, &$s898);
            $tmp893 = $tmp899;
            panda$core$String* $tmp901 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp900 = $tmp901;
            panda$core$String* $tmp902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, $tmp900);
            $tmp892 = $tmp902;
            panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, &$s903);
            $tmp891 = $tmp904;
            (($fn905) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp891);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
        }
        }
        panda$core$Bit $tmp906 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp907 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp906);
        if ($tmp907.value) {
        {
            panda$core$String* $tmp912 = panda$core$String$convert$R$panda$core$String(separator868);
            $tmp911 = $tmp912;
            panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s913);
            $tmp910 = $tmp914;
            panda$core$String* $tmp916 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp915 = $tmp916;
            panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, $tmp915);
            $tmp909 = $tmp917;
            panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s918);
            $tmp908 = $tmp919;
            (($fn920) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp908);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
            {
                $tmp921 = separator868;
                $tmp922 = &$s923;
                separator868 = $tmp922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
            }
        }
        }
        {
            int $tmp926;
            {
                ITable* $tmp930 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp930->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp930 = $tmp930->next;
                }
                $fn932 $tmp931 = $tmp930->methods[0];
                panda$collections$Iterator* $tmp933 = $tmp931(((panda$collections$Iterable*) p_m->parameters));
                $tmp929 = $tmp933;
                $tmp928 = $tmp929;
                Iter$279$9927 = $tmp928;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp928));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp929));
                $l934:;
                ITable* $tmp937 = Iter$279$9927->$class->itable;
                while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp937 = $tmp937->next;
                }
                $fn939 $tmp938 = $tmp937->methods[0];
                panda$core$Bit $tmp940 = $tmp938(Iter$279$9927);
                panda$core$Bit $tmp941 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp940);
                bool $tmp936 = $tmp941.value;
                if (!$tmp936) goto $l935;
                {
                    int $tmp944;
                    {
                        ITable* $tmp948 = Iter$279$9927->$class->itable;
                        while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp948 = $tmp948->next;
                        }
                        $fn950 $tmp949 = $tmp948->methods[1];
                        panda$core$Object* $tmp951 = $tmp949(Iter$279$9927);
                        $tmp947 = $tmp951;
                        $tmp946 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp947);
                        p945 = $tmp946;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                        panda$core$Panda$unref$panda$core$Object($tmp947);
                        panda$core$String* $tmp958 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p945->name);
                        $tmp957 = $tmp958;
                        panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s956, $tmp957);
                        $tmp955 = $tmp959;
                        panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s960);
                        $tmp954 = $tmp961;
                        $tmp953 = $tmp954;
                        name952 = $tmp953;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
                        panda$core$String* $tmp966 = panda$core$String$convert$R$panda$core$String(separator868);
                        $tmp965 = $tmp966;
                        panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s967);
                        $tmp964 = $tmp968;
                        panda$core$String* $tmp970 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p945->type, name952);
                        $tmp969 = $tmp970;
                        panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, $tmp969);
                        $tmp963 = $tmp971;
                        panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s972);
                        $tmp962 = $tmp973;
                        (($fn974) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp962);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp963));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
                        {
                            $tmp975 = separator868;
                            $tmp976 = &$s977;
                            separator868 = $tmp976;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
                        }
                    }
                    $tmp944 = -1;
                    goto $l942;
                    $l942:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name952));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p945));
                    p945 = NULL;
                    name952 = NULL;
                    switch ($tmp944) {
                        case -1: goto $l978;
                    }
                    $l978:;
                }
                goto $l934;
                $l935:;
            }
            $tmp926 = -1;
            goto $l924;
            $l924:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$279$9927));
            Iter$279$9927 = NULL;
            switch ($tmp926) {
                case -1: goto $l979;
            }
            $l979:;
        }
        (($fn981) ((panda$io$OutputStream*) self->body)->$class->vtable[21])(((panda$io$OutputStream*) self->body), &$s980);
    }
    $tmp863 = -1;
    goto $l861;
    $l861:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator868));
    separator868 = NULL;
    switch ($tmp863) {
        case -1: goto $l982;
    }
    $l982:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp983;
    panda$core$String* $tmp986;
    panda$core$String* $tmp989;
    panda$core$String* $tmp992;
    panda$core$String* $tmp984 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp983 = $tmp984;
    (($fn985) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), $tmp983);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
    panda$core$String* $tmp987 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp986 = $tmp987;
    (($fn988) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), $tmp986);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
    panda$core$String* $tmp990 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp989 = $tmp990;
    (($fn991) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp989);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
    panda$core$String* $tmp993 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp992 = $tmp993;
    (($fn994) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp992);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp997;
    {
    }
    $tmp997 = -1;
    goto $l995;
    $l995:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp997) {
        case -1: goto $l998;
    }
    $l998:;
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

