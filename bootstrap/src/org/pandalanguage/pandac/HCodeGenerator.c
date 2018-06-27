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
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Bit.h"
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

typedef void (*$fn248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn521)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn538)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn554)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn561)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn572)(panda$collections$Iterator*);
typedef void (*$fn593)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn628)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn662)(panda$collections$CollectionView*);
typedef void (*$fn677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn737)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn771)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn795)(panda$collections$CollectionView*);
typedef void (*$fn810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn967)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn979)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn997)(panda$collections$Iterator*);
typedef void (*$fn1021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1041)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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
    org$pandalanguage$pandac$CCodeGenerator* $tmp37;
    org$pandalanguage$pandac$CCodeGenerator* $tmp38;
    org$pandalanguage$pandac$CCodeGenerator* $tmp39;
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
    self->cCodeGen = NULL;
    self->cCodeGenRetain = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->compiler = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->typeImportStream = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$io$MemoryOutputStream* $tmp10 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->typesBuffer = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$io$IndentedOutputStream* $tmp13 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp13, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->types = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->bodyImportStream = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp19);
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->bodyBuffer = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
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
    panda$io$MemoryOutputStream* $tmp36 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp36);
    $tmp35 = $tmp36;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp33, &$s34, ((panda$io$OutputStream*) $tmp35));
    $tmp32 = $tmp33;
    $tmp31 = $tmp32;
    self->llvmCodeGen = $tmp31;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    {
        $tmp37 = self->cCodeGenRetain;
        org$pandalanguage$pandac$CCodeGenerator* $tmp40 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
        org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator($tmp40, p_outDir, self);
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        self->cCodeGenRetain = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(self, p_outDir, self->cCodeGenRetain);
}
void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir, org$pandalanguage$pandac$CCodeGenerator* p_cCodeGen) {
    panda$core$Weak* $tmp41;
    panda$core$Weak* $tmp42;
    panda$io$MemoryOutputStream* $tmp44;
    panda$io$MemoryOutputStream* $tmp45;
    panda$io$MemoryOutputStream* $tmp47;
    panda$io$MemoryOutputStream* $tmp48;
    panda$io$IndentedOutputStream* $tmp50;
    panda$io$IndentedOutputStream* $tmp51;
    panda$io$MemoryOutputStream* $tmp53;
    panda$io$MemoryOutputStream* $tmp54;
    panda$io$MemoryOutputStream* $tmp56;
    panda$io$MemoryOutputStream* $tmp57;
    panda$io$IndentedOutputStream* $tmp59;
    panda$io$IndentedOutputStream* $tmp60;
    panda$collections$HashSet* $tmp62;
    panda$collections$HashSet* $tmp63;
    panda$collections$HashSet* $tmp65;
    panda$collections$HashSet* $tmp66;
    panda$collections$HashSet* $tmp68;
    panda$io$MemoryOutputStream* $tmp69;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp70;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp71;
    panda$io$MemoryOutputStream* $tmp74;
    panda$io$File* $tmp76;
    panda$io$File* $tmp77;
    panda$io$IndentedOutputStream* $tmp78;
    panda$io$IndentedOutputStream* $tmp79;
    panda$io$IndentedOutputStream* $tmp80;
    panda$io$MemoryOutputStream* $tmp82;
    panda$io$IndentedOutputStream* $tmp84;
    panda$io$IndentedOutputStream* $tmp85;
    panda$io$IndentedOutputStream* $tmp86;
    panda$io$MemoryOutputStream* $tmp88;
    panda$core$Weak* $tmp90;
    panda$core$Weak* $tmp91;
    panda$core$Weak* $tmp92;
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
    self->cCodeGen = NULL;
    self->cCodeGenRetain = NULL;
    panda$core$Weak* $tmp43 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp43, ((panda$core$Object*) NULL));
    $tmp42 = $tmp43;
    $tmp41 = $tmp42;
    self->compiler = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$io$MemoryOutputStream* $tmp46 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp46);
    $tmp45 = $tmp46;
    $tmp44 = $tmp45;
    self->typeImportStream = $tmp44;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$io$MemoryOutputStream* $tmp49 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp49);
    $tmp48 = $tmp49;
    $tmp47 = $tmp48;
    self->typesBuffer = $tmp47;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    panda$io$IndentedOutputStream* $tmp52 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp52, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp51 = $tmp52;
    $tmp50 = $tmp51;
    self->types = $tmp50;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
    panda$io$MemoryOutputStream* $tmp55 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp55);
    $tmp54 = $tmp55;
    $tmp53 = $tmp54;
    self->bodyImportStream = $tmp53;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$io$MemoryOutputStream* $tmp58 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp58);
    $tmp57 = $tmp58;
    $tmp56 = $tmp57;
    self->bodyBuffer = $tmp56;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$io$IndentedOutputStream* $tmp61 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp61, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp60 = $tmp61;
    $tmp59 = $tmp60;
    self->body = $tmp59;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
    panda$collections$HashSet* $tmp64 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp64);
    $tmp63 = $tmp64;
    $tmp62 = $tmp63;
    self->typeImports = $tmp62;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$collections$HashSet* $tmp67 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp67);
    $tmp66 = $tmp67;
    $tmp65 = $tmp66;
    self->bodyImports = $tmp65;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    $tmp68 = self->typeImports;
    self->imports = $tmp68;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
    $tmp69 = self->typeImportStream;
    self->importStream = $tmp69;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp72 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp75 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp75);
    $tmp74 = $tmp75;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp72, &$s73, ((panda$io$OutputStream*) $tmp74));
    $tmp71 = $tmp72;
    $tmp70 = $tmp71;
    self->llvmCodeGen = $tmp70;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    {
        $tmp76 = self->outDir;
        $tmp77 = p_outDir;
        self->outDir = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
    }
    {
        $tmp78 = self->out;
        panda$io$IndentedOutputStream* $tmp81 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp83 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp83);
        $tmp82 = $tmp83;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp81, ((panda$io$OutputStream*) $tmp82));
        $tmp80 = $tmp81;
        $tmp79 = $tmp80;
        self->out = $tmp79;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
    }
    {
        $tmp84 = self->typesOut;
        panda$io$IndentedOutputStream* $tmp87 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp89 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp89);
        $tmp88 = $tmp89;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp87, ((panda$io$OutputStream*) $tmp88));
        $tmp86 = $tmp87;
        $tmp85 = $tmp86;
        self->typesOut = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    }
    {
        $tmp90 = self->cCodeGen;
        panda$core$Weak* $tmp93 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp93, ((panda$core$Object*) p_cCodeGen));
        $tmp92 = $tmp93;
        $tmp91 = $tmp92;
        self->cCodeGen = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $returnValue94;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    panda$core$String* $tmp97 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp96 = $tmp97;
    $tmp95 = $tmp96;
    $returnValue94 = $tmp95;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    return $returnValue94;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName102 = NULL;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $returnValue111;
    panda$core$String* $tmp112;
    panda$core$String* $tmp113;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp114;
    panda$core$Int64 $tmp115;
    panda$core$Bit $tmp116;
    int $tmp101;
    {
        panda$core$String* $tmp105 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp104 = $tmp105;
        $tmp103 = $tmp104;
        llvmName102 = $tmp103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Bit $tmp107 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName102, &$s106);
        if ($tmp107.value) goto $l108; else goto $l109;
        $l109:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s110, (panda$core$Int64) { 59 });
        abort();
        $l108:;
        panda$core$Int64$init$builtin_int64(&$tmp115, 1);
        panda$core$Bit$init$builtin_bit(&$tmp116, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp114, ((panda$core$Int64$nullable) { $tmp115, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp116);
        panda$core$String* $tmp117 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName102, $tmp114);
        $tmp113 = $tmp117;
        $tmp112 = $tmp113;
        $returnValue111 = $tmp112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
        $tmp101 = 0;
        goto $l99;
        $l118:;
        return $returnValue111;
    }
    $l99:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName102));
    llvmName102 = NULL;
    switch ($tmp101) {
        case 0: goto $l118;
    }
    $l120:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue121;
    panda$core$Int64 $tmp122 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue121 = $tmp122;
    return $returnValue121;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue124;
    panda$core$String* $tmp125;
    panda$core$String* $tmp126;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$String* $tmp129;
    panda$core$String* $tmp130;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$String* $tmp135 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s133, &$s134);
    $tmp132 = $tmp135;
    panda$core$String* $tmp138 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp132, &$s136, &$s137);
    $tmp131 = $tmp138;
    panda$core$String* $tmp141 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp131, &$s139, &$s140);
    $tmp130 = $tmp141;
    panda$core$String* $tmp144 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp130, &$s142, &$s143);
    $tmp129 = $tmp144;
    panda$core$String* $tmp147 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp129, &$s145, &$s146);
    $tmp128 = $tmp147;
    panda$core$String* $tmp150 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp128, &$s148, &$s149);
    $tmp127 = $tmp150;
    panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, p_extension);
    $tmp126 = $tmp151;
    $tmp125 = $tmp126;
    $returnValue124 = $tmp125;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
    return $returnValue124;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$73_9153;
    panda$core$Int64 $tmp154;
    panda$core$String* $returnValue156;
    panda$core$String* $tmp157;
    panda$core$Int64 $tmp160;
    panda$core$String* $tmp162;
    panda$core$String* $tmp163;
    panda$core$String* $tmp164;
    panda$core$Object* $tmp166;
    panda$core$Int64 $tmp168;
    panda$core$Int64 $tmp175;
    panda$core$String* $tmp177;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$Object* $tmp181;
    panda$core$Int64 $tmp183;
    panda$core$Int64 $tmp190;
    panda$core$String* $tmp192;
    panda$core$Int64 $tmp195;
    panda$core$String* $tmp198;
    panda$core$String* $tmp201;
    panda$core$Bit $tmp204;
    panda$core$Int64 $tmp208;
    panda$core$String* name213 = NULL;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    panda$core$String* $tmp216;
    panda$core$String* $tmp217;
    org$pandalanguage$pandac$ClassDecl* cl222 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp223;
    org$pandalanguage$pandac$ClassDecl* $tmp224;
    panda$core$Object* $tmp225;
    panda$core$Object* $tmp231;
    panda$core$String* $tmp237;
    panda$core$String* $tmp238;
    panda$core$String* $tmp239;
    panda$core$String* $tmp240;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    panda$core$String* includePath255 = NULL;
    panda$core$String* $tmp256;
    panda$core$String* $tmp257;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$String* $tmp269;
    panda$core$Int64 $tmp273;
    org$pandalanguage$pandac$ClassDecl* cl278 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp279;
    org$pandalanguage$pandac$ClassDecl* $tmp280;
    panda$core$Object* $tmp281;
    panda$core$Object* $tmp287;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$core$String* $tmp292;
    panda$core$Object* $tmp293;
    panda$core$Int64 $tmp294;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$core$Object* $tmp303;
    panda$core$Int64 $tmp304;
    panda$core$Int64 $tmp310;
    panda$core$Object* $tmp315;
    panda$core$Int64 $tmp316;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    panda$core$Object* $tmp323;
    panda$core$Int64 $tmp324;
    org$pandalanguage$pandac$ClassDecl* cl331 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp332;
    org$pandalanguage$pandac$ClassDecl* $tmp333;
    panda$core$Object* $tmp334;
    panda$core$String* name341 = NULL;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    org$pandalanguage$pandac$ClassDecl* cl350 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp351;
    org$pandalanguage$pandac$ClassDecl* $tmp352;
    panda$core$Object* $tmp353;
    panda$core$Object* $tmp359;
    panda$core$String* $tmp365;
    panda$core$String* $tmp366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
    panda$core$String* $tmp377;
    panda$core$String* $tmp378;
    panda$core$String* includePath384 = NULL;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp391;
    panda$core$String* $tmp392;
    panda$core$String* $tmp398;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    panda$core$Object* $tmp405;
    panda$core$Int64 $tmp406;
    panda$core$Int64 $tmp412;
    panda$core$String* $tmp414;
    panda$core$String* $tmp415;
    panda$core$Object* $tmp416;
    panda$core$Int64 $tmp421;
    panda$core$Int64 $tmp424;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    org$pandalanguage$pandac$Type* $tmp429;
    panda$core$Int64 $tmp434;
    panda$core$Int64 $tmp437;
    panda$core$String* $tmp440;
    panda$core$String* $tmp441;
    org$pandalanguage$pandac$Type* $tmp442;
    panda$core$Bit $tmp446;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451;
    {
        $match$73_9153 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp154, 4);
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp154);
        if ($tmp155.value) {
        {
            $tmp157 = &$s158;
            $returnValue156 = $tmp157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
            return $returnValue156;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp160, 2);
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp160);
        if ($tmp161.value) {
        {
            panda$core$Int64 $tmp167 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp168, 8);
            panda$core$Int64 $tmp169 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp167, $tmp168);
            panda$core$Int64$wrapper* $tmp170;
            $tmp170 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp170->value = $tmp169;
            $tmp166 = ((panda$core$Object*) $tmp170);
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s165, $tmp166);
            $tmp164 = $tmp171;
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s172);
            $tmp163 = $tmp173;
            $tmp162 = $tmp163;
            $returnValue156 = $tmp162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            panda$core$Panda$unref$panda$core$Object($tmp166);
            return $returnValue156;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp175, 3);
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp175);
        if ($tmp176.value) {
        {
            panda$core$Int64 $tmp182 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp183, 8);
            panda$core$Int64 $tmp184 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp182, $tmp183);
            panda$core$Int64$wrapper* $tmp185;
            $tmp185 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp185->value = $tmp184;
            $tmp181 = ((panda$core$Object*) $tmp185);
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s180, $tmp181);
            $tmp179 = $tmp186;
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s187);
            $tmp178 = $tmp188;
            $tmp177 = $tmp178;
            $returnValue156 = $tmp177;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            panda$core$Panda$unref$panda$core$Object($tmp181);
            return $returnValue156;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp190, 9);
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp190);
        if ($tmp191.value) {
        {
            $tmp192 = &$s193;
            $returnValue156 = $tmp192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
            return $returnValue156;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp195, 10);
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp195);
        if ($tmp196.value) {
        {
            panda$core$Int64 $tmp197 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp197.value) {
                case 4:
                {
                    $tmp198 = &$s199;
                    $returnValue156 = $tmp198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                    return $returnValue156;
                }
                break;
                case 8:
                {
                    $tmp201 = &$s202;
                    $returnValue156 = $tmp201;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
                    return $returnValue156;
                }
                break;
                default:
                {
                    panda$core$Bit$init$builtin_bit(&$tmp204, false);
                    if ($tmp204.value) goto $l205; else goto $l206;
                    $l206:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s207, (panda$core$Int64) { 86 });
                    abort();
                    $l205:;
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp208, 0);
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp208);
        if ($tmp209.value) {
        {
            int $tmp212;
            {
                panda$core$String* $tmp218 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp217 = $tmp218;
                panda$core$String* $tmp219 = panda$core$String$convert$R$panda$core$String($tmp217);
                $tmp216 = $tmp219;
                panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s220);
                $tmp215 = $tmp221;
                $tmp214 = $tmp215;
                name213 = $tmp214;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Object* $tmp226 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp225 = $tmp226;
                org$pandalanguage$pandac$ClassDecl* $tmp227 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp225), p_t);
                $tmp224 = $tmp227;
                $tmp223 = $tmp224;
                cl222 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                panda$core$Panda$unref$panda$core$Object($tmp225);
                if (((panda$core$Bit) { cl222 != NULL }).value) goto $l228; else goto $l229;
                $l229:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s230, (panda$core$Int64) { 91 });
                abort();
                $l228:;
                panda$core$Object* $tmp232 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp231 = $tmp232;
                panda$core$Bit $tmp233 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp231), cl222);
                panda$core$Bit $tmp234 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp233);
                panda$core$Panda$unref$panda$core$Object($tmp231);
                if ($tmp234.value) {
                {
                    panda$core$Bit $tmp235 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name213));
                    panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
                    if ($tmp236.value) {
                    {
                        panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s241, name213);
                        $tmp240 = $tmp242;
                        panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s243);
                        $tmp239 = $tmp244;
                        panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, name213);
                        $tmp238 = $tmp245;
                        panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s246);
                        $tmp237 = $tmp247;
                        (($fn248) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp237);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name213));
                    }
                    }
                    panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name213, &$s251);
                    $tmp250 = $tmp252;
                    $tmp249 = $tmp250;
                    $returnValue156 = $tmp249;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
                    $tmp212 = 0;
                    goto $l210;
                    $l253:;
                    return $returnValue156;
                }
                }
                panda$core$String* $tmp259 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl222, &$s258);
                $tmp257 = $tmp259;
                $tmp256 = $tmp257;
                includePath255 = $tmp256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                panda$core$Bit $tmp260 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath255));
                panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
                if ($tmp261.value) {
                {
                    panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s264, includePath255);
                    $tmp263 = $tmp265;
                    panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s266);
                    $tmp262 = $tmp267;
                    (($fn268) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp262);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath255));
                }
                }
                $tmp269 = name213;
                $returnValue156 = $tmp269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
                $tmp212 = 1;
                goto $l210;
                $l270:;
                return $returnValue156;
            }
            $l210:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath255));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name213));
            name213 = NULL;
            cl222 = NULL;
            includePath255 = NULL;
            switch ($tmp212) {
                case 1: goto $l270;
                case 0: goto $l253;
            }
            $l272:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp273, 1);
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp273);
        if ($tmp274.value) {
        {
            int $tmp277;
            {
                panda$core$Object* $tmp282 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp281 = $tmp282;
                org$pandalanguage$pandac$ClassDecl* $tmp283 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp281), p_t);
                $tmp280 = $tmp283;
                $tmp279 = $tmp280;
                cl278 = $tmp279;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                panda$core$Panda$unref$panda$core$Object($tmp281);
                if (((panda$core$Bit) { cl278 != NULL }).value) goto $l284; else goto $l285;
                $l285:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s286, (panda$core$Int64) { 107 });
                abort();
                $l284:;
                panda$core$Object* $tmp288 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp287 = $tmp288;
                panda$core$Bit $tmp289 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp287), cl278);
                panda$core$Panda$unref$panda$core$Object($tmp287);
                if ($tmp289.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp294, 0);
                    panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp294);
                    $tmp293 = $tmp295;
                    panda$core$String* $tmp296 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp293));
                    $tmp292 = $tmp296;
                    panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s297);
                    $tmp291 = $tmp298;
                    $tmp290 = $tmp291;
                    $returnValue156 = $tmp290;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
                    panda$core$Panda$unref$panda$core$Object($tmp293);
                    $tmp277 = 0;
                    goto $l275;
                    $l299:;
                    return $returnValue156;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp304, 0);
                panda$core$Object* $tmp305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp304);
                $tmp303 = $tmp305;
                panda$core$String* $tmp306 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp303));
                $tmp302 = $tmp306;
                $tmp301 = $tmp302;
                $returnValue156 = $tmp301;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                panda$core$Panda$unref$panda$core$Object($tmp303);
                $tmp277 = 1;
                goto $l275;
                $l307:;
                return $returnValue156;
            }
            $l275:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl278));
            cl278 = NULL;
            switch ($tmp277) {
                case 1: goto $l307;
                case 0: goto $l299;
            }
            $l309:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp310, 11);
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp310);
        if ($tmp311.value) {
        {
            int $tmp314;
            {
                panda$core$Int64$init$builtin_int64(&$tmp316, 0);
                panda$core$Object* $tmp317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp316);
                $tmp315 = $tmp317;
                panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp315))->name, &$s318);
                panda$core$Panda$unref$panda$core$Object($tmp315);
                if ($tmp319.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp324, 1);
                    panda$core$Object* $tmp325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp324);
                    $tmp323 = $tmp325;
                    panda$core$String* $tmp326 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp323));
                    $tmp322 = $tmp326;
                    panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, &$s327);
                    $tmp321 = $tmp328;
                    $tmp320 = $tmp321;
                    $returnValue156 = $tmp320;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                    panda$core$Panda$unref$panda$core$Object($tmp323);
                    $tmp314 = 0;
                    goto $l312;
                    $l329:;
                    return $returnValue156;
                }
                }
                panda$core$Object* $tmp335 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp334 = $tmp335;
                org$pandalanguage$pandac$ClassDecl* $tmp336 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp334), p_t);
                $tmp333 = $tmp336;
                $tmp332 = $tmp333;
                cl331 = $tmp332;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                panda$core$Panda$unref$panda$core$Object($tmp334);
                panda$core$Bit $tmp337 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl331);
                if ($tmp337.value) {
                {
                    int $tmp340;
                    {
                        panda$core$String* $tmp346 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp345 = $tmp346;
                        panda$core$String* $tmp347 = panda$core$String$convert$R$panda$core$String($tmp345);
                        $tmp344 = $tmp347;
                        panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s348);
                        $tmp343 = $tmp349;
                        $tmp342 = $tmp343;
                        name341 = $tmp342;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                        panda$core$Object* $tmp354 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp353 = $tmp354;
                        org$pandalanguage$pandac$ClassDecl* $tmp355 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp353), p_t);
                        $tmp352 = $tmp355;
                        $tmp351 = $tmp352;
                        cl350 = $tmp351;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                        panda$core$Panda$unref$panda$core$Object($tmp353);
                        if (((panda$core$Bit) { cl350 != NULL }).value) goto $l356; else goto $l357;
                        $l357:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s358, (panda$core$Int64) { 120 });
                        abort();
                        $l356:;
                        panda$core$Object* $tmp360 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp359 = $tmp360;
                        panda$core$Bit $tmp361 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp359), cl350);
                        panda$core$Bit $tmp362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp361);
                        panda$core$Panda$unref$panda$core$Object($tmp359);
                        if ($tmp362.value) {
                        {
                            panda$core$Bit $tmp363 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name341));
                            panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
                            if ($tmp364.value) {
                            {
                                panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s369, name341);
                                $tmp368 = $tmp370;
                                panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s371);
                                $tmp367 = $tmp372;
                                panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, name341);
                                $tmp366 = $tmp373;
                                panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s374);
                                $tmp365 = $tmp375;
                                (($fn376) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp365);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
                                panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name341));
                            }
                            }
                            panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name341, &$s379);
                            $tmp378 = $tmp380;
                            $tmp377 = $tmp378;
                            $returnValue156 = $tmp377;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                            $tmp340 = 0;
                            goto $l338;
                            $l381:;
                            $tmp314 = 1;
                            goto $l312;
                            $l382:;
                            return $returnValue156;
                        }
                        }
                        panda$core$String* $tmp388 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl350, &$s387);
                        $tmp386 = $tmp388;
                        $tmp385 = $tmp386;
                        includePath384 = $tmp385;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
                        panda$core$Bit $tmp389 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath384));
                        panda$core$Bit $tmp390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp389);
                        if ($tmp390.value) {
                        {
                            panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s393, includePath384);
                            $tmp392 = $tmp394;
                            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s395);
                            $tmp391 = $tmp396;
                            (($fn397) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp391);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
                            panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath384));
                        }
                        }
                        $tmp398 = name341;
                        $returnValue156 = $tmp398;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                        $tmp340 = 1;
                        goto $l338;
                        $l399:;
                        $tmp314 = 2;
                        goto $l312;
                        $l400:;
                        return $returnValue156;
                    }
                    $l338:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath384));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl350));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name341));
                    name341 = NULL;
                    cl350 = NULL;
                    includePath384 = NULL;
                    switch ($tmp340) {
                        case 1: goto $l399;
                        case 0: goto $l381;
                    }
                    $l402:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp406, 0);
                panda$core$Object* $tmp407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp406);
                $tmp405 = $tmp407;
                panda$core$String* $tmp408 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp405));
                $tmp404 = $tmp408;
                $tmp403 = $tmp404;
                $returnValue156 = $tmp403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                panda$core$Panda$unref$panda$core$Object($tmp405);
                $tmp314 = 3;
                goto $l312;
                $l409:;
                return $returnValue156;
            }
            $l312:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl331));
            cl331 = NULL;
            switch ($tmp314) {
                case 3: goto $l409;
                case 0: goto $l329;
                case 2: goto $l400;
                case 1: goto $l382;
            }
            $l411:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp412, 12);
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp412);
        if ($tmp413.value) {
        {
            panda$core$Object* $tmp417 = panda$core$Weak$get$R$panda$core$Weak$T(p_t->parameter);
            $tmp416 = $tmp417;
            panda$core$String* $tmp418 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp416)->bound);
            $tmp415 = $tmp418;
            $tmp414 = $tmp415;
            $returnValue156 = $tmp414;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
            panda$core$Panda$unref$panda$core$Object($tmp416);
            return $returnValue156;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp421, 14);
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp421);
        bool $tmp420 = $tmp422.value;
        if ($tmp420) goto $l423;
        panda$core$Int64$init$builtin_int64(&$tmp424, 15);
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp424);
        $tmp420 = $tmp425.value;
        $l423:;
        panda$core$Bit $tmp426 = { $tmp420 };
        if ($tmp426.value) {
        {
            org$pandalanguage$pandac$Type* $tmp430 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp429 = $tmp430;
            panda$core$String* $tmp431 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp429);
            $tmp428 = $tmp431;
            $tmp427 = $tmp428;
            $returnValue156 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
            return $returnValue156;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp434, 16);
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp434);
        bool $tmp433 = $tmp435.value;
        if ($tmp433) goto $l436;
        panda$core$Int64$init$builtin_int64(&$tmp437, 17);
        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9153.$rawValue, $tmp437);
        $tmp433 = $tmp438.value;
        $l436:;
        panda$core$Bit $tmp439 = { $tmp433 };
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$Type* $tmp443 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp442 = $tmp443;
            panda$core$String* $tmp444 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp442);
            $tmp441 = $tmp444;
            $tmp440 = $tmp441;
            $returnValue156 = $tmp440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
            return $returnValue156;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp446, false);
            if ($tmp446.value) goto $l447; else goto $l448;
            $l448:;
            panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s452, ((panda$core$Object*) p_t));
            $tmp451 = $tmp453;
            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s454);
            $tmp450 = $tmp455;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s449, (panda$core$Int64) { 143 }, $tmp450);
            abort();
            $l447:;
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
    panda$core$String* $returnValue456;
    panda$core$String* $tmp457;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp461;
    panda$core$String* $tmp462;
    panda$core$String* $tmp463 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp462 = $tmp463;
    panda$core$String* $tmp464 = panda$core$String$convert$R$panda$core$String($tmp462);
    $tmp461 = $tmp464;
    panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s465);
    $tmp460 = $tmp466;
    panda$core$String* $tmp467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, p_name);
    $tmp459 = $tmp467;
    panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, &$s468);
    $tmp458 = $tmp469;
    $tmp457 = $tmp458;
    $returnValue456 = $tmp457;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
    return $returnValue456;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp471;
    panda$core$Weak* $tmp472;
    panda$core$Weak* $tmp473;
    {
        $tmp471 = self->compiler;
        panda$core$Weak* $tmp474 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp474, ((panda$core$Object*) p_compiler));
        $tmp473 = $tmp474;
        $tmp472 = $tmp473;
        self->compiler = $tmp472;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue475;
    panda$io$File* $tmp476;
    panda$io$File* $tmp477;
    panda$core$String* $tmp478;
    panda$core$String* $tmp479 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp478 = $tmp479;
    panda$io$File* $tmp480 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp478);
    $tmp477 = $tmp480;
    $tmp476 = $tmp477;
    $returnValue475 = $tmp476;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
    return $returnValue475;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path485 = NULL;
    panda$io$File* $tmp486;
    panda$io$File* $tmp487;
    panda$io$File* $tmp490;
    panda$io$IndentedOutputStream* $tmp492;
    panda$io$IndentedOutputStream* $tmp493;
    panda$io$IndentedOutputStream* $tmp494;
    panda$io$OutputStream* $tmp496;
    panda$io$File* typesPath498 = NULL;
    panda$io$File* $tmp499;
    panda$io$File* $tmp500;
    panda$io$IndentedOutputStream* $tmp503;
    panda$io$IndentedOutputStream* $tmp504;
    panda$io$IndentedOutputStream* $tmp505;
    panda$io$OutputStream* $tmp507;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$String* $tmp516;
    panda$io$MemoryOutputStream* $tmp526;
    panda$io$MemoryOutputStream* $tmp527;
    panda$collections$HashSet* $tmp528;
    panda$collections$HashSet* $tmp529;
    panda$core$String* $tmp530;
    panda$core$String* $tmp531;
    panda$core$String* $tmp533;
    panda$io$IndentedOutputStream* $tmp539;
    panda$core$Int64 $tmp540;
    panda$collections$Iterator* Iter$183$9545 = NULL;
    panda$collections$Iterator* $tmp546;
    panda$collections$Iterator* $tmp547;
    panda$collections$ListView* $tmp548;
    panda$core$Object* $tmp549;
    org$pandalanguage$pandac$FieldDecl* f567 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp568;
    panda$core$Object* $tmp569;
    panda$core$Object* $tmp574;
    org$pandalanguage$pandac$Type* $tmp576;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$Object* $tmp587;
    panda$core$String* $tmp594;
    panda$core$String* $tmp595;
    panda$core$String* $tmp596;
    panda$core$String* $tmp597;
    panda$core$String* $tmp598;
    panda$io$IndentedOutputStream* $tmp615;
    panda$core$Int64 $tmp616;
    panda$core$String* $tmp618;
    panda$core$String* $tmp619;
    panda$core$String* $tmp621;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    panda$core$String* $tmp631;
    panda$core$String* $tmp633;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    org$pandalanguage$pandac$Type* $tmp638;
    panda$core$String* $tmp644;
    org$pandalanguage$pandac$Type* $tmp645;
    panda$core$String* $tmp652;
    panda$core$String* $tmp653;
    panda$core$Object* $tmp655;
    panda$collections$ListView* $tmp656;
    panda$core$Object* $tmp657;
    panda$core$String* $tmp669;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$String* $tmp681;
    panda$core$String* $tmp683;
    panda$core$String* $tmp688;
    panda$core$Object* $tmp694;
    panda$core$String* $tmp700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp703;
    panda$io$IndentedOutputStream* $tmp709;
    panda$core$Int64 $tmp710;
    panda$core$String* $tmp716;
    panda$core$String* $tmp717;
    panda$core$String* $tmp718;
    org$pandalanguage$pandac$Type* $tmp719;
    panda$io$IndentedOutputStream* $tmp726;
    panda$core$Int64 $tmp727;
    panda$core$String* $tmp729;
    panda$core$String* $tmp730;
    panda$core$String* $tmp732;
    panda$core$String* $tmp738;
    panda$core$String* $tmp739;
    panda$core$String* $tmp741;
    panda$io$IndentedOutputStream* $tmp747;
    panda$core$Int64 $tmp748;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    panda$io$IndentedOutputStream* $tmp760;
    panda$core$Int64 $tmp761;
    panda$core$String* $tmp763;
    panda$core$String* $tmp764;
    panda$core$String* $tmp766;
    org$pandalanguage$pandac$ClassDecl* value772 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp773;
    org$pandalanguage$pandac$ClassDecl* $tmp774;
    panda$core$Object* $tmp775;
    org$pandalanguage$pandac$Type* $tmp777;
    panda$collections$ListView* valueVTable780 = NULL;
    panda$collections$ListView* $tmp781;
    panda$collections$ListView* $tmp782;
    panda$core$Object* $tmp783;
    panda$core$String* $tmp786;
    panda$core$String* $tmp787;
    panda$core$String* $tmp789;
    panda$core$String* $tmp790;
    panda$core$Object* $tmp792;
    panda$core$String* $tmp802;
    panda$core$String* $tmp803;
    panda$core$String* $tmp804;
    panda$core$String* $tmp811;
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    panda$core$String* $tmp815;
    panda$core$String* $tmp820;
    panda$core$String* $tmp821;
    panda$core$String* $tmp822;
    int $tmp484;
    {
        panda$io$MemoryOutputStream$clear(self->typeImportStream);
        panda$io$MemoryOutputStream$clear(self->typesBuffer);
        panda$io$MemoryOutputStream$clear(self->bodyImportStream);
        panda$io$MemoryOutputStream$clear(self->bodyBuffer);
        panda$collections$HashSet$clear(self->typeImports);
        panda$collections$HashSet$clear(self->bodyImports);
        panda$io$File* $tmp489 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s488);
        $tmp487 = $tmp489;
        $tmp486 = $tmp487;
        path485 = $tmp486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
        panda$io$File* $tmp491 = panda$io$File$parent$R$panda$io$File$Q(path485);
        $tmp490 = $tmp491;
        panda$io$File$createDirectories($tmp490);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        {
            $tmp492 = self->out;
            panda$io$IndentedOutputStream* $tmp495 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp497 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path485);
            $tmp496 = $tmp497;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp495, $tmp496);
            $tmp494 = $tmp495;
            $tmp493 = $tmp494;
            self->out = $tmp493;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        }
        panda$io$File* $tmp502 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s501);
        $tmp500 = $tmp502;
        $tmp499 = $tmp500;
        typesPath498 = $tmp499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        {
            $tmp503 = self->typesOut;
            panda$io$IndentedOutputStream* $tmp506 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp508 = panda$io$File$openOutputStream$R$panda$io$OutputStream(typesPath498);
            $tmp507 = $tmp508;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp506, $tmp507);
            $tmp505 = $tmp506;
            $tmp504 = $tmp505;
            self->typesOut = $tmp504;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        }
        (($fn510) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s509);
        (($fn512) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s511);
        panda$core$String* $tmp517 = panda$io$File$name$R$panda$core$String(typesPath498);
        $tmp516 = $tmp517;
        panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s515, $tmp516);
        $tmp514 = $tmp518;
        panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s519);
        $tmp513 = $tmp520;
        (($fn521) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp513);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        (($fn523) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), &$s522);
        (($fn525) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), &$s524);
        {
            $tmp526 = self->importStream;
            $tmp527 = self->typeImportStream;
            self->importStream = $tmp527;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
        }
        {
            $tmp528 = self->imports;
            $tmp529 = self->typeImports;
            self->imports = $tmp529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
        }
        panda$core$String* $tmp534 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp533 = $tmp534;
        panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s532, $tmp533);
        $tmp531 = $tmp535;
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s536);
        $tmp530 = $tmp537;
        (($fn538) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp530);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        $tmp539 = self->types;
        panda$core$Int64$init$builtin_int64(&$tmp540, 1);
        panda$core$Int64 $tmp541 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp539->level, $tmp540);
        $tmp539->level = $tmp541;
        {
            int $tmp544;
            {
                panda$core$Object* $tmp550 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp549 = $tmp550;
                panda$collections$ListView* $tmp551 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp549), p_cl);
                $tmp548 = $tmp551;
                ITable* $tmp552 = ((panda$collections$Iterable*) $tmp548)->$class->itable;
                while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp552 = $tmp552->next;
                }
                $fn554 $tmp553 = $tmp552->methods[0];
                panda$collections$Iterator* $tmp555 = $tmp553(((panda$collections$Iterable*) $tmp548));
                $tmp547 = $tmp555;
                $tmp546 = $tmp547;
                Iter$183$9545 = $tmp546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
                panda$core$Panda$unref$panda$core$Object($tmp549);
                $l556:;
                ITable* $tmp559 = Iter$183$9545->$class->itable;
                while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp559 = $tmp559->next;
                }
                $fn561 $tmp560 = $tmp559->methods[0];
                panda$core$Bit $tmp562 = $tmp560(Iter$183$9545);
                panda$core$Bit $tmp563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp562);
                bool $tmp558 = $tmp563.value;
                if (!$tmp558) goto $l557;
                {
                    int $tmp566;
                    {
                        ITable* $tmp570 = Iter$183$9545->$class->itable;
                        while ($tmp570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp570 = $tmp570->next;
                        }
                        $fn572 $tmp571 = $tmp570->methods[1];
                        panda$core$Object* $tmp573 = $tmp571(Iter$183$9545);
                        $tmp569 = $tmp573;
                        $tmp568 = ((org$pandalanguage$pandac$FieldDecl*) $tmp569);
                        f567 = $tmp568;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                        panda$core$Panda$unref$panda$core$Object($tmp569);
                        panda$core$Object* $tmp575 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp574 = $tmp575;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp574), f567);
                        panda$core$Panda$unref$panda$core$Object($tmp574);
                        org$pandalanguage$pandac$Type* $tmp577 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp576 = $tmp577;
                        panda$core$Bit $tmp578 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f567->type, $tmp576);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                        if ($tmp578.value) {
                        {
                            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s583, ((org$pandalanguage$pandac$Symbol*) f567)->name);
                            $tmp582 = $tmp584;
                            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s585);
                            $tmp581 = $tmp586;
                            panda$core$Int64 $tmp588 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp589;
                            $tmp589 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp589->value = $tmp588;
                            $tmp587 = ((panda$core$Object*) $tmp589);
                            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp581, $tmp587);
                            $tmp580 = $tmp590;
                            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s591);
                            $tmp579 = $tmp592;
                            (($fn593) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp579);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                            panda$core$Panda$unref$panda$core$Object($tmp587);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp599 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f567->type);
                            $tmp598 = $tmp599;
                            panda$core$String* $tmp600 = panda$core$String$convert$R$panda$core$String($tmp598);
                            $tmp597 = $tmp600;
                            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s601);
                            $tmp596 = $tmp602;
                            panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, ((org$pandalanguage$pandac$Symbol*) f567)->name);
                            $tmp595 = $tmp603;
                            panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s604);
                            $tmp594 = $tmp605;
                            (($fn606) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp594);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                        }
                        }
                    }
                    $tmp566 = -1;
                    goto $l564;
                    $l564:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f567));
                    f567 = NULL;
                    switch ($tmp566) {
                        case -1: goto $l607;
                    }
                    $l607:;
                }
                goto $l556;
                $l557:;
            }
            $tmp544 = -1;
            goto $l542;
            $l542:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$183$9545));
            Iter$183$9545 = NULL;
            switch ($tmp544) {
                case -1: goto $l608;
            }
            $l608:;
        }
        panda$core$Bit $tmp610 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s609);
        if ($tmp610.value) {
        {
            (($fn612) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s611);
            (($fn614) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s613);
        }
        }
        $tmp615 = self->types;
        panda$core$Int64$init$builtin_int64(&$tmp616, 1);
        panda$core$Int64 $tmp617 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp615->level, $tmp616);
        $tmp615->level = $tmp617;
        panda$core$String* $tmp622 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp621 = $tmp622;
        panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s620, $tmp621);
        $tmp619 = $tmp623;
        panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s624);
        $tmp618 = $tmp625;
        (($fn626) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp618);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
        (($fn628) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s627);
        org$pandalanguage$pandac$Type* $tmp639 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp638 = $tmp639;
        panda$core$String* $tmp640 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp638);
        $tmp637 = $tmp640;
        panda$core$String* $tmp641 = panda$core$String$convert$R$panda$core$String($tmp637);
        $tmp636 = $tmp641;
        panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s642);
        $tmp635 = $tmp643;
        org$pandalanguage$pandac$Type* $tmp646 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp645 = $tmp646;
        panda$core$String* $tmp647 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp645);
        $tmp644 = $tmp647;
        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, $tmp644);
        $tmp634 = $tmp648;
        panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s649);
        $tmp633 = $tmp650;
        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s632, $tmp633);
        $tmp631 = $tmp651;
        panda$core$Object* $tmp658 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp657 = $tmp658;
        panda$collections$ListView* $tmp659 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp657), p_cl);
        $tmp656 = $tmp659;
        ITable* $tmp660 = ((panda$collections$CollectionView*) $tmp656)->$class->itable;
        while ($tmp660->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp660 = $tmp660->next;
        }
        $fn662 $tmp661 = $tmp660->methods[0];
        panda$core$Int64 $tmp663 = $tmp661(((panda$collections$CollectionView*) $tmp656));
        panda$core$Int64$wrapper* $tmp664;
        $tmp664 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp664->value = $tmp663;
        $tmp655 = ((panda$core$Object*) $tmp664);
        panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s654, $tmp655);
        $tmp653 = $tmp665;
        panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp653, &$s666);
        $tmp652 = $tmp667;
        panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, $tmp652);
        $tmp630 = $tmp668;
        panda$core$String* $tmp672 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp671 = $tmp672;
        panda$core$String* $tmp673 = panda$core$String$convert$R$panda$core$String($tmp671);
        $tmp670 = $tmp673;
        panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s674);
        $tmp669 = $tmp675;
        panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, $tmp669);
        $tmp629 = $tmp676;
        (($fn677) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp629);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
        panda$core$Panda$unref$panda$core$Object($tmp655);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
        panda$core$Panda$unref$panda$core$Object($tmp657);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$core$String* $tmp684 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp683 = $tmp684;
        panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s682, $tmp683);
        $tmp681 = $tmp685;
        panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s686);
        $tmp680 = $tmp687;
        panda$core$String* $tmp689 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp688 = $tmp689;
        panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, $tmp688);
        $tmp679 = $tmp690;
        panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s691);
        $tmp678 = $tmp692;
        (($fn693) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp678);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
        panda$core$Object* $tmp695 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp694 = $tmp695;
        panda$core$Bit $tmp696 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp694), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp694);
        if ($tmp696.value) {
        {
            int $tmp699;
            {
                panda$core$String* $tmp704 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp703 = $tmp704;
                panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s702, $tmp703);
                $tmp701 = $tmp705;
                panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s706);
                $tmp700 = $tmp707;
                (($fn708) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp700);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                $tmp709 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp710, 1);
                panda$core$Int64 $tmp711 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp709->level, $tmp710);
                $tmp709->level = $tmp711;
                (($fn713) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s712);
                (($fn715) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s714);
                org$pandalanguage$pandac$Type* $tmp720 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp719 = $tmp720;
                panda$core$String* $tmp721 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp719);
                $tmp718 = $tmp721;
                panda$core$String* $tmp722 = panda$core$String$convert$R$panda$core$String($tmp718);
                $tmp717 = $tmp722;
                panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp717, &$s723);
                $tmp716 = $tmp724;
                (($fn725) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp716);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                $tmp726 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp727, 1);
                panda$core$Int64 $tmp728 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp726->level, $tmp727);
                $tmp726->level = $tmp728;
                panda$core$String* $tmp733 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp732 = $tmp733;
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s731, $tmp732);
                $tmp730 = $tmp734;
                panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s735);
                $tmp729 = $tmp736;
                (($fn737) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp729);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                panda$core$String* $tmp742 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp741 = $tmp742;
                panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s740, $tmp741);
                $tmp739 = $tmp743;
                panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s744);
                $tmp738 = $tmp745;
                (($fn746) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp738);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
                $tmp747 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp748, 1);
                panda$core$Int64 $tmp749 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp747->level, $tmp748);
                $tmp747->level = $tmp749;
                panda$core$String* $tmp753 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp752 = $tmp753;
                panda$core$String* $tmp754 = panda$core$String$convert$R$panda$core$String($tmp752);
                $tmp751 = $tmp754;
                panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s755);
                $tmp750 = $tmp756;
                (($fn757) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp750);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                (($fn759) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s758);
                $tmp760 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp761, 1);
                panda$core$Int64 $tmp762 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp760->level, $tmp761);
                $tmp760->level = $tmp762;
                panda$core$String* $tmp767 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp766 = $tmp767;
                panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s765, $tmp766);
                $tmp764 = $tmp768;
                panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s769);
                $tmp763 = $tmp770;
                (($fn771) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp763);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
                panda$core$Object* $tmp776 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp775 = $tmp776;
                org$pandalanguage$pandac$Type* $tmp778 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp777 = $tmp778;
                org$pandalanguage$pandac$ClassDecl* $tmp779 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp775), $tmp777);
                $tmp774 = $tmp779;
                $tmp773 = $tmp774;
                value772 = $tmp773;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
                panda$core$Panda$unref$panda$core$Object($tmp775);
                panda$core$Object* $tmp784 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp783 = $tmp784;
                panda$collections$ListView* $tmp785 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp783), value772);
                $tmp782 = $tmp785;
                $tmp781 = $tmp782;
                valueVTable780 = $tmp781;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
                panda$core$Panda$unref$panda$core$Object($tmp783);
                ITable* $tmp793 = ((panda$collections$CollectionView*) valueVTable780)->$class->itable;
                while ($tmp793->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp793 = $tmp793->next;
                }
                $fn795 $tmp794 = $tmp793->methods[0];
                panda$core$Int64 $tmp796 = $tmp794(((panda$collections$CollectionView*) valueVTable780));
                panda$core$Int64$wrapper* $tmp797;
                $tmp797 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp797->value = $tmp796;
                $tmp792 = ((panda$core$Object*) $tmp797);
                panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s791, $tmp792);
                $tmp790 = $tmp798;
                panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s799);
                $tmp789 = $tmp800;
                panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s788, $tmp789);
                $tmp787 = $tmp801;
                panda$core$String* $tmp805 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp804 = $tmp805;
                panda$core$String* $tmp806 = panda$core$String$convert$R$panda$core$String($tmp804);
                $tmp803 = $tmp806;
                panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s807);
                $tmp802 = $tmp808;
                panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, $tmp802);
                $tmp786 = $tmp809;
                (($fn810) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp786);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
                panda$core$Panda$unref$panda$core$Object($tmp792);
                panda$core$String* $tmp816 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp815 = $tmp816;
                panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s814, $tmp815);
                $tmp813 = $tmp817;
                panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, &$s818);
                $tmp812 = $tmp819;
                panda$core$String* $tmp823 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp822 = $tmp823;
                panda$core$String* $tmp824 = panda$core$String$convert$R$panda$core$String($tmp822);
                $tmp821 = $tmp824;
                panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp821, &$s825);
                $tmp820 = $tmp826;
                panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, $tmp820);
                $tmp811 = $tmp827;
                (($fn828) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp811);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp820));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
            }
            $tmp699 = -1;
            goto $l697;
            $l697:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value772));
            value772 = NULL;
            valueVTable780 = NULL;
            switch ($tmp699) {
                case -1: goto $l829;
            }
            $l829:;
        }
        }
    }
    $tmp484 = -1;
    goto $l482;
    $l482:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) typesPath498));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path485));
    path485 = NULL;
    typesPath498 = NULL;
    switch ($tmp484) {
        case -1: goto $l830;
    }
    $l830:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result834 = NULL;
    panda$core$String* $tmp835;
    panda$core$String* $tmp836;
    org$pandalanguage$pandac$Type* $tmp837;
    panda$core$Object* $tmp838;
    panda$core$Int64 $tmp843;
    panda$core$String* $returnValue850;
    panda$core$String* $tmp851;
    panda$core$String* $tmp852;
    panda$core$String* $tmp857;
    int $tmp833;
    {
        panda$core$Object* $tmp839 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp838 = $tmp839;
        org$pandalanguage$pandac$Type* $tmp840 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp838));
        $tmp837 = $tmp840;
        panda$core$String* $tmp841 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp837);
        $tmp836 = $tmp841;
        $tmp835 = $tmp836;
        result834 = $tmp835;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp836));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
        panda$core$Panda$unref$panda$core$Object($tmp838);
        panda$core$Int64$init$builtin_int64(&$tmp843, 2);
        panda$core$Bit $tmp844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp843);
        bool $tmp842 = $tmp844.value;
        if (!$tmp842) goto $l845;
        panda$core$Bit $tmp847 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result834, &$s846);
        panda$core$Bit $tmp848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp847);
        $tmp842 = $tmp848.value;
        $l845:;
        panda$core$Bit $tmp849 = { $tmp842 };
        if ($tmp849.value) {
        {
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result834, &$s853);
            $tmp852 = $tmp854;
            $tmp851 = $tmp852;
            $returnValue850 = $tmp851;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
            $tmp833 = 0;
            goto $l831;
            $l855:;
            return $returnValue850;
        }
        }
        $tmp857 = result834;
        $returnValue850 = $tmp857;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
        $tmp833 = 1;
        goto $l831;
        $l858:;
        return $returnValue850;
    }
    $l831:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
    result834 = NULL;
    switch ($tmp833) {
        case 1: goto $l858;
        case 0: goto $l855;
    }
    $l860:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue863;
    panda$core$Bit $tmp864;
    panda$core$Bit result866;
    panda$core$Object* $tmp874;
    org$pandalanguage$pandac$ClassDecl* $tmp876;
    panda$core$Object* $tmp877;
    panda$core$String* $tmp899;
    panda$core$String* $tmp900;
    panda$core$String* $tmp902;
    panda$core$Bit $tmp861 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp862 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp861);
    if ($tmp862.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp864, false);
        $returnValue863 = $tmp864;
        return $returnValue863;
    }
    }
    panda$core$Bit $tmp869 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp868 = $tmp869.value;
    if (!$tmp868) goto $l870;
    panda$core$Bit $tmp871 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp868 = $tmp871.value;
    $l870:;
    panda$core$Bit $tmp872 = { $tmp868 };
    bool $tmp867 = $tmp872.value;
    if (!$tmp867) goto $l873;
    panda$core$Object* $tmp875 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp874 = $tmp875;
    panda$core$Object* $tmp878 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp877 = $tmp878;
    org$pandalanguage$pandac$ClassDecl* $tmp879 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp877), p_m->returnType);
    $tmp876 = $tmp879;
    panda$core$Bit $tmp880 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp874), $tmp876);
    $tmp867 = $tmp880.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
    panda$core$Panda$unref$panda$core$Object($tmp877);
    panda$core$Panda$unref$panda$core$Object($tmp874);
    $l873:;
    panda$core$Bit $tmp881 = { $tmp867 };
    result866 = $tmp881;
    panda$core$Bit $tmp883 = panda$core$Bit$$NOT$R$panda$core$Bit(result866);
    bool $tmp882 = $tmp883.value;
    if ($tmp882) goto $l884;
    panda$core$Bit $tmp886 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp887 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp886);
    bool $tmp885 = $tmp887.value;
    if (!$tmp885) goto $l888;
    panda$core$Bit $tmp890 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp889 = $tmp890.value;
    if ($tmp889) goto $l891;
    panda$core$Bit $tmp892 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp889 = $tmp892.value;
    $l891:;
    panda$core$Bit $tmp893 = { $tmp889 };
    $tmp885 = $tmp893.value;
    $l888:;
    panda$core$Bit $tmp894 = { $tmp885 };
    $tmp882 = $tmp894.value;
    $l884:;
    panda$core$Bit $tmp895 = { $tmp882 };
    if ($tmp895.value) goto $l896; else goto $l897;
    $l897:;
    panda$core$String* $tmp903 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp902 = $tmp903;
    panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s901, $tmp902);
    $tmp900 = $tmp904;
    panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp900, &$s905);
    $tmp899 = $tmp906;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s898, (panda$core$Int64) { 263 }, $tmp899);
    abort();
    $l896:;
    $returnValue863 = result866;
    return $returnValue863;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp911;
    panda$io$MemoryOutputStream* $tmp912;
    panda$collections$HashSet* $tmp913;
    panda$collections$HashSet* $tmp914;
    panda$core$String* separator915 = NULL;
    panda$core$String* $tmp916;
    panda$core$String* $tmp919;
    panda$core$String* $tmp920;
    panda$core$String* $tmp921;
    panda$core$String* $tmp922;
    panda$core$String* $tmp924;
    panda$core$String* $tmp929;
    panda$core$String* $tmp935;
    panda$core$String* $tmp936;
    panda$core$String* $tmp938;
    panda$core$String* $tmp939;
    panda$core$String* $tmp940;
    panda$core$String* $tmp941;
    panda$core$String* $tmp942;
    panda$core$String* $tmp947;
    panda$core$String* $tmp955;
    panda$core$String* $tmp956;
    panda$core$String* $tmp957;
    panda$core$String* $tmp958;
    panda$core$String* $tmp962;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$collections$Iterator* Iter$284$9974 = NULL;
    panda$collections$Iterator* $tmp975;
    panda$collections$Iterator* $tmp976;
    org$pandalanguage$pandac$MethodDecl$Parameter* p992 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp993;
    panda$core$Object* $tmp994;
    panda$core$String* name999 = NULL;
    panda$core$String* $tmp1000;
    panda$core$String* $tmp1001;
    panda$core$String* $tmp1002;
    panda$core$String* $tmp1004;
    panda$core$String* $tmp1009;
    panda$core$String* $tmp1010;
    panda$core$String* $tmp1011;
    panda$core$String* $tmp1012;
    panda$core$String* $tmp1016;
    panda$core$String* $tmp1022;
    panda$core$String* $tmp1023;
    int $tmp910;
    {
        {
            $tmp911 = self->importStream;
            $tmp912 = self->bodyImportStream;
            self->importStream = $tmp912;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
        }
        {
            $tmp913 = self->imports;
            $tmp914 = self->bodyImports;
            self->imports = $tmp914;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
        }
        $tmp916 = &$s917;
        separator915 = $tmp916;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp916));
        panda$core$Bit $tmp918 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp918.value) {
        {
            panda$core$String* $tmp925 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp924 = $tmp925;
            panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s923, $tmp924);
            $tmp922 = $tmp926;
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp922, &$s927);
            $tmp921 = $tmp928;
            panda$core$String* $tmp930 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp929 = $tmp930;
            panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, $tmp929);
            $tmp920 = $tmp931;
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp920, &$s932);
            $tmp919 = $tmp933;
            (($fn934) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp919);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
            {
                $tmp935 = separator915;
                $tmp936 = &$s937;
                separator915 = $tmp936;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp943 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp942 = $tmp943;
            panda$core$String* $tmp944 = panda$core$String$convert$R$panda$core$String($tmp942);
            $tmp941 = $tmp944;
            panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, &$s945);
            $tmp940 = $tmp946;
            panda$core$String* $tmp948 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp947 = $tmp948;
            panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, $tmp947);
            $tmp939 = $tmp949;
            panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp939, &$s950);
            $tmp938 = $tmp951;
            (($fn952) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp938);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp940));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp941));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
        }
        }
        panda$core$Bit $tmp953 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp954 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp953);
        if ($tmp954.value) {
        {
            panda$core$String* $tmp959 = panda$core$String$convert$R$panda$core$String(separator915);
            $tmp958 = $tmp959;
            panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s960);
            $tmp957 = $tmp961;
            panda$core$String* $tmp963 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp962 = $tmp963;
            panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, $tmp962);
            $tmp956 = $tmp964;
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, &$s965);
            $tmp955 = $tmp966;
            (($fn967) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp955);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
            {
                $tmp968 = separator915;
                $tmp969 = &$s970;
                separator915 = $tmp969;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
            }
        }
        }
        {
            int $tmp973;
            {
                ITable* $tmp977 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp977 = $tmp977->next;
                }
                $fn979 $tmp978 = $tmp977->methods[0];
                panda$collections$Iterator* $tmp980 = $tmp978(((panda$collections$Iterable*) p_m->parameters));
                $tmp976 = $tmp980;
                $tmp975 = $tmp976;
                Iter$284$9974 = $tmp975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
                $l981:;
                ITable* $tmp984 = Iter$284$9974->$class->itable;
                while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp984 = $tmp984->next;
                }
                $fn986 $tmp985 = $tmp984->methods[0];
                panda$core$Bit $tmp987 = $tmp985(Iter$284$9974);
                panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
                bool $tmp983 = $tmp988.value;
                if (!$tmp983) goto $l982;
                {
                    int $tmp991;
                    {
                        ITable* $tmp995 = Iter$284$9974->$class->itable;
                        while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp995 = $tmp995->next;
                        }
                        $fn997 $tmp996 = $tmp995->methods[1];
                        panda$core$Object* $tmp998 = $tmp996(Iter$284$9974);
                        $tmp994 = $tmp998;
                        $tmp993 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp994);
                        p992 = $tmp993;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
                        panda$core$Panda$unref$panda$core$Object($tmp994);
                        panda$core$String* $tmp1005 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p992->name);
                        $tmp1004 = $tmp1005;
                        panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1003, $tmp1004);
                        $tmp1002 = $tmp1006;
                        panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, &$s1007);
                        $tmp1001 = $tmp1008;
                        $tmp1000 = $tmp1001;
                        name999 = $tmp1000;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                        panda$core$String* $tmp1013 = panda$core$String$convert$R$panda$core$String(separator915);
                        $tmp1012 = $tmp1013;
                        panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1012, &$s1014);
                        $tmp1011 = $tmp1015;
                        panda$core$String* $tmp1017 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p992->type, name999);
                        $tmp1016 = $tmp1017;
                        panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1011, $tmp1016);
                        $tmp1010 = $tmp1018;
                        panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1010, &$s1019);
                        $tmp1009 = $tmp1020;
                        (($fn1021) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp1009);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1016));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
                        {
                            $tmp1022 = separator915;
                            $tmp1023 = &$s1024;
                            separator915 = $tmp1023;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1023));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                        }
                    }
                    $tmp991 = -1;
                    goto $l989;
                    $l989:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name999));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p992));
                    p992 = NULL;
                    name999 = NULL;
                    switch ($tmp991) {
                        case -1: goto $l1025;
                    }
                    $l1025:;
                }
                goto $l981;
                $l982:;
            }
            $tmp973 = -1;
            goto $l971;
            $l971:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$284$9974));
            Iter$284$9974 = NULL;
            switch ($tmp973) {
                case -1: goto $l1026;
            }
            $l1026:;
        }
        (($fn1028) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s1027);
    }
    $tmp910 = -1;
    goto $l908;
    $l908:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator915));
    separator915 = NULL;
    switch ($tmp910) {
        case -1: goto $l1029;
    }
    $l1029:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp1030;
    panda$core$String* $tmp1033;
    panda$core$String* $tmp1036;
    panda$core$String* $tmp1039;
    panda$core$String* $tmp1031 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp1030 = $tmp1031;
    (($fn1032) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), $tmp1030);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
    panda$core$String* $tmp1034 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp1033 = $tmp1034;
    (($fn1035) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), $tmp1033);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
    panda$core$String* $tmp1037 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp1036 = $tmp1037;
    (($fn1038) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1036);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
    panda$core$String* $tmp1040 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp1039 = $tmp1040;
    (($fn1041) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1039);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp1044;
    {
    }
    $tmp1044 = -1;
    goto $l1042;
    $l1042:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1044) {
        case -1: goto $l1045;
    }
    $l1045:;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->cCodeGen));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->cCodeGenRetain));
}

