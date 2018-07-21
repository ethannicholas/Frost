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

typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn520)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn546)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn562)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn580)(panda$collections$Iterator*);
typedef void (*$fn601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn636)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn670)(panda$collections$CollectionView*);
typedef void (*$fn685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn765)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn767)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn779)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn803)(panda$collections$CollectionView*);
typedef void (*$fn818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn946)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn964)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn979)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn991)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn998)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1009)(panda$collections$Iterator*);
typedef void (*$fn1033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1044)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1053)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->compiler = $tmp2;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->typeImportStream = $tmp5;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    panda$io$MemoryOutputStream* $tmp10 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->typesBuffer = $tmp8;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    panda$io$IndentedOutputStream* $tmp13 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp13, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->types = $tmp11;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->bodyImportStream = $tmp14;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp19);
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->bodyBuffer = $tmp17;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
    panda$io$IndentedOutputStream* $tmp22 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp22, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->body = $tmp20;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
    panda$collections$HashSet* $tmp25 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp25);
    $tmp24 = $tmp25;
    $tmp23 = $tmp24;
    self->typeImports = $tmp23;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
    panda$collections$HashSet* $tmp28 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp28);
    $tmp27 = $tmp28;
    $tmp26 = $tmp27;
    self->bodyImports = $tmp26;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
    $tmp29 = self->typeImports;
    self->imports = $tmp29;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
    $tmp30 = self->typeImportStream;
    self->importStream = $tmp30;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp33 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp36 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp36);
    $tmp35 = $tmp36;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp33, &$s34, ((panda$io$OutputStream*) $tmp35));
    $tmp32 = $tmp33;
    $tmp31 = $tmp32;
    self->llvmCodeGen = $tmp31;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
    {
        $tmp37 = self->cCodeGenRetain;
        org$pandalanguage$pandac$CCodeGenerator* $tmp40 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
        org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator($tmp40, p_outDir, self);
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        self->cCodeGenRetain = $tmp38;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
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
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp43, ((panda$core$Object*) NULL));
    $tmp42 = $tmp43;
    $tmp41 = $tmp42;
    self->compiler = $tmp41;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
    panda$io$MemoryOutputStream* $tmp46 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp46);
    $tmp45 = $tmp46;
    $tmp44 = $tmp45;
    self->typeImportStream = $tmp44;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
    panda$io$MemoryOutputStream* $tmp49 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp49);
    $tmp48 = $tmp49;
    $tmp47 = $tmp48;
    self->typesBuffer = $tmp47;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
    panda$io$IndentedOutputStream* $tmp52 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp52, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp51 = $tmp52;
    $tmp50 = $tmp51;
    self->types = $tmp50;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
    panda$io$MemoryOutputStream* $tmp55 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp55);
    $tmp54 = $tmp55;
    $tmp53 = $tmp54;
    self->bodyImportStream = $tmp53;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
    panda$io$MemoryOutputStream* $tmp58 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp58);
    $tmp57 = $tmp58;
    $tmp56 = $tmp57;
    self->bodyBuffer = $tmp56;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
    panda$io$IndentedOutputStream* $tmp61 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp61, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp60 = $tmp61;
    $tmp59 = $tmp60;
    self->body = $tmp59;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
    panda$collections$HashSet* $tmp64 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp64);
    $tmp63 = $tmp64;
    $tmp62 = $tmp63;
    self->typeImports = $tmp62;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
    panda$collections$HashSet* $tmp67 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp67);
    $tmp66 = $tmp67;
    $tmp65 = $tmp66;
    self->bodyImports = $tmp65;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
    $tmp68 = self->typeImports;
    self->imports = $tmp68;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
    $tmp69 = self->typeImportStream;
    self->importStream = $tmp69;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp72 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp75 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp75);
    $tmp74 = $tmp75;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp72, &$s73, ((panda$io$OutputStream*) $tmp74));
    $tmp71 = $tmp72;
    $tmp70 = $tmp71;
    self->llvmCodeGen = $tmp70;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
    {
        $tmp76 = self->outDir;
        $tmp77 = p_outDir;
        self->outDir = $tmp77;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
    }
    {
        $tmp90 = self->cCodeGen;
        panda$core$Weak* $tmp93 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T$Q($tmp93, ((panda$core$Object*) p_cCodeGen));
        $tmp92 = $tmp93;
        $tmp91 = $tmp92;
        self->cCodeGen = $tmp91;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
        $tmp101 = 0;
        goto $l99;
        $l118:;
        return $returnValue111;
    }
    $l99:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) llvmName102));
    llvmName102 = NULL;
    switch ($tmp101) {
        case 0: goto $l118;
    }
    $l120:;
    if (false) goto $l121; else goto $l122;
    $l122:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s123, (panda$core$Int64) { 57 }, &$s124);
    abort();
    $l121:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue125;
    panda$core$Int64 $tmp126 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue125 = $tmp126;
    return $returnValue125;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue128;
    panda$core$String* $tmp129;
    panda$core$String* $tmp130;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    panda$core$String* $tmp135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp139 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s137, &$s138);
    $tmp136 = $tmp139;
    panda$core$String* $tmp142 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp136, &$s140, &$s141);
    $tmp135 = $tmp142;
    panda$core$String* $tmp145 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp135, &$s143, &$s144);
    $tmp134 = $tmp145;
    panda$core$String* $tmp148 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp134, &$s146, &$s147);
    $tmp133 = $tmp148;
    panda$core$String* $tmp151 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp133, &$s149, &$s150);
    $tmp132 = $tmp151;
    panda$core$String* $tmp154 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp132, &$s152, &$s153);
    $tmp131 = $tmp154;
    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, p_extension);
    $tmp130 = $tmp155;
    $tmp129 = $tmp130;
    $returnValue128 = $tmp129;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
    return $returnValue128;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$73_9157;
    panda$core$Int64 $tmp158;
    panda$core$String* $returnValue160;
    panda$core$String* $tmp161;
    panda$core$Int64 $tmp164;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$Object* $tmp170;
    panda$core$Int64 $tmp172;
    panda$core$Int64 $tmp179;
    panda$core$String* $tmp181;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    panda$core$Object* $tmp185;
    panda$core$Int64 $tmp187;
    panda$core$Int64 $tmp194;
    panda$core$String* $tmp196;
    panda$core$Int64 $tmp199;
    panda$core$String* $tmp202;
    panda$core$String* $tmp205;
    panda$core$Bit $tmp208;
    panda$core$Int64 $tmp212;
    panda$core$String* name217 = NULL;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$String* $tmp221;
    org$pandalanguage$pandac$ClassDecl* cl226 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp227;
    org$pandalanguage$pandac$ClassDecl* $tmp228;
    panda$core$Object* $tmp229;
    panda$core$Object* $tmp235;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$core$String* includePath259 = NULL;
    panda$core$String* $tmp260;
    panda$core$String* $tmp261;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $tmp273;
    panda$core$Int64 $tmp277;
    org$pandalanguage$pandac$ClassDecl* cl282 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp283;
    org$pandalanguage$pandac$ClassDecl* $tmp284;
    panda$core$Object* $tmp285;
    panda$core$Object* $tmp291;
    panda$core$String* $tmp294;
    panda$core$String* $tmp295;
    panda$core$String* $tmp296;
    panda$core$Object* $tmp297;
    panda$core$Int64 $tmp298;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$Object* $tmp307;
    panda$core$Int64 $tmp308;
    panda$core$Int64 $tmp314;
    panda$core$Object* $tmp319;
    panda$core$Int64 $tmp320;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$Object* $tmp327;
    panda$core$Int64 $tmp328;
    org$pandalanguage$pandac$ClassDecl* cl335 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp336;
    org$pandalanguage$pandac$ClassDecl* $tmp337;
    panda$core$Object* $tmp338;
    panda$core$String* name345 = NULL;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$String* $tmp349;
    org$pandalanguage$pandac$ClassDecl* cl354 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp355;
    org$pandalanguage$pandac$ClassDecl* $tmp356;
    panda$core$Object* $tmp357;
    panda$core$Object* $tmp363;
    panda$core$String* $tmp369;
    panda$core$String* $tmp370;
    panda$core$String* $tmp371;
    panda$core$String* $tmp372;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$core$String* includePath388 = NULL;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp395;
    panda$core$String* $tmp396;
    panda$core$String* $tmp402;
    panda$core$String* $tmp407;
    panda$core$String* $tmp408;
    panda$core$Object* $tmp409;
    panda$core$Int64 $tmp410;
    panda$core$Int64 $tmp416;
    panda$core$String* $tmp418;
    panda$core$String* $tmp419;
    panda$core$Object* $tmp420;
    panda$core$Int64 $tmp425;
    panda$core$Int64 $tmp428;
    panda$core$String* $tmp431;
    panda$core$String* $tmp432;
    org$pandalanguage$pandac$Type* $tmp433;
    panda$core$Int64 $tmp438;
    panda$core$Int64 $tmp441;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    org$pandalanguage$pandac$Type* $tmp446;
    panda$core$Bit $tmp450;
    panda$core$String* $tmp454;
    panda$core$String* $tmp455;
    {
        $match$73_9157 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp158, 4);
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp158);
        if ($tmp159.value) {
        {
            $tmp161 = &$s162;
            $returnValue160 = $tmp161;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
            return $returnValue160;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp164, 2);
        panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp164);
        if ($tmp165.value) {
        {
            panda$core$Int64 $tmp171 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp172, 8);
            panda$core$Int64 $tmp173 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp171, $tmp172);
            panda$core$Int64$wrapper* $tmp174;
            $tmp174 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp174->value = $tmp173;
            $tmp170 = ((panda$core$Object*) $tmp174);
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s169, $tmp170);
            $tmp168 = $tmp175;
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s176);
            $tmp167 = $tmp177;
            $tmp166 = $tmp167;
            $returnValue160 = $tmp166;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
            panda$core$Panda$unref$panda$core$Object$Q($tmp170);
            return $returnValue160;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp179, 3);
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp179);
        if ($tmp180.value) {
        {
            panda$core$Int64 $tmp186 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp187, 8);
            panda$core$Int64 $tmp188 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp186, $tmp187);
            panda$core$Int64$wrapper* $tmp189;
            $tmp189 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp189->value = $tmp188;
            $tmp185 = ((panda$core$Object*) $tmp189);
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s184, $tmp185);
            $tmp183 = $tmp190;
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s191);
            $tmp182 = $tmp192;
            $tmp181 = $tmp182;
            $returnValue160 = $tmp181;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
            panda$core$Panda$unref$panda$core$Object$Q($tmp185);
            return $returnValue160;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp194, 9);
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp194);
        if ($tmp195.value) {
        {
            $tmp196 = &$s197;
            $returnValue160 = $tmp196;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
            return $returnValue160;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp199, 10);
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp199);
        if ($tmp200.value) {
        {
            panda$core$Int64 $tmp201 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp201.value) {
                case 4:
                {
                    $tmp202 = &$s203;
                    $returnValue160 = $tmp202;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
                    return $returnValue160;
                }
                break;
                case 8:
                {
                    $tmp205 = &$s206;
                    $returnValue160 = $tmp205;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
                    return $returnValue160;
                }
                break;
                default:
                {
                    panda$core$Bit$init$builtin_bit(&$tmp208, false);
                    if ($tmp208.value) goto $l209; else goto $l210;
                    $l210:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s211, (panda$core$Int64) { 86 });
                    abort();
                    $l209:;
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp212, 0);
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp212);
        if ($tmp213.value) {
        {
            int $tmp216;
            {
                panda$core$String* $tmp222 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp221 = $tmp222;
                panda$core$String* $tmp223 = panda$core$String$convert$R$panda$core$String($tmp221);
                $tmp220 = $tmp223;
                panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s224);
                $tmp219 = $tmp225;
                $tmp218 = $tmp219;
                name217 = $tmp218;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
                panda$core$Object* $tmp230 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp229 = $tmp230;
                org$pandalanguage$pandac$ClassDecl* $tmp231 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp229), p_t);
                $tmp228 = $tmp231;
                $tmp227 = $tmp228;
                cl226 = $tmp227;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
                panda$core$Panda$unref$panda$core$Object$Q($tmp229);
                if (((panda$core$Bit) { cl226 != NULL }).value) goto $l232; else goto $l233;
                $l233:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s234, (panda$core$Int64) { 91 });
                abort();
                $l232:;
                panda$core$Object* $tmp236 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp235 = $tmp236;
                panda$core$Bit $tmp237 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp235), cl226);
                panda$core$Bit $tmp238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp237);
                panda$core$Panda$unref$panda$core$Object$Q($tmp235);
                if ($tmp238.value) {
                {
                    panda$core$Bit $tmp239 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name217));
                    panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
                    if ($tmp240.value) {
                    {
                        panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s245, name217);
                        $tmp244 = $tmp246;
                        panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s247);
                        $tmp243 = $tmp248;
                        panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, name217);
                        $tmp242 = $tmp249;
                        panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s250);
                        $tmp241 = $tmp251;
                        (($fn252) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp241);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
                        panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name217));
                    }
                    }
                    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name217, &$s255);
                    $tmp254 = $tmp256;
                    $tmp253 = $tmp254;
                    $returnValue160 = $tmp253;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
                    $tmp216 = 0;
                    goto $l214;
                    $l257:;
                    return $returnValue160;
                }
                }
                panda$core$String* $tmp263 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl226, &$s262);
                $tmp261 = $tmp263;
                $tmp260 = $tmp261;
                includePath259 = $tmp260;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
                panda$core$Bit $tmp264 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath259));
                panda$core$Bit $tmp265 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp264);
                if ($tmp265.value) {
                {
                    panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s268, includePath259);
                    $tmp267 = $tmp269;
                    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s270);
                    $tmp266 = $tmp271;
                    (($fn272) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp266);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath259));
                }
                }
                $tmp273 = name217;
                $returnValue160 = $tmp273;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
                $tmp216 = 1;
                goto $l214;
                $l274:;
                return $returnValue160;
            }
            $l214:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) includePath259));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl226));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name217));
            name217 = NULL;
            cl226 = NULL;
            includePath259 = NULL;
            switch ($tmp216) {
                case 1: goto $l274;
                case 0: goto $l257;
            }
            $l276:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp277, 1);
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp277);
        if ($tmp278.value) {
        {
            int $tmp281;
            {
                panda$core$Object* $tmp286 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp285 = $tmp286;
                org$pandalanguage$pandac$ClassDecl* $tmp287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp285), p_t);
                $tmp284 = $tmp287;
                $tmp283 = $tmp284;
                cl282 = $tmp283;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
                panda$core$Panda$unref$panda$core$Object$Q($tmp285);
                if (((panda$core$Bit) { cl282 != NULL }).value) goto $l288; else goto $l289;
                $l289:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s290, (panda$core$Int64) { 107 });
                abort();
                $l288:;
                panda$core$Object* $tmp292 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp291 = $tmp292;
                panda$core$Bit $tmp293 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp291), cl282);
                panda$core$Panda$unref$panda$core$Object$Q($tmp291);
                if ($tmp293.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp298, 0);
                    panda$core$Object* $tmp299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp298);
                    $tmp297 = $tmp299;
                    panda$core$String* $tmp300 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp297));
                    $tmp296 = $tmp300;
                    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s301);
                    $tmp295 = $tmp302;
                    $tmp294 = $tmp295;
                    $returnValue160 = $tmp294;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp297);
                    $tmp281 = 0;
                    goto $l279;
                    $l303:;
                    return $returnValue160;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp308, 0);
                panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp308);
                $tmp307 = $tmp309;
                panda$core$String* $tmp310 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp307));
                $tmp306 = $tmp310;
                $tmp305 = $tmp306;
                $returnValue160 = $tmp305;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
                panda$core$Panda$unref$panda$core$Object$Q($tmp307);
                $tmp281 = 1;
                goto $l279;
                $l311:;
                return $returnValue160;
            }
            $l279:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl282));
            cl282 = NULL;
            switch ($tmp281) {
                case 0: goto $l303;
                case 1: goto $l311;
            }
            $l313:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp314, 11);
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp314);
        if ($tmp315.value) {
        {
            int $tmp318;
            {
                panda$core$Int64$init$builtin_int64(&$tmp320, 0);
                panda$core$Object* $tmp321 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp320);
                $tmp319 = $tmp321;
                panda$core$Bit $tmp323 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp319))->name, &$s322);
                panda$core$Panda$unref$panda$core$Object$Q($tmp319);
                if ($tmp323.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp328, 1);
                    panda$core$Object* $tmp329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp328);
                    $tmp327 = $tmp329;
                    panda$core$String* $tmp330 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp327));
                    $tmp326 = $tmp330;
                    panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s331);
                    $tmp325 = $tmp332;
                    $tmp324 = $tmp325;
                    $returnValue160 = $tmp324;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp327);
                    $tmp318 = 0;
                    goto $l316;
                    $l333:;
                    return $returnValue160;
                }
                }
                panda$core$Object* $tmp339 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp338 = $tmp339;
                org$pandalanguage$pandac$ClassDecl* $tmp340 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp338), p_t);
                $tmp337 = $tmp340;
                $tmp336 = $tmp337;
                cl335 = $tmp336;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
                panda$core$Panda$unref$panda$core$Object$Q($tmp338);
                panda$core$Bit $tmp341 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl335);
                if ($tmp341.value) {
                {
                    int $tmp344;
                    {
                        panda$core$String* $tmp350 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp349 = $tmp350;
                        panda$core$String* $tmp351 = panda$core$String$convert$R$panda$core$String($tmp349);
                        $tmp348 = $tmp351;
                        panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s352);
                        $tmp347 = $tmp353;
                        $tmp346 = $tmp347;
                        name345 = $tmp346;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
                        panda$core$Object* $tmp358 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                        $tmp357 = $tmp358;
                        org$pandalanguage$pandac$ClassDecl* $tmp359 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp357), p_t);
                        $tmp356 = $tmp359;
                        $tmp355 = $tmp356;
                        cl354 = $tmp355;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp357);
                        if (((panda$core$Bit) { cl354 != NULL }).value) goto $l360; else goto $l361;
                        $l361:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s362, (panda$core$Int64) { 120 });
                        abort();
                        $l360:;
                        panda$core$Object* $tmp364 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                        $tmp363 = $tmp364;
                        panda$core$Bit $tmp365 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp363), cl354);
                        panda$core$Bit $tmp366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp365);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp363);
                        if ($tmp366.value) {
                        {
                            panda$core$Bit $tmp367 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name345));
                            panda$core$Bit $tmp368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp367);
                            if ($tmp368.value) {
                            {
                                panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s373, name345);
                                $tmp372 = $tmp374;
                                panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, &$s375);
                                $tmp371 = $tmp376;
                                panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, name345);
                                $tmp370 = $tmp377;
                                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s378);
                                $tmp369 = $tmp379;
                                (($fn380) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp369);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
                                panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name345));
                            }
                            }
                            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name345, &$s383);
                            $tmp382 = $tmp384;
                            $tmp381 = $tmp382;
                            $returnValue160 = $tmp381;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
                            $tmp344 = 0;
                            goto $l342;
                            $l385:;
                            $tmp318 = 1;
                            goto $l316;
                            $l386:;
                            return $returnValue160;
                        }
                        }
                        panda$core$String* $tmp392 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl354, &$s391);
                        $tmp390 = $tmp392;
                        $tmp389 = $tmp390;
                        includePath388 = $tmp389;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
                        panda$core$Bit $tmp393 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath388));
                        panda$core$Bit $tmp394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp393);
                        if ($tmp394.value) {
                        {
                            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s397, includePath388);
                            $tmp396 = $tmp398;
                            panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, &$s399);
                            $tmp395 = $tmp400;
                            (($fn401) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp395);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
                            panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath388));
                        }
                        }
                        $tmp402 = name345;
                        $returnValue160 = $tmp402;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
                        $tmp344 = 1;
                        goto $l342;
                        $l403:;
                        $tmp318 = 2;
                        goto $l316;
                        $l404:;
                        return $returnValue160;
                    }
                    $l342:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) includePath388));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl354));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name345));
                    name345 = NULL;
                    cl354 = NULL;
                    includePath388 = NULL;
                    switch ($tmp344) {
                        case 1: goto $l403;
                        case 0: goto $l385;
                    }
                    $l406:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp410, 0);
                panda$core$Object* $tmp411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp410);
                $tmp409 = $tmp411;
                panda$core$String* $tmp412 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp409));
                $tmp408 = $tmp412;
                $tmp407 = $tmp408;
                $returnValue160 = $tmp407;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
                panda$core$Panda$unref$panda$core$Object$Q($tmp409);
                $tmp318 = 3;
                goto $l316;
                $l413:;
                return $returnValue160;
            }
            $l316:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl335));
            cl335 = NULL;
            switch ($tmp318) {
                case 0: goto $l333;
                case 3: goto $l413;
                case 2: goto $l404;
                case 1: goto $l386;
            }
            $l415:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp416, 12);
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp416);
        if ($tmp417.value) {
        {
            panda$core$Object* $tmp421 = panda$core$Weak$get$R$panda$core$Weak$T$Q(p_t->parameter);
            $tmp420 = $tmp421;
            panda$core$String* $tmp422 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp420)->bound);
            $tmp419 = $tmp422;
            $tmp418 = $tmp419;
            $returnValue160 = $tmp418;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
            panda$core$Panda$unref$panda$core$Object$Q($tmp420);
            return $returnValue160;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp425, 14);
        panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp425);
        bool $tmp424 = $tmp426.value;
        if ($tmp424) goto $l427;
        panda$core$Int64$init$builtin_int64(&$tmp428, 15);
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp428);
        $tmp424 = $tmp429.value;
        $l427:;
        panda$core$Bit $tmp430 = { $tmp424 };
        if ($tmp430.value) {
        {
            org$pandalanguage$pandac$Type* $tmp434 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp433 = $tmp434;
            panda$core$String* $tmp435 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp433);
            $tmp432 = $tmp435;
            $tmp431 = $tmp432;
            $returnValue160 = $tmp431;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
            return $returnValue160;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp438, 16);
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp438);
        bool $tmp437 = $tmp439.value;
        if ($tmp437) goto $l440;
        panda$core$Int64$init$builtin_int64(&$tmp441, 17);
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_9157.$rawValue, $tmp441);
        $tmp437 = $tmp442.value;
        $l440:;
        panda$core$Bit $tmp443 = { $tmp437 };
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$Type* $tmp447 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp446 = $tmp447;
            panda$core$String* $tmp448 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp446);
            $tmp445 = $tmp448;
            $tmp444 = $tmp445;
            $returnValue160 = $tmp444;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
            return $returnValue160;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp450, false);
            if ($tmp450.value) goto $l451; else goto $l452;
            $l452:;
            panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s456, ((panda$core$Object*) p_t));
            $tmp455 = $tmp457;
            panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s458);
            $tmp454 = $tmp459;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s453, (panda$core$Int64) { 143 }, $tmp454);
            abort();
            $l451:;
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
    if (false) goto $l460; else goto $l461;
    $l461:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s462, (panda$core$Int64) { 72 }, &$s463);
    abort();
    $l460:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_name) {
    panda$core$String* $returnValue464;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466;
    panda$core$String* $tmp467;
    panda$core$String* $tmp468;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$String* $tmp471 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp470 = $tmp471;
    panda$core$String* $tmp472 = panda$core$String$convert$R$panda$core$String($tmp470);
    $tmp469 = $tmp472;
    panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s473);
    $tmp468 = $tmp474;
    panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, p_name);
    $tmp467 = $tmp475;
    panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp467, &$s476);
    $tmp466 = $tmp477;
    $tmp465 = $tmp466;
    $returnValue464 = $tmp465;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
    return $returnValue464;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp479;
    panda$core$Weak* $tmp480;
    panda$core$Weak* $tmp481;
    {
        $tmp479 = self->compiler;
        panda$core$Weak* $tmp482 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T$Q($tmp482, ((panda$core$Object*) p_compiler));
        $tmp481 = $tmp482;
        $tmp480 = $tmp481;
        self->compiler = $tmp480;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue483;
    panda$io$File* $tmp484;
    panda$io$File* $tmp485;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp486 = $tmp487;
    panda$io$File* $tmp488 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp486);
    $tmp485 = $tmp488;
    $tmp484 = $tmp485;
    $returnValue483 = $tmp484;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
    return $returnValue483;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path493 = NULL;
    panda$io$File* $tmp494;
    panda$io$File* $tmp495;
    panda$io$File* $tmp498;
    panda$io$IndentedOutputStream* $tmp500;
    panda$io$IndentedOutputStream* $tmp501;
    panda$io$IndentedOutputStream* $tmp502;
    panda$io$OutputStream* $tmp504;
    panda$io$File* typesPath506 = NULL;
    panda$io$File* $tmp507;
    panda$io$File* $tmp508;
    panda$io$IndentedOutputStream* $tmp511;
    panda$io$IndentedOutputStream* $tmp512;
    panda$io$IndentedOutputStream* $tmp513;
    panda$io$OutputStream* $tmp515;
    panda$core$String* $tmp521;
    panda$core$String* $tmp522;
    panda$core$String* $tmp524;
    panda$io$MemoryOutputStream* $tmp534;
    panda$io$MemoryOutputStream* $tmp535;
    panda$collections$HashSet* $tmp536;
    panda$collections$HashSet* $tmp537;
    panda$core$String* $tmp538;
    panda$core$String* $tmp539;
    panda$core$String* $tmp541;
    panda$io$IndentedOutputStream* $tmp547;
    panda$core$Int64 $tmp548;
    panda$collections$Iterator* Iter$183$9553 = NULL;
    panda$collections$Iterator* $tmp554;
    panda$collections$Iterator* $tmp555;
    panda$collections$ListView* $tmp556;
    panda$core$Object* $tmp557;
    org$pandalanguage$pandac$FieldDecl* f575 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp576;
    panda$core$Object* $tmp577;
    panda$core$Object* $tmp582;
    org$pandalanguage$pandac$Type* $tmp584;
    panda$core$String* $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp589;
    panda$core$String* $tmp590;
    panda$core$Object* $tmp595;
    panda$core$String* $tmp602;
    panda$core$String* $tmp603;
    panda$core$String* $tmp604;
    panda$core$String* $tmp605;
    panda$core$String* $tmp606;
    panda$io$IndentedOutputStream* $tmp623;
    panda$core$Int64 $tmp624;
    panda$core$String* $tmp626;
    panda$core$String* $tmp627;
    panda$core$String* $tmp629;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    panda$core$String* $tmp639;
    panda$core$String* $tmp641;
    panda$core$String* $tmp642;
    panda$core$String* $tmp643;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    org$pandalanguage$pandac$Type* $tmp646;
    panda$core$String* $tmp652;
    org$pandalanguage$pandac$Type* $tmp653;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$Object* $tmp663;
    panda$collections$ListView* $tmp664;
    panda$core$Object* $tmp665;
    panda$core$String* $tmp677;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$String* $tmp686;
    panda$core$String* $tmp687;
    panda$core$String* $tmp688;
    panda$core$String* $tmp689;
    panda$core$String* $tmp691;
    panda$core$String* $tmp696;
    panda$core$Object* $tmp702;
    panda$core$String* $tmp708;
    panda$core$String* $tmp709;
    panda$core$String* $tmp711;
    panda$io$IndentedOutputStream* $tmp717;
    panda$core$Int64 $tmp718;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    panda$core$String* $tmp726;
    org$pandalanguage$pandac$Type* $tmp727;
    panda$io$IndentedOutputStream* $tmp734;
    panda$core$Int64 $tmp735;
    panda$core$String* $tmp737;
    panda$core$String* $tmp738;
    panda$core$String* $tmp740;
    panda$core$String* $tmp746;
    panda$core$String* $tmp747;
    panda$core$String* $tmp749;
    panda$io$IndentedOutputStream* $tmp755;
    panda$core$Int64 $tmp756;
    panda$core$String* $tmp758;
    panda$core$String* $tmp759;
    panda$core$String* $tmp760;
    panda$io$IndentedOutputStream* $tmp768;
    panda$core$Int64 $tmp769;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    panda$core$String* $tmp774;
    org$pandalanguage$pandac$ClassDecl* value780 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp781;
    org$pandalanguage$pandac$ClassDecl* $tmp782;
    panda$core$Object* $tmp783;
    org$pandalanguage$pandac$Type* $tmp785;
    panda$collections$ListView* valueVTable788 = NULL;
    panda$collections$ListView* $tmp789;
    panda$collections$ListView* $tmp790;
    panda$core$Object* $tmp791;
    panda$core$String* $tmp794;
    panda$core$String* $tmp795;
    panda$core$String* $tmp797;
    panda$core$String* $tmp798;
    panda$core$Object* $tmp800;
    panda$core$String* $tmp810;
    panda$core$String* $tmp811;
    panda$core$String* $tmp812;
    panda$core$String* $tmp819;
    panda$core$String* $tmp820;
    panda$core$String* $tmp821;
    panda$core$String* $tmp823;
    panda$core$String* $tmp828;
    panda$core$String* $tmp829;
    panda$core$String* $tmp830;
    int $tmp492;
    {
        panda$io$MemoryOutputStream$clear(self->typeImportStream);
        panda$io$MemoryOutputStream$clear(self->typesBuffer);
        panda$io$MemoryOutputStream$clear(self->bodyImportStream);
        panda$io$MemoryOutputStream$clear(self->bodyBuffer);
        panda$collections$HashSet$clear(self->typeImports);
        panda$collections$HashSet$clear(self->bodyImports);
        panda$io$File* $tmp497 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s496);
        $tmp495 = $tmp497;
        $tmp494 = $tmp495;
        path493 = $tmp494;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
        panda$io$File* $tmp499 = panda$io$File$parent$R$panda$io$File$Q(path493);
        $tmp498 = $tmp499;
        panda$io$File$createDirectories($tmp498);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
        {
            $tmp500 = self->out;
            panda$io$IndentedOutputStream* $tmp503 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp505 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path493);
            $tmp504 = $tmp505;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp503, $tmp504);
            $tmp502 = $tmp503;
            $tmp501 = $tmp502;
            self->out = $tmp501;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
        }
        panda$io$File* $tmp510 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s509);
        $tmp508 = $tmp510;
        $tmp507 = $tmp508;
        typesPath506 = $tmp507;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
        {
            $tmp511 = self->typesOut;
            panda$io$IndentedOutputStream* $tmp514 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp516 = panda$io$File$openOutputStream$R$panda$io$OutputStream(typesPath506);
            $tmp515 = $tmp516;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp514, $tmp515);
            $tmp513 = $tmp514;
            $tmp512 = $tmp513;
            self->typesOut = $tmp512;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
        }
        (($fn518) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s517);
        (($fn520) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s519);
        panda$core$String* $tmp525 = panda$io$File$name$R$panda$core$String(typesPath506);
        $tmp524 = $tmp525;
        panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s523, $tmp524);
        $tmp522 = $tmp526;
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s527);
        $tmp521 = $tmp528;
        (($fn529) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp521);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
        (($fn531) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), &$s530);
        (($fn533) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), &$s532);
        {
            $tmp534 = self->importStream;
            $tmp535 = self->typeImportStream;
            self->importStream = $tmp535;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
        }
        {
            $tmp536 = self->imports;
            $tmp537 = self->typeImports;
            self->imports = $tmp537;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
        }
        panda$core$String* $tmp542 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp541 = $tmp542;
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s540, $tmp541);
        $tmp539 = $tmp543;
        panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s544);
        $tmp538 = $tmp545;
        (($fn546) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp538);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
        $tmp547 = self->types;
        panda$core$Int64$init$builtin_int64(&$tmp548, 1);
        panda$core$Int64 $tmp549 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp547->level, $tmp548);
        $tmp547->level = $tmp549;
        {
            int $tmp552;
            {
                panda$core$Object* $tmp558 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp557 = $tmp558;
                panda$collections$ListView* $tmp559 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp557), p_cl);
                $tmp556 = $tmp559;
                ITable* $tmp560 = ((panda$collections$Iterable*) $tmp556)->$class->itable;
                while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp560 = $tmp560->next;
                }
                $fn562 $tmp561 = $tmp560->methods[0];
                panda$collections$Iterator* $tmp563 = $tmp561(((panda$collections$Iterable*) $tmp556));
                $tmp555 = $tmp563;
                $tmp554 = $tmp555;
                Iter$183$9553 = $tmp554;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
                panda$core$Panda$unref$panda$core$Object$Q($tmp557);
                $l564:;
                ITable* $tmp567 = Iter$183$9553->$class->itable;
                while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp567 = $tmp567->next;
                }
                $fn569 $tmp568 = $tmp567->methods[0];
                panda$core$Bit $tmp570 = $tmp568(Iter$183$9553);
                panda$core$Bit $tmp571 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp570);
                bool $tmp566 = $tmp571.value;
                if (!$tmp566) goto $l565;
                {
                    int $tmp574;
                    {
                        ITable* $tmp578 = Iter$183$9553->$class->itable;
                        while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp578 = $tmp578->next;
                        }
                        $fn580 $tmp579 = $tmp578->methods[1];
                        panda$core$Object* $tmp581 = $tmp579(Iter$183$9553);
                        $tmp577 = $tmp581;
                        $tmp576 = ((org$pandalanguage$pandac$FieldDecl*) $tmp577);
                        f575 = $tmp576;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp577);
                        panda$core$Object* $tmp583 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                        $tmp582 = $tmp583;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp582), f575);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp582);
                        org$pandalanguage$pandac$Type* $tmp585 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp584 = $tmp585;
                        panda$core$Bit $tmp586 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f575->type, $tmp584);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
                        if ($tmp586.value) {
                        {
                            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s591, ((org$pandalanguage$pandac$Symbol*) f575)->name);
                            $tmp590 = $tmp592;
                            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s593);
                            $tmp589 = $tmp594;
                            panda$core$Int64 $tmp596 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp597;
                            $tmp597 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp597->value = $tmp596;
                            $tmp595 = ((panda$core$Object*) $tmp597);
                            panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp589, $tmp595);
                            $tmp588 = $tmp598;
                            panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s599);
                            $tmp587 = $tmp600;
                            (($fn601) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp587);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp595);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp607 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f575->type);
                            $tmp606 = $tmp607;
                            panda$core$String* $tmp608 = panda$core$String$convert$R$panda$core$String($tmp606);
                            $tmp605 = $tmp608;
                            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s609);
                            $tmp604 = $tmp610;
                            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, ((org$pandalanguage$pandac$Symbol*) f575)->name);
                            $tmp603 = $tmp611;
                            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp603, &$s612);
                            $tmp602 = $tmp613;
                            (($fn614) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp602);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
                        }
                        }
                    }
                    $tmp574 = -1;
                    goto $l572;
                    $l572:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) f575));
                    f575 = NULL;
                    switch ($tmp574) {
                        case -1: goto $l615;
                    }
                    $l615:;
                }
                goto $l564;
                $l565:;
            }
            $tmp552 = -1;
            goto $l550;
            $l550:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$183$9553));
            Iter$183$9553 = NULL;
            switch ($tmp552) {
                case -1: goto $l616;
            }
            $l616:;
        }
        panda$core$Bit $tmp618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s617);
        if ($tmp618.value) {
        {
            (($fn620) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s619);
            (($fn622) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s621);
        }
        }
        $tmp623 = self->types;
        panda$core$Int64$init$builtin_int64(&$tmp624, 1);
        panda$core$Int64 $tmp625 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp623->level, $tmp624);
        $tmp623->level = $tmp625;
        panda$core$String* $tmp630 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp629 = $tmp630;
        panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s628, $tmp629);
        $tmp627 = $tmp631;
        panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp627, &$s632);
        $tmp626 = $tmp633;
        (($fn634) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp626);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
        (($fn636) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s635);
        org$pandalanguage$pandac$Type* $tmp647 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp646 = $tmp647;
        panda$core$String* $tmp648 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp646);
        $tmp645 = $tmp648;
        panda$core$String* $tmp649 = panda$core$String$convert$R$panda$core$String($tmp645);
        $tmp644 = $tmp649;
        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s650);
        $tmp643 = $tmp651;
        org$pandalanguage$pandac$Type* $tmp654 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp653 = $tmp654;
        panda$core$String* $tmp655 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp653);
        $tmp652 = $tmp655;
        panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp643, $tmp652);
        $tmp642 = $tmp656;
        panda$core$String* $tmp658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp642, &$s657);
        $tmp641 = $tmp658;
        panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s640, $tmp641);
        $tmp639 = $tmp659;
        panda$core$Object* $tmp666 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
        $tmp665 = $tmp666;
        panda$collections$ListView* $tmp667 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp665), p_cl);
        $tmp664 = $tmp667;
        ITable* $tmp668 = ((panda$collections$CollectionView*) $tmp664)->$class->itable;
        while ($tmp668->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp668 = $tmp668->next;
        }
        $fn670 $tmp669 = $tmp668->methods[0];
        panda$core$Int64 $tmp671 = $tmp669(((panda$collections$CollectionView*) $tmp664));
        panda$core$Int64$wrapper* $tmp672;
        $tmp672 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp672->value = $tmp671;
        $tmp663 = ((panda$core$Object*) $tmp672);
        panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s662, $tmp663);
        $tmp661 = $tmp673;
        panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, &$s674);
        $tmp660 = $tmp675;
        panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, $tmp660);
        $tmp638 = $tmp676;
        panda$core$String* $tmp680 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp679 = $tmp680;
        panda$core$String* $tmp681 = panda$core$String$convert$R$panda$core$String($tmp679);
        $tmp678 = $tmp681;
        panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp678, &$s682);
        $tmp677 = $tmp683;
        panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, $tmp677);
        $tmp637 = $tmp684;
        (($fn685) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp637);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
        panda$core$Panda$unref$panda$core$Object$Q($tmp663);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
        panda$core$Panda$unref$panda$core$Object$Q($tmp665);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
        panda$core$String* $tmp692 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp691 = $tmp692;
        panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s690, $tmp691);
        $tmp689 = $tmp693;
        panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s694);
        $tmp688 = $tmp695;
        panda$core$String* $tmp697 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp696 = $tmp697;
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, $tmp696);
        $tmp687 = $tmp698;
        panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, &$s699);
        $tmp686 = $tmp700;
        (($fn701) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp686);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
        panda$core$Object* $tmp703 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
        $tmp702 = $tmp703;
        panda$core$Bit $tmp704 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp702), p_cl);
        panda$core$Panda$unref$panda$core$Object$Q($tmp702);
        if ($tmp704.value) {
        {
            int $tmp707;
            {
                panda$core$String* $tmp712 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp711 = $tmp712;
                panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s710, $tmp711);
                $tmp709 = $tmp713;
                panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s714);
                $tmp708 = $tmp715;
                (($fn716) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp708);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
                $tmp717 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp718, 1);
                panda$core$Int64 $tmp719 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp717->level, $tmp718);
                $tmp717->level = $tmp719;
                (($fn721) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s720);
                (($fn723) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s722);
                org$pandalanguage$pandac$Type* $tmp728 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp727 = $tmp728;
                panda$core$String* $tmp729 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp727);
                $tmp726 = $tmp729;
                panda$core$String* $tmp730 = panda$core$String$convert$R$panda$core$String($tmp726);
                $tmp725 = $tmp730;
                panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s731);
                $tmp724 = $tmp732;
                (($fn733) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp724);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
                $tmp734 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp735, 1);
                panda$core$Int64 $tmp736 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp734->level, $tmp735);
                $tmp734->level = $tmp736;
                panda$core$String* $tmp741 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp740 = $tmp741;
                panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s739, $tmp740);
                $tmp738 = $tmp742;
                panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s743);
                $tmp737 = $tmp744;
                (($fn745) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp737);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
                panda$core$String* $tmp750 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp749 = $tmp750;
                panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s748, $tmp749);
                $tmp747 = $tmp751;
                panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s752);
                $tmp746 = $tmp753;
                (($fn754) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp746);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
                $tmp755 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp756, 1);
                panda$core$Int64 $tmp757 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp755->level, $tmp756);
                $tmp755->level = $tmp757;
                panda$core$String* $tmp761 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp760 = $tmp761;
                panda$core$String* $tmp762 = panda$core$String$convert$R$panda$core$String($tmp760);
                $tmp759 = $tmp762;
                panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s763);
                $tmp758 = $tmp764;
                (($fn765) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp758);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
                (($fn767) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s766);
                $tmp768 = self->types;
                panda$core$Int64$init$builtin_int64(&$tmp769, 1);
                panda$core$Int64 $tmp770 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp768->level, $tmp769);
                $tmp768->level = $tmp770;
                panda$core$String* $tmp775 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp774 = $tmp775;
                panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s773, $tmp774);
                $tmp772 = $tmp776;
                panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, &$s777);
                $tmp771 = $tmp778;
                (($fn779) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp771);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
                panda$core$Object* $tmp784 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp783 = $tmp784;
                org$pandalanguage$pandac$Type* $tmp786 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp785 = $tmp786;
                org$pandalanguage$pandac$ClassDecl* $tmp787 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp783), $tmp785);
                $tmp782 = $tmp787;
                $tmp781 = $tmp782;
                value780 = $tmp781;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
                panda$core$Panda$unref$panda$core$Object$Q($tmp783);
                panda$core$Object* $tmp792 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
                $tmp791 = $tmp792;
                panda$collections$ListView* $tmp793 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp791), value780);
                $tmp790 = $tmp793;
                $tmp789 = $tmp790;
                valueVTable788 = $tmp789;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
                panda$core$Panda$unref$panda$core$Object$Q($tmp791);
                ITable* $tmp801 = ((panda$collections$CollectionView*) valueVTable788)->$class->itable;
                while ($tmp801->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp801 = $tmp801->next;
                }
                $fn803 $tmp802 = $tmp801->methods[0];
                panda$core$Int64 $tmp804 = $tmp802(((panda$collections$CollectionView*) valueVTable788));
                panda$core$Int64$wrapper* $tmp805;
                $tmp805 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp805->value = $tmp804;
                $tmp800 = ((panda$core$Object*) $tmp805);
                panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s799, $tmp800);
                $tmp798 = $tmp806;
                panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, &$s807);
                $tmp797 = $tmp808;
                panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s796, $tmp797);
                $tmp795 = $tmp809;
                panda$core$String* $tmp813 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp812 = $tmp813;
                panda$core$String* $tmp814 = panda$core$String$convert$R$panda$core$String($tmp812);
                $tmp811 = $tmp814;
                panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp811, &$s815);
                $tmp810 = $tmp816;
                panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp795, $tmp810);
                $tmp794 = $tmp817;
                (($fn818) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp794);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
                panda$core$Panda$unref$panda$core$Object$Q($tmp800);
                panda$core$String* $tmp824 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp823 = $tmp824;
                panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s822, $tmp823);
                $tmp821 = $tmp825;
                panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp821, &$s826);
                $tmp820 = $tmp827;
                panda$core$String* $tmp831 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp830 = $tmp831;
                panda$core$String* $tmp832 = panda$core$String$convert$R$panda$core$String($tmp830);
                $tmp829 = $tmp832;
                panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, &$s833);
                $tmp828 = $tmp834;
                panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, $tmp828);
                $tmp819 = $tmp835;
                (($fn836) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp819);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
            }
            $tmp707 = -1;
            goto $l705;
            $l705:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) valueVTable788));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) value780));
            value780 = NULL;
            valueVTable788 = NULL;
            switch ($tmp707) {
                case -1: goto $l837;
            }
            $l837:;
        }
        }
    }
    $tmp492 = -1;
    goto $l490;
    $l490:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) typesPath506));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) path493));
    path493 = NULL;
    typesPath506 = NULL;
    switch ($tmp492) {
        case -1: goto $l838;
    }
    $l838:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result842 = NULL;
    panda$core$String* $tmp843;
    panda$core$String* $tmp844;
    org$pandalanguage$pandac$Type* $tmp845;
    panda$core$Object* $tmp846;
    panda$core$Int64 $tmp851;
    panda$core$String* $returnValue858;
    panda$core$String* $tmp859;
    panda$core$String* $tmp860;
    panda$core$String* $tmp865;
    int $tmp841;
    {
        panda$core$Object* $tmp847 = panda$core$Weak$get$R$panda$core$Weak$T$Q(p_m->owner);
        $tmp846 = $tmp847;
        org$pandalanguage$pandac$Type* $tmp848 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp846));
        $tmp845 = $tmp848;
        panda$core$String* $tmp849 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp845);
        $tmp844 = $tmp849;
        $tmp843 = $tmp844;
        result842 = $tmp843;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
        panda$core$Panda$unref$panda$core$Object$Q($tmp846);
        panda$core$Int64$init$builtin_int64(&$tmp851, 2);
        panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp851);
        bool $tmp850 = $tmp852.value;
        if (!$tmp850) goto $l853;
        panda$core$Bit $tmp855 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result842, &$s854);
        panda$core$Bit $tmp856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp855);
        $tmp850 = $tmp856.value;
        $l853:;
        panda$core$Bit $tmp857 = { $tmp850 };
        if ($tmp857.value) {
        {
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result842, &$s861);
            $tmp860 = $tmp862;
            $tmp859 = $tmp860;
            $returnValue858 = $tmp859;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
            $tmp841 = 0;
            goto $l839;
            $l863:;
            return $returnValue858;
        }
        }
        $tmp865 = result842;
        $returnValue858 = $tmp865;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
        $tmp841 = 1;
        goto $l839;
        $l866:;
        return $returnValue858;
    }
    $l839:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result842));
    result842 = NULL;
    switch ($tmp841) {
        case 1: goto $l866;
        case 0: goto $l863;
    }
    $l868:;
    if (false) goto $l869; else goto $l870;
    $l870:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s871, (panda$core$Int64) { 229 }, &$s872);
    abort();
    $l869:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue875;
    panda$core$Bit $tmp876;
    panda$core$Bit result878;
    panda$core$Object* $tmp886;
    org$pandalanguage$pandac$ClassDecl* $tmp888;
    panda$core$Object* $tmp889;
    panda$core$String* $tmp911;
    panda$core$String* $tmp912;
    panda$core$String* $tmp914;
    panda$core$Bit $tmp873 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp874 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp873);
    if ($tmp874.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp876, false);
        $returnValue875 = $tmp876;
        return $returnValue875;
    }
    }
    panda$core$Bit $tmp881 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp880 = $tmp881.value;
    if (!$tmp880) goto $l882;
    panda$core$Bit $tmp883 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp880 = $tmp883.value;
    $l882:;
    panda$core$Bit $tmp884 = { $tmp880 };
    bool $tmp879 = $tmp884.value;
    if (!$tmp879) goto $l885;
    panda$core$Object* $tmp887 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
    $tmp886 = $tmp887;
    panda$core$Object* $tmp890 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->compiler);
    $tmp889 = $tmp890;
    org$pandalanguage$pandac$ClassDecl* $tmp891 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp889), p_m->returnType);
    $tmp888 = $tmp891;
    panda$core$Bit $tmp892 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp886), $tmp888);
    $tmp879 = $tmp892.value;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
    panda$core$Panda$unref$panda$core$Object$Q($tmp889);
    panda$core$Panda$unref$panda$core$Object$Q($tmp886);
    $l885:;
    panda$core$Bit $tmp893 = { $tmp879 };
    result878 = $tmp893;
    panda$core$Bit $tmp895 = panda$core$Bit$$NOT$R$panda$core$Bit(result878);
    bool $tmp894 = $tmp895.value;
    if ($tmp894) goto $l896;
    panda$core$Bit $tmp898 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp899 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp898);
    bool $tmp897 = $tmp899.value;
    if (!$tmp897) goto $l900;
    panda$core$Bit $tmp902 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp901 = $tmp902.value;
    if ($tmp901) goto $l903;
    panda$core$Bit $tmp904 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp901 = $tmp904.value;
    $l903:;
    panda$core$Bit $tmp905 = { $tmp901 };
    $tmp897 = $tmp905.value;
    $l900:;
    panda$core$Bit $tmp906 = { $tmp897 };
    $tmp894 = $tmp906.value;
    $l896:;
    panda$core$Bit $tmp907 = { $tmp894 };
    if ($tmp907.value) goto $l908; else goto $l909;
    $l909:;
    panda$core$String* $tmp915 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp914 = $tmp915;
    panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s913, $tmp914);
    $tmp912 = $tmp916;
    panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, &$s917);
    $tmp911 = $tmp918;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s910, (panda$core$Int64) { 263 }, $tmp911);
    abort();
    $l908:;
    $returnValue875 = result878;
    return $returnValue875;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp923;
    panda$io$MemoryOutputStream* $tmp924;
    panda$collections$HashSet* $tmp925;
    panda$collections$HashSet* $tmp926;
    panda$core$String* separator927 = NULL;
    panda$core$String* $tmp928;
    panda$core$String* $tmp931;
    panda$core$String* $tmp932;
    panda$core$String* $tmp933;
    panda$core$String* $tmp934;
    panda$core$String* $tmp936;
    panda$core$String* $tmp941;
    panda$core$String* $tmp947;
    panda$core$String* $tmp948;
    panda$core$String* $tmp950;
    panda$core$String* $tmp951;
    panda$core$String* $tmp952;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    panda$core$String* $tmp959;
    panda$core$String* $tmp967;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$core$String* $tmp970;
    panda$core$String* $tmp974;
    panda$core$String* $tmp980;
    panda$core$String* $tmp981;
    panda$collections$Iterator* Iter$284$9986 = NULL;
    panda$collections$Iterator* $tmp987;
    panda$collections$Iterator* $tmp988;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1004 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1005;
    panda$core$Object* $tmp1006;
    panda$core$String* name1011 = NULL;
    panda$core$String* $tmp1012;
    panda$core$String* $tmp1013;
    panda$core$String* $tmp1014;
    panda$core$String* $tmp1016;
    panda$core$String* $tmp1021;
    panda$core$String* $tmp1022;
    panda$core$String* $tmp1023;
    panda$core$String* $tmp1024;
    panda$core$String* $tmp1028;
    panda$core$String* $tmp1034;
    panda$core$String* $tmp1035;
    int $tmp922;
    {
        {
            $tmp923 = self->importStream;
            $tmp924 = self->bodyImportStream;
            self->importStream = $tmp924;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
        }
        {
            $tmp925 = self->imports;
            $tmp926 = self->bodyImports;
            self->imports = $tmp926;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp925));
        }
        $tmp928 = &$s929;
        separator927 = $tmp928;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
        panda$core$Bit $tmp930 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp930.value) {
        {
            panda$core$String* $tmp937 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp936 = $tmp937;
            panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s935, $tmp936);
            $tmp934 = $tmp938;
            panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp934, &$s939);
            $tmp933 = $tmp940;
            panda$core$String* $tmp942 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp941 = $tmp942;
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, $tmp941);
            $tmp932 = $tmp943;
            panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp932, &$s944);
            $tmp931 = $tmp945;
            (($fn946) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp931);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
            {
                $tmp947 = separator927;
                $tmp948 = &$s949;
                separator927 = $tmp948;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp955 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp954 = $tmp955;
            panda$core$String* $tmp956 = panda$core$String$convert$R$panda$core$String($tmp954);
            $tmp953 = $tmp956;
            panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s957);
            $tmp952 = $tmp958;
            panda$core$String* $tmp960 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp959 = $tmp960;
            panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, $tmp959);
            $tmp951 = $tmp961;
            panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, &$s962);
            $tmp950 = $tmp963;
            (($fn964) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp950);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
        }
        }
        panda$core$Bit $tmp965 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp966 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp965);
        if ($tmp966.value) {
        {
            panda$core$String* $tmp971 = panda$core$String$convert$R$panda$core$String(separator927);
            $tmp970 = $tmp971;
            panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s972);
            $tmp969 = $tmp973;
            panda$core$String* $tmp975 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp974 = $tmp975;
            panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, $tmp974);
            $tmp968 = $tmp976;
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, &$s977);
            $tmp967 = $tmp978;
            (($fn979) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp967);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
            {
                $tmp980 = separator927;
                $tmp981 = &$s982;
                separator927 = $tmp981;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
            }
        }
        }
        {
            int $tmp985;
            {
                ITable* $tmp989 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp989->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp989 = $tmp989->next;
                }
                $fn991 $tmp990 = $tmp989->methods[0];
                panda$collections$Iterator* $tmp992 = $tmp990(((panda$collections$Iterable*) p_m->parameters));
                $tmp988 = $tmp992;
                $tmp987 = $tmp988;
                Iter$284$9986 = $tmp987;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
                $l993:;
                ITable* $tmp996 = Iter$284$9986->$class->itable;
                while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp996 = $tmp996->next;
                }
                $fn998 $tmp997 = $tmp996->methods[0];
                panda$core$Bit $tmp999 = $tmp997(Iter$284$9986);
                panda$core$Bit $tmp1000 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp999);
                bool $tmp995 = $tmp1000.value;
                if (!$tmp995) goto $l994;
                {
                    int $tmp1003;
                    {
                        ITable* $tmp1007 = Iter$284$9986->$class->itable;
                        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1007 = $tmp1007->next;
                        }
                        $fn1009 $tmp1008 = $tmp1007->methods[1];
                        panda$core$Object* $tmp1010 = $tmp1008(Iter$284$9986);
                        $tmp1006 = $tmp1010;
                        $tmp1005 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1006);
                        p1004 = $tmp1005;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1006);
                        panda$core$String* $tmp1017 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p1004->name);
                        $tmp1016 = $tmp1017;
                        panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1015, $tmp1016);
                        $tmp1014 = $tmp1018;
                        panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, &$s1019);
                        $tmp1013 = $tmp1020;
                        $tmp1012 = $tmp1013;
                        name1011 = $tmp1012;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
                        panda$core$String* $tmp1025 = panda$core$String$convert$R$panda$core$String(separator927);
                        $tmp1024 = $tmp1025;
                        panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1026);
                        $tmp1023 = $tmp1027;
                        panda$core$String* $tmp1029 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p1004->type, name1011);
                        $tmp1028 = $tmp1029;
                        panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, $tmp1028);
                        $tmp1022 = $tmp1030;
                        panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1031);
                        $tmp1021 = $tmp1032;
                        (($fn1033) ((panda$io$OutputStream*) self->body)->$class->vtable[17])(((panda$io$OutputStream*) self->body), $tmp1021);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
                        {
                            $tmp1034 = separator927;
                            $tmp1035 = &$s1036;
                            separator927 = $tmp1035;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
                        }
                    }
                    $tmp1003 = -1;
                    goto $l1001;
                    $l1001:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name1011));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1004));
                    p1004 = NULL;
                    name1011 = NULL;
                    switch ($tmp1003) {
                        case -1: goto $l1037;
                    }
                    $l1037:;
                }
                goto $l993;
                $l994:;
            }
            $tmp985 = -1;
            goto $l983;
            $l983:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$284$9986));
            Iter$284$9986 = NULL;
            switch ($tmp985) {
                case -1: goto $l1038;
            }
            $l1038:;
        }
        (($fn1040) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s1039);
    }
    $tmp922 = -1;
    goto $l920;
    $l920:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator927));
    separator927 = NULL;
    switch ($tmp922) {
        case -1: goto $l1041;
    }
    $l1041:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp1042;
    panda$core$String* $tmp1045;
    panda$core$String* $tmp1048;
    panda$core$String* $tmp1051;
    panda$core$String* $tmp1043 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp1042 = $tmp1043;
    (($fn1044) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), $tmp1042);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
    panda$core$String* $tmp1046 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp1045 = $tmp1046;
    (($fn1047) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), $tmp1045);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
    panda$core$String* $tmp1049 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp1048 = $tmp1049;
    (($fn1050) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1048);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
    panda$core$String* $tmp1052 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp1051 = $tmp1052;
    (($fn1053) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1051);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp1056;
    {
    }
    $tmp1056 = -1;
    goto $l1054;
    $l1054:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1056) {
        case -1: goto $l1057;
    }
    $l1057:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->typeImportStream));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->typesBuffer));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->bodyImportStream));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->bodyBuffer));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->typeImports));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->bodyImports));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->imports));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->importStream));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->typesOut));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->llvmCodeGen));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->cCodeGen));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->cCodeGenRetain));
}

