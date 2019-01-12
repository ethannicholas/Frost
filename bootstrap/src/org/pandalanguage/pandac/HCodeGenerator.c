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
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/MethodDecl/GenericParameter.h"
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

typedef void (*$fn228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn507)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn527)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn571)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn575)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn580)(panda$collections$Iterator*);
typedef void (*$fn611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn628)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn669)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn691)(panda$collections$CollectionView*);
typedef void (*$fn707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn754)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn848)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn866)(panda$collections$CollectionView*);
typedef void (*$fn883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn901)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn921)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1059)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1067)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1071)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1076)(panda$collections$Iterator*);
typedef void (*$fn1103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1120)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1126)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1132)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1138)(panda$io$OutputStream*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -4892902456452664750, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, panda$io$File* param1) {

// line 42
org$pandalanguage$pandac$CCodeGenerator* $tmp2 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$HCodeGenerator($tmp2, param1, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$CCodeGenerator** $tmp3 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
org$pandalanguage$pandac$CCodeGenerator** $tmp5 = &param0->cCodeGenRetain;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.pandac.CCodeGenerator)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Weak** $tmp9 = &param0->compiler;
panda$core$Weak* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.Compiler?>)
// line 8
panda$io$MemoryOutputStream* $tmp12 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$io$MemoryOutputStream** $tmp13 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$io$MemoryOutputStream** $tmp15 = &param0->typeImportStream;
*$tmp15 = $tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($17:panda.io.MemoryOutputStream)
// line 10
panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$io$MemoryOutputStream** $tmp17 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$io$MemoryOutputStream** $tmp19 = &param0->typesBuffer;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($31:panda.io.MemoryOutputStream)
// line 12
panda$io$IndentedOutputStream* $tmp20 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp21 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp22 = *$tmp21;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp20, ((panda$io$OutputStream*) $tmp22));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$io$IndentedOutputStream** $tmp23 = &param0->types;
panda$io$IndentedOutputStream* $tmp24 = *$tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$io$IndentedOutputStream** $tmp25 = &param0->types;
*$tmp25 = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($45:panda.io.IndentedOutputStream)
// line 14
panda$io$MemoryOutputStream* $tmp26 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$io$MemoryOutputStream** $tmp27 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp28 = *$tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$io$MemoryOutputStream** $tmp29 = &param0->bodyImportStream;
*$tmp29 = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($62:panda.io.MemoryOutputStream)
// line 16
panda$io$MemoryOutputStream* $tmp30 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp30);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$io$MemoryOutputStream** $tmp31 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$io$MemoryOutputStream** $tmp33 = &param0->bodyBuffer;
*$tmp33 = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($76:panda.io.MemoryOutputStream)
// line 18
panda$io$IndentedOutputStream* $tmp34 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp35 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp36 = *$tmp35;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp34, ((panda$io$OutputStream*) $tmp36));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$io$IndentedOutputStream** $tmp37 = &param0->body;
panda$io$IndentedOutputStream* $tmp38 = *$tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$io$IndentedOutputStream** $tmp39 = &param0->body;
*$tmp39 = $tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($90:panda.io.IndentedOutputStream)
// line 20
panda$collections$HashSet* $tmp40 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp40);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$collections$HashSet** $tmp41 = &param0->typeImports;
panda$collections$HashSet* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$collections$HashSet** $tmp43 = &param0->typeImports;
*$tmp43 = $tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($107:panda.collections.HashSet<panda.core.String>)
// line 22
panda$collections$HashSet* $tmp44 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$collections$HashSet** $tmp45 = &param0->bodyImports;
panda$collections$HashSet* $tmp46 = *$tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$collections$HashSet** $tmp47 = &param0->bodyImports;
*$tmp47 = $tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($122:panda.collections.HashSet<panda.core.String>)
// line 24
panda$collections$HashSet** $tmp48 = &param0->typeImports;
panda$collections$HashSet* $tmp49 = *$tmp48;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$collections$HashSet** $tmp50 = &param0->imports;
panda$collections$HashSet* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$collections$HashSet** $tmp52 = &param0->imports;
*$tmp52 = $tmp49;
// line 26
panda$io$MemoryOutputStream** $tmp53 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp54 = *$tmp53;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$io$MemoryOutputStream** $tmp55 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp56 = *$tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$io$MemoryOutputStream** $tmp57 = &param0->importStream;
*$tmp57 = $tmp54;
// line 34
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp58 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$io$MemoryOutputStream* $tmp59 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp59);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp58, &$s60, ((panda$io$OutputStream*) $tmp59));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp61 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp62 = *$tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp63 = &param0->llvmCodeGen;
*$tmp63 = $tmp58;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($160:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($159:org.pandalanguage.pandac.LLVMCodeGenerator)
// line 47
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp64 = &param0->outDir;
panda$io$File* $tmp65 = *$tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$io$File** $tmp66 = &param0->outDir;
*$tmp66 = param1;
// line 48
panda$io$IndentedOutputStream* $tmp67 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp68 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp68);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp67, ((panda$io$OutputStream*) $tmp68));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$io$IndentedOutputStream** $tmp69 = &param0->out;
panda$io$IndentedOutputStream* $tmp70 = *$tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$io$IndentedOutputStream** $tmp71 = &param0->out;
*$tmp71 = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($189:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($188:panda.io.IndentedOutputStream)
// line 49
panda$io$IndentedOutputStream* $tmp72 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp73 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp73);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp72, ((panda$io$OutputStream*) $tmp73));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$io$IndentedOutputStream** $tmp74 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$io$IndentedOutputStream** $tmp76 = &param0->typesOut;
*$tmp76 = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($209:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($208:panda.io.IndentedOutputStream)
// line 50
panda$core$Weak* $tmp77 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp77, ((panda$core$Object*) param2));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Weak** $tmp78 = &param0->cCodeGen;
panda$core$Weak* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Weak** $tmp80 = &param0->cCodeGen;
*$tmp80 = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($228:panda.core.Weak<org.pandalanguage.pandac.CCodeGenerator>)
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, panda$core$String* param1) {

// line 54
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp82 = *$tmp81;
panda$core$String* $tmp83 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String($tmp82, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($3:panda.core.String)
return $tmp83;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
// line 58
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp85 = *$tmp84;
panda$core$String* $tmp86 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String($tmp85, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
panda$core$String* $tmp87 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local0) = $tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing REF($3:panda.core.String)
// line 59
panda$core$String* $tmp88 = *(&local0);
panda$core$Bit $tmp89 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp88, &$s90);
bool $tmp91 = $tmp89.value;
if ($tmp91) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp92 = (panda$core$Int64) {59};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s93, $tmp92);
abort(); // unreachable
block1:;
// line 60
panda$core$String* $tmp94 = *(&local0);
panda$core$Int64 $tmp95 = (panda$core$Int64) {1};
panda$core$Bit $tmp96 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp97 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp95, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp96);
panda$core$String* $tmp98 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp94, $tmp97);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($28:panda.core.String)
panda$core$String* $tmp99 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing llvmName
*(&local0) = ((panda$core$String*) NULL);
return $tmp98;

}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 64
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp100 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp101 = *$tmp100;
panda$core$Int64 $tmp102 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64($tmp101, param1);
return $tmp102;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 68
panda$core$String** $tmp103 = &param1->name;
panda$core$String* $tmp104 = *$tmp103;
panda$core$String* $tmp105 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp104, &$s106, &$s107);
panda$core$String* $tmp108 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp105, &$s109, &$s110);
panda$core$String* $tmp111 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp108, &$s112, &$s113);
panda$core$String* $tmp114 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp111, &$s115, &$s116);
panda$core$String* $tmp117 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp114, &$s118, &$s119);
panda$core$String* $tmp120 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp117, &$s121, &$s122);
panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing REF($3:panda.core.String)
return $tmp123;

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
org$pandalanguage$pandac$Type$Kind* $tmp124 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp125 = *$tmp124;
panda$core$Int64 $tmp126 = $tmp125.$rawValue;
panda$core$Int64 $tmp127 = (panda$core$Int64) {4};
panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block2; else goto block3;
block2:;
// line 75
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s130));
return &$s131;
block3:;
panda$core$Int64 $tmp132 = (panda$core$Int64) {2};
panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block4; else goto block5;
block4:;
// line 78
panda$core$Int64 $tmp135 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp136 = (panda$core$Int64) {8};
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137 * $tmp138;
panda$core$Int64 $tmp140 = (panda$core$Int64) {$tmp139};
panda$core$Int64$wrapper* $tmp141;
$tmp141 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp141->value = $tmp140;
panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s143, ((panda$core$Object*) $tmp141));
panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s145);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($23:panda.core.Object)
return $tmp144;
block5:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {3};
panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block6; else goto block7;
block6:;
// line 81
panda$core$Int64 $tmp149 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp150 = (panda$core$Int64) {8};
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151 * $tmp152;
panda$core$Int64 $tmp154 = (panda$core$Int64) {$tmp153};
panda$core$Int64$wrapper* $tmp155;
$tmp155 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp155->value = $tmp154;
panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s157, ((panda$core$Object*) $tmp155));
panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s159);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($49:panda.core.Object)
return $tmp158;
block7:;
panda$core$Int64 $tmp160 = (panda$core$Int64) {9};
panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block8; else goto block9;
block8:;
// line 84
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s163));
return &$s164;
block9:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {10};
panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block10; else goto block11;
block10:;
// line 87
panda$core$Int64 $tmp168 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp169 = (panda$core$Int64) {4};
panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp168, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block13; else goto block14;
block13:;
// line 88
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s172));
return &$s173;
block14:;
panda$core$Int64 $tmp174 = (panda$core$Int64) {8};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp168, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block15; else goto block16;
block15:;
// line 89
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s177));
return &$s178;
block16:;
// line 90
panda$core$Bit $tmp179 = panda$core$Bit$init$builtin_bit(false);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp181 = (panda$core$Int64) {90};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s182, $tmp181);
abort(); // unreachable
block17:;
goto block12;
block12:;
goto block1;
block11:;
panda$core$Int64 $tmp183 = (panda$core$Int64) {0};
panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block19; else goto block20;
block19:;
// line 94
panda$core$String** $tmp186 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp187 = *$tmp186;
panda$core$String* $tmp188 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp187);
panda$core$String* $tmp189 = panda$core$String$convert$R$panda$core$String($tmp188);
panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s191);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$String* $tmp192 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
*(&local0) = $tmp190;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($112:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($111:panda.core.String)
// line 95
panda$core$Weak** $tmp193 = &param0->compiler;
panda$core$Weak* $tmp194 = *$tmp193;
panda$core$Object* $tmp195 = panda$core$Weak$get$R$panda$core$Weak$T($tmp194);
org$pandalanguage$pandac$ClassDecl* $tmp196 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp195), param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
org$pandalanguage$pandac$ClassDecl* $tmp197 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
*(&local1) = $tmp196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($137:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp195);
// unreffing REF($134:panda.core.Weak.T)
// line 96
org$pandalanguage$pandac$ClassDecl* $tmp198 = *(&local1);
panda$core$Bit $tmp199 = panda$core$Bit$init$builtin_bit($tmp198 != NULL);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp201 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s202, $tmp201);
abort(); // unreachable
block21:;
// line 97
panda$core$Weak** $tmp203 = &param0->compiler;
panda$core$Weak* $tmp204 = *$tmp203;
panda$core$Object* $tmp205 = panda$core$Weak$get$R$panda$core$Weak$T($tmp204);
org$pandalanguage$pandac$ClassDecl* $tmp206 = *(&local1);
panda$core$Bit $tmp207 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp205), $tmp206);
panda$core$Bit $tmp208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp207);
bool $tmp209 = $tmp208.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp205);
// unreffing REF($164:panda.core.Weak.T)
if ($tmp209) goto block23; else goto block24;
block23:;
// line 98
panda$collections$HashSet** $tmp210 = &param0->imports;
panda$collections$HashSet* $tmp211 = *$tmp210;
panda$core$String* $tmp212 = *(&local0);
panda$core$Bit $tmp213 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp211, ((panda$collections$Key*) $tmp212));
panda$core$Bit $tmp214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block25; else goto block26;
block25:;
// line 99
panda$io$MemoryOutputStream** $tmp216 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp217 = *$tmp216;
panda$core$String* $tmp218 = *(&local0);
panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s220, $tmp218);
panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s222);
panda$core$String* $tmp223 = *(&local0);
panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, $tmp223);
panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s226);
$fn228 $tmp227 = ($fn228) ((panda$io$OutputStream*) $tmp217)->$class->vtable[19];
$tmp227(((panda$io$OutputStream*) $tmp217), $tmp225);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing REF($194:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($193:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing REF($191:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing REF($190:panda.core.String)
// line 100
panda$collections$HashSet** $tmp229 = &param0->imports;
panda$collections$HashSet* $tmp230 = *$tmp229;
panda$core$String* $tmp231 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp230, ((panda$collections$Key*) $tmp231));
goto block26;
block26:;
// line 102
panda$core$String* $tmp232 = *(&local0);
panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s234);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing REF($219:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp235 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp236 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp233;
block24:;
// line 104
org$pandalanguage$pandac$ClassDecl* $tmp237 = *(&local1);
panda$core$String* $tmp238 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp237, &$s239);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$core$String* $tmp240 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
*(&local2) = $tmp238;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($239:panda.core.String)
// line 105
panda$collections$HashSet** $tmp241 = &param0->imports;
panda$collections$HashSet* $tmp242 = *$tmp241;
panda$core$String* $tmp243 = *(&local2);
panda$core$Bit $tmp244 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp242, ((panda$collections$Key*) $tmp243));
panda$core$Bit $tmp245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block27; else goto block28;
block27:;
// line 106
panda$io$MemoryOutputStream** $tmp247 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp248 = *$tmp247;
panda$core$String* $tmp249 = *(&local2);
panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s251, $tmp249);
panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s253);
$fn255 $tmp254 = ($fn255) ((panda$io$OutputStream*) $tmp248)->$class->vtable[19];
$tmp254(((panda$io$OutputStream*) $tmp248), $tmp252);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($265:panda.core.String)
// line 107
panda$collections$HashSet** $tmp256 = &param0->imports;
panda$collections$HashSet* $tmp257 = *$tmp256;
panda$core$String* $tmp258 = *(&local2);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp257, ((panda$collections$Key*) $tmp258));
goto block28;
block28:;
// line 109
panda$core$String* $tmp259 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
panda$core$String* $tmp260 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing includePath
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp261 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp262 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp259;
block20:;
panda$core$Int64 $tmp263 = (panda$core$Int64) {1};
panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block29; else goto block30;
block29:;
// line 112
panda$core$Weak** $tmp266 = &param0->compiler;
panda$core$Weak* $tmp267 = *$tmp266;
panda$core$Object* $tmp268 = panda$core$Weak$get$R$panda$core$Weak$T($tmp267);
org$pandalanguage$pandac$ClassDecl* $tmp269 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp268), param1);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
org$pandalanguage$pandac$ClassDecl* $tmp270 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
*(&local3) = $tmp269;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($314:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp268);
// unreffing REF($311:panda.core.Weak.T)
// line 113
org$pandalanguage$pandac$ClassDecl* $tmp271 = *(&local3);
panda$core$Bit $tmp272 = panda$core$Bit$init$builtin_bit($tmp271 != NULL);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp274 = (panda$core$Int64) {113};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s275, $tmp274);
abort(); // unreachable
block31:;
// line 114
panda$core$Weak** $tmp276 = &param0->compiler;
panda$core$Weak* $tmp277 = *$tmp276;
panda$core$Object* $tmp278 = panda$core$Weak$get$R$panda$core$Weak$T($tmp277);
org$pandalanguage$pandac$ClassDecl* $tmp279 = *(&local3);
panda$core$Bit $tmp280 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp278), $tmp279);
bool $tmp281 = $tmp280.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp278);
// unreffing REF($341:panda.core.Weak.T)
if ($tmp281) goto block33; else goto block34;
block33:;
// line 115
org$pandalanguage$pandac$FixedArray** $tmp282 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp283 = *$tmp282;
panda$core$Int64 $tmp284 = (panda$core$Int64) {0};
panda$core$Object* $tmp285 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp283, $tmp284);
panda$core$String* $tmp286 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp285));
panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s288);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($360:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
// unreffing REF($359:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp285);
// unreffing REF($357:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp289 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp287;
block34:;
// line 117
org$pandalanguage$pandac$FixedArray** $tmp290 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp291 = *$tmp290;
panda$core$Int64 $tmp292 = (panda$core$Int64) {0};
panda$core$Object* $tmp293 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp291, $tmp292);
panda$core$String* $tmp294 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp293));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($386:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp293);
// unreffing REF($384:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp295 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp294;
block30:;
panda$core$Int64 $tmp296 = (panda$core$Int64) {11};
panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp296);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block35; else goto block36;
block35:;
// line 120
org$pandalanguage$pandac$FixedArray** $tmp299 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp300 = *$tmp299;
panda$core$Int64 $tmp301 = (panda$core$Int64) {0};
panda$core$Object* $tmp302 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp300, $tmp301);
panda$core$String** $tmp303 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp302))->name;
panda$core$String* $tmp304 = *$tmp303;
panda$core$Bit $tmp305 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp304, &$s306);
bool $tmp307 = $tmp305.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp302);
// unreffing REF($411:org.pandalanguage.pandac.FixedArray.T)
if ($tmp307) goto block37; else goto block38;
block37:;
// line 121
org$pandalanguage$pandac$FixedArray** $tmp308 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp309 = *$tmp308;
panda$core$Int64 $tmp310 = (panda$core$Int64) {1};
panda$core$Object* $tmp311 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp309, $tmp310);
panda$core$String* $tmp312 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp311));
panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s314);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing REF($431:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing REF($430:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp311);
// unreffing REF($428:org.pandalanguage.pandac.FixedArray.T)
return $tmp313;
block38:;
// line 123
panda$core$Weak** $tmp315 = &param0->compiler;
panda$core$Weak* $tmp316 = *$tmp315;
panda$core$Object* $tmp317 = panda$core$Weak$get$R$panda$core$Weak$T($tmp316);
org$pandalanguage$pandac$ClassDecl* $tmp318 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp317), param1);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
org$pandalanguage$pandac$ClassDecl* $tmp319 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
*(&local4) = $tmp318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($451:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp317);
// unreffing REF($448:panda.core.Weak.T)
// line 124
org$pandalanguage$pandac$ClassDecl* $tmp320 = *(&local4);
panda$core$Bit $tmp321 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit($tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block39; else goto block40;
block39:;
// line 125
panda$core$String** $tmp323 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp324 = *$tmp323;
panda$core$String* $tmp325 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp324);
panda$core$String* $tmp326 = panda$core$String$convert$R$panda$core$String($tmp325);
panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s328);
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$core$String* $tmp329 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
*(&local5) = $tmp327;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing REF($477:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($476:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing REF($475:panda.core.String)
// line 126
panda$core$Weak** $tmp330 = &param0->compiler;
panda$core$Weak* $tmp331 = *$tmp330;
panda$core$Object* $tmp332 = panda$core$Weak$get$R$panda$core$Weak$T($tmp331);
org$pandalanguage$pandac$ClassDecl* $tmp333 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp332), param1);
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
org$pandalanguage$pandac$ClassDecl* $tmp334 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
*(&local6) = $tmp333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($501:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp332);
// unreffing REF($498:panda.core.Weak.T)
// line 127
org$pandalanguage$pandac$ClassDecl* $tmp335 = *(&local6);
panda$core$Bit $tmp336 = panda$core$Bit$init$builtin_bit($tmp335 != NULL);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp338 = (panda$core$Int64) {127};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s339, $tmp338);
abort(); // unreachable
block41:;
// line 128
panda$core$Weak** $tmp340 = &param0->compiler;
panda$core$Weak* $tmp341 = *$tmp340;
panda$core$Object* $tmp342 = panda$core$Weak$get$R$panda$core$Weak$T($tmp341);
org$pandalanguage$pandac$ClassDecl* $tmp343 = *(&local6);
panda$core$Bit $tmp344 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp342), $tmp343);
panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
bool $tmp346 = $tmp345.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp342);
// unreffing REF($528:panda.core.Weak.T)
if ($tmp346) goto block43; else goto block44;
block43:;
// line 129
panda$collections$HashSet** $tmp347 = &param0->imports;
panda$collections$HashSet* $tmp348 = *$tmp347;
panda$core$String* $tmp349 = *(&local5);
panda$core$Bit $tmp350 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp348, ((panda$collections$Key*) $tmp349));
panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block45; else goto block46;
block45:;
// line 130
panda$io$MemoryOutputStream** $tmp353 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp354 = *$tmp353;
panda$core$String* $tmp355 = *(&local5);
panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s357, $tmp355);
panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s359);
panda$core$String* $tmp360 = *(&local5);
panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, $tmp360);
panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s363);
$fn365 $tmp364 = ($fn365) ((panda$io$OutputStream*) $tmp354)->$class->vtable[19];
$tmp364(((panda$io$OutputStream*) $tmp354), $tmp362);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($558:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing REF($557:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing REF($555:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($554:panda.core.String)
// line 131
panda$collections$HashSet** $tmp366 = &param0->imports;
panda$collections$HashSet* $tmp367 = *$tmp366;
panda$core$String* $tmp368 = *(&local5);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp367, ((panda$collections$Key*) $tmp368));
goto block46;
block46:;
// line 133
panda$core$String* $tmp369 = *(&local5);
panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s371);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing REF($583:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp372 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing cl
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp373 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp374 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp370;
block44:;
// line 135
org$pandalanguage$pandac$ClassDecl* $tmp375 = *(&local6);
panda$core$String* $tmp376 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp375, &$s377);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$String* $tmp378 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
*(&local7) = $tmp376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($608:panda.core.String)
// line 136
panda$collections$HashSet** $tmp379 = &param0->imports;
panda$collections$HashSet* $tmp380 = *$tmp379;
panda$core$String* $tmp381 = *(&local7);
panda$core$Bit $tmp382 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp380, ((panda$collections$Key*) $tmp381));
panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block47; else goto block48;
block47:;
// line 137
panda$io$MemoryOutputStream** $tmp385 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp386 = *$tmp385;
panda$core$String* $tmp387 = *(&local7);
panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s389, $tmp387);
panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp388, &$s391);
$fn393 $tmp392 = ($fn393) ((panda$io$OutputStream*) $tmp386)->$class->vtable[19];
$tmp392(((panda$io$OutputStream*) $tmp386), $tmp390);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($635:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing REF($634:panda.core.String)
// line 138
panda$collections$HashSet** $tmp394 = &param0->imports;
panda$collections$HashSet* $tmp395 = *$tmp394;
panda$core$String* $tmp396 = *(&local7);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp395, ((panda$collections$Key*) $tmp396));
goto block48;
block48:;
// line 140
panda$core$String* $tmp397 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
panda$core$String* $tmp398 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing includePath
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp399 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing cl
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp400 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp401 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp397;
block40:;
// line 142
org$pandalanguage$pandac$FixedArray** $tmp402 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp403 = *$tmp402;
panda$core$Int64 $tmp404 = (panda$core$Int64) {0};
panda$core$Object* $tmp405 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp403, $tmp404);
panda$core$String* $tmp406 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp405));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing REF($685:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp405);
// unreffing REF($683:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp407 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp406;
block36:;
panda$core$Int64 $tmp408 = (panda$core$Int64) {12};
panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block49; else goto block50;
block49:;
// line 145
panda$core$Weak** $tmp411 = &param1->genericClassParameter;
panda$core$Weak* $tmp412 = *$tmp411;
panda$core$Object* $tmp413 = panda$core$Weak$get$R$panda$core$Weak$T($tmp412);
org$pandalanguage$pandac$Type** $tmp414 = &((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp413)->bound;
org$pandalanguage$pandac$Type* $tmp415 = *$tmp414;
panda$core$String* $tmp416 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp415);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
// unreffing REF($713:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp413);
// unreffing REF($708:panda.core.Weak.T)
return $tmp416;
block50:;
panda$core$Int64 $tmp417 = (panda$core$Int64) {13};
panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block51; else goto block52;
block51:;
// line 148
panda$core$Weak** $tmp420 = &param1->genericMethodParameter;
panda$core$Weak* $tmp421 = *$tmp420;
panda$core$Object* $tmp422 = panda$core$Weak$get$R$panda$core$Weak$T($tmp421);
org$pandalanguage$pandac$Type** $tmp423 = &((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp422)->bound;
org$pandalanguage$pandac$Type* $tmp424 = *$tmp423;
panda$core$String* $tmp425 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp424);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($736:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp422);
// unreffing REF($731:panda.core.Weak.T)
return $tmp425;
block52:;
panda$core$Int64 $tmp426 = (panda$core$Int64) {15};
panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp429 = (panda$core$Int64) {16};
panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block53; else goto block55;
block53:;
// line 151
org$pandalanguage$pandac$Type* $tmp432 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp433 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp432);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing REF($756:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($755:org.pandalanguage.pandac.Type)
return $tmp433;
block55:;
panda$core$Int64 $tmp434 = (panda$core$Int64) {17};
panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp437 = (panda$core$Int64) {18};
panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp437);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block56; else goto block58;
block56:;
// line 154
org$pandalanguage$pandac$Type* $tmp440 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp441 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp440);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing REF($776:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
// unreffing REF($775:org.pandalanguage.pandac.Type)
return $tmp441;
block58:;
// line 157
panda$core$Bit $tmp442 = panda$core$Bit$init$builtin_bit(false);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp444 = (panda$core$Int64) {157};
panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s446, ((panda$core$Object*) param1));
panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s448);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s449, $tmp444, $tmp447);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing REF($793:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing REF($792:panda.core.String)
abort(); // unreachable
block59:;
goto block1;
block1:;
panda$core$Bit $tmp450 = panda$core$Bit$init$builtin_bit(false);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block61; else goto block62;
block62:;
panda$core$Int64 $tmp452 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s453, $tmp452, &$s454);
abort(); // unreachable
block61:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$String* param2) {

// line 163
panda$core$String* $tmp455 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp456 = panda$core$String$convert$R$panda$core$String($tmp455);
panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s458);
panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, param2);
panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, &$s461);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// unreffing REF($1:panda.core.String)
return $tmp460;

}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 168
panda$core$Weak* $tmp462 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp462, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
panda$core$Weak** $tmp463 = &param0->compiler;
panda$core$Weak* $tmp464 = *$tmp463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
panda$core$Weak** $tmp465 = &param0->compiler;
*$tmp465 = $tmp462;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing REF($2:panda.core.Weak<org.pandalanguage.pandac.Compiler?>)
// line 169
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp466 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp467 = *$tmp466;
org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler($tmp467, param1);
return;

}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 173
panda$io$File** $tmp468 = &param0->outDir;
panda$io$File* $tmp469 = *$tmp468;
panda$core$String* $tmp470 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, param1, param2);
panda$io$File* $tmp471 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp469, $tmp470);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
// unreffing REF($4:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
// unreffing REF($3:panda.core.String)
return $tmp471;

}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
panda$io$File* local1 = NULL;
org$pandalanguage$pandac$FieldDecl* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
panda$collections$ListView* local4 = NULL;
// line 178
panda$io$MemoryOutputStream** $tmp472 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp473 = *$tmp472;
panda$io$MemoryOutputStream$clear($tmp473);
// line 179
panda$io$MemoryOutputStream** $tmp474 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp475 = *$tmp474;
panda$io$MemoryOutputStream$clear($tmp475);
// line 180
panda$io$MemoryOutputStream** $tmp476 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp477 = *$tmp476;
panda$io$MemoryOutputStream$clear($tmp477);
// line 181
panda$io$MemoryOutputStream** $tmp478 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp479 = *$tmp478;
panda$io$MemoryOutputStream$clear($tmp479);
// line 182
panda$collections$HashSet** $tmp480 = &param0->typeImports;
panda$collections$HashSet* $tmp481 = *$tmp480;
panda$collections$HashSet$clear($tmp481);
// line 183
panda$collections$HashSet** $tmp482 = &param0->bodyImports;
panda$collections$HashSet* $tmp483 = *$tmp482;
panda$collections$HashSet$clear($tmp483);
// line 184
panda$io$File* $tmp484 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s485);
*(&local0) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
panda$io$File* $tmp486 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
*(&local0) = $tmp484;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
// unreffing REF($27:panda.io.File)
// line 185
panda$io$File* $tmp487 = *(&local0);
panda$io$File* $tmp488 = panda$io$File$get_parent$R$panda$io$File$Q($tmp487);
panda$io$File$createDirectories($tmp488);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
// unreffing REF($40:panda.io.File?)
// line 186
panda$io$IndentedOutputStream* $tmp489 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp490 = *(&local0);
panda$io$OutputStream* $tmp491 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp490);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp489, $tmp491);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
panda$io$IndentedOutputStream** $tmp492 = &param0->out;
panda$io$IndentedOutputStream* $tmp493 = *$tmp492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
panda$io$IndentedOutputStream** $tmp494 = &param0->out;
*$tmp494 = $tmp489;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
// unreffing REF($49:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($47:panda.io.IndentedOutputStream)
// line 187
panda$io$File* $tmp495 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s496);
*(&local1) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
panda$io$File* $tmp497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
*(&local1) = $tmp495;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing REF($66:panda.io.File)
// line 188
panda$io$IndentedOutputStream* $tmp498 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp499 = *(&local1);
panda$io$OutputStream* $tmp500 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp499);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp498, $tmp500);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
panda$io$IndentedOutputStream** $tmp501 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp502 = *$tmp501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
panda$io$IndentedOutputStream** $tmp503 = &param0->typesOut;
*$tmp503 = $tmp498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing REF($80:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing REF($78:panda.io.IndentedOutputStream)
// line 189
panda$io$IndentedOutputStream** $tmp504 = &param0->out;
panda$io$IndentedOutputStream* $tmp505 = *$tmp504;
$fn507 $tmp506 = ($fn507) ((panda$io$OutputStream*) $tmp505)->$class->vtable[19];
$tmp506(((panda$io$OutputStream*) $tmp505), &$s508);
// line 190
panda$io$IndentedOutputStream** $tmp509 = &param0->out;
panda$io$IndentedOutputStream* $tmp510 = *$tmp509;
$fn512 $tmp511 = ($fn512) ((panda$io$OutputStream*) $tmp510)->$class->vtable[19];
$tmp511(((panda$io$OutputStream*) $tmp510), &$s513);
// line 191
panda$io$IndentedOutputStream** $tmp514 = &param0->out;
panda$io$IndentedOutputStream* $tmp515 = *$tmp514;
panda$io$File* $tmp516 = *(&local1);
panda$core$String* $tmp517 = panda$io$File$get_name$R$panda$core$String($tmp516);
panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s519, $tmp517);
panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s521);
$fn523 $tmp522 = ($fn523) ((panda$io$OutputStream*) $tmp515)->$class->vtable[19];
$tmp522(((panda$io$OutputStream*) $tmp515), $tmp520);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
// unreffing REF($115:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing REF($113:panda.core.String)
// line 192
panda$io$IndentedOutputStream** $tmp524 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp525 = *$tmp524;
$fn527 $tmp526 = ($fn527) ((panda$io$OutputStream*) $tmp525)->$class->vtable[19];
$tmp526(((panda$io$OutputStream*) $tmp525), &$s528);
// line 193
panda$io$IndentedOutputStream** $tmp529 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp530 = *$tmp529;
$fn532 $tmp531 = ($fn532) ((panda$io$OutputStream*) $tmp530)->$class->vtable[19];
$tmp531(((panda$io$OutputStream*) $tmp530), &$s533);
// line 194
panda$io$MemoryOutputStream** $tmp534 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp535 = *$tmp534;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
panda$io$MemoryOutputStream** $tmp536 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp537 = *$tmp536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$io$MemoryOutputStream** $tmp538 = &param0->importStream;
*$tmp538 = $tmp535;
// line 195
panda$collections$HashSet** $tmp539 = &param0->typeImports;
panda$collections$HashSet* $tmp540 = *$tmp539;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
panda$collections$HashSet** $tmp541 = &param0->imports;
panda$collections$HashSet* $tmp542 = *$tmp541;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
panda$collections$HashSet** $tmp543 = &param0->imports;
*$tmp543 = $tmp540;
// line 196
panda$io$IndentedOutputStream** $tmp544 = &param0->types;
panda$io$IndentedOutputStream* $tmp545 = *$tmp544;
panda$core$String** $tmp546 = &param1->name;
panda$core$String* $tmp547 = *$tmp546;
panda$core$String* $tmp548 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp547);
panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s550, $tmp548);
panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s552);
$fn554 $tmp553 = ($fn554) ((panda$io$OutputStream*) $tmp545)->$class->vtable[19];
$tmp553(((panda$io$OutputStream*) $tmp545), $tmp551);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing REF($169:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing REF($168:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing REF($167:panda.core.String)
// line 197
panda$io$IndentedOutputStream** $tmp555 = &param0->types;
panda$io$IndentedOutputStream* $tmp556 = *$tmp555;
panda$core$Int64* $tmp557 = &$tmp556->level;
panda$core$Int64 $tmp558 = *$tmp557;
panda$core$Int64 $tmp559 = (panda$core$Int64) {1};
int64_t $tmp560 = $tmp558.value;
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560 + $tmp561;
panda$core$Int64 $tmp563 = (panda$core$Int64) {$tmp562};
panda$core$Int64* $tmp564 = &$tmp556->level;
*$tmp564 = $tmp563;
// line 198
panda$core$Weak** $tmp565 = &param0->compiler;
panda$core$Weak* $tmp566 = *$tmp565;
panda$core$Object* $tmp567 = panda$core$Weak$get$R$panda$core$Weak$T($tmp566);
panda$collections$ListView* $tmp568 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp567), param1);
ITable* $tmp569 = ((panda$collections$Iterable*) $tmp568)->$class->itable;
while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
panda$collections$Iterator* $tmp572 = $tmp570(((panda$collections$Iterable*) $tmp568));
goto block1;
block1:;
ITable* $tmp573 = $tmp572->$class->itable;
while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
panda$core$Bit $tmp576 = $tmp574($tmp572);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp578 = $tmp572->$class->itable;
while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[1];
panda$core$Object* $tmp581 = $tmp579($tmp572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp581)));
org$pandalanguage$pandac$FieldDecl* $tmp582 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) $tmp581);
// line 199
panda$core$Weak** $tmp583 = &param0->compiler;
panda$core$Weak* $tmp584 = *$tmp583;
panda$core$Object* $tmp585 = panda$core$Weak$get$R$panda$core$Weak$T($tmp584);
org$pandalanguage$pandac$FieldDecl* $tmp586 = *(&local2);
panda$core$Bit $tmp587 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp585), $tmp586);
panda$core$Panda$unref$panda$core$Object$Q($tmp585);
// unreffing REF($227:panda.core.Weak.T)
// line 200
org$pandalanguage$pandac$FieldDecl* $tmp588 = *(&local2);
org$pandalanguage$pandac$Type** $tmp589 = &$tmp588->type;
org$pandalanguage$pandac$Type* $tmp590 = *$tmp589;
org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp592 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp590, $tmp591);
bool $tmp593 = $tmp592.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
// unreffing REF($239:org.pandalanguage.pandac.Type)
if ($tmp593) goto block4; else goto block6;
block4:;
// line 201
panda$io$IndentedOutputStream** $tmp594 = &param0->types;
panda$io$IndentedOutputStream* $tmp595 = *$tmp594;
org$pandalanguage$pandac$FieldDecl* $tmp596 = *(&local2);
panda$core$String** $tmp597 = &((org$pandalanguage$pandac$Symbol*) $tmp596)->name;
panda$core$String* $tmp598 = *$tmp597;
panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s600, $tmp598);
panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s602);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp603 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp604 = *$tmp603;
panda$core$Int64 $tmp605 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp604, param1);
panda$core$Int64$wrapper* $tmp606;
$tmp606 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp606->value = $tmp605;
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp601, ((panda$core$Object*) $tmp606));
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s609);
$fn611 $tmp610 = ($fn611) ((panda$io$OutputStream*) $tmp595)->$class->vtable[19];
$tmp610(((panda$io$OutputStream*) $tmp595), $tmp608);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($261:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($260:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($259:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($255:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing REF($254:panda.core.String)
goto block5;
block6:;
// line 1
// line 204
panda$io$IndentedOutputStream** $tmp612 = &param0->types;
panda$io$IndentedOutputStream* $tmp613 = *$tmp612;
org$pandalanguage$pandac$FieldDecl* $tmp614 = *(&local2);
org$pandalanguage$pandac$Type** $tmp615 = &$tmp614->type;
org$pandalanguage$pandac$Type* $tmp616 = *$tmp615;
panda$core$String* $tmp617 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp616);
panda$core$String* $tmp618 = panda$core$String$convert$R$panda$core$String($tmp617);
panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s620);
org$pandalanguage$pandac$FieldDecl* $tmp621 = *(&local2);
panda$core$String** $tmp622 = &((org$pandalanguage$pandac$Symbol*) $tmp621)->name;
panda$core$String* $tmp623 = *$tmp622;
panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, $tmp623);
panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s626);
$fn628 $tmp627 = ($fn628) ((panda$io$OutputStream*) $tmp613)->$class->vtable[19];
$tmp627(((panda$io$OutputStream*) $tmp613), $tmp625);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing REF($296:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing REF($295:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing REF($290:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($289:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing REF($288:panda.core.String)
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp581);
// unreffing REF($215:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp629 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
// unreffing f
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing REF($204:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing REF($200:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp567);
// unreffing REF($197:panda.core.Weak.T)
// line 207
panda$core$String** $tmp630 = &param1->name;
panda$core$String* $tmp631 = *$tmp630;
panda$core$Bit $tmp632 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp631, &$s633);
bool $tmp634 = $tmp632.value;
if ($tmp634) goto block7; else goto block8;
block7:;
// line 208
panda$io$IndentedOutputStream** $tmp635 = &param0->types;
panda$io$IndentedOutputStream* $tmp636 = *$tmp635;
$fn638 $tmp637 = ($fn638) ((panda$io$OutputStream*) $tmp636)->$class->vtable[19];
$tmp637(((panda$io$OutputStream*) $tmp636), &$s639);
// line 209
panda$io$IndentedOutputStream** $tmp640 = &param0->types;
panda$io$IndentedOutputStream* $tmp641 = *$tmp640;
$fn643 $tmp642 = ($fn643) ((panda$io$OutputStream*) $tmp641)->$class->vtable[19];
$tmp642(((panda$io$OutputStream*) $tmp641), &$s644);
goto block8;
block8:;
// line 211
panda$io$IndentedOutputStream** $tmp645 = &param0->types;
panda$io$IndentedOutputStream* $tmp646 = *$tmp645;
panda$core$Int64* $tmp647 = &$tmp646->level;
panda$core$Int64 $tmp648 = *$tmp647;
panda$core$Int64 $tmp649 = (panda$core$Int64) {1};
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650 - $tmp651;
panda$core$Int64 $tmp653 = (panda$core$Int64) {$tmp652};
panda$core$Int64* $tmp654 = &$tmp646->level;
*$tmp654 = $tmp653;
// line 212
panda$io$IndentedOutputStream** $tmp655 = &param0->types;
panda$io$IndentedOutputStream* $tmp656 = *$tmp655;
panda$core$String** $tmp657 = &param1->name;
panda$core$String* $tmp658 = *$tmp657;
panda$core$String* $tmp659 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp658);
panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s661, $tmp659);
panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s663);
$fn665 $tmp664 = ($fn665) ((panda$io$OutputStream*) $tmp656)->$class->vtable[19];
$tmp664(((panda$io$OutputStream*) $tmp656), $tmp662);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing REF($372:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing REF($371:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing REF($370:panda.core.String)
// line 213
panda$io$IndentedOutputStream** $tmp666 = &param0->types;
panda$io$IndentedOutputStream* $tmp667 = *$tmp666;
$fn669 $tmp668 = ($fn669) ((panda$io$OutputStream*) $tmp667)->$class->vtable[19];
$tmp668(((panda$io$OutputStream*) $tmp667), &$s670);
// line 214
panda$io$IndentedOutputStream** $tmp671 = &param0->types;
panda$io$IndentedOutputStream* $tmp672 = *$tmp671;
org$pandalanguage$pandac$Type* $tmp673 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp674 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp673);
panda$core$String* $tmp675 = panda$core$String$convert$R$panda$core$String($tmp674);
panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, &$s677);
org$pandalanguage$pandac$Type* $tmp678 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp679 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp678);
panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, $tmp679);
panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s682);
panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s684, $tmp681);
panda$core$Weak** $tmp685 = &param0->compiler;
panda$core$Weak* $tmp686 = *$tmp685;
panda$core$Object* $tmp687 = panda$core$Weak$get$R$panda$core$Weak$T($tmp686);
panda$collections$ListView* $tmp688 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp687), param1);
ITable* $tmp689 = ((panda$collections$CollectionView*) $tmp688)->$class->itable;
while ($tmp689->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
panda$core$Int64 $tmp692 = $tmp690(((panda$collections$CollectionView*) $tmp688));
panda$core$Int64$wrapper* $tmp693;
$tmp693 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp693->value = $tmp692;
panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s695, ((panda$core$Object*) $tmp693));
panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s697);
panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, $tmp696);
panda$core$String** $tmp699 = &param1->name;
panda$core$String* $tmp700 = *$tmp699;
panda$core$String* $tmp701 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp700);
panda$core$String* $tmp702 = panda$core$String$convert$R$panda$core$String($tmp701);
panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s704);
panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, $tmp703);
$fn707 $tmp706 = ($fn707) ((panda$io$OutputStream*) $tmp672)->$class->vtable[19];
$tmp706(((panda$io$OutputStream*) $tmp672), $tmp705);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
// unreffing REF($422:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing REF($421:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// unreffing REF($420:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing REF($419:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($416:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// unreffing REF($415:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($414:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
// unreffing REF($413:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing REF($409:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp687);
// unreffing REF($406:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
// unreffing REF($402:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp681));
// unreffing REF($401:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing REF($400:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
// unreffing REF($399:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing REF($398:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing REF($397:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing REF($396:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing REF($395:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
// unreffing REF($394:org.pandalanguage.pandac.Type)
// line 218
panda$io$IndentedOutputStream** $tmp708 = &param0->types;
panda$io$IndentedOutputStream* $tmp709 = *$tmp708;
panda$core$String** $tmp710 = &param1->name;
panda$core$String* $tmp711 = *$tmp710;
panda$core$String* $tmp712 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp711);
panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s714, $tmp712);
panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp713, &$s716);
panda$core$String** $tmp717 = &param1->name;
panda$core$String* $tmp718 = *$tmp717;
panda$core$String* $tmp719 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp718);
panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp715, $tmp719);
panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp720, &$s722);
$fn724 $tmp723 = ($fn724) ((panda$io$OutputStream*) $tmp709)->$class->vtable[19];
$tmp723(((panda$io$OutputStream*) $tmp709), $tmp721);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
// unreffing REF($495:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($494:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing REF($493:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing REF($490:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing REF($489:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing REF($488:panda.core.String)
// line 219
panda$core$Weak** $tmp725 = &param0->compiler;
panda$core$Weak* $tmp726 = *$tmp725;
panda$core$Object* $tmp727 = panda$core$Weak$get$R$panda$core$Weak$T($tmp726);
panda$core$Bit $tmp728 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp727), param1);
bool $tmp729 = $tmp728.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp727);
// unreffing REF($520:panda.core.Weak.T)
if ($tmp729) goto block9; else goto block10;
block9:;
// line 220
panda$io$IndentedOutputStream** $tmp730 = &param0->types;
panda$io$IndentedOutputStream* $tmp731 = *$tmp730;
panda$core$String** $tmp732 = &param1->name;
panda$core$String* $tmp733 = *$tmp732;
panda$core$String* $tmp734 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp733);
panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s736, $tmp734);
panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s738);
$fn740 $tmp739 = ($fn740) ((panda$io$OutputStream*) $tmp731)->$class->vtable[19];
$tmp739(((panda$io$OutputStream*) $tmp731), $tmp737);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
// unreffing REF($538:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing REF($537:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing REF($536:panda.core.String)
// line 221
panda$io$IndentedOutputStream** $tmp741 = &param0->types;
panda$io$IndentedOutputStream* $tmp742 = *$tmp741;
panda$core$Int64* $tmp743 = &$tmp742->level;
panda$core$Int64 $tmp744 = *$tmp743;
panda$core$Int64 $tmp745 = (panda$core$Int64) {1};
int64_t $tmp746 = $tmp744.value;
int64_t $tmp747 = $tmp745.value;
int64_t $tmp748 = $tmp746 + $tmp747;
panda$core$Int64 $tmp749 = (panda$core$Int64) {$tmp748};
panda$core$Int64* $tmp750 = &$tmp742->level;
*$tmp750 = $tmp749;
// line 222
panda$io$IndentedOutputStream** $tmp751 = &param0->types;
panda$io$IndentedOutputStream* $tmp752 = *$tmp751;
$fn754 $tmp753 = ($fn754) ((panda$io$OutputStream*) $tmp752)->$class->vtable[19];
$tmp753(((panda$io$OutputStream*) $tmp752), &$s755);
// line 223
panda$io$IndentedOutputStream** $tmp756 = &param0->types;
panda$io$IndentedOutputStream* $tmp757 = *$tmp756;
$fn759 $tmp758 = ($fn759) ((panda$io$OutputStream*) $tmp757)->$class->vtable[19];
$tmp758(((panda$io$OutputStream*) $tmp757), &$s760);
// line 224
panda$io$IndentedOutputStream** $tmp761 = &param0->types;
panda$io$IndentedOutputStream* $tmp762 = *$tmp761;
org$pandalanguage$pandac$Type** $tmp763 = &param1->type;
org$pandalanguage$pandac$Type* $tmp764 = *$tmp763;
panda$core$String* $tmp765 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp764);
panda$core$String* $tmp766 = panda$core$String$convert$R$panda$core$String($tmp765);
panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s768);
$fn770 $tmp769 = ($fn770) ((panda$io$OutputStream*) $tmp762)->$class->vtable[19];
$tmp769(((panda$io$OutputStream*) $tmp762), $tmp767);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing REF($582:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing REF($581:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($580:panda.core.String)
// line 225
panda$io$IndentedOutputStream** $tmp771 = &param0->types;
panda$io$IndentedOutputStream* $tmp772 = *$tmp771;
panda$core$Int64* $tmp773 = &$tmp772->level;
panda$core$Int64 $tmp774 = *$tmp773;
panda$core$Int64 $tmp775 = (panda$core$Int64) {1};
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776 - $tmp777;
panda$core$Int64 $tmp779 = (panda$core$Int64) {$tmp778};
panda$core$Int64* $tmp780 = &$tmp772->level;
*$tmp780 = $tmp779;
// line 226
panda$io$IndentedOutputStream** $tmp781 = &param0->types;
panda$io$IndentedOutputStream* $tmp782 = *$tmp781;
panda$core$String** $tmp783 = &param1->name;
panda$core$String* $tmp784 = *$tmp783;
panda$core$String* $tmp785 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp784);
panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s787, $tmp785);
panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s789);
$fn791 $tmp790 = ($fn791) ((panda$io$OutputStream*) $tmp782)->$class->vtable[19];
$tmp790(((panda$io$OutputStream*) $tmp782), $tmp788);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($613:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing REF($612:panda.core.String)
// line 227
panda$io$IndentedOutputStream** $tmp792 = &param0->types;
panda$io$IndentedOutputStream* $tmp793 = *$tmp792;
panda$core$String** $tmp794 = &param1->name;
panda$core$String* $tmp795 = *$tmp794;
panda$core$String* $tmp796 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp795);
panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s798, $tmp796);
panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s800);
$fn802 $tmp801 = ($fn802) ((panda$io$OutputStream*) $tmp793)->$class->vtable[19];
$tmp801(((panda$io$OutputStream*) $tmp793), $tmp799);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// unreffing REF($634:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
// unreffing REF($633:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// unreffing REF($632:panda.core.String)
// line 228
panda$io$IndentedOutputStream** $tmp803 = &param0->types;
panda$io$IndentedOutputStream* $tmp804 = *$tmp803;
panda$core$Int64* $tmp805 = &$tmp804->level;
panda$core$Int64 $tmp806 = *$tmp805;
panda$core$Int64 $tmp807 = (panda$core$Int64) {1};
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 + $tmp809;
panda$core$Int64 $tmp811 = (panda$core$Int64) {$tmp810};
panda$core$Int64* $tmp812 = &$tmp804->level;
*$tmp812 = $tmp811;
// line 229
panda$io$IndentedOutputStream** $tmp813 = &param0->types;
panda$io$IndentedOutputStream* $tmp814 = *$tmp813;
panda$core$String** $tmp815 = &param1->name;
panda$core$String* $tmp816 = *$tmp815;
panda$core$String* $tmp817 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp816);
panda$core$String* $tmp818 = panda$core$String$convert$R$panda$core$String($tmp817);
panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s820);
$fn822 $tmp821 = ($fn822) ((panda$io$OutputStream*) $tmp814)->$class->vtable[19];
$tmp821(((panda$io$OutputStream*) $tmp814), $tmp819);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing REF($666:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing REF($665:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing REF($664:panda.core.String)
// line 230
panda$io$IndentedOutputStream** $tmp823 = &param0->types;
panda$io$IndentedOutputStream* $tmp824 = *$tmp823;
$fn826 $tmp825 = ($fn826) ((panda$io$OutputStream*) $tmp824)->$class->vtable[19];
$tmp825(((panda$io$OutputStream*) $tmp824), &$s827);
// line 231
panda$io$IndentedOutputStream** $tmp828 = &param0->types;
panda$io$IndentedOutputStream* $tmp829 = *$tmp828;
panda$core$Int64* $tmp830 = &$tmp829->level;
panda$core$Int64 $tmp831 = *$tmp830;
panda$core$Int64 $tmp832 = (panda$core$Int64) {1};
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
int64_t $tmp835 = $tmp833 - $tmp834;
panda$core$Int64 $tmp836 = (panda$core$Int64) {$tmp835};
panda$core$Int64* $tmp837 = &$tmp829->level;
*$tmp837 = $tmp836;
// line 232
panda$io$IndentedOutputStream** $tmp838 = &param0->types;
panda$io$IndentedOutputStream* $tmp839 = *$tmp838;
panda$core$String** $tmp840 = &param1->name;
panda$core$String* $tmp841 = *$tmp840;
panda$core$String* $tmp842 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp841);
panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s844, $tmp842);
panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s846);
$fn848 $tmp847 = ($fn848) ((panda$io$OutputStream*) $tmp839)->$class->vtable[19];
$tmp847(((panda$io$OutputStream*) $tmp839), $tmp845);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
// unreffing REF($704:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
// unreffing REF($703:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// unreffing REF($702:panda.core.String)
// line 233
panda$core$Weak** $tmp849 = &param0->compiler;
panda$core$Weak* $tmp850 = *$tmp849;
panda$core$Object* $tmp851 = panda$core$Weak$get$R$panda$core$Weak$T($tmp850);
org$pandalanguage$pandac$Type* $tmp852 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp853 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp851), $tmp852);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
org$pandalanguage$pandac$ClassDecl* $tmp854 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
*(&local3) = $tmp853;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
// unreffing REF($724:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
// unreffing REF($723:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp851);
// unreffing REF($720:panda.core.Weak.T)
// line 234
panda$core$Weak** $tmp855 = &param0->compiler;
panda$core$Weak* $tmp856 = *$tmp855;
panda$core$Object* $tmp857 = panda$core$Weak$get$R$panda$core$Weak$T($tmp856);
org$pandalanguage$pandac$ClassDecl* $tmp858 = *(&local3);
panda$collections$ListView* $tmp859 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp857), $tmp858);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
panda$collections$ListView* $tmp860 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
*(&local4) = $tmp859;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing REF($750:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp857);
// unreffing REF($745:panda.core.Weak.T)
// line 235
panda$io$IndentedOutputStream** $tmp861 = &param0->types;
panda$io$IndentedOutputStream* $tmp862 = *$tmp861;
panda$collections$ListView* $tmp863 = *(&local4);
ITable* $tmp864 = ((panda$collections$CollectionView*) $tmp863)->$class->itable;
while ($tmp864->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp864 = $tmp864->next;
}
$fn866 $tmp865 = $tmp864->methods[0];
panda$core$Int64 $tmp867 = $tmp865(((panda$collections$CollectionView*) $tmp863));
panda$core$Int64$wrapper* $tmp868;
$tmp868 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp868->value = $tmp867;
panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s870, ((panda$core$Object*) $tmp868));
panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s872);
panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s874, $tmp871);
panda$core$String** $tmp875 = &param1->name;
panda$core$String* $tmp876 = *$tmp875;
panda$core$String* $tmp877 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp876);
panda$core$String* $tmp878 = panda$core$String$convert$R$panda$core$String($tmp877);
panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, &$s880);
panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, $tmp879);
$fn883 $tmp882 = ($fn883) ((panda$io$OutputStream*) $tmp862)->$class->vtable[19];
$tmp882(((panda$io$OutputStream*) $tmp862), $tmp881);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing REF($781:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing REF($780:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
// unreffing REF($779:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// unreffing REF($778:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
// unreffing REF($775:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// unreffing REF($774:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
// unreffing REF($773:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
// unreffing REF($772:panda.core.Object)
// line 239
panda$io$IndentedOutputStream** $tmp884 = &param0->types;
panda$io$IndentedOutputStream* $tmp885 = *$tmp884;
panda$core$String** $tmp886 = &param1->name;
panda$core$String* $tmp887 = *$tmp886;
panda$core$String* $tmp888 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp887);
panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s890, $tmp888);
panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s892);
panda$core$String** $tmp893 = &param1->name;
panda$core$String* $tmp894 = *$tmp893;
panda$core$String* $tmp895 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp894);
panda$core$String* $tmp896 = panda$core$String$convert$R$panda$core$String($tmp895);
panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp896, &$s898);
panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, $tmp897);
$fn901 $tmp900 = ($fn901) ((panda$io$OutputStream*) $tmp885)->$class->vtable[19];
$tmp900(((panda$io$OutputStream*) $tmp885), $tmp899);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing REF($822:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
// unreffing REF($821:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing REF($820:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing REF($819:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing REF($816:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp889));
// unreffing REF($815:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing REF($814:panda.core.String)
panda$collections$ListView* $tmp902 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp903 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block10;
block10:;
panda$io$File* $tmp904 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing typesPath
*(&local1) = ((panda$io$File*) NULL);
panda$io$File* $tmp905 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 245
panda$core$Weak** $tmp906 = &param1->owner;
panda$core$Weak* $tmp907 = *$tmp906;
panda$core$Object* $tmp908 = panda$core$Weak$get$R$panda$core$Weak$T($tmp907);
org$pandalanguage$pandac$Type** $tmp909 = &((org$pandalanguage$pandac$ClassDecl*) $tmp908)->type;
org$pandalanguage$pandac$Type* $tmp910 = *$tmp909;
panda$core$String* $tmp911 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp910);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
panda$core$String* $tmp912 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
*(&local0) = $tmp911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp908);
// unreffing REF($4:panda.core.Weak.T)
// line 246
org$pandalanguage$pandac$MethodDecl$Kind* $tmp913 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp914 = *$tmp913;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp915;
$tmp915 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp915->value = $tmp914;
panda$core$Int64 $tmp916 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp917 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp916);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp918;
$tmp918 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp918->value = $tmp917;
ITable* $tmp919 = ((panda$core$Equatable*) $tmp915)->$class->itable;
while ($tmp919->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp919 = $tmp919->next;
}
$fn921 $tmp920 = $tmp919->methods[0];
panda$core$Bit $tmp922 = $tmp920(((panda$core$Equatable*) $tmp915), ((panda$core$Equatable*) $tmp918));
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block3; else goto block4;
block3:;
panda$core$String* $tmp924 = *(&local0);
panda$core$Bit $tmp925 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp924, &$s926);
panda$core$Bit $tmp927 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp925);
*(&local1) = $tmp927;
goto block5;
block4:;
*(&local1) = $tmp922;
goto block5;
block5:;
panda$core$Bit $tmp928 = *(&local1);
bool $tmp929 = $tmp928.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp918)));
// unreffing REF($29:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp915)));
// unreffing REF($25:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp929) goto block1; else goto block2;
block1:;
// line 247
panda$core$String* $tmp930 = *(&local0);
panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp930, &$s932);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// unreffing REF($52:panda.core.String)
panda$core$String* $tmp933 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp931;
block2:;
// line 249
panda$core$String* $tmp934 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
panda$core$String* $tmp935 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp934;

}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
// line 269
org$pandalanguage$pandac$Type** $tmp936 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp937 = *$tmp936;
panda$core$Bit $tmp938 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp937);
panda$core$Bit $tmp939 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp938);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block1; else goto block2;
block1:;
// line 270
panda$core$Bit $tmp941 = panda$core$Bit$init$builtin_bit(false);
return $tmp941;
block2:;
// line 272
org$pandalanguage$pandac$Annotations** $tmp942 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp943 = *$tmp942;
panda$core$Bit $tmp944 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit($tmp943);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$Type** $tmp946 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp947 = *$tmp946;
panda$core$Bit $tmp948 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp947);
*(&local1) = $tmp948;
goto block5;
block4:;
*(&local1) = $tmp944;
goto block5;
block5:;
panda$core$Bit $tmp949 = *(&local1);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block6; else goto block7;
block6:;
panda$core$Weak** $tmp951 = &param0->compiler;
panda$core$Weak* $tmp952 = *$tmp951;
panda$core$Object* $tmp953 = panda$core$Weak$get$R$panda$core$Weak$T($tmp952);
panda$core$Weak** $tmp954 = &param0->compiler;
panda$core$Weak* $tmp955 = *$tmp954;
panda$core$Object* $tmp956 = panda$core$Weak$get$R$panda$core$Weak$T($tmp955);
org$pandalanguage$pandac$Type** $tmp957 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp958 = *$tmp957;
org$pandalanguage$pandac$ClassDecl* $tmp959 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp956), $tmp958);
panda$core$Bit $tmp960 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp953), $tmp959);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
// unreffing REF($40:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp956);
// unreffing REF($35:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp953);
// unreffing REF($29:panda.core.Weak.T)
*(&local0) = $tmp960;
goto block8;
block7:;
*(&local0) = $tmp949;
goto block8;
block8:;
panda$core$Bit $tmp961 = *(&local0);
*(&local2) = $tmp961;
// line 278
panda$core$Bit $tmp962 = *(&local2);
panda$core$Bit $tmp963 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp962);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block9; else goto block10;
block9:;
*(&local3) = $tmp963;
goto block11;
block10:;
org$pandalanguage$pandac$Annotations** $tmp965 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp966 = *$tmp965;
panda$core$Bit $tmp967 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit($tmp966);
panda$core$Bit $tmp968 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp967);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Annotations** $tmp970 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp971 = *$tmp970;
panda$core$Bit $tmp972 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp971);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block15; else goto block16;
block15:;
*(&local5) = $tmp972;
goto block17;
block16:;
org$pandalanguage$pandac$Annotations** $tmp974 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp975 = *$tmp974;
panda$core$Bit $tmp976 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp975);
*(&local5) = $tmp976;
goto block17;
block17:;
panda$core$Bit $tmp977 = *(&local5);
*(&local4) = $tmp977;
goto block14;
block13:;
*(&local4) = $tmp968;
goto block14;
block14:;
panda$core$Bit $tmp978 = *(&local4);
*(&local3) = $tmp978;
goto block11;
block11:;
panda$core$Bit $tmp979 = *(&local3);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp981 = (panda$core$Int64) {278};
panda$core$String* $tmp982 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param1);
panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s984, $tmp982);
panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, &$s986);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s987, $tmp981, $tmp985);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
// unreffing REF($94:panda.core.String)
abort(); // unreachable
block18:;
// line 280
panda$core$Bit $tmp988 = *(&local2);
return $tmp988;

}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
panda$core$String* local3 = NULL;
// line 285
panda$io$MemoryOutputStream** $tmp989 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp990 = *$tmp989;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
panda$io$MemoryOutputStream** $tmp991 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp992 = *$tmp991;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
panda$io$MemoryOutputStream** $tmp993 = &param0->importStream;
*$tmp993 = $tmp990;
// line 286
panda$collections$HashSet** $tmp994 = &param0->bodyImports;
panda$collections$HashSet* $tmp995 = *$tmp994;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
panda$collections$HashSet** $tmp996 = &param0->imports;
panda$collections$HashSet* $tmp997 = *$tmp996;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$collections$HashSet** $tmp998 = &param0->imports;
*$tmp998 = $tmp995;
// line 287
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s999));
panda$core$String* $tmp1000 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
*(&local0) = &$s1001;
// line 288
panda$core$Bit $tmp1002 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param1);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block1; else goto block3;
block1:;
// line 289
panda$io$IndentedOutputStream** $tmp1004 = &param0->body;
panda$io$IndentedOutputStream* $tmp1005 = *$tmp1004;
panda$core$String* $tmp1006 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1008, $tmp1006);
panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1010);
org$pandalanguage$pandac$Type** $tmp1011 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1012 = *$tmp1011;
panda$core$String* $tmp1013 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1012);
panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, $tmp1013);
panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, &$s1016);
$fn1018 $tmp1017 = ($fn1018) ((panda$io$OutputStream*) $tmp1005)->$class->vtable[17];
$tmp1017(((panda$io$OutputStream*) $tmp1005), $tmp1015);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
// unreffing REF($38:panda.core.String)
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1019));
panda$core$String* $tmp1020 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
*(&local0) = &$s1021;
goto block2;
block3:;
// line 1
// line 293
panda$io$IndentedOutputStream** $tmp1022 = &param0->body;
panda$io$IndentedOutputStream* $tmp1023 = *$tmp1022;
org$pandalanguage$pandac$Type** $tmp1024 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1025 = *$tmp1024;
panda$core$String* $tmp1026 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1025);
panda$core$String* $tmp1027 = panda$core$String$convert$R$panda$core$String($tmp1026);
panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1027, &$s1029);
panda$core$String* $tmp1030 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, $tmp1030);
panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1033);
$fn1035 $tmp1034 = ($fn1035) ((panda$io$OutputStream*) $tmp1023)->$class->vtable[17];
$tmp1034(((panda$io$OutputStream*) $tmp1023), $tmp1032);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing REF($85:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing REF($81:panda.core.String)
goto block2;
block2:;
// line 295
org$pandalanguage$pandac$Annotations** $tmp1036 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1037 = *$tmp1036;
panda$core$Bit $tmp1038 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1037);
panda$core$Bit $tmp1039 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1038);
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block6; else goto block7;
block6:;
panda$core$Weak** $tmp1041 = &param0->compiler;
panda$core$Weak* $tmp1042 = *$tmp1041;
panda$core$Object* $tmp1043 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1042);
panda$core$Bit $tmp1044 = org$pandalanguage$pandac$Compiler$isValueInit$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1043), param1);
panda$core$Bit $tmp1045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1044);
panda$core$Panda$unref$panda$core$Object$Q($tmp1043);
// unreffing REF($118:panda.core.Weak.T)
*(&local1) = $tmp1045;
goto block8;
block7:;
*(&local1) = $tmp1039;
goto block8;
block8:;
panda$core$Bit $tmp1046 = *(&local1);
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block4; else goto block5;
block4:;
// line 296
panda$io$IndentedOutputStream** $tmp1048 = &param0->body;
panda$io$IndentedOutputStream* $tmp1049 = *$tmp1048;
panda$core$String* $tmp1050 = *(&local0);
panda$core$String* $tmp1051 = panda$core$String$convert$R$panda$core$String($tmp1050);
panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1053);
panda$core$String* $tmp1054 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, $tmp1054);
panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, &$s1057);
$fn1059 $tmp1058 = ($fn1059) ((panda$io$OutputStream*) $tmp1049)->$class->vtable[17];
$tmp1058(((panda$io$OutputStream*) $tmp1049), $tmp1056);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
// unreffing REF($142:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing REF($141:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing REF($140:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing REF($139:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing REF($138:panda.core.String)
// line 297
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1060));
panda$core$String* $tmp1061 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
*(&local0) = &$s1062;
goto block5;
block5:;
// line 299
panda$collections$Array** $tmp1063 = &param1->parameters;
panda$collections$Array* $tmp1064 = *$tmp1063;
ITable* $tmp1065 = ((panda$collections$Iterable*) $tmp1064)->$class->itable;
while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
panda$collections$Iterator* $tmp1068 = $tmp1066(((panda$collections$Iterable*) $tmp1064));
goto block9;
block9:;
ITable* $tmp1069 = $tmp1068->$class->itable;
while ($tmp1069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
panda$core$Bit $tmp1072 = $tmp1070($tmp1068);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block11; else goto block10;
block10:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp1074 = $tmp1068->$class->itable;
while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[1];
panda$core$Object* $tmp1077 = $tmp1075($tmp1068);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1077)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1078 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1077);
// line 300
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1079 = *(&local2);
panda$core$String** $tmp1080 = &$tmp1079->name;
panda$core$String* $tmp1081 = *$tmp1080;
panda$core$String* $tmp1082 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1081);
panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1084, $tmp1082);
panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1086);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
panda$core$String* $tmp1087 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
*(&local3) = $tmp1085;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
// unreffing REF($199:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// unreffing REF($198:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing REF($197:panda.core.String)
// line 301
panda$io$IndentedOutputStream** $tmp1088 = &param0->body;
panda$io$IndentedOutputStream* $tmp1089 = *$tmp1088;
panda$core$String* $tmp1090 = *(&local0);
panda$core$String* $tmp1091 = panda$core$String$convert$R$panda$core$String($tmp1090);
panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1093);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1094 = *(&local2);
org$pandalanguage$pandac$Type** $tmp1095 = &$tmp1094->type;
org$pandalanguage$pandac$Type* $tmp1096 = *$tmp1095;
panda$core$String* $tmp1097 = *(&local3);
panda$core$String* $tmp1098 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(param0, $tmp1096, $tmp1097);
panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, $tmp1098);
panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1101);
$fn1103 $tmp1102 = ($fn1103) ((panda$io$OutputStream*) $tmp1089)->$class->vtable[17];
$tmp1102(((panda$io$OutputStream*) $tmp1089), $tmp1100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// unreffing REF($229:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing REF($228:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
// unreffing REF($227:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// unreffing REF($222:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
// unreffing REF($221:panda.core.String)
// line 302
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1104));
panda$core$String* $tmp1105 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
*(&local0) = &$s1106;
panda$core$String* $tmp1107 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1077);
// unreffing REF($185:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1108 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
// unreffing REF($174:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 304
panda$io$IndentedOutputStream** $tmp1109 = &param0->body;
panda$io$IndentedOutputStream* $tmp1110 = *$tmp1109;
$fn1112 $tmp1111 = ($fn1112) ((panda$io$OutputStream*) $tmp1110)->$class->vtable[19];
$tmp1111(((panda$io$OutputStream*) $tmp1110), &$s1113);
panda$core$String* $tmp1114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing separator
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IR(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1, org$pandalanguage$pandac$IR* param2) {

// line 309
org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(param0, param1);
return;

}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

