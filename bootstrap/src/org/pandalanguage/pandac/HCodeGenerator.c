#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/HashSet.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IR.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$HCodeGenerator$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn520)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn551)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn568)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn572)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn577)(panda$collections$Iterator*);
typedef void (*$fn608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn635)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn666)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn688)(panda$collections$CollectionView*);
typedef void (*$fn704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn751)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn845)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn863)(panda$collections$CollectionView*);
typedef void (*$fn880)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn898)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn918)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1056)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1064)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1068)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1073)(panda$collections$Iterator*);
typedef void (*$fn1100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1117)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1123)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1129)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1135)(panda$io$OutputStream*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -4892902456452664750, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, panda$io$File* param1) {

// line 42
org$pandalanguage$pandac$CCodeGenerator* $tmp2 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator($tmp2, param1, param0);
org$pandalanguage$pandac$CCodeGenerator** $tmp3 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$CCodeGenerator** $tmp5 = &param0->cCodeGenRetain;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 43
org$pandalanguage$pandac$CCodeGenerator** $tmp6 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp7 = *$tmp6;
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(org$pandalanguage$pandac$HCodeGenerator* param0, panda$io$File* param1, org$pandalanguage$pandac$CCodeGenerator* param2) {

// line 6
panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp8, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) NULL)));
panda$core$Weak** $tmp9 = &param0->compiler;
panda$core$Weak* $tmp10 = *$tmp9;
bool $tmp11 = $tmp10 != ((panda$core$Weak*) NULL);
if ($tmp11) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp12 = panda$core$Weak$get$R$panda$core$Weak$T($tmp10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp12)));
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Weak** $tmp13 = &param0->compiler;
*$tmp13 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// line 8
panda$io$MemoryOutputStream* $tmp14 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp14);
panda$io$MemoryOutputStream** $tmp15 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$io$MemoryOutputStream** $tmp17 = &param0->typeImportStream;
*$tmp17 = $tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// line 10
panda$io$MemoryOutputStream* $tmp18 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp18);
panda$io$MemoryOutputStream** $tmp19 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$io$MemoryOutputStream** $tmp21 = &param0->typesBuffer;
*$tmp21 = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// line 12
panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp23 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp24 = *$tmp23;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp22, ((panda$io$OutputStream*) $tmp24));
panda$io$IndentedOutputStream** $tmp25 = &param0->types;
panda$io$IndentedOutputStream* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$io$IndentedOutputStream** $tmp27 = &param0->types;
*$tmp27 = $tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// line 14
panda$io$MemoryOutputStream* $tmp28 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp28);
panda$io$MemoryOutputStream** $tmp29 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp30 = *$tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$io$MemoryOutputStream** $tmp31 = &param0->bodyImportStream;
*$tmp31 = $tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// line 16
panda$io$MemoryOutputStream* $tmp32 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp32);
panda$io$MemoryOutputStream** $tmp33 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp34 = *$tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$io$MemoryOutputStream** $tmp35 = &param0->bodyBuffer;
*$tmp35 = $tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// line 18
panda$io$IndentedOutputStream* $tmp36 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp37 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp38 = *$tmp37;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp36, ((panda$io$OutputStream*) $tmp38));
panda$io$IndentedOutputStream** $tmp39 = &param0->body;
panda$io$IndentedOutputStream* $tmp40 = *$tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$io$IndentedOutputStream** $tmp41 = &param0->body;
*$tmp41 = $tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// line 20
panda$collections$HashSet* $tmp42 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp42);
panda$collections$HashSet** $tmp43 = &param0->typeImports;
panda$collections$HashSet* $tmp44 = *$tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$collections$HashSet** $tmp45 = &param0->typeImports;
*$tmp45 = $tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// line 22
panda$collections$HashSet* $tmp46 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp46);
panda$collections$HashSet** $tmp47 = &param0->bodyImports;
panda$collections$HashSet* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$collections$HashSet** $tmp49 = &param0->bodyImports;
*$tmp49 = $tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// line 24
panda$collections$HashSet** $tmp50 = &param0->typeImports;
panda$collections$HashSet* $tmp51 = *$tmp50;
panda$collections$HashSet** $tmp52 = &param0->imports;
panda$collections$HashSet* $tmp53 = *$tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$collections$HashSet** $tmp54 = &param0->imports;
*$tmp54 = $tmp51;
// line 26
panda$io$MemoryOutputStream** $tmp55 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp56 = *$tmp55;
panda$io$MemoryOutputStream** $tmp57 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp58 = *$tmp57;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$io$MemoryOutputStream** $tmp59 = &param0->importStream;
*$tmp59 = $tmp56;
// line 34
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp60 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$io$MemoryOutputStream* $tmp61 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp61);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp60, &$s62, ((panda$io$OutputStream*) $tmp61));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp63 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp64 = *$tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp65 = &param0->llvmCodeGen;
*$tmp65 = $tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// line 47
panda$io$File** $tmp66 = &param0->outDir;
panda$io$File* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp68 = &param0->outDir;
*$tmp68 = param1;
// line 48
panda$io$IndentedOutputStream* $tmp69 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp70 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp70);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp69, ((panda$io$OutputStream*) $tmp70));
panda$io$IndentedOutputStream** $tmp71 = &param0->out;
panda$io$IndentedOutputStream* $tmp72 = *$tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$io$IndentedOutputStream** $tmp73 = &param0->out;
*$tmp73 = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// line 49
panda$io$IndentedOutputStream* $tmp74 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp75 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp75);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp74, ((panda$io$OutputStream*) $tmp75));
panda$io$IndentedOutputStream** $tmp76 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp77 = *$tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
panda$io$IndentedOutputStream** $tmp78 = &param0->typesOut;
*$tmp78 = $tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// line 50
panda$core$Weak* $tmp79 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp79, ((panda$core$Object*) param2));
panda$core$Weak** $tmp80 = &param0->cCodeGen;
panda$core$Weak* $tmp81 = *$tmp80;
bool $tmp82 = $tmp81 != ((panda$core$Weak*) NULL);
if ($tmp82) goto block3; else goto block4;
block3:;
panda$core$Object* $tmp83 = panda$core$Weak$get$R$panda$core$Weak$T($tmp81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CCodeGenerator*) $tmp83)));
panda$core$Panda$unref$panda$core$Object$Q($tmp83);
goto block4;
block4:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Weak** $tmp84 = &param0->cCodeGen;
*$tmp84 = $tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, panda$core$String* param1) {

// line 54
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp85 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp86 = *$tmp85;
panda$core$String* $tmp87 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String($tmp86, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
return $tmp87;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
// line 58
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp88 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp89 = *$tmp88;
panda$core$String* $tmp90 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String($tmp89, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp91 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local0) = $tmp90;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// line 59
panda$core$String* $tmp92 = *(&local0);
panda$core$Bit $tmp93 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp92, &$s94);
bool $tmp95 = $tmp93.value;
if ($tmp95) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {59};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s97, $tmp96);
abort(); // unreachable
block1:;
// line 60
panda$core$String* $tmp98 = *(&local0);
panda$core$Int64 $tmp99 = (panda$core$Int64) {1};
panda$core$Bit $tmp100 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp101 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp99, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp100);
panda$core$String* $tmp102 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp98, $tmp101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$String* $tmp103 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing llvmName
*(&local0) = ((panda$core$String*) NULL);
return $tmp102;

}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 64
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp104 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp105 = *$tmp104;
panda$core$Int64 $tmp106 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64($tmp105, param1);
return $tmp106;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 68
panda$core$String** $tmp107 = &param1->name;
panda$core$String* $tmp108 = *$tmp107;
panda$core$String* $tmp109 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp108, &$s110, &$s111);
panda$core$String* $tmp112 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp109, &$s113, &$s114);
panda$core$String* $tmp115 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp112, &$s116, &$s117);
panda$core$String* $tmp118 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp115, &$s119, &$s120);
panda$core$String* $tmp121 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp118, &$s122, &$s123);
panda$core$String* $tmp124 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp121, &$s125, &$s126);
panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
return $tmp127;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ClassDecl* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$ClassDecl* local4 = NULL;
panda$core$String* local5 = NULL;
org$pandalanguage$pandac$ClassDecl* local6 = NULL;
panda$core$String* local7 = NULL;
// line 73
org$pandalanguage$pandac$Type$Kind* $tmp128 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp129 = *$tmp128;
panda$core$Int64 $tmp130 = $tmp129.$rawValue;
panda$core$Int64 $tmp131 = (panda$core$Int64) {4};
panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block2; else goto block3;
block2:;
// line 75
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s134));
return &$s135;
block3:;
panda$core$Int64 $tmp136 = (panda$core$Int64) {2};
panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block4; else goto block5;
block4:;
// line 77
panda$core$Int64 $tmp139 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp140 = (panda$core$Int64) {8};
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141 * $tmp142;
panda$core$Int64 $tmp144 = (panda$core$Int64) {$tmp143};
panda$core$Int64$wrapper* $tmp145;
$tmp145 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp145->value = $tmp144;
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s147, ((panda$core$Object*) $tmp145));
panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s149);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
return $tmp148;
block5:;
panda$core$Int64 $tmp150 = (panda$core$Int64) {3};
panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block6; else goto block7;
block6:;
// line 79
panda$core$Int64 $tmp153 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp154 = (panda$core$Int64) {8};
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155 * $tmp156;
panda$core$Int64 $tmp158 = (panda$core$Int64) {$tmp157};
panda$core$Int64$wrapper* $tmp159;
$tmp159 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp159->value = $tmp158;
panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s161, ((panda$core$Object*) $tmp159));
panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s163);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
return $tmp162;
block7:;
panda$core$Int64 $tmp164 = (panda$core$Int64) {9};
panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block8; else goto block9;
block8:;
// line 81
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s167));
return &$s168;
block9:;
panda$core$Int64 $tmp169 = (panda$core$Int64) {10};
panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block10; else goto block11;
block10:;
// line 83
panda$core$Int64 $tmp172 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp173 = (panda$core$Int64) {4};
panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block13; else goto block14;
block13:;
// line 84
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s176));
return &$s177;
block14:;
panda$core$Int64 $tmp178 = (panda$core$Int64) {8};
panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp172, $tmp178);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block15; else goto block16;
block15:;
// line 85
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s181));
return &$s182;
block16:;
// line 86
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit(false);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp185 = (panda$core$Int64) {86};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s186, $tmp185);
abort(); // unreachable
block17:;
goto block12;
block12:;
goto block1;
block11:;
panda$core$Int64 $tmp187 = (panda$core$Int64) {0};
panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block19; else goto block20;
block19:;
// line 89
panda$core$String** $tmp190 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp191 = *$tmp190;
panda$core$String* $tmp192 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp191);
panda$core$String* $tmp193 = panda$core$String$convert$R$panda$core$String($tmp192);
panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s195);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
*(&local0) = $tmp194;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// line 90
panda$core$Weak** $tmp197 = &param0->compiler;
panda$core$Weak* $tmp198 = *$tmp197;
panda$core$Object* $tmp199 = panda$core$Weak$get$R$panda$core$Weak$T($tmp198);
panda$core$Panda$unref$panda$core$Object$Q($tmp199);
org$pandalanguage$pandac$ClassDecl* $tmp200 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp199), param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp201 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
*(&local1) = $tmp200;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// line 91
org$pandalanguage$pandac$ClassDecl* $tmp202 = *(&local1);
panda$core$Bit $tmp203 = panda$core$Bit$init$builtin_bit($tmp202 != NULL);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp205 = (panda$core$Int64) {91};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s206, $tmp205);
abort(); // unreachable
block21:;
// line 92
panda$core$Weak** $tmp207 = &param0->compiler;
panda$core$Weak* $tmp208 = *$tmp207;
panda$core$Object* $tmp209 = panda$core$Weak$get$R$panda$core$Weak$T($tmp208);
panda$core$Panda$unref$panda$core$Object$Q($tmp209);
org$pandalanguage$pandac$ClassDecl* $tmp210 = *(&local1);
panda$core$Bit $tmp211 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp209), $tmp210);
panda$core$Bit $tmp212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block23; else goto block24;
block23:;
// line 93
panda$collections$HashSet** $tmp214 = &param0->imports;
panda$collections$HashSet* $tmp215 = *$tmp214;
panda$core$String* $tmp216 = *(&local0);
panda$core$Bit $tmp217 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp215, ((panda$collections$Key*) $tmp216));
panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block25; else goto block26;
block25:;
// line 94
panda$io$MemoryOutputStream** $tmp220 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp221 = *$tmp220;
panda$core$String* $tmp222 = *(&local0);
panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s224, $tmp222);
panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp223, &$s226);
panda$core$String* $tmp227 = *(&local0);
panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, $tmp227);
panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s230);
$fn232 $tmp231 = ($fn232) ((panda$io$OutputStream*) $tmp221)->$class->vtable[19];
$tmp231(((panda$io$OutputStream*) $tmp221), $tmp229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// line 95
panda$collections$HashSet** $tmp233 = &param0->imports;
panda$collections$HashSet* $tmp234 = *$tmp233;
panda$core$String* $tmp235 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp234, ((panda$collections$Key*) $tmp235));
goto block26;
block26:;
// line 97
panda$core$String* $tmp236 = *(&local0);
panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s238);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
org$pandalanguage$pandac$ClassDecl* $tmp239 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp240 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp237;
block24:;
// line 99
org$pandalanguage$pandac$ClassDecl* $tmp241 = *(&local1);
panda$core$String* $tmp242 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp241, &$s243);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp244 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local2) = $tmp242;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// line 100
panda$collections$HashSet** $tmp245 = &param0->imports;
panda$collections$HashSet* $tmp246 = *$tmp245;
panda$core$String* $tmp247 = *(&local2);
panda$core$Bit $tmp248 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp246, ((panda$collections$Key*) $tmp247));
panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block27; else goto block28;
block27:;
// line 101
panda$io$MemoryOutputStream** $tmp251 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp252 = *$tmp251;
panda$core$String* $tmp253 = *(&local2);
panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s255, $tmp253);
panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s257);
$fn259 $tmp258 = ($fn259) ((panda$io$OutputStream*) $tmp252)->$class->vtable[19];
$tmp258(((panda$io$OutputStream*) $tmp252), $tmp256);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// line 102
panda$collections$HashSet** $tmp260 = &param0->imports;
panda$collections$HashSet* $tmp261 = *$tmp260;
panda$core$String* $tmp262 = *(&local2);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp261, ((panda$collections$Key*) $tmp262));
goto block28;
block28:;
// line 104
panda$core$String* $tmp263 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$String* $tmp264 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing includePath
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp265 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp266 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp263;
block20:;
panda$core$Int64 $tmp267 = (panda$core$Int64) {1};
panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block29; else goto block30;
block29:;
// line 106
panda$core$Weak** $tmp270 = &param0->compiler;
panda$core$Weak* $tmp271 = *$tmp270;
panda$core$Object* $tmp272 = panda$core$Weak$get$R$panda$core$Weak$T($tmp271);
panda$core$Panda$unref$panda$core$Object$Q($tmp272);
org$pandalanguage$pandac$ClassDecl* $tmp273 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp272), param1);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp274 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
*(&local3) = $tmp273;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// line 107
org$pandalanguage$pandac$ClassDecl* $tmp275 = *(&local3);
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s279, $tmp278);
abort(); // unreachable
block31:;
// line 108
panda$core$Weak** $tmp280 = &param0->compiler;
panda$core$Weak* $tmp281 = *$tmp280;
panda$core$Object* $tmp282 = panda$core$Weak$get$R$panda$core$Weak$T($tmp281);
panda$core$Panda$unref$panda$core$Object$Q($tmp282);
org$pandalanguage$pandac$ClassDecl* $tmp283 = *(&local3);
panda$core$Bit $tmp284 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp282), $tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block33; else goto block34;
block33:;
// line 109
panda$collections$ImmutableArray** $tmp286 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp287 = *$tmp286;
panda$core$Int64 $tmp288 = (panda$core$Int64) {0};
panda$core$Object* $tmp289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp287, $tmp288);
panda$core$String* $tmp290 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp289));
panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s292);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
panda$core$Panda$unref$panda$core$Object$Q($tmp289);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
org$pandalanguage$pandac$ClassDecl* $tmp293 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp291;
block34:;
// line 111
panda$collections$ImmutableArray** $tmp294 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp295 = *$tmp294;
panda$core$Int64 $tmp296 = (panda$core$Int64) {0};
panda$core$Object* $tmp297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp295, $tmp296);
panda$core$String* $tmp298 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp297));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
panda$core$Panda$unref$panda$core$Object$Q($tmp297);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
org$pandalanguage$pandac$ClassDecl* $tmp299 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp298;
block30:;
panda$core$Int64 $tmp300 = (panda$core$Int64) {11};
panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block35; else goto block36;
block35:;
// line 113
panda$collections$ImmutableArray** $tmp303 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp304 = *$tmp303;
panda$core$Int64 $tmp305 = (panda$core$Int64) {0};
panda$core$Object* $tmp306 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp304, $tmp305);
panda$core$String** $tmp307 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp306))->name;
panda$core$String* $tmp308 = *$tmp307;
panda$core$Bit $tmp309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp308, &$s310);
panda$core$Panda$unref$panda$core$Object$Q($tmp306);
bool $tmp311 = $tmp309.value;
if ($tmp311) goto block37; else goto block38;
block37:;
// line 114
panda$collections$ImmutableArray** $tmp312 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp313 = *$tmp312;
panda$core$Int64 $tmp314 = (panda$core$Int64) {1};
panda$core$Object* $tmp315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp313, $tmp314);
panda$core$String* $tmp316 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp315));
panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s318);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
panda$core$Panda$unref$panda$core$Object$Q($tmp315);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
return $tmp317;
block38:;
// line 116
panda$core$Weak** $tmp319 = &param0->compiler;
panda$core$Weak* $tmp320 = *$tmp319;
panda$core$Object* $tmp321 = panda$core$Weak$get$R$panda$core$Weak$T($tmp320);
panda$core$Panda$unref$panda$core$Object$Q($tmp321);
org$pandalanguage$pandac$ClassDecl* $tmp322 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp321), param1);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp323 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
*(&local4) = $tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// line 117
org$pandalanguage$pandac$ClassDecl* $tmp324 = *(&local4);
panda$core$Bit $tmp325 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit($tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block39; else goto block40;
block39:;
// line 118
panda$core$String** $tmp327 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp328 = *$tmp327;
panda$core$String* $tmp329 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp328);
panda$core$String* $tmp330 = panda$core$String$convert$R$panda$core$String($tmp329);
panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s332);
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp333 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
*(&local5) = $tmp331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// line 119
panda$core$Weak** $tmp334 = &param0->compiler;
panda$core$Weak* $tmp335 = *$tmp334;
panda$core$Object* $tmp336 = panda$core$Weak$get$R$panda$core$Weak$T($tmp335);
panda$core$Panda$unref$panda$core$Object$Q($tmp336);
org$pandalanguage$pandac$ClassDecl* $tmp337 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp336), param1);
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp338 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
*(&local6) = $tmp337;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// line 120
org$pandalanguage$pandac$ClassDecl* $tmp339 = *(&local6);
panda$core$Bit $tmp340 = panda$core$Bit$init$builtin_bit($tmp339 != NULL);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp342 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s343, $tmp342);
abort(); // unreachable
block41:;
// line 121
panda$core$Weak** $tmp344 = &param0->compiler;
panda$core$Weak* $tmp345 = *$tmp344;
panda$core$Object* $tmp346 = panda$core$Weak$get$R$panda$core$Weak$T($tmp345);
panda$core$Panda$unref$panda$core$Object$Q($tmp346);
org$pandalanguage$pandac$ClassDecl* $tmp347 = *(&local6);
panda$core$Bit $tmp348 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp346), $tmp347);
panda$core$Bit $tmp349 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block43; else goto block44;
block43:;
// line 122
panda$collections$HashSet** $tmp351 = &param0->imports;
panda$collections$HashSet* $tmp352 = *$tmp351;
panda$core$String* $tmp353 = *(&local5);
panda$core$Bit $tmp354 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp352, ((panda$collections$Key*) $tmp353));
panda$core$Bit $tmp355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block45; else goto block46;
block45:;
// line 123
panda$io$MemoryOutputStream** $tmp357 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp358 = *$tmp357;
panda$core$String* $tmp359 = *(&local5);
panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s361, $tmp359);
panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, &$s363);
panda$core$String* $tmp364 = *(&local5);
panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, $tmp364);
panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, &$s367);
$fn369 $tmp368 = ($fn369) ((panda$io$OutputStream*) $tmp358)->$class->vtable[19];
$tmp368(((panda$io$OutputStream*) $tmp358), $tmp366);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// line 124
panda$collections$HashSet** $tmp370 = &param0->imports;
panda$collections$HashSet* $tmp371 = *$tmp370;
panda$core$String* $tmp372 = *(&local5);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp371, ((panda$collections$Key*) $tmp372));
goto block46;
block46:;
// line 126
panda$core$String* $tmp373 = *(&local5);
panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s375);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
org$pandalanguage$pandac$ClassDecl* $tmp376 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing cl
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp377 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp378 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp374;
block44:;
// line 128
org$pandalanguage$pandac$ClassDecl* $tmp379 = *(&local6);
panda$core$String* $tmp380 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp379, &$s381);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp382 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
*(&local7) = $tmp380;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// line 129
panda$collections$HashSet** $tmp383 = &param0->imports;
panda$collections$HashSet* $tmp384 = *$tmp383;
panda$core$String* $tmp385 = *(&local7);
panda$core$Bit $tmp386 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp384, ((panda$collections$Key*) $tmp385));
panda$core$Bit $tmp387 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp386);
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block47; else goto block48;
block47:;
// line 130
panda$io$MemoryOutputStream** $tmp389 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp390 = *$tmp389;
panda$core$String* $tmp391 = *(&local7);
panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s393, $tmp391);
panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s395);
$fn397 $tmp396 = ($fn397) ((panda$io$OutputStream*) $tmp390)->$class->vtable[19];
$tmp396(((panda$io$OutputStream*) $tmp390), $tmp394);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// line 131
panda$collections$HashSet** $tmp398 = &param0->imports;
panda$collections$HashSet* $tmp399 = *$tmp398;
panda$core$String* $tmp400 = *(&local7);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp399, ((panda$collections$Key*) $tmp400));
goto block48;
block48:;
// line 133
panda$core$String* $tmp401 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$core$String* $tmp402 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing includePath
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp403 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing cl
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp404 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp405 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp401;
block40:;
// line 135
panda$collections$ImmutableArray** $tmp406 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp407 = *$tmp406;
panda$core$Int64 $tmp408 = (panda$core$Int64) {0};
panda$core$Object* $tmp409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp407, $tmp408);
panda$core$String* $tmp410 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$Panda$unref$panda$core$Object$Q($tmp409);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
org$pandalanguage$pandac$ClassDecl* $tmp411 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp410;
block36:;
panda$core$Int64 $tmp412 = (panda$core$Int64) {12};
panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp412);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block49; else goto block50;
block49:;
// line 137
panda$core$Weak** $tmp415 = &param1->genericParameter;
panda$core$Weak* $tmp416 = *$tmp415;
panda$core$Object* $tmp417 = panda$core$Weak$get$R$panda$core$Weak$T($tmp416);
panda$core$Panda$unref$panda$core$Object$Q($tmp417);
org$pandalanguage$pandac$Type** $tmp418 = &((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp417)->bound;
org$pandalanguage$pandac$Type* $tmp419 = *$tmp418;
panda$core$String* $tmp420 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp419);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
return $tmp420;
block50:;
panda$core$Int64 $tmp421 = (panda$core$Int64) {14};
panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp424 = (panda$core$Int64) {15};
panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block51; else goto block53;
block51:;
// line 139
org$pandalanguage$pandac$Type* $tmp427 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp428 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp427);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
return $tmp428;
block53:;
panda$core$Int64 $tmp429 = (panda$core$Int64) {16};
panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp432 = (panda$core$Int64) {17};
panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp130, $tmp432);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block54; else goto block56;
block54:;
// line 141
org$pandalanguage$pandac$Type* $tmp435 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp436 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp435);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
return $tmp436;
block56:;
// line 143
panda$core$Bit $tmp437 = panda$core$Bit$init$builtin_bit(false);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp439 = (panda$core$Int64) {143};
panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s441, ((panda$core$Object*) param1));
panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp440, &$s443);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s444, $tmp439, $tmp442);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
abort(); // unreachable
block57:;
goto block1;
block1:;
panda$core$Bit $tmp445 = panda$core$Bit$init$builtin_bit(false);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp447 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s448, $tmp447, &$s449);
abort(); // unreachable
block59:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$String* param2) {

// line 148
panda$core$String* $tmp450 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp451 = panda$core$String$convert$R$panda$core$String($tmp450);
panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s453);
panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, param2);
panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s456);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
return $tmp455;

}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 153
panda$core$Weak* $tmp457 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp457, ((panda$core$Object*) param1));
panda$core$Weak** $tmp458 = &param0->compiler;
panda$core$Weak* $tmp459 = *$tmp458;
bool $tmp460 = $tmp459 != ((panda$core$Weak*) NULL);
if ($tmp460) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp461 = panda$core$Weak$get$R$panda$core$Weak$T($tmp459);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp461)));
panda$core$Panda$unref$panda$core$Object$Q($tmp461);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$core$Weak** $tmp462 = &param0->compiler;
*$tmp462 = $tmp457;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// line 154
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp463 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp464 = *$tmp463;
org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler($tmp464, param1);
return;

}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 158
panda$io$File** $tmp465 = &param0->outDir;
panda$io$File* $tmp466 = *$tmp465;
panda$core$String* $tmp467 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, param1, param2);
panda$io$File* $tmp468 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp466, $tmp467);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
return $tmp468;

}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
panda$io$File* local1 = NULL;
org$pandalanguage$pandac$FieldDecl* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
panda$collections$ListView* local4 = NULL;
// line 163
panda$io$MemoryOutputStream** $tmp469 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp470 = *$tmp469;
panda$io$MemoryOutputStream$clear($tmp470);
// line 164
panda$io$MemoryOutputStream** $tmp471 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp472 = *$tmp471;
panda$io$MemoryOutputStream$clear($tmp472);
// line 165
panda$io$MemoryOutputStream** $tmp473 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp474 = *$tmp473;
panda$io$MemoryOutputStream$clear($tmp474);
// line 166
panda$io$MemoryOutputStream** $tmp475 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp476 = *$tmp475;
panda$io$MemoryOutputStream$clear($tmp476);
// line 167
panda$collections$HashSet** $tmp477 = &param0->typeImports;
panda$collections$HashSet* $tmp478 = *$tmp477;
panda$collections$HashSet$clear($tmp478);
// line 168
panda$collections$HashSet** $tmp479 = &param0->bodyImports;
panda$collections$HashSet* $tmp480 = *$tmp479;
panda$collections$HashSet$clear($tmp480);
// line 169
panda$io$File* $tmp481 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s482);
*(&local0) = ((panda$io$File*) NULL);
panda$io$File* $tmp483 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
*(&local0) = $tmp481;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// line 170
panda$io$File* $tmp484 = *(&local0);
panda$io$File* $tmp485 = panda$io$File$parent$R$panda$io$File$Q($tmp484);
panda$io$File$createDirectories($tmp485);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// line 171
panda$io$IndentedOutputStream* $tmp486 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp487 = *(&local0);
panda$io$OutputStream* $tmp488 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp487);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp486, $tmp488);
panda$io$IndentedOutputStream** $tmp489 = &param0->out;
panda$io$IndentedOutputStream* $tmp490 = *$tmp489;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
panda$io$IndentedOutputStream** $tmp491 = &param0->out;
*$tmp491 = $tmp486;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
// line 172
panda$io$File* $tmp492 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s493);
*(&local1) = ((panda$io$File*) NULL);
panda$io$File* $tmp494 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
*(&local1) = $tmp492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
// line 173
panda$io$IndentedOutputStream* $tmp495 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp496 = *(&local1);
panda$io$OutputStream* $tmp497 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp496);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp495, $tmp497);
panda$io$IndentedOutputStream** $tmp498 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp499 = *$tmp498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
panda$io$IndentedOutputStream** $tmp500 = &param0->typesOut;
*$tmp500 = $tmp495;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// line 174
panda$io$IndentedOutputStream** $tmp501 = &param0->out;
panda$io$IndentedOutputStream* $tmp502 = *$tmp501;
$fn504 $tmp503 = ($fn504) ((panda$io$OutputStream*) $tmp502)->$class->vtable[19];
$tmp503(((panda$io$OutputStream*) $tmp502), &$s505);
// line 175
panda$io$IndentedOutputStream** $tmp506 = &param0->out;
panda$io$IndentedOutputStream* $tmp507 = *$tmp506;
$fn509 $tmp508 = ($fn509) ((panda$io$OutputStream*) $tmp507)->$class->vtable[19];
$tmp508(((panda$io$OutputStream*) $tmp507), &$s510);
// line 176
panda$io$IndentedOutputStream** $tmp511 = &param0->out;
panda$io$IndentedOutputStream* $tmp512 = *$tmp511;
panda$io$File* $tmp513 = *(&local1);
panda$core$String* $tmp514 = panda$io$File$name$R$panda$core$String($tmp513);
panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s516, $tmp514);
panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s518);
$fn520 $tmp519 = ($fn520) ((panda$io$OutputStream*) $tmp512)->$class->vtable[19];
$tmp519(((panda$io$OutputStream*) $tmp512), $tmp517);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// line 177
panda$io$IndentedOutputStream** $tmp521 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp522 = *$tmp521;
$fn524 $tmp523 = ($fn524) ((panda$io$OutputStream*) $tmp522)->$class->vtable[19];
$tmp523(((panda$io$OutputStream*) $tmp522), &$s525);
// line 178
panda$io$IndentedOutputStream** $tmp526 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp527 = *$tmp526;
$fn529 $tmp528 = ($fn529) ((panda$io$OutputStream*) $tmp527)->$class->vtable[19];
$tmp528(((panda$io$OutputStream*) $tmp527), &$s530);
// line 179
panda$io$MemoryOutputStream** $tmp531 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp532 = *$tmp531;
panda$io$MemoryOutputStream** $tmp533 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp534 = *$tmp533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
panda$io$MemoryOutputStream** $tmp535 = &param0->importStream;
*$tmp535 = $tmp532;
// line 180
panda$collections$HashSet** $tmp536 = &param0->typeImports;
panda$collections$HashSet* $tmp537 = *$tmp536;
panda$collections$HashSet** $tmp538 = &param0->imports;
panda$collections$HashSet* $tmp539 = *$tmp538;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$collections$HashSet** $tmp540 = &param0->imports;
*$tmp540 = $tmp537;
// line 181
panda$io$IndentedOutputStream** $tmp541 = &param0->types;
panda$io$IndentedOutputStream* $tmp542 = *$tmp541;
panda$core$String** $tmp543 = &param1->name;
panda$core$String* $tmp544 = *$tmp543;
panda$core$String* $tmp545 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp544);
panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s547, $tmp545);
panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s549);
$fn551 $tmp550 = ($fn551) ((panda$io$OutputStream*) $tmp542)->$class->vtable[19];
$tmp550(((panda$io$OutputStream*) $tmp542), $tmp548);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// line 182
panda$io$IndentedOutputStream** $tmp552 = &param0->types;
panda$io$IndentedOutputStream* $tmp553 = *$tmp552;
panda$core$Int64* $tmp554 = &$tmp553->level;
panda$core$Int64 $tmp555 = *$tmp554;
panda$core$Int64 $tmp556 = (panda$core$Int64) {1};
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 + $tmp558;
panda$core$Int64 $tmp560 = (panda$core$Int64) {$tmp559};
panda$core$Int64* $tmp561 = &$tmp553->level;
*$tmp561 = $tmp560;
// line 183
panda$core$Weak** $tmp562 = &param0->compiler;
panda$core$Weak* $tmp563 = *$tmp562;
panda$core$Object* $tmp564 = panda$core$Weak$get$R$panda$core$Weak$T($tmp563);
panda$core$Panda$unref$panda$core$Object$Q($tmp564);
panda$collections$ListView* $tmp565 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp564), param1);
ITable* $tmp566 = ((panda$collections$Iterable*) $tmp565)->$class->itable;
while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[0];
panda$collections$Iterator* $tmp569 = $tmp567(((panda$collections$Iterable*) $tmp565));
goto block1;
block1:;
ITable* $tmp570 = $tmp569->$class->itable;
while ($tmp570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp570 = $tmp570->next;
}
$fn572 $tmp571 = $tmp570->methods[0];
panda$core$Bit $tmp573 = $tmp571($tmp569);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp575 = $tmp569->$class->itable;
while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp575 = $tmp575->next;
}
$fn577 $tmp576 = $tmp575->methods[1];
panda$core$Object* $tmp578 = $tmp576($tmp569);
org$pandalanguage$pandac$FieldDecl* $tmp579 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp578)));
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) $tmp578);
// line 184
panda$core$Weak** $tmp580 = &param0->compiler;
panda$core$Weak* $tmp581 = *$tmp580;
panda$core$Object* $tmp582 = panda$core$Weak$get$R$panda$core$Weak$T($tmp581);
panda$core$Panda$unref$panda$core$Object$Q($tmp582);
org$pandalanguage$pandac$FieldDecl* $tmp583 = *(&local2);
panda$core$Bit $tmp584 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp582), $tmp583);
// line 185
org$pandalanguage$pandac$FieldDecl* $tmp585 = *(&local2);
org$pandalanguage$pandac$Type** $tmp586 = &$tmp585->type;
org$pandalanguage$pandac$Type* $tmp587 = *$tmp586;
org$pandalanguage$pandac$Type* $tmp588 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp589 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp587, $tmp588);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block4; else goto block6;
block4:;
// line 186
panda$io$IndentedOutputStream** $tmp591 = &param0->types;
panda$io$IndentedOutputStream* $tmp592 = *$tmp591;
org$pandalanguage$pandac$FieldDecl* $tmp593 = *(&local2);
panda$core$String** $tmp594 = &((org$pandalanguage$pandac$Symbol*) $tmp593)->name;
panda$core$String* $tmp595 = *$tmp594;
panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s597, $tmp595);
panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s599);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp600 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp601 = *$tmp600;
panda$core$Int64 $tmp602 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp601, param1);
panda$core$Int64$wrapper* $tmp603;
$tmp603 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp603->value = $tmp602;
panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp598, ((panda$core$Object*) $tmp603));
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s606);
$fn608 $tmp607 = ($fn608) ((panda$io$OutputStream*) $tmp592)->$class->vtable[19];
$tmp607(((panda$io$OutputStream*) $tmp592), $tmp605);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
goto block5;
block6:;
// line 1
// line 189
panda$io$IndentedOutputStream** $tmp609 = &param0->types;
panda$io$IndentedOutputStream* $tmp610 = *$tmp609;
org$pandalanguage$pandac$FieldDecl* $tmp611 = *(&local2);
org$pandalanguage$pandac$Type** $tmp612 = &$tmp611->type;
org$pandalanguage$pandac$Type* $tmp613 = *$tmp612;
panda$core$String* $tmp614 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp613);
panda$core$String* $tmp615 = panda$core$String$convert$R$panda$core$String($tmp614);
panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s617);
org$pandalanguage$pandac$FieldDecl* $tmp618 = *(&local2);
panda$core$String** $tmp619 = &((org$pandalanguage$pandac$Symbol*) $tmp618)->name;
panda$core$String* $tmp620 = *$tmp619;
panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, $tmp620);
panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s623);
$fn625 $tmp624 = ($fn625) ((panda$io$OutputStream*) $tmp610)->$class->vtable[19];
$tmp624(((panda$io$OutputStream*) $tmp610), $tmp622);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp578);
org$pandalanguage$pandac$FieldDecl* $tmp626 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
// unreffing f
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// line 192
panda$core$String** $tmp627 = &param1->name;
panda$core$String* $tmp628 = *$tmp627;
panda$core$Bit $tmp629 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp628, &$s630);
bool $tmp631 = $tmp629.value;
if ($tmp631) goto block7; else goto block8;
block7:;
// line 193
panda$io$IndentedOutputStream** $tmp632 = &param0->types;
panda$io$IndentedOutputStream* $tmp633 = *$tmp632;
$fn635 $tmp634 = ($fn635) ((panda$io$OutputStream*) $tmp633)->$class->vtable[19];
$tmp634(((panda$io$OutputStream*) $tmp633), &$s636);
// line 194
panda$io$IndentedOutputStream** $tmp637 = &param0->types;
panda$io$IndentedOutputStream* $tmp638 = *$tmp637;
$fn640 $tmp639 = ($fn640) ((panda$io$OutputStream*) $tmp638)->$class->vtable[19];
$tmp639(((panda$io$OutputStream*) $tmp638), &$s641);
goto block8;
block8:;
// line 196
panda$io$IndentedOutputStream** $tmp642 = &param0->types;
panda$io$IndentedOutputStream* $tmp643 = *$tmp642;
panda$core$Int64* $tmp644 = &$tmp643->level;
panda$core$Int64 $tmp645 = *$tmp644;
panda$core$Int64 $tmp646 = (panda$core$Int64) {1};
int64_t $tmp647 = $tmp645.value;
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = $tmp647 - $tmp648;
panda$core$Int64 $tmp650 = (panda$core$Int64) {$tmp649};
panda$core$Int64* $tmp651 = &$tmp643->level;
*$tmp651 = $tmp650;
// line 197
panda$io$IndentedOutputStream** $tmp652 = &param0->types;
panda$io$IndentedOutputStream* $tmp653 = *$tmp652;
panda$core$String** $tmp654 = &param1->name;
panda$core$String* $tmp655 = *$tmp654;
panda$core$String* $tmp656 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp655);
panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s658, $tmp656);
panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s660);
$fn662 $tmp661 = ($fn662) ((panda$io$OutputStream*) $tmp653)->$class->vtable[19];
$tmp661(((panda$io$OutputStream*) $tmp653), $tmp659);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// line 198
panda$io$IndentedOutputStream** $tmp663 = &param0->types;
panda$io$IndentedOutputStream* $tmp664 = *$tmp663;
$fn666 $tmp665 = ($fn666) ((panda$io$OutputStream*) $tmp664)->$class->vtable[19];
$tmp665(((panda$io$OutputStream*) $tmp664), &$s667);
// line 199
panda$io$IndentedOutputStream** $tmp668 = &param0->types;
panda$io$IndentedOutputStream* $tmp669 = *$tmp668;
org$pandalanguage$pandac$Type* $tmp670 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp671 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp670);
panda$core$String* $tmp672 = panda$core$String$convert$R$panda$core$String($tmp671);
panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp672, &$s674);
org$pandalanguage$pandac$Type* $tmp675 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp676 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp675);
panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, $tmp676);
panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s679);
panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s681, $tmp678);
panda$core$Weak** $tmp682 = &param0->compiler;
panda$core$Weak* $tmp683 = *$tmp682;
panda$core$Object* $tmp684 = panda$core$Weak$get$R$panda$core$Weak$T($tmp683);
panda$core$Panda$unref$panda$core$Object$Q($tmp684);
panda$collections$ListView* $tmp685 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp684), param1);
ITable* $tmp686 = ((panda$collections$CollectionView*) $tmp685)->$class->itable;
while ($tmp686->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp686 = $tmp686->next;
}
$fn688 $tmp687 = $tmp686->methods[0];
panda$core$Int64 $tmp689 = $tmp687(((panda$collections$CollectionView*) $tmp685));
panda$core$Int64$wrapper* $tmp690;
$tmp690 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp690->value = $tmp689;
panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s692, ((panda$core$Object*) $tmp690));
panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s694);
panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, $tmp693);
panda$core$String** $tmp696 = &param1->name;
panda$core$String* $tmp697 = *$tmp696;
panda$core$String* $tmp698 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp697);
panda$core$String* $tmp699 = panda$core$String$convert$R$panda$core$String($tmp698);
panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, &$s701);
panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, $tmp700);
$fn704 $tmp703 = ($fn704) ((panda$io$OutputStream*) $tmp669)->$class->vtable[19];
$tmp703(((panda$io$OutputStream*) $tmp669), $tmp702);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// line 203
panda$io$IndentedOutputStream** $tmp705 = &param0->types;
panda$io$IndentedOutputStream* $tmp706 = *$tmp705;
panda$core$String** $tmp707 = &param1->name;
panda$core$String* $tmp708 = *$tmp707;
panda$core$String* $tmp709 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp708);
panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s711, $tmp709);
panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp710, &$s713);
panda$core$String** $tmp714 = &param1->name;
panda$core$String* $tmp715 = *$tmp714;
panda$core$String* $tmp716 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp715);
panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, $tmp716);
panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp717, &$s719);
$fn721 $tmp720 = ($fn721) ((panda$io$OutputStream*) $tmp706)->$class->vtable[19];
$tmp720(((panda$io$OutputStream*) $tmp706), $tmp718);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// line 204
panda$core$Weak** $tmp722 = &param0->compiler;
panda$core$Weak* $tmp723 = *$tmp722;
panda$core$Object* $tmp724 = panda$core$Weak$get$R$panda$core$Weak$T($tmp723);
panda$core$Panda$unref$panda$core$Object$Q($tmp724);
panda$core$Bit $tmp725 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp724), param1);
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block9; else goto block10;
block9:;
// line 205
panda$io$IndentedOutputStream** $tmp727 = &param0->types;
panda$io$IndentedOutputStream* $tmp728 = *$tmp727;
panda$core$String** $tmp729 = &param1->name;
panda$core$String* $tmp730 = *$tmp729;
panda$core$String* $tmp731 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp730);
panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s733, $tmp731);
panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, &$s735);
$fn737 $tmp736 = ($fn737) ((panda$io$OutputStream*) $tmp728)->$class->vtable[19];
$tmp736(((panda$io$OutputStream*) $tmp728), $tmp734);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// line 206
panda$io$IndentedOutputStream** $tmp738 = &param0->types;
panda$io$IndentedOutputStream* $tmp739 = *$tmp738;
panda$core$Int64* $tmp740 = &$tmp739->level;
panda$core$Int64 $tmp741 = *$tmp740;
panda$core$Int64 $tmp742 = (panda$core$Int64) {1};
int64_t $tmp743 = $tmp741.value;
int64_t $tmp744 = $tmp742.value;
int64_t $tmp745 = $tmp743 + $tmp744;
panda$core$Int64 $tmp746 = (panda$core$Int64) {$tmp745};
panda$core$Int64* $tmp747 = &$tmp739->level;
*$tmp747 = $tmp746;
// line 207
panda$io$IndentedOutputStream** $tmp748 = &param0->types;
panda$io$IndentedOutputStream* $tmp749 = *$tmp748;
$fn751 $tmp750 = ($fn751) ((panda$io$OutputStream*) $tmp749)->$class->vtable[19];
$tmp750(((panda$io$OutputStream*) $tmp749), &$s752);
// line 208
panda$io$IndentedOutputStream** $tmp753 = &param0->types;
panda$io$IndentedOutputStream* $tmp754 = *$tmp753;
$fn756 $tmp755 = ($fn756) ((panda$io$OutputStream*) $tmp754)->$class->vtable[19];
$tmp755(((panda$io$OutputStream*) $tmp754), &$s757);
// line 209
panda$io$IndentedOutputStream** $tmp758 = &param0->types;
panda$io$IndentedOutputStream* $tmp759 = *$tmp758;
org$pandalanguage$pandac$Type** $tmp760 = &param1->type;
org$pandalanguage$pandac$Type* $tmp761 = *$tmp760;
panda$core$String* $tmp762 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp761);
panda$core$String* $tmp763 = panda$core$String$convert$R$panda$core$String($tmp762);
panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s765);
$fn767 $tmp766 = ($fn767) ((panda$io$OutputStream*) $tmp759)->$class->vtable[19];
$tmp766(((panda$io$OutputStream*) $tmp759), $tmp764);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// line 210
panda$io$IndentedOutputStream** $tmp768 = &param0->types;
panda$io$IndentedOutputStream* $tmp769 = *$tmp768;
panda$core$Int64* $tmp770 = &$tmp769->level;
panda$core$Int64 $tmp771 = *$tmp770;
panda$core$Int64 $tmp772 = (panda$core$Int64) {1};
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 - $tmp774;
panda$core$Int64 $tmp776 = (panda$core$Int64) {$tmp775};
panda$core$Int64* $tmp777 = &$tmp769->level;
*$tmp777 = $tmp776;
// line 211
panda$io$IndentedOutputStream** $tmp778 = &param0->types;
panda$io$IndentedOutputStream* $tmp779 = *$tmp778;
panda$core$String** $tmp780 = &param1->name;
panda$core$String* $tmp781 = *$tmp780;
panda$core$String* $tmp782 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp781);
panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s784, $tmp782);
panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s786);
$fn788 $tmp787 = ($fn788) ((panda$io$OutputStream*) $tmp779)->$class->vtable[19];
$tmp787(((panda$io$OutputStream*) $tmp779), $tmp785);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// line 212
panda$io$IndentedOutputStream** $tmp789 = &param0->types;
panda$io$IndentedOutputStream* $tmp790 = *$tmp789;
panda$core$String** $tmp791 = &param1->name;
panda$core$String* $tmp792 = *$tmp791;
panda$core$String* $tmp793 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp792);
panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s795, $tmp793);
panda$core$String* $tmp796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp794, &$s797);
$fn799 $tmp798 = ($fn799) ((panda$io$OutputStream*) $tmp790)->$class->vtable[19];
$tmp798(((panda$io$OutputStream*) $tmp790), $tmp796);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// line 213
panda$io$IndentedOutputStream** $tmp800 = &param0->types;
panda$io$IndentedOutputStream* $tmp801 = *$tmp800;
panda$core$Int64* $tmp802 = &$tmp801->level;
panda$core$Int64 $tmp803 = *$tmp802;
panda$core$Int64 $tmp804 = (panda$core$Int64) {1};
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804.value;
int64_t $tmp807 = $tmp805 + $tmp806;
panda$core$Int64 $tmp808 = (panda$core$Int64) {$tmp807};
panda$core$Int64* $tmp809 = &$tmp801->level;
*$tmp809 = $tmp808;
// line 214
panda$io$IndentedOutputStream** $tmp810 = &param0->types;
panda$io$IndentedOutputStream* $tmp811 = *$tmp810;
panda$core$String** $tmp812 = &param1->name;
panda$core$String* $tmp813 = *$tmp812;
panda$core$String* $tmp814 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp813);
panda$core$String* $tmp815 = panda$core$String$convert$R$panda$core$String($tmp814);
panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp815, &$s817);
$fn819 $tmp818 = ($fn819) ((panda$io$OutputStream*) $tmp811)->$class->vtable[19];
$tmp818(((panda$io$OutputStream*) $tmp811), $tmp816);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// line 215
panda$io$IndentedOutputStream** $tmp820 = &param0->types;
panda$io$IndentedOutputStream* $tmp821 = *$tmp820;
$fn823 $tmp822 = ($fn823) ((panda$io$OutputStream*) $tmp821)->$class->vtable[19];
$tmp822(((panda$io$OutputStream*) $tmp821), &$s824);
// line 216
panda$io$IndentedOutputStream** $tmp825 = &param0->types;
panda$io$IndentedOutputStream* $tmp826 = *$tmp825;
panda$core$Int64* $tmp827 = &$tmp826->level;
panda$core$Int64 $tmp828 = *$tmp827;
panda$core$Int64 $tmp829 = (panda$core$Int64) {1};
int64_t $tmp830 = $tmp828.value;
int64_t $tmp831 = $tmp829.value;
int64_t $tmp832 = $tmp830 - $tmp831;
panda$core$Int64 $tmp833 = (panda$core$Int64) {$tmp832};
panda$core$Int64* $tmp834 = &$tmp826->level;
*$tmp834 = $tmp833;
// line 217
panda$io$IndentedOutputStream** $tmp835 = &param0->types;
panda$io$IndentedOutputStream* $tmp836 = *$tmp835;
panda$core$String** $tmp837 = &param1->name;
panda$core$String* $tmp838 = *$tmp837;
panda$core$String* $tmp839 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp838);
panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s841, $tmp839);
panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp840, &$s843);
$fn845 $tmp844 = ($fn845) ((panda$io$OutputStream*) $tmp836)->$class->vtable[19];
$tmp844(((panda$io$OutputStream*) $tmp836), $tmp842);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// line 218
panda$core$Weak** $tmp846 = &param0->compiler;
panda$core$Weak* $tmp847 = *$tmp846;
panda$core$Object* $tmp848 = panda$core$Weak$get$R$panda$core$Weak$T($tmp847);
panda$core$Panda$unref$panda$core$Object$Q($tmp848);
org$pandalanguage$pandac$Type* $tmp849 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp848), $tmp849);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp851 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
*(&local3) = $tmp850;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// line 219
panda$core$Weak** $tmp852 = &param0->compiler;
panda$core$Weak* $tmp853 = *$tmp852;
panda$core$Object* $tmp854 = panda$core$Weak$get$R$panda$core$Weak$T($tmp853);
panda$core$Panda$unref$panda$core$Object$Q($tmp854);
org$pandalanguage$pandac$ClassDecl* $tmp855 = *(&local3);
panda$collections$ListView* $tmp856 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp854), $tmp855);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp857 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
*(&local4) = $tmp856;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// line 220
panda$io$IndentedOutputStream** $tmp858 = &param0->types;
panda$io$IndentedOutputStream* $tmp859 = *$tmp858;
panda$collections$ListView* $tmp860 = *(&local4);
ITable* $tmp861 = ((panda$collections$CollectionView*) $tmp860)->$class->itable;
while ($tmp861->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp861 = $tmp861->next;
}
$fn863 $tmp862 = $tmp861->methods[0];
panda$core$Int64 $tmp864 = $tmp862(((panda$collections$CollectionView*) $tmp860));
panda$core$Int64$wrapper* $tmp865;
$tmp865 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp865->value = $tmp864;
panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s867, ((panda$core$Object*) $tmp865));
panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s869);
panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s871, $tmp868);
panda$core$String** $tmp872 = &param1->name;
panda$core$String* $tmp873 = *$tmp872;
panda$core$String* $tmp874 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp873);
panda$core$String* $tmp875 = panda$core$String$convert$R$panda$core$String($tmp874);
panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s877);
panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, $tmp876);
$fn880 $tmp879 = ($fn880) ((panda$io$OutputStream*) $tmp859)->$class->vtable[19];
$tmp879(((panda$io$OutputStream*) $tmp859), $tmp878);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
// line 224
panda$io$IndentedOutputStream** $tmp881 = &param0->types;
panda$io$IndentedOutputStream* $tmp882 = *$tmp881;
panda$core$String** $tmp883 = &param1->name;
panda$core$String* $tmp884 = *$tmp883;
panda$core$String* $tmp885 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp884);
panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s887, $tmp885);
panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp886, &$s889);
panda$core$String** $tmp890 = &param1->name;
panda$core$String* $tmp891 = *$tmp890;
panda$core$String* $tmp892 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp891);
panda$core$String* $tmp893 = panda$core$String$convert$R$panda$core$String($tmp892);
panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s895);
panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, $tmp894);
$fn898 $tmp897 = ($fn898) ((panda$io$OutputStream*) $tmp882)->$class->vtable[19];
$tmp897(((panda$io$OutputStream*) $tmp882), $tmp896);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
panda$collections$ListView* $tmp899 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp900 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block10;
block10:;
panda$io$File* $tmp901 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing typesPath
*(&local1) = ((panda$io$File*) NULL);
panda$io$File* $tmp902 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 230
panda$core$Weak** $tmp903 = &param1->owner;
panda$core$Weak* $tmp904 = *$tmp903;
panda$core$Object* $tmp905 = panda$core$Weak$get$R$panda$core$Weak$T($tmp904);
panda$core$Panda$unref$panda$core$Object$Q($tmp905);
org$pandalanguage$pandac$Type** $tmp906 = &((org$pandalanguage$pandac$ClassDecl*) $tmp905)->type;
org$pandalanguage$pandac$Type* $tmp907 = *$tmp906;
panda$core$String* $tmp908 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp907);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp909 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
*(&local0) = $tmp908;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
// line 231
org$pandalanguage$pandac$MethodDecl$Kind* $tmp910 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp911 = *$tmp910;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp912;
$tmp912 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp912->value = $tmp911;
panda$core$Int64 $tmp913 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp914 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp913);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp915;
$tmp915 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp915->value = $tmp914;
ITable* $tmp916 = ((panda$core$Equatable*) $tmp912)->$class->itable;
while ($tmp916->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp916 = $tmp916->next;
}
$fn918 $tmp917 = $tmp916->methods[0];
panda$core$Bit $tmp919 = $tmp917(((panda$core$Equatable*) $tmp912), ((panda$core$Equatable*) $tmp915));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp912)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp915)));
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block1; else goto block2;
block1:;
panda$core$String* $tmp921 = *(&local0);
panda$core$Bit $tmp922 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp921, &$s923);
panda$core$Bit $tmp924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp922);
*(&local1) = $tmp924;
goto block3;
block2:;
*(&local1) = $tmp919;
goto block3;
block3:;
panda$core$Bit $tmp925 = *(&local1);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block4; else goto block5;
block4:;
// line 232
panda$core$String* $tmp927 = *(&local0);
panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s929);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
panda$core$String* $tmp930 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp928;
block5:;
// line 234
panda$core$String* $tmp931 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$String* $tmp932 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp931;

}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
// line 254
org$pandalanguage$pandac$Type** $tmp933 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp934 = *$tmp933;
panda$core$Bit $tmp935 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp934);
panda$core$Bit $tmp936 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp935);
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block1; else goto block2;
block1:;
// line 255
panda$core$Bit $tmp938 = panda$core$Bit$init$builtin_bit(false);
return $tmp938;
block2:;
// line 257
org$pandalanguage$pandac$Annotations** $tmp939 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp940 = *$tmp939;
panda$core$Bit $tmp941 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit($tmp940);
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$Type** $tmp943 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp944 = *$tmp943;
panda$core$Bit $tmp945 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp944);
*(&local1) = $tmp945;
goto block5;
block4:;
*(&local1) = $tmp941;
goto block5;
block5:;
panda$core$Bit $tmp946 = *(&local1);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block6; else goto block7;
block6:;
panda$core$Weak** $tmp948 = &param0->compiler;
panda$core$Weak* $tmp949 = *$tmp948;
panda$core$Object* $tmp950 = panda$core$Weak$get$R$panda$core$Weak$T($tmp949);
panda$core$Panda$unref$panda$core$Object$Q($tmp950);
panda$core$Weak** $tmp951 = &param0->compiler;
panda$core$Weak* $tmp952 = *$tmp951;
panda$core$Object* $tmp953 = panda$core$Weak$get$R$panda$core$Weak$T($tmp952);
panda$core$Panda$unref$panda$core$Object$Q($tmp953);
org$pandalanguage$pandac$Type** $tmp954 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp955 = *$tmp954;
org$pandalanguage$pandac$ClassDecl* $tmp956 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp953), $tmp955);
panda$core$Bit $tmp957 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp950), $tmp956);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
*(&local0) = $tmp957;
goto block8;
block7:;
*(&local0) = $tmp946;
goto block8;
block8:;
panda$core$Bit $tmp958 = *(&local0);
*(&local2) = $tmp958;
// line 263
panda$core$Bit $tmp959 = *(&local2);
panda$core$Bit $tmp960 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp959);
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block9; else goto block10;
block9:;
*(&local3) = $tmp960;
goto block11;
block10:;
org$pandalanguage$pandac$Annotations** $tmp962 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp963 = *$tmp962;
panda$core$Bit $tmp964 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit($tmp963);
panda$core$Bit $tmp965 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp964);
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Annotations** $tmp967 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp968 = *$tmp967;
panda$core$Bit $tmp969 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp968);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block15; else goto block16;
block15:;
*(&local5) = $tmp969;
goto block17;
block16:;
org$pandalanguage$pandac$Annotations** $tmp971 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp972 = *$tmp971;
panda$core$Bit $tmp973 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp972);
*(&local5) = $tmp973;
goto block17;
block17:;
panda$core$Bit $tmp974 = *(&local5);
*(&local4) = $tmp974;
goto block14;
block13:;
*(&local4) = $tmp965;
goto block14;
block14:;
panda$core$Bit $tmp975 = *(&local4);
*(&local3) = $tmp975;
goto block11;
block11:;
panda$core$Bit $tmp976 = *(&local3);
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp978 = (panda$core$Int64) {263};
panda$core$String* $tmp979 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param1);
panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s981, $tmp979);
panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, &$s983);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s984, $tmp978, $tmp982);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
abort(); // unreachable
block18:;
// line 265
panda$core$Bit $tmp985 = *(&local2);
return $tmp985;

}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
panda$core$String* local3 = NULL;
// line 270
panda$io$MemoryOutputStream** $tmp986 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp987 = *$tmp986;
panda$io$MemoryOutputStream** $tmp988 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp989 = *$tmp988;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
panda$io$MemoryOutputStream** $tmp990 = &param0->importStream;
*$tmp990 = $tmp987;
// line 271
panda$collections$HashSet** $tmp991 = &param0->bodyImports;
panda$collections$HashSet* $tmp992 = *$tmp991;
panda$collections$HashSet** $tmp993 = &param0->imports;
panda$collections$HashSet* $tmp994 = *$tmp993;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
panda$collections$HashSet** $tmp995 = &param0->imports;
*$tmp995 = $tmp992;
// line 272
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp996 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s997));
*(&local0) = &$s998;
// line 273
panda$core$Bit $tmp999 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param1);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block1; else goto block3;
block1:;
// line 274
panda$io$IndentedOutputStream** $tmp1001 = &param0->body;
panda$io$IndentedOutputStream* $tmp1002 = *$tmp1001;
panda$core$String* $tmp1003 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1005, $tmp1003);
panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, &$s1007);
org$pandalanguage$pandac$Type** $tmp1008 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1009 = *$tmp1008;
panda$core$String* $tmp1010 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1009);
panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, $tmp1010);
panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1011, &$s1013);
$fn1015 $tmp1014 = ($fn1015) ((panda$io$OutputStream*) $tmp1002)->$class->vtable[17];
$tmp1014(((panda$io$OutputStream*) $tmp1002), $tmp1012);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
// line 275
panda$core$String* $tmp1016 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1017));
*(&local0) = &$s1018;
goto block2;
block3:;
// line 1
// line 278
panda$io$IndentedOutputStream** $tmp1019 = &param0->body;
panda$io$IndentedOutputStream* $tmp1020 = *$tmp1019;
org$pandalanguage$pandac$Type** $tmp1021 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1022 = *$tmp1021;
panda$core$String* $tmp1023 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1022);
panda$core$String* $tmp1024 = panda$core$String$convert$R$panda$core$String($tmp1023);
panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1026);
panda$core$String* $tmp1027 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, $tmp1027);
panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, &$s1030);
$fn1032 $tmp1031 = ($fn1032) ((panda$io$OutputStream*) $tmp1020)->$class->vtable[17];
$tmp1031(((panda$io$OutputStream*) $tmp1020), $tmp1029);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
goto block2;
block2:;
// line 280
org$pandalanguage$pandac$Annotations** $tmp1033 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1034 = *$tmp1033;
panda$core$Bit $tmp1035 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1034);
panda$core$Bit $tmp1036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1035);
bool $tmp1037 = $tmp1036.value;
if ($tmp1037) goto block4; else goto block5;
block4:;
panda$core$Weak** $tmp1038 = &param0->compiler;
panda$core$Weak* $tmp1039 = *$tmp1038;
panda$core$Object* $tmp1040 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1039);
panda$core$Panda$unref$panda$core$Object$Q($tmp1040);
panda$core$Bit $tmp1041 = org$pandalanguage$pandac$Compiler$isValueInit$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1040), param1);
panda$core$Bit $tmp1042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1041);
*(&local1) = $tmp1042;
goto block6;
block5:;
*(&local1) = $tmp1036;
goto block6;
block6:;
panda$core$Bit $tmp1043 = *(&local1);
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block7; else goto block8;
block7:;
// line 281
panda$io$IndentedOutputStream** $tmp1045 = &param0->body;
panda$io$IndentedOutputStream* $tmp1046 = *$tmp1045;
panda$core$String* $tmp1047 = *(&local0);
panda$core$String* $tmp1048 = panda$core$String$convert$R$panda$core$String($tmp1047);
panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1050);
panda$core$String* $tmp1051 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, $tmp1051);
panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, &$s1054);
$fn1056 $tmp1055 = ($fn1056) ((panda$io$OutputStream*) $tmp1046)->$class->vtable[17];
$tmp1055(((panda$io$OutputStream*) $tmp1046), $tmp1053);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// line 282
panda$core$String* $tmp1057 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1058));
*(&local0) = &$s1059;
goto block8;
block8:;
// line 284
panda$collections$Array** $tmp1060 = &param1->parameters;
panda$collections$Array* $tmp1061 = *$tmp1060;
ITable* $tmp1062 = ((panda$collections$Iterable*) $tmp1061)->$class->itable;
while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1062 = $tmp1062->next;
}
$fn1064 $tmp1063 = $tmp1062->methods[0];
panda$collections$Iterator* $tmp1065 = $tmp1063(((panda$collections$Iterable*) $tmp1061));
goto block9;
block9:;
ITable* $tmp1066 = $tmp1065->$class->itable;
while ($tmp1066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1066 = $tmp1066->next;
}
$fn1068 $tmp1067 = $tmp1066->methods[0];
panda$core$Bit $tmp1069 = $tmp1067($tmp1065);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block11; else goto block10;
block10:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp1071 = $tmp1065->$class->itable;
while ($tmp1071->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1071 = $tmp1071->next;
}
$fn1073 $tmp1072 = $tmp1071->methods[1];
panda$core$Object* $tmp1074 = $tmp1072($tmp1065);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1075 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1074)));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1074);
// line 285
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1076 = *(&local2);
panda$core$String** $tmp1077 = &$tmp1076->name;
panda$core$String* $tmp1078 = *$tmp1077;
panda$core$String* $tmp1079 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1078);
panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1081, $tmp1079);
panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, &$s1083);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1084 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
*(&local3) = $tmp1082;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// line 286
panda$io$IndentedOutputStream** $tmp1085 = &param0->body;
panda$io$IndentedOutputStream* $tmp1086 = *$tmp1085;
panda$core$String* $tmp1087 = *(&local0);
panda$core$String* $tmp1088 = panda$core$String$convert$R$panda$core$String($tmp1087);
panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1090);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1091 = *(&local2);
org$pandalanguage$pandac$Type** $tmp1092 = &$tmp1091->type;
org$pandalanguage$pandac$Type* $tmp1093 = *$tmp1092;
panda$core$String* $tmp1094 = *(&local3);
panda$core$String* $tmp1095 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(param0, $tmp1093, $tmp1094);
panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, $tmp1095);
panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, &$s1098);
$fn1100 $tmp1099 = ($fn1100) ((panda$io$OutputStream*) $tmp1086)->$class->vtable[17];
$tmp1099(((panda$io$OutputStream*) $tmp1086), $tmp1097);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
// line 287
panda$core$String* $tmp1101 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1102));
*(&local0) = &$s1103;
panda$core$Panda$unref$panda$core$Object$Q($tmp1074);
panda$core$String* $tmp1104 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1105 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
// line 289
panda$io$IndentedOutputStream** $tmp1106 = &param0->body;
panda$io$IndentedOutputStream* $tmp1107 = *$tmp1106;
$fn1109 $tmp1108 = ($fn1109) ((panda$io$OutputStream*) $tmp1107)->$class->vtable[19];
$tmp1108(((panda$io$OutputStream*) $tmp1107), &$s1110);
panda$core$String* $tmp1111 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
// unreffing separator
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1, org$pandalanguage$pandac$IR* param2) {

// line 294
org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param1);
return;

}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 299
panda$io$IndentedOutputStream** $tmp1112 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1113 = *$tmp1112;
panda$io$MemoryOutputStream** $tmp1114 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1115 = *$tmp1114;
$fn1117 $tmp1116 = ($fn1117) ((panda$io$OutputStream*) $tmp1113)->$class->vtable[20];
$tmp1116(((panda$io$OutputStream*) $tmp1113), ((panda$core$Object*) $tmp1115));
// line 300
panda$io$IndentedOutputStream** $tmp1118 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1119 = *$tmp1118;
panda$io$MemoryOutputStream** $tmp1120 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1121 = *$tmp1120;
$fn1123 $tmp1122 = ($fn1123) ((panda$io$OutputStream*) $tmp1119)->$class->vtable[20];
$tmp1122(((panda$io$OutputStream*) $tmp1119), ((panda$core$Object*) $tmp1121));
// line 301
panda$io$IndentedOutputStream** $tmp1124 = &param0->out;
panda$io$IndentedOutputStream* $tmp1125 = *$tmp1124;
panda$io$MemoryOutputStream** $tmp1126 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1127 = *$tmp1126;
$fn1129 $tmp1128 = ($fn1129) ((panda$io$OutputStream*) $tmp1125)->$class->vtable[20];
$tmp1128(((panda$io$OutputStream*) $tmp1125), ((panda$core$Object*) $tmp1127));
// line 302
panda$io$IndentedOutputStream** $tmp1130 = &param0->out;
panda$io$IndentedOutputStream* $tmp1131 = *$tmp1130;
panda$io$MemoryOutputStream** $tmp1132 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1133 = *$tmp1132;
$fn1135 $tmp1134 = ($fn1135) ((panda$io$OutputStream*) $tmp1131)->$class->vtable[20];
$tmp1134(((panda$io$OutputStream*) $tmp1131), ((panda$core$Object*) $tmp1133));
return;

}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* param0) {

return;

}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* param0) {

panda$core$Weak** $tmp1136 = &param0->compiler;
panda$core$Weak* $tmp1137 = *$tmp1136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
panda$io$MemoryOutputStream** $tmp1138 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1139 = *$tmp1138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
panda$io$MemoryOutputStream** $tmp1140 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1141 = *$tmp1140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
panda$io$IndentedOutputStream** $tmp1142 = &param0->types;
panda$io$IndentedOutputStream* $tmp1143 = *$tmp1142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
panda$io$MemoryOutputStream** $tmp1144 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1145 = *$tmp1144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
panda$io$MemoryOutputStream** $tmp1146 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1147 = *$tmp1146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
panda$io$IndentedOutputStream** $tmp1148 = &param0->body;
panda$io$IndentedOutputStream* $tmp1149 = *$tmp1148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$collections$HashSet** $tmp1150 = &param0->typeImports;
panda$collections$HashSet* $tmp1151 = *$tmp1150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
panda$collections$HashSet** $tmp1152 = &param0->bodyImports;
panda$collections$HashSet* $tmp1153 = *$tmp1152;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
panda$collections$HashSet** $tmp1154 = &param0->imports;
panda$collections$HashSet* $tmp1155 = *$tmp1154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
panda$io$MemoryOutputStream** $tmp1156 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp1157 = *$tmp1156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
panda$io$File** $tmp1158 = &param0->outDir;
panda$io$File* $tmp1159 = *$tmp1158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
panda$io$IndentedOutputStream** $tmp1160 = &param0->out;
panda$io$IndentedOutputStream* $tmp1161 = *$tmp1160;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
panda$io$IndentedOutputStream** $tmp1162 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1163 = *$tmp1162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp1164 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp1165 = *$tmp1164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
panda$core$Weak** $tmp1166 = &param0->cCodeGen;
panda$core$Weak* $tmp1167 = *$tmp1166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
org$pandalanguage$pandac$CCodeGenerator** $tmp1168 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp1169 = *$tmp1168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
return;

}

