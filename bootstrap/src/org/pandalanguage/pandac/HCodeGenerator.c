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
#include "org/pandalanguage/pandac/CCodeGenerator.h"
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

typedef void (*$fn250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn270)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn513)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn515)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn541)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn556)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn563)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn574)(panda$collections$Iterator*);
typedef void (*$fn595)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn608)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn629)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn663)(panda$collections$CollectionView*);
typedef void (*$fn678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn768)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn792)(panda$collections$CollectionView*);
typedef void (*$fn807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn964)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn983)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn994)(panda$collections$Iterator*);
typedef void (*$fn1018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1025)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1041)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };

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
    org$pandalanguage$pandac$CCodeGenerator* $tmp38;
    org$pandalanguage$pandac$CCodeGenerator* $tmp39;
    org$pandalanguage$pandac$CCodeGenerator* $tmp40;
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
        $tmp38 = self->cCodeGenRetain;
        org$pandalanguage$pandac$CCodeGenerator* $tmp41 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
        org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator($tmp41, p_outDir, self);
        $tmp40 = $tmp41;
        $tmp39 = $tmp40;
        self->cCodeGenRetain = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
    }
    org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(self, p_outDir, self->cCodeGenRetain);
}
void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir, org$pandalanguage$pandac$CCodeGenerator* p_cCodeGen) {
    panda$core$Weak* $tmp42;
    panda$core$Weak* $tmp43;
    panda$io$MemoryOutputStream* $tmp45;
    panda$io$MemoryOutputStream* $tmp46;
    panda$io$MemoryOutputStream* $tmp48;
    panda$io$MemoryOutputStream* $tmp49;
    panda$io$IndentedOutputStream* $tmp51;
    panda$io$IndentedOutputStream* $tmp52;
    panda$io$MemoryOutputStream* $tmp54;
    panda$io$MemoryOutputStream* $tmp55;
    panda$io$MemoryOutputStream* $tmp57;
    panda$io$MemoryOutputStream* $tmp58;
    panda$io$IndentedOutputStream* $tmp60;
    panda$io$IndentedOutputStream* $tmp61;
    panda$collections$HashSet* $tmp63;
    panda$collections$HashSet* $tmp64;
    panda$collections$HashSet* $tmp66;
    panda$collections$HashSet* $tmp67;
    panda$collections$HashSet* $tmp69;
    panda$io$MemoryOutputStream* $tmp70;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp71;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp72;
    panda$io$MemoryOutputStream* $tmp75;
    panda$core$Bit $tmp77;
    panda$io$File* $tmp78;
    panda$io$File* $tmp79;
    panda$io$IndentedOutputStream* $tmp80;
    panda$io$IndentedOutputStream* $tmp81;
    panda$io$IndentedOutputStream* $tmp82;
    panda$io$MemoryOutputStream* $tmp84;
    panda$io$IndentedOutputStream* $tmp86;
    panda$io$IndentedOutputStream* $tmp87;
    panda$io$IndentedOutputStream* $tmp88;
    panda$io$MemoryOutputStream* $tmp90;
    panda$core$Weak* $tmp92;
    panda$core$Weak* $tmp93;
    panda$core$Weak* $tmp94;
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
    panda$core$Weak* $tmp44 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp44, ((panda$core$Object*) NULL));
    $tmp43 = $tmp44;
    $tmp42 = $tmp43;
    self->compiler = $tmp42;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$io$MemoryOutputStream* $tmp47 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp47);
    $tmp46 = $tmp47;
    $tmp45 = $tmp46;
    self->typeImportStream = $tmp45;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    panda$io$MemoryOutputStream* $tmp50 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp50);
    $tmp49 = $tmp50;
    $tmp48 = $tmp49;
    self->typesBuffer = $tmp48;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
    panda$io$IndentedOutputStream* $tmp53 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp53, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp52 = $tmp53;
    $tmp51 = $tmp52;
    self->types = $tmp51;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$io$MemoryOutputStream* $tmp56 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp56);
    $tmp55 = $tmp56;
    $tmp54 = $tmp55;
    self->bodyImportStream = $tmp54;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    panda$io$MemoryOutputStream* $tmp59 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp59);
    $tmp58 = $tmp59;
    $tmp57 = $tmp58;
    self->bodyBuffer = $tmp57;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
    panda$io$IndentedOutputStream* $tmp62 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp62, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp61 = $tmp62;
    $tmp60 = $tmp61;
    self->body = $tmp60;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    panda$collections$HashSet* $tmp65 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp65);
    $tmp64 = $tmp65;
    $tmp63 = $tmp64;
    self->typeImports = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$collections$HashSet* $tmp68 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp68);
    $tmp67 = $tmp68;
    $tmp66 = $tmp67;
    self->bodyImports = $tmp66;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
    $tmp69 = self->typeImports;
    self->imports = $tmp69;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
    $tmp70 = self->typeImportStream;
    self->importStream = $tmp70;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp73 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp76 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp76);
    $tmp75 = $tmp76;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp73, &$s74, ((panda$io$OutputStream*) $tmp75));
    $tmp72 = $tmp73;
    $tmp71 = $tmp72;
    self->llvmCodeGen = $tmp71;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    panda$core$Bit$init$builtin_bit(&$tmp77, false);
    self->inClass = $tmp77;
    {
        $tmp78 = self->outDir;
        $tmp79 = p_outDir;
        self->outDir = $tmp79;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
    }
    {
        $tmp80 = self->out;
        panda$io$IndentedOutputStream* $tmp83 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp85 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp85);
        $tmp84 = $tmp85;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp83, ((panda$io$OutputStream*) $tmp84));
        $tmp82 = $tmp83;
        $tmp81 = $tmp82;
        self->out = $tmp81;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
    {
        $tmp86 = self->typesOut;
        panda$io$IndentedOutputStream* $tmp89 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp91 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp91);
        $tmp90 = $tmp91;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp89, ((panda$io$OutputStream*) $tmp90));
        $tmp88 = $tmp89;
        $tmp87 = $tmp88;
        self->typesOut = $tmp87;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    }
    {
        $tmp92 = self->cCodeGen;
        panda$core$Weak* $tmp95 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp95, ((panda$core$Object*) p_cCodeGen));
        $tmp94 = $tmp95;
        $tmp93 = $tmp94;
        self->cCodeGen = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $returnValue96;
    panda$core$String* $tmp97;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp98 = $tmp99;
    $tmp97 = $tmp98;
    $returnValue96 = $tmp97;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    return $returnValue96;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName104 = NULL;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106;
    panda$core$String* $returnValue113;
    panda$core$String* $tmp114;
    panda$core$String* $tmp115;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp116;
    panda$core$Int64 $tmp117;
    panda$core$Bit $tmp118;
    int $tmp103;
    {
        panda$core$String* $tmp107 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp106 = $tmp107;
        $tmp105 = $tmp106;
        llvmName104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$core$Bit $tmp109 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName104, &$s108);
        if ($tmp109.value) goto $l110; else goto $l111;
        $l111:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s112, (panda$core$Int64) { 61 });
        abort();
        $l110:;
        panda$core$Int64$init$builtin_int64(&$tmp117, 1);
        panda$core$Bit$init$builtin_bit(&$tmp118, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp116, ((panda$core$Int64$nullable) { $tmp117, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp118);
        panda$core$String* $tmp119 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName104, $tmp116);
        $tmp115 = $tmp119;
        $tmp114 = $tmp115;
        $returnValue113 = $tmp114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
        $tmp103 = 0;
        goto $l101;
        $l120:;
        return $returnValue113;
    }
    $l101:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName104));
    llvmName104 = NULL;
    switch ($tmp103) {
        case 0: goto $l120;
    }
    $l122:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue123;
    panda$core$Int64 $tmp124 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue123 = $tmp124;
    return $returnValue123;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue126;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$String* $tmp129;
    panda$core$String* $tmp130;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    panda$core$String* $tmp137 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s135, &$s136);
    $tmp134 = $tmp137;
    panda$core$String* $tmp140 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp134, &$s138, &$s139);
    $tmp133 = $tmp140;
    panda$core$String* $tmp143 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp133, &$s141, &$s142);
    $tmp132 = $tmp143;
    panda$core$String* $tmp146 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp132, &$s144, &$s145);
    $tmp131 = $tmp146;
    panda$core$String* $tmp149 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp131, &$s147, &$s148);
    $tmp130 = $tmp149;
    panda$core$String* $tmp152 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp130, &$s150, &$s151);
    $tmp129 = $tmp152;
    panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, p_extension);
    $tmp128 = $tmp153;
    $tmp127 = $tmp128;
    $returnValue126 = $tmp127;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
    return $returnValue126;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$75_9155;
    panda$core$Int64 $tmp156;
    panda$core$String* $returnValue158;
    panda$core$String* $tmp159;
    panda$core$Int64 $tmp162;
    panda$core$String* $tmp164;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$Object* $tmp168;
    panda$core$Int64 $tmp170;
    panda$core$Int64 $tmp177;
    panda$core$String* $tmp179;
    panda$core$String* $tmp180;
    panda$core$String* $tmp181;
    panda$core$Object* $tmp183;
    panda$core$Int64 $tmp185;
    panda$core$Int64 $tmp192;
    panda$core$String* $tmp194;
    panda$core$Int64 $tmp197;
    panda$core$String* $tmp200;
    panda$core$String* $tmp203;
    panda$core$Bit $tmp206;
    panda$core$Int64 $tmp210;
    panda$core$String* name215 = NULL;
    panda$core$String* $tmp216;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    org$pandalanguage$pandac$ClassDecl* cl224 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp225;
    org$pandalanguage$pandac$ClassDecl* $tmp226;
    panda$core$Object* $tmp227;
    panda$core$Object* $tmp233;
    panda$core$String* $tmp239;
    panda$core$String* $tmp240;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp251;
    panda$core$String* $tmp252;
    panda$core$String* includePath257 = NULL;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    panda$core$String* $tmp271;
    panda$core$Int64 $tmp275;
    org$pandalanguage$pandac$ClassDecl* cl280 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp281;
    org$pandalanguage$pandac$ClassDecl* $tmp282;
    panda$core$Object* $tmp283;
    panda$core$Object* $tmp289;
    panda$core$String* $tmp292;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$core$Object* $tmp295;
    panda$core$Int64 $tmp296;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$Object* $tmp305;
    panda$core$Int64 $tmp306;
    panda$core$Int64 $tmp312;
    panda$core$Object* $tmp317;
    panda$core$Int64 $tmp318;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$Object* $tmp325;
    panda$core$Int64 $tmp326;
    org$pandalanguage$pandac$ClassDecl* cl333 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp334;
    org$pandalanguage$pandac$ClassDecl* $tmp335;
    panda$core$Object* $tmp336;
    panda$core$String* name343 = NULL;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    org$pandalanguage$pandac$ClassDecl* cl352 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp353;
    org$pandalanguage$pandac$ClassDecl* $tmp354;
    panda$core$Object* $tmp355;
    panda$core$Object* $tmp361;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
    panda$core$String* $tmp369;
    panda$core$String* $tmp370;
    panda$core$String* $tmp379;
    panda$core$String* $tmp380;
    panda$core$String* includePath386 = NULL;
    panda$core$String* $tmp387;
    panda$core$String* $tmp388;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp400;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    panda$core$Object* $tmp407;
    panda$core$Int64 $tmp408;
    panda$core$Int64 $tmp414;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$Object* $tmp418;
    panda$core$Int64 $tmp423;
    panda$core$Int64 $tmp426;
    panda$core$String* $tmp429;
    panda$core$String* $tmp430;
    org$pandalanguage$pandac$Type* $tmp431;
    panda$core$Int64 $tmp436;
    panda$core$Int64 $tmp439;
    panda$core$String* $tmp442;
    panda$core$String* $tmp443;
    org$pandalanguage$pandac$Type* $tmp444;
    panda$core$Bit $tmp448;
    panda$core$String* $tmp452;
    panda$core$String* $tmp453;
    {
        $match$75_9155 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp156, 4);
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp156);
        if ($tmp157.value) {
        {
            $tmp159 = &$s160;
            $returnValue158 = $tmp159;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
            return $returnValue158;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp162, 2);
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp162);
        if ($tmp163.value) {
        {
            panda$core$Int64 $tmp169 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp170, 8);
            panda$core$Int64 $tmp171 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp169, $tmp170);
            panda$core$Int64$wrapper* $tmp172;
            $tmp172 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp172->value = $tmp171;
            $tmp168 = ((panda$core$Object*) $tmp172);
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s167, $tmp168);
            $tmp166 = $tmp173;
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s174);
            $tmp165 = $tmp175;
            $tmp164 = $tmp165;
            $returnValue158 = $tmp164;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
            panda$core$Panda$unref$panda$core$Object($tmp168);
            return $returnValue158;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp177, 3);
        panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp177);
        if ($tmp178.value) {
        {
            panda$core$Int64 $tmp184 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp185, 8);
            panda$core$Int64 $tmp186 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp184, $tmp185);
            panda$core$Int64$wrapper* $tmp187;
            $tmp187 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp187->value = $tmp186;
            $tmp183 = ((panda$core$Object*) $tmp187);
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s182, $tmp183);
            $tmp181 = $tmp188;
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s189);
            $tmp180 = $tmp190;
            $tmp179 = $tmp180;
            $returnValue158 = $tmp179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
            panda$core$Panda$unref$panda$core$Object($tmp183);
            return $returnValue158;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp192, 9);
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp192);
        if ($tmp193.value) {
        {
            $tmp194 = &$s195;
            $returnValue158 = $tmp194;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
            return $returnValue158;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp197, 10);
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp197);
        if ($tmp198.value) {
        {
            panda$core$Int64 $tmp199 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp199.value) {
                case 4:
                {
                    $tmp200 = &$s201;
                    $returnValue158 = $tmp200;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                    return $returnValue158;
                }
                break;
                case 8:
                {
                    $tmp203 = &$s204;
                    $returnValue158 = $tmp203;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                    return $returnValue158;
                }
                break;
                default:
                {
                    panda$core$Bit$init$builtin_bit(&$tmp206, false);
                    if ($tmp206.value) goto $l207; else goto $l208;
                    $l208:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s209, (panda$core$Int64) { 88 });
                    abort();
                    $l207:;
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp210, 0);
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp210);
        if ($tmp211.value) {
        {
            int $tmp214;
            {
                panda$core$String* $tmp220 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp219 = $tmp220;
                panda$core$String* $tmp221 = panda$core$String$convert$R$panda$core$String($tmp219);
                $tmp218 = $tmp221;
                panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s222);
                $tmp217 = $tmp223;
                $tmp216 = $tmp217;
                name215 = $tmp216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Object* $tmp228 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp227 = $tmp228;
                org$pandalanguage$pandac$ClassDecl* $tmp229 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp227), p_t);
                $tmp226 = $tmp229;
                $tmp225 = $tmp226;
                cl224 = $tmp225;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object($tmp227);
                if (((panda$core$Bit) { cl224 != NULL }).value) goto $l230; else goto $l231;
                $l231:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s232, (panda$core$Int64) { 93 });
                abort();
                $l230:;
                panda$core$Object* $tmp234 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp233 = $tmp234;
                panda$core$Bit $tmp235 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp233), cl224);
                panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
                panda$core$Panda$unref$panda$core$Object($tmp233);
                if ($tmp236.value) {
                {
                    panda$core$Bit $tmp237 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name215));
                    panda$core$Bit $tmp238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp237);
                    if ($tmp238.value) {
                    {
                        panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, name215);
                        $tmp242 = $tmp244;
                        panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s245);
                        $tmp241 = $tmp246;
                        panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, name215);
                        $tmp240 = $tmp247;
                        panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s248);
                        $tmp239 = $tmp249;
                        (($fn250) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp239);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                        panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name215));
                    }
                    }
                    panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name215, &$s253);
                    $tmp252 = $tmp254;
                    $tmp251 = $tmp252;
                    $returnValue158 = $tmp251;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
                    $tmp214 = 0;
                    goto $l212;
                    $l255:;
                    return $returnValue158;
                }
                }
                panda$core$String* $tmp261 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl224, &$s260);
                $tmp259 = $tmp261;
                $tmp258 = $tmp259;
                includePath257 = $tmp258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                panda$core$Bit $tmp262 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath257));
                panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
                if ($tmp263.value) {
                {
                    panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s266, includePath257);
                    $tmp265 = $tmp267;
                    panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s268);
                    $tmp264 = $tmp269;
                    (($fn270) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp264);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath257));
                }
                }
                $tmp271 = name215;
                $returnValue158 = $tmp271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                $tmp214 = 1;
                goto $l212;
                $l272:;
                return $returnValue158;
            }
            $l212:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath257));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name215));
            name215 = NULL;
            cl224 = NULL;
            includePath257 = NULL;
            switch ($tmp214) {
                case 1: goto $l272;
                case 0: goto $l255;
            }
            $l274:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp275, 1);
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp275);
        if ($tmp276.value) {
        {
            int $tmp279;
            {
                panda$core$Object* $tmp284 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp283 = $tmp284;
                org$pandalanguage$pandac$ClassDecl* $tmp285 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp283), p_t);
                $tmp282 = $tmp285;
                $tmp281 = $tmp282;
                cl280 = $tmp281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
                panda$core$Panda$unref$panda$core$Object($tmp283);
                if (((panda$core$Bit) { cl280 != NULL }).value) goto $l286; else goto $l287;
                $l287:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s288, (panda$core$Int64) { 109 });
                abort();
                $l286:;
                panda$core$Object* $tmp290 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp289 = $tmp290;
                panda$core$Bit $tmp291 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp289), cl280);
                panda$core$Panda$unref$panda$core$Object($tmp289);
                if ($tmp291.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp296, 0);
                    panda$core$Object* $tmp297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp296);
                    $tmp295 = $tmp297;
                    panda$core$String* $tmp298 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp295));
                    $tmp294 = $tmp298;
                    panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp294, &$s299);
                    $tmp293 = $tmp300;
                    $tmp292 = $tmp293;
                    $returnValue158 = $tmp292;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp292));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                    panda$core$Panda$unref$panda$core$Object($tmp295);
                    $tmp279 = 0;
                    goto $l277;
                    $l301:;
                    return $returnValue158;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp306, 0);
                panda$core$Object* $tmp307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp306);
                $tmp305 = $tmp307;
                panda$core$String* $tmp308 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp305));
                $tmp304 = $tmp308;
                $tmp303 = $tmp304;
                $returnValue158 = $tmp303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                panda$core$Panda$unref$panda$core$Object($tmp305);
                $tmp279 = 1;
                goto $l277;
                $l309:;
                return $returnValue158;
            }
            $l277:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl280));
            cl280 = NULL;
            switch ($tmp279) {
                case 0: goto $l301;
                case 1: goto $l309;
            }
            $l311:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp312, 11);
        panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp312);
        if ($tmp313.value) {
        {
            int $tmp316;
            {
                panda$core$Int64$init$builtin_int64(&$tmp318, 0);
                panda$core$Object* $tmp319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp318);
                $tmp317 = $tmp319;
                panda$core$Bit $tmp321 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp317))->name, &$s320);
                panda$core$Panda$unref$panda$core$Object($tmp317);
                if ($tmp321.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp326, 1);
                    panda$core$Object* $tmp327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp326);
                    $tmp325 = $tmp327;
                    panda$core$String* $tmp328 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp325));
                    $tmp324 = $tmp328;
                    panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s329);
                    $tmp323 = $tmp330;
                    $tmp322 = $tmp323;
                    $returnValue158 = $tmp322;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp322));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                    panda$core$Panda$unref$panda$core$Object($tmp325);
                    $tmp316 = 0;
                    goto $l314;
                    $l331:;
                    return $returnValue158;
                }
                }
                panda$core$Object* $tmp337 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp336 = $tmp337;
                org$pandalanguage$pandac$ClassDecl* $tmp338 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp336), p_t);
                $tmp335 = $tmp338;
                $tmp334 = $tmp335;
                cl333 = $tmp334;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                panda$core$Panda$unref$panda$core$Object($tmp336);
                panda$core$Bit $tmp339 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl333);
                if ($tmp339.value) {
                {
                    int $tmp342;
                    {
                        panda$core$String* $tmp348 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp347 = $tmp348;
                        panda$core$String* $tmp349 = panda$core$String$convert$R$panda$core$String($tmp347);
                        $tmp346 = $tmp349;
                        panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s350);
                        $tmp345 = $tmp351;
                        $tmp344 = $tmp345;
                        name343 = $tmp344;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                        panda$core$Object* $tmp356 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp355 = $tmp356;
                        org$pandalanguage$pandac$ClassDecl* $tmp357 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp355), p_t);
                        $tmp354 = $tmp357;
                        $tmp353 = $tmp354;
                        cl352 = $tmp353;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                        panda$core$Panda$unref$panda$core$Object($tmp355);
                        if (((panda$core$Bit) { cl352 != NULL }).value) goto $l358; else goto $l359;
                        $l359:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s360, (panda$core$Int64) { 122 });
                        abort();
                        $l358:;
                        panda$core$Object* $tmp362 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp361 = $tmp362;
                        panda$core$Bit $tmp363 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp361), cl352);
                        panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
                        panda$core$Panda$unref$panda$core$Object($tmp361);
                        if ($tmp364.value) {
                        {
                            panda$core$Bit $tmp365 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name343));
                            panda$core$Bit $tmp366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp365);
                            if ($tmp366.value) {
                            {
                                panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s371, name343);
                                $tmp370 = $tmp372;
                                panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s373);
                                $tmp369 = $tmp374;
                                panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, name343);
                                $tmp368 = $tmp375;
                                panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s376);
                                $tmp367 = $tmp377;
                                (($fn378) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp367);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
                                panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name343));
                            }
                            }
                            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name343, &$s381);
                            $tmp380 = $tmp382;
                            $tmp379 = $tmp380;
                            $returnValue158 = $tmp379;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                            $tmp342 = 0;
                            goto $l340;
                            $l383:;
                            $tmp316 = 1;
                            goto $l314;
                            $l384:;
                            return $returnValue158;
                        }
                        }
                        panda$core$String* $tmp390 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl352, &$s389);
                        $tmp388 = $tmp390;
                        $tmp387 = $tmp388;
                        includePath386 = $tmp387;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                        panda$core$Bit $tmp391 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath386));
                        panda$core$Bit $tmp392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp391);
                        if ($tmp392.value) {
                        {
                            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s395, includePath386);
                            $tmp394 = $tmp396;
                            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s397);
                            $tmp393 = $tmp398;
                            (($fn399) ((panda$io$OutputStream*) self->importStream)->$class->vtable[21])(((panda$io$OutputStream*) self->importStream), $tmp393);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                            panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath386));
                        }
                        }
                        $tmp400 = name343;
                        $returnValue158 = $tmp400;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
                        $tmp342 = 1;
                        goto $l340;
                        $l401:;
                        $tmp316 = 2;
                        goto $l314;
                        $l402:;
                        return $returnValue158;
                    }
                    $l340:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath386));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name343));
                    name343 = NULL;
                    cl352 = NULL;
                    includePath386 = NULL;
                    switch ($tmp342) {
                        case 0: goto $l383;
                        case 1: goto $l401;
                    }
                    $l404:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp408, 0);
                panda$core$Object* $tmp409 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp408);
                $tmp407 = $tmp409;
                panda$core$String* $tmp410 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp407));
                $tmp406 = $tmp410;
                $tmp405 = $tmp406;
                $returnValue158 = $tmp405;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp405));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
                panda$core$Panda$unref$panda$core$Object($tmp407);
                $tmp316 = 3;
                goto $l314;
                $l411:;
                return $returnValue158;
            }
            $l314:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl333));
            cl333 = NULL;
            switch ($tmp316) {
                case 3: goto $l411;
                case 2: goto $l402;
                case 1: goto $l384;
                case 0: goto $l331;
            }
            $l413:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp414, 12);
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp414);
        if ($tmp415.value) {
        {
            panda$core$Object* $tmp419 = panda$core$Weak$get$R$panda$core$Weak$T(p_t->parameter);
            $tmp418 = $tmp419;
            panda$core$String* $tmp420 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp418)->bound);
            $tmp417 = $tmp420;
            $tmp416 = $tmp417;
            $returnValue158 = $tmp416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
            panda$core$Panda$unref$panda$core$Object($tmp418);
            return $returnValue158;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp423, 14);
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp423);
        bool $tmp422 = $tmp424.value;
        if ($tmp422) goto $l425;
        panda$core$Int64$init$builtin_int64(&$tmp426, 15);
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp426);
        $tmp422 = $tmp427.value;
        $l425:;
        panda$core$Bit $tmp428 = { $tmp422 };
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$Type* $tmp432 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp431 = $tmp432;
            panda$core$String* $tmp433 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp431);
            $tmp430 = $tmp433;
            $tmp429 = $tmp430;
            $returnValue158 = $tmp429;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
            return $returnValue158;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp436, 16);
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp436);
        bool $tmp435 = $tmp437.value;
        if ($tmp435) goto $l438;
        panda$core$Int64$init$builtin_int64(&$tmp439, 17);
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_9155.$rawValue, $tmp439);
        $tmp435 = $tmp440.value;
        $l438:;
        panda$core$Bit $tmp441 = { $tmp435 };
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$Type* $tmp445 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp444 = $tmp445;
            panda$core$String* $tmp446 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp444);
            $tmp443 = $tmp446;
            $tmp442 = $tmp443;
            $returnValue158 = $tmp442;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
            return $returnValue158;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp448, false);
            if ($tmp448.value) goto $l449; else goto $l450;
            $l450:;
            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s454, ((panda$core$Object*) p_t));
            $tmp453 = $tmp455;
            panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s456);
            $tmp452 = $tmp457;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s451, (panda$core$Int64) { 145 }, $tmp452);
            abort();
            $l449:;
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
    panda$core$String* $returnValue458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp461;
    panda$core$String* $tmp462;
    panda$core$String* $tmp463;
    panda$core$String* $tmp464;
    panda$core$String* $tmp465 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp464 = $tmp465;
    panda$core$String* $tmp466 = panda$core$String$convert$R$panda$core$String($tmp464);
    $tmp463 = $tmp466;
    panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, &$s467);
    $tmp462 = $tmp468;
    panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp462, p_name);
    $tmp461 = $tmp469;
    panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s470);
    $tmp460 = $tmp471;
    $tmp459 = $tmp460;
    $returnValue458 = $tmp459;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
    return $returnValue458;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp473;
    panda$core$Weak* $tmp474;
    panda$core$Weak* $tmp475;
    {
        $tmp473 = self->compiler;
        panda$core$Weak* $tmp476 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp476, ((panda$core$Object*) p_compiler));
        $tmp475 = $tmp476;
        $tmp474 = $tmp475;
        self->compiler = $tmp474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue477;
    panda$io$File* $tmp478;
    panda$io$File* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp480 = $tmp481;
    panda$io$File* $tmp482 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp480);
    $tmp479 = $tmp482;
    $tmp478 = $tmp479;
    $returnValue477 = $tmp478;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
    return $returnValue477;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp487;
    panda$io$File* path488 = NULL;
    panda$io$File* $tmp489;
    panda$io$File* $tmp490;
    panda$io$File* $tmp493;
    panda$io$IndentedOutputStream* $tmp495;
    panda$io$IndentedOutputStream* $tmp496;
    panda$io$IndentedOutputStream* $tmp497;
    panda$io$OutputStream* $tmp499;
    panda$io$File* typesPath501 = NULL;
    panda$io$File* $tmp502;
    panda$io$File* $tmp503;
    panda$io$IndentedOutputStream* $tmp506;
    panda$io$IndentedOutputStream* $tmp507;
    panda$io$IndentedOutputStream* $tmp508;
    panda$io$OutputStream* $tmp510;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$String* $tmp519;
    panda$io$MemoryOutputStream* $tmp529;
    panda$io$MemoryOutputStream* $tmp530;
    panda$collections$HashSet* $tmp531;
    panda$collections$HashSet* $tmp532;
    panda$core$String* $tmp533;
    panda$core$String* $tmp534;
    panda$core$String* $tmp536;
    panda$core$Int64 $tmp542;
    panda$collections$Iterator* Iter$189$9547 = NULL;
    panda$collections$Iterator* $tmp548;
    panda$collections$Iterator* $tmp549;
    panda$collections$ListView* $tmp550;
    panda$core$Object* $tmp551;
    org$pandalanguage$pandac$FieldDecl* f569 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp570;
    panda$core$Object* $tmp571;
    panda$core$Object* $tmp576;
    org$pandalanguage$pandac$Type* $tmp578;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$Object* $tmp589;
    panda$core$String* $tmp596;
    panda$core$String* $tmp597;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $tmp600;
    panda$core$Int64 $tmp617;
    panda$core$String* $tmp619;
    panda$core$String* $tmp620;
    panda$core$String* $tmp622;
    panda$core$String* $tmp630;
    panda$core$String* $tmp631;
    panda$core$String* $tmp632;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    org$pandalanguage$pandac$Type* $tmp639;
    panda$core$String* $tmp645;
    org$pandalanguage$pandac$Type* $tmp646;
    panda$core$String* $tmp653;
    panda$core$String* $tmp654;
    panda$core$Object* $tmp656;
    panda$collections$ListView* $tmp657;
    panda$core$Object* $tmp658;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    panda$core$String* $tmp672;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$String* $tmp681;
    panda$core$String* $tmp682;
    panda$core$String* $tmp684;
    panda$core$String* $tmp689;
    panda$core$Object* $tmp695;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp704;
    panda$core$Int64 $tmp710;
    panda$core$String* $tmp716;
    panda$core$String* $tmp717;
    panda$core$String* $tmp718;
    org$pandalanguage$pandac$Type* $tmp719;
    panda$core$Int64 $tmp726;
    panda$core$String* $tmp728;
    panda$core$String* $tmp729;
    panda$core$String* $tmp731;
    panda$core$String* $tmp737;
    panda$core$String* $tmp738;
    panda$core$String* $tmp740;
    panda$core$Int64 $tmp746;
    panda$core$String* $tmp748;
    panda$core$String* $tmp749;
    panda$core$String* $tmp750;
    panda$core$Int64 $tmp758;
    panda$core$String* $tmp760;
    panda$core$String* $tmp761;
    panda$core$String* $tmp763;
    org$pandalanguage$pandac$ClassDecl* value769 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp770;
    org$pandalanguage$pandac$ClassDecl* $tmp771;
    panda$core$Object* $tmp772;
    org$pandalanguage$pandac$Type* $tmp774;
    panda$collections$ListView* valueVTable777 = NULL;
    panda$collections$ListView* $tmp778;
    panda$collections$ListView* $tmp779;
    panda$core$Object* $tmp780;
    panda$core$String* $tmp783;
    panda$core$String* $tmp784;
    panda$core$String* $tmp786;
    panda$core$String* $tmp787;
    panda$core$Object* $tmp789;
    panda$core$String* $tmp799;
    panda$core$String* $tmp800;
    panda$core$String* $tmp801;
    panda$core$String* $tmp808;
    panda$core$String* $tmp809;
    panda$core$String* $tmp810;
    panda$core$String* $tmp812;
    panda$core$String* $tmp817;
    panda$core$String* $tmp818;
    panda$core$String* $tmp819;
    int $tmp486;
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
        panda$core$Bit$init$builtin_bit(&$tmp487, true);
        self->inClass = $tmp487;
        panda$io$File* $tmp492 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s491);
        $tmp490 = $tmp492;
        $tmp489 = $tmp490;
        path488 = $tmp489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        panda$io$File* $tmp494 = panda$io$File$parent$R$panda$io$File$Q(path488);
        $tmp493 = $tmp494;
        panda$io$File$createDirectories($tmp493);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
        {
            $tmp495 = self->out;
            panda$io$IndentedOutputStream* $tmp498 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp500 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path488);
            $tmp499 = $tmp500;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp498, $tmp499);
            $tmp497 = $tmp498;
            $tmp496 = $tmp497;
            self->out = $tmp496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        }
        panda$io$File* $tmp505 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s504);
        $tmp503 = $tmp505;
        $tmp502 = $tmp503;
        typesPath501 = $tmp502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        {
            $tmp506 = self->typesOut;
            panda$io$IndentedOutputStream* $tmp509 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp511 = panda$io$File$openOutputStream$R$panda$io$OutputStream(typesPath501);
            $tmp510 = $tmp511;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp509, $tmp510);
            $tmp508 = $tmp509;
            $tmp507 = $tmp508;
            self->typesOut = $tmp507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
        }
        (($fn513) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), &$s512);
        (($fn515) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), &$s514);
        panda$core$String* $tmp520 = panda$io$File$name$R$panda$core$String(typesPath501);
        $tmp519 = $tmp520;
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s518, $tmp519);
        $tmp517 = $tmp521;
        panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s522);
        $tmp516 = $tmp523;
        (($fn524) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp516);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
        (($fn526) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), &$s525);
        (($fn528) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), &$s527);
        {
            $tmp529 = self->importStream;
            $tmp530 = self->typeImportStream;
            self->importStream = $tmp530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
        }
        {
            $tmp531 = self->imports;
            $tmp532 = self->typeImports;
            self->imports = $tmp532;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
        }
        panda$core$String* $tmp537 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp536 = $tmp537;
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s535, $tmp536);
        $tmp534 = $tmp538;
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s539);
        $tmp533 = $tmp540;
        (($fn541) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp533);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
        panda$core$Int64$init$builtin_int64(&$tmp542, 1);
        panda$core$Int64 $tmp543 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp542);
        self->types->level = $tmp543;
        {
            int $tmp546;
            {
                panda$core$Object* $tmp552 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp551 = $tmp552;
                panda$collections$ListView* $tmp553 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp551), p_cl);
                $tmp550 = $tmp553;
                ITable* $tmp554 = ((panda$collections$Iterable*) $tmp550)->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[0];
                panda$collections$Iterator* $tmp557 = $tmp555(((panda$collections$Iterable*) $tmp550));
                $tmp549 = $tmp557;
                $tmp548 = $tmp549;
                Iter$189$9547 = $tmp548;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                panda$core$Panda$unref$panda$core$Object($tmp551);
                $l558:;
                ITable* $tmp561 = Iter$189$9547->$class->itable;
                while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp561 = $tmp561->next;
                }
                $fn563 $tmp562 = $tmp561->methods[0];
                panda$core$Bit $tmp564 = $tmp562(Iter$189$9547);
                panda$core$Bit $tmp565 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp564);
                bool $tmp560 = $tmp565.value;
                if (!$tmp560) goto $l559;
                {
                    int $tmp568;
                    {
                        ITable* $tmp572 = Iter$189$9547->$class->itable;
                        while ($tmp572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp572 = $tmp572->next;
                        }
                        $fn574 $tmp573 = $tmp572->methods[1];
                        panda$core$Object* $tmp575 = $tmp573(Iter$189$9547);
                        $tmp571 = $tmp575;
                        $tmp570 = ((org$pandalanguage$pandac$FieldDecl*) $tmp571);
                        f569 = $tmp570;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
                        panda$core$Panda$unref$panda$core$Object($tmp571);
                        panda$core$Object* $tmp577 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp576 = $tmp577;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp576), f569);
                        panda$core$Panda$unref$panda$core$Object($tmp576);
                        org$pandalanguage$pandac$Type* $tmp579 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp578 = $tmp579;
                        panda$core$Bit $tmp580 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f569->type, $tmp578);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                        if ($tmp580.value) {
                        {
                            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s585, ((org$pandalanguage$pandac$Symbol*) f569)->name);
                            $tmp584 = $tmp586;
                            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s587);
                            $tmp583 = $tmp588;
                            panda$core$Int64 $tmp590 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp591;
                            $tmp591 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp591->value = $tmp590;
                            $tmp589 = ((panda$core$Object*) $tmp591);
                            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp583, $tmp589);
                            $tmp582 = $tmp592;
                            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s593);
                            $tmp581 = $tmp594;
                            (($fn595) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp581);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                            panda$core$Panda$unref$panda$core$Object($tmp589);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp601 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f569->type);
                            $tmp600 = $tmp601;
                            panda$core$String* $tmp602 = panda$core$String$convert$R$panda$core$String($tmp600);
                            $tmp599 = $tmp602;
                            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s603);
                            $tmp598 = $tmp604;
                            panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, ((org$pandalanguage$pandac$Symbol*) f569)->name);
                            $tmp597 = $tmp605;
                            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s606);
                            $tmp596 = $tmp607;
                            (($fn608) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp596);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                        }
                        }
                    }
                    $tmp568 = -1;
                    goto $l566;
                    $l566:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f569));
                    f569 = NULL;
                    switch ($tmp568) {
                        case -1: goto $l609;
                    }
                    $l609:;
                }
                goto $l558;
                $l559:;
            }
            $tmp546 = -1;
            goto $l544;
            $l544:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$189$9547));
            Iter$189$9547 = NULL;
            switch ($tmp546) {
                case -1: goto $l610;
            }
            $l610:;
        }
        panda$core$Bit $tmp612 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s611);
        if ($tmp612.value) {
        {
            (($fn614) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s613);
            (($fn616) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s615);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp617, 1);
        panda$core$Int64 $tmp618 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp617);
        self->types->level = $tmp618;
        panda$core$String* $tmp623 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp622 = $tmp623;
        panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s621, $tmp622);
        $tmp620 = $tmp624;
        panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s625);
        $tmp619 = $tmp626;
        (($fn627) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp619);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
        (($fn629) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s628);
        org$pandalanguage$pandac$Type* $tmp640 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp639 = $tmp640;
        panda$core$String* $tmp641 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp639);
        $tmp638 = $tmp641;
        panda$core$String* $tmp642 = panda$core$String$convert$R$panda$core$String($tmp638);
        $tmp637 = $tmp642;
        panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s643);
        $tmp636 = $tmp644;
        org$pandalanguage$pandac$Type* $tmp647 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp646 = $tmp647;
        panda$core$String* $tmp648 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp646);
        $tmp645 = $tmp648;
        panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, $tmp645);
        $tmp635 = $tmp649;
        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s650);
        $tmp634 = $tmp651;
        panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s633, $tmp634);
        $tmp632 = $tmp652;
        panda$core$Object* $tmp659 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp658 = $tmp659;
        panda$collections$ListView* $tmp660 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp658), p_cl);
        $tmp657 = $tmp660;
        ITable* $tmp661 = ((panda$collections$CollectionView*) $tmp657)->$class->itable;
        while ($tmp661->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp661 = $tmp661->next;
        }
        $fn663 $tmp662 = $tmp661->methods[0];
        panda$core$Int64 $tmp664 = $tmp662(((panda$collections$CollectionView*) $tmp657));
        panda$core$Int64$wrapper* $tmp665;
        $tmp665 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp665->value = $tmp664;
        $tmp656 = ((panda$core$Object*) $tmp665);
        panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s655, $tmp656);
        $tmp654 = $tmp666;
        panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s667);
        $tmp653 = $tmp668;
        panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, $tmp653);
        $tmp631 = $tmp669;
        panda$core$String* $tmp673 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp672 = $tmp673;
        panda$core$String* $tmp674 = panda$core$String$convert$R$panda$core$String($tmp672);
        $tmp671 = $tmp674;
        panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s675);
        $tmp670 = $tmp676;
        panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, $tmp670);
        $tmp630 = $tmp677;
        (($fn678) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp630);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
        panda$core$Panda$unref$panda$core$Object($tmp656);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
        panda$core$Panda$unref$panda$core$Object($tmp658);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
        panda$core$String* $tmp685 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp684 = $tmp685;
        panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s683, $tmp684);
        $tmp682 = $tmp686;
        panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s687);
        $tmp681 = $tmp688;
        panda$core$String* $tmp690 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp689 = $tmp690;
        panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, $tmp689);
        $tmp680 = $tmp691;
        panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s692);
        $tmp679 = $tmp693;
        (($fn694) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp679);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        panda$core$Object* $tmp696 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp695 = $tmp696;
        panda$core$Bit $tmp697 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp695), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp695);
        if ($tmp697.value) {
        {
            int $tmp700;
            {
                panda$core$String* $tmp705 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp704 = $tmp705;
                panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s703, $tmp704);
                $tmp702 = $tmp706;
                panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s707);
                $tmp701 = $tmp708;
                (($fn709) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp701);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                panda$core$Int64$init$builtin_int64(&$tmp710, 1);
                panda$core$Int64 $tmp711 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp710);
                self->types->level = $tmp711;
                (($fn713) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s712);
                (($fn715) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s714);
                org$pandalanguage$pandac$Type* $tmp720 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp719 = $tmp720;
                panda$core$String* $tmp721 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp719);
                $tmp718 = $tmp721;
                panda$core$String* $tmp722 = panda$core$String$convert$R$panda$core$String($tmp718);
                $tmp717 = $tmp722;
                panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp717, &$s723);
                $tmp716 = $tmp724;
                (($fn725) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp716);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                panda$core$Int64$init$builtin_int64(&$tmp726, 1);
                panda$core$Int64 $tmp727 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp726);
                self->types->level = $tmp727;
                panda$core$String* $tmp732 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp731 = $tmp732;
                panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s730, $tmp731);
                $tmp729 = $tmp733;
                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s734);
                $tmp728 = $tmp735;
                (($fn736) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp728);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
                panda$core$String* $tmp741 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp740 = $tmp741;
                panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s739, $tmp740);
                $tmp738 = $tmp742;
                panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s743);
                $tmp737 = $tmp744;
                (($fn745) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp737);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                panda$core$Int64$init$builtin_int64(&$tmp746, 1);
                panda$core$Int64 $tmp747 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp746);
                self->types->level = $tmp747;
                panda$core$String* $tmp751 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp750 = $tmp751;
                panda$core$String* $tmp752 = panda$core$String$convert$R$panda$core$String($tmp750);
                $tmp749 = $tmp752;
                panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s753);
                $tmp748 = $tmp754;
                (($fn755) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp748);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                (($fn757) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), &$s756);
                panda$core$Int64$init$builtin_int64(&$tmp758, 1);
                panda$core$Int64 $tmp759 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp758);
                self->types->level = $tmp759;
                panda$core$String* $tmp764 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp763 = $tmp764;
                panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s762, $tmp763);
                $tmp761 = $tmp765;
                panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp761, &$s766);
                $tmp760 = $tmp767;
                (($fn768) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp760);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
                panda$core$Object* $tmp773 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp772 = $tmp773;
                org$pandalanguage$pandac$Type* $tmp775 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp774 = $tmp775;
                org$pandalanguage$pandac$ClassDecl* $tmp776 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp772), $tmp774);
                $tmp771 = $tmp776;
                $tmp770 = $tmp771;
                value769 = $tmp770;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                panda$core$Panda$unref$panda$core$Object($tmp772);
                panda$core$Object* $tmp781 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp780 = $tmp781;
                panda$collections$ListView* $tmp782 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp780), value769);
                $tmp779 = $tmp782;
                $tmp778 = $tmp779;
                valueVTable777 = $tmp778;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
                panda$core$Panda$unref$panda$core$Object($tmp780);
                ITable* $tmp790 = ((panda$collections$CollectionView*) valueVTable777)->$class->itable;
                while ($tmp790->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp790 = $tmp790->next;
                }
                $fn792 $tmp791 = $tmp790->methods[0];
                panda$core$Int64 $tmp793 = $tmp791(((panda$collections$CollectionView*) valueVTable777));
                panda$core$Int64$wrapper* $tmp794;
                $tmp794 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp794->value = $tmp793;
                $tmp789 = ((panda$core$Object*) $tmp794);
                panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s788, $tmp789);
                $tmp787 = $tmp795;
                panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s796);
                $tmp786 = $tmp797;
                panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s785, $tmp786);
                $tmp784 = $tmp798;
                panda$core$String* $tmp802 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp801 = $tmp802;
                panda$core$String* $tmp803 = panda$core$String$convert$R$panda$core$String($tmp801);
                $tmp800 = $tmp803;
                panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, &$s804);
                $tmp799 = $tmp805;
                panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, $tmp799);
                $tmp783 = $tmp806;
                (($fn807) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp783);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
                panda$core$Panda$unref$panda$core$Object($tmp789);
                panda$core$String* $tmp813 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp812 = $tmp813;
                panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s811, $tmp812);
                $tmp810 = $tmp814;
                panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s815);
                $tmp809 = $tmp816;
                panda$core$String* $tmp820 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp819 = $tmp820;
                panda$core$String* $tmp821 = panda$core$String$convert$R$panda$core$String($tmp819);
                $tmp818 = $tmp821;
                panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s822);
                $tmp817 = $tmp823;
                panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, $tmp817);
                $tmp808 = $tmp824;
                (($fn825) ((panda$io$OutputStream*) self->types)->$class->vtable[21])(((panda$io$OutputStream*) self->types), $tmp808);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp809));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
            }
            $tmp700 = -1;
            goto $l698;
            $l698:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable777));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value769));
            value769 = NULL;
            valueVTable777 = NULL;
            switch ($tmp700) {
                case -1: goto $l826;
            }
            $l826:;
        }
        }
    }
    $tmp486 = -1;
    goto $l484;
    $l484:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) typesPath501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path488));
    path488 = NULL;
    typesPath501 = NULL;
    switch ($tmp486) {
        case -1: goto $l827;
    }
    $l827:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result831 = NULL;
    panda$core$String* $tmp832;
    panda$core$String* $tmp833;
    org$pandalanguage$pandac$Type* $tmp834;
    panda$core$Object* $tmp835;
    panda$core$Int64 $tmp840;
    panda$core$String* $returnValue847;
    panda$core$String* $tmp848;
    panda$core$String* $tmp849;
    panda$core$String* $tmp854;
    int $tmp830;
    {
        panda$core$Object* $tmp836 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp835 = $tmp836;
        org$pandalanguage$pandac$Type* $tmp837 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp835));
        $tmp834 = $tmp837;
        panda$core$String* $tmp838 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp834);
        $tmp833 = $tmp838;
        $tmp832 = $tmp833;
        result831 = $tmp832;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp832));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
        panda$core$Panda$unref$panda$core$Object($tmp835);
        panda$core$Int64$init$builtin_int64(&$tmp840, 2);
        panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp840);
        bool $tmp839 = $tmp841.value;
        if (!$tmp839) goto $l842;
        panda$core$Bit $tmp844 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result831, &$s843);
        panda$core$Bit $tmp845 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp844);
        $tmp839 = $tmp845.value;
        $l842:;
        panda$core$Bit $tmp846 = { $tmp839 };
        if ($tmp846.value) {
        {
            panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result831, &$s850);
            $tmp849 = $tmp851;
            $tmp848 = $tmp849;
            $returnValue847 = $tmp848;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
            $tmp830 = 0;
            goto $l828;
            $l852:;
            return $returnValue847;
        }
        }
        $tmp854 = result831;
        $returnValue847 = $tmp854;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
        $tmp830 = 1;
        goto $l828;
        $l855:;
        return $returnValue847;
    }
    $l828:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result831));
    result831 = NULL;
    switch ($tmp830) {
        case 1: goto $l855;
        case 0: goto $l852;
    }
    $l857:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue860;
    panda$core$Bit $tmp861;
    panda$core$Bit result863;
    panda$core$Object* $tmp871;
    org$pandalanguage$pandac$ClassDecl* $tmp873;
    panda$core$Object* $tmp874;
    panda$core$String* $tmp896;
    panda$core$String* $tmp897;
    panda$core$String* $tmp899;
    panda$core$Bit $tmp858 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp859 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp858);
    if ($tmp859.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp861, false);
        $returnValue860 = $tmp861;
        return $returnValue860;
    }
    }
    panda$core$Bit $tmp866 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp865 = $tmp866.value;
    if (!$tmp865) goto $l867;
    panda$core$Bit $tmp868 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp865 = $tmp868.value;
    $l867:;
    panda$core$Bit $tmp869 = { $tmp865 };
    bool $tmp864 = $tmp869.value;
    if (!$tmp864) goto $l870;
    panda$core$Object* $tmp872 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp871 = $tmp872;
    panda$core$Object* $tmp875 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp874 = $tmp875;
    org$pandalanguage$pandac$ClassDecl* $tmp876 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp874), p_m->returnType);
    $tmp873 = $tmp876;
    panda$core$Bit $tmp877 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp871), $tmp873);
    $tmp864 = $tmp877.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
    panda$core$Panda$unref$panda$core$Object($tmp874);
    panda$core$Panda$unref$panda$core$Object($tmp871);
    $l870:;
    panda$core$Bit $tmp878 = { $tmp864 };
    result863 = $tmp878;
    panda$core$Bit $tmp880 = panda$core$Bit$$NOT$R$panda$core$Bit(result863);
    bool $tmp879 = $tmp880.value;
    if ($tmp879) goto $l881;
    panda$core$Bit $tmp883 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp883);
    bool $tmp882 = $tmp884.value;
    if (!$tmp882) goto $l885;
    panda$core$Bit $tmp887 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp886 = $tmp887.value;
    if ($tmp886) goto $l888;
    panda$core$Bit $tmp889 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp886 = $tmp889.value;
    $l888:;
    panda$core$Bit $tmp890 = { $tmp886 };
    $tmp882 = $tmp890.value;
    $l885:;
    panda$core$Bit $tmp891 = { $tmp882 };
    $tmp879 = $tmp891.value;
    $l881:;
    panda$core$Bit $tmp892 = { $tmp879 };
    if ($tmp892.value) goto $l893; else goto $l894;
    $l894:;
    panda$core$String* $tmp900 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp899 = $tmp900;
    panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s898, $tmp899);
    $tmp897 = $tmp901;
    panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s902);
    $tmp896 = $tmp903;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s895, (panda$core$Int64) { 269 }, $tmp896);
    abort();
    $l893:;
    $returnValue860 = result863;
    return $returnValue860;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp908;
    panda$io$MemoryOutputStream* $tmp909;
    panda$collections$HashSet* $tmp910;
    panda$collections$HashSet* $tmp911;
    panda$core$String* separator912 = NULL;
    panda$core$String* $tmp913;
    panda$core$String* $tmp916;
    panda$core$String* $tmp917;
    panda$core$String* $tmp918;
    panda$core$String* $tmp919;
    panda$core$String* $tmp921;
    panda$core$String* $tmp926;
    panda$core$String* $tmp932;
    panda$core$String* $tmp933;
    panda$core$String* $tmp935;
    panda$core$String* $tmp936;
    panda$core$String* $tmp937;
    panda$core$String* $tmp938;
    panda$core$String* $tmp939;
    panda$core$String* $tmp944;
    panda$core$String* $tmp952;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    panda$core$String* $tmp955;
    panda$core$String* $tmp959;
    panda$core$String* $tmp965;
    panda$core$String* $tmp966;
    panda$collections$Iterator* Iter$290$9971 = NULL;
    panda$collections$Iterator* $tmp972;
    panda$collections$Iterator* $tmp973;
    org$pandalanguage$pandac$MethodDecl$Parameter* p989 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp990;
    panda$core$Object* $tmp991;
    panda$core$String* name996 = NULL;
    panda$core$String* $tmp997;
    panda$core$String* $tmp998;
    panda$core$String* $tmp999;
    panda$core$String* $tmp1001;
    panda$core$String* $tmp1006;
    panda$core$String* $tmp1007;
    panda$core$String* $tmp1008;
    panda$core$String* $tmp1009;
    panda$core$String* $tmp1013;
    panda$core$String* $tmp1019;
    panda$core$String* $tmp1020;
    int $tmp907;
    {
        {
            $tmp908 = self->importStream;
            $tmp909 = self->bodyImportStream;
            self->importStream = $tmp909;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
        }
        {
            $tmp910 = self->imports;
            $tmp911 = self->bodyImports;
            self->imports = $tmp911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
        }
        $tmp913 = &$s914;
        separator912 = $tmp913;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
        panda$core$Bit $tmp915 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp915.value) {
        {
            panda$core$String* $tmp922 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp921 = $tmp922;
            panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s920, $tmp921);
            $tmp919 = $tmp923;
            panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s924);
            $tmp918 = $tmp925;
            panda$core$String* $tmp927 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp926 = $tmp927;
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, $tmp926);
            $tmp917 = $tmp928;
            panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp917, &$s929);
            $tmp916 = $tmp930;
            (($fn931) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp916);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
            {
                $tmp932 = separator912;
                $tmp933 = &$s934;
                separator912 = $tmp933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp932));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp940 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp939 = $tmp940;
            panda$core$String* $tmp941 = panda$core$String$convert$R$panda$core$String($tmp939);
            $tmp938 = $tmp941;
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, &$s942);
            $tmp937 = $tmp943;
            panda$core$String* $tmp945 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp944 = $tmp945;
            panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp937, $tmp944);
            $tmp936 = $tmp946;
            panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, &$s947);
            $tmp935 = $tmp948;
            (($fn949) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp935);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
        }
        }
        panda$core$Bit $tmp950 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp951 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp950);
        if ($tmp951.value) {
        {
            panda$core$String* $tmp956 = panda$core$String$convert$R$panda$core$String(separator912);
            $tmp955 = $tmp956;
            panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s957);
            $tmp954 = $tmp958;
            panda$core$String* $tmp960 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp959 = $tmp960;
            panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, $tmp959);
            $tmp953 = $tmp961;
            panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s962);
            $tmp952 = $tmp963;
            (($fn964) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp952);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
            {
                $tmp965 = separator912;
                $tmp966 = &$s967;
                separator912 = $tmp966;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
            }
        }
        }
        {
            int $tmp970;
            {
                ITable* $tmp974 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp974 = $tmp974->next;
                }
                $fn976 $tmp975 = $tmp974->methods[0];
                panda$collections$Iterator* $tmp977 = $tmp975(((panda$collections$Iterable*) p_m->parameters));
                $tmp973 = $tmp977;
                $tmp972 = $tmp973;
                Iter$290$9971 = $tmp972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
                $l978:;
                ITable* $tmp981 = Iter$290$9971->$class->itable;
                while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp981 = $tmp981->next;
                }
                $fn983 $tmp982 = $tmp981->methods[0];
                panda$core$Bit $tmp984 = $tmp982(Iter$290$9971);
                panda$core$Bit $tmp985 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp984);
                bool $tmp980 = $tmp985.value;
                if (!$tmp980) goto $l979;
                {
                    int $tmp988;
                    {
                        ITable* $tmp992 = Iter$290$9971->$class->itable;
                        while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp992 = $tmp992->next;
                        }
                        $fn994 $tmp993 = $tmp992->methods[1];
                        panda$core$Object* $tmp995 = $tmp993(Iter$290$9971);
                        $tmp991 = $tmp995;
                        $tmp990 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp991);
                        p989 = $tmp990;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
                        panda$core$Panda$unref$panda$core$Object($tmp991);
                        panda$core$String* $tmp1002 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p989->name);
                        $tmp1001 = $tmp1002;
                        panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1000, $tmp1001);
                        $tmp999 = $tmp1003;
                        panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1004);
                        $tmp998 = $tmp1005;
                        $tmp997 = $tmp998;
                        name996 = $tmp997;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
                        panda$core$String* $tmp1010 = panda$core$String$convert$R$panda$core$String(separator912);
                        $tmp1009 = $tmp1010;
                        panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, &$s1011);
                        $tmp1008 = $tmp1012;
                        panda$core$String* $tmp1014 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p989->type, name996);
                        $tmp1013 = $tmp1014;
                        panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1008, $tmp1013);
                        $tmp1007 = $tmp1015;
                        panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1016);
                        $tmp1006 = $tmp1017;
                        (($fn1018) ((panda$io$OutputStream*) self->body)->$class->vtable[18])(((panda$io$OutputStream*) self->body), $tmp1006);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
                        {
                            $tmp1019 = separator912;
                            $tmp1020 = &$s1021;
                            separator912 = $tmp1020;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1020));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
                        }
                    }
                    $tmp988 = -1;
                    goto $l986;
                    $l986:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name996));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p989));
                    p989 = NULL;
                    name996 = NULL;
                    switch ($tmp988) {
                        case -1: goto $l1022;
                    }
                    $l1022:;
                }
                goto $l978;
                $l979:;
            }
            $tmp970 = -1;
            goto $l968;
            $l968:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$290$9971));
            Iter$290$9971 = NULL;
            switch ($tmp970) {
                case -1: goto $l1023;
            }
            $l1023:;
        }
        (($fn1025) ((panda$io$OutputStream*) self->body)->$class->vtable[21])(((panda$io$OutputStream*) self->body), &$s1024);
    }
    $tmp907 = -1;
    goto $l905;
    $l905:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator912));
    separator912 = NULL;
    switch ($tmp907) {
        case -1: goto $l1026;
    }
    $l1026:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp1030;
    panda$core$String* $tmp1033;
    panda$core$String* $tmp1036;
    panda$core$String* $tmp1039;
    panda$core$Bit $tmp1042;
    if (self->inClass.value) goto $l1027; else goto $l1028;
    $l1028:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1029, (panda$core$Int64) { 305 });
    abort();
    $l1027:;
    panda$core$String* $tmp1031 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp1030 = $tmp1031;
    (($fn1032) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), $tmp1030);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
    panda$core$String* $tmp1034 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp1033 = $tmp1034;
    (($fn1035) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[21])(((panda$io$OutputStream*) self->typesOut), $tmp1033);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
    panda$core$String* $tmp1037 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp1036 = $tmp1037;
    (($fn1038) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp1036);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
    panda$core$String* $tmp1040 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp1039 = $tmp1040;
    (($fn1041) ((panda$io$OutputStream*) self->out)->$class->vtable[21])(((panda$io$OutputStream*) self->out), $tmp1039);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
    panda$core$Bit$init$builtin_bit(&$tmp1042, false);
    self->inClass = $tmp1042;
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp1045;
    {
    }
    $tmp1045 = -1;
    goto $l1043;
    $l1043:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1045) {
        case -1: goto $l1046;
    }
    $l1046:;
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