// line 314
panda$io$IndentedOutputStream** $tmp1115 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1116 = *$tmp1115;
panda$io$MemoryOutputStream** $tmp1117 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1118 = *$tmp1117;
$fn1120 $tmp1119 = ($fn1120) ((panda$io$OutputStream*) $tmp1116)->$class->vtable[20];
$tmp1119(((panda$io$OutputStream*) $tmp1116), ((panda$core$Object*) $tmp1118));
// line 315
panda$io$IndentedOutputStream** $tmp1121 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1122 = *$tmp1121;
panda$io$MemoryOutputStream** $tmp1123 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1124 = *$tmp1123;
$fn1126 $tmp1125 = ($fn1126) ((panda$io$OutputStream*) $tmp1122)->$class->vtable[20];
$tmp1125(((panda$io$OutputStream*) $tmp1122), ((panda$core$Object*) $tmp1124));
// line 316
panda$io$IndentedOutputStream** $tmp1127 = &param0->out;
panda$io$IndentedOutputStream* $tmp1128 = *$tmp1127;
panda$io$MemoryOutputStream** $tmp1129 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1130 = *$tmp1129;
$fn1132 $tmp1131 = ($fn1132) ((panda$io$OutputStream*) $tmp1128)->$class->vtable[20];
$tmp1131(((panda$io$OutputStream*) $tmp1128), ((panda$core$Object*) $tmp1130));
// line 317
panda$io$IndentedOutputStream** $tmp1133 = &param0->out;
panda$io$IndentedOutputStream* $tmp1134 = *$tmp1133;
panda$io$MemoryOutputStream** $tmp1135 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1136 = *$tmp1135;
$fn1138 $tmp1137 = ($fn1138) ((panda$io$OutputStream*) $tmp1134)->$class->vtable[20];
$tmp1137(((panda$io$OutputStream*) $tmp1134), ((panda$core$Object*) $tmp1136));
return;

}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* param0) {

return;

}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Weak** $tmp1139 = &param0->compiler;
panda$core$Weak* $tmp1140 = *$tmp1139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
panda$io$MemoryOutputStream** $tmp1141 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1142 = *$tmp1141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
panda$io$MemoryOutputStream** $tmp1143 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1144 = *$tmp1143;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
panda$io$IndentedOutputStream** $tmp1145 = &param0->types;
panda$io$IndentedOutputStream* $tmp1146 = *$tmp1145;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$io$MemoryOutputStream** $tmp1147 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1148 = *$tmp1147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
panda$io$MemoryOutputStream** $tmp1149 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1150 = *$tmp1149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
panda$io$IndentedOutputStream** $tmp1151 = &param0->body;
panda$io$IndentedOutputStream* $tmp1152 = *$tmp1151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
panda$collections$HashSet** $tmp1153 = &param0->typeImports;
panda$collections$HashSet* $tmp1154 = *$tmp1153;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
panda$collections$HashSet** $tmp1155 = &param0->bodyImports;
panda$collections$HashSet* $tmp1156 = *$tmp1155;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$collections$HashSet** $tmp1157 = &param0->imports;
panda$collections$HashSet* $tmp1158 = *$tmp1157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
panda$io$MemoryOutputStream** $tmp1159 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp1160 = *$tmp1159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
panda$io$File** $tmp1161 = &param0->outDir;
panda$io$File* $tmp1162 = *$tmp1161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
panda$io$IndentedOutputStream** $tmp1163 = &param0->out;
panda$io$IndentedOutputStream* $tmp1164 = *$tmp1163;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
panda$io$IndentedOutputStream** $tmp1165 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1166 = *$tmp1165;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp1167 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp1168 = *$tmp1167;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
panda$core$Weak** $tmp1169 = &param0->cCodeGen;
panda$core$Weak* $tmp1170 = *$tmp1169;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
org$pandalanguage$pandac$CCodeGenerator** $tmp1171 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp1172 = *$tmp1171;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
return;

}

