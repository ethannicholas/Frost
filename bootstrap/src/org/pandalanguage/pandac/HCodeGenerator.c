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

typedef void (*$fn228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn545)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn562)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn566)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn571)(panda$collections$Iterator*);
typedef void (*$fn602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn629)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn660)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn682)(panda$collections$CollectionView*);
typedef void (*$fn698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn813)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn817)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn839)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn857)(panda$collections$CollectionView*);
typedef void (*$fn874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn892)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn912)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1050)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1058)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1062)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1067)(panda$collections$Iterator*);
typedef void (*$fn1094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1111)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1117)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1123)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1129)(panda$io$OutputStream*, panda$core$Object*);

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
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -4892902456452664750, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// line 8
panda$io$MemoryOutputStream* $tmp12 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp12);
panda$io$MemoryOutputStream** $tmp13 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$io$MemoryOutputStream** $tmp15 = &param0->typeImportStream;
*$tmp15 = $tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// line 10
panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp16);
panda$io$MemoryOutputStream** $tmp17 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$io$MemoryOutputStream** $tmp19 = &param0->typesBuffer;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// line 12
panda$io$IndentedOutputStream* $tmp20 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp21 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp22 = *$tmp21;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp20, ((panda$io$OutputStream*) $tmp22));
panda$io$IndentedOutputStream** $tmp23 = &param0->types;
panda$io$IndentedOutputStream* $tmp24 = *$tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$io$IndentedOutputStream** $tmp25 = &param0->types;
*$tmp25 = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// line 14
panda$io$MemoryOutputStream* $tmp26 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp26);
panda$io$MemoryOutputStream** $tmp27 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp28 = *$tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$io$MemoryOutputStream** $tmp29 = &param0->bodyImportStream;
*$tmp29 = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// line 16
panda$io$MemoryOutputStream* $tmp30 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp30);
panda$io$MemoryOutputStream** $tmp31 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$io$MemoryOutputStream** $tmp33 = &param0->bodyBuffer;
*$tmp33 = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// line 18
panda$io$IndentedOutputStream* $tmp34 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp35 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp36 = *$tmp35;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp34, ((panda$io$OutputStream*) $tmp36));
panda$io$IndentedOutputStream** $tmp37 = &param0->body;
panda$io$IndentedOutputStream* $tmp38 = *$tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$io$IndentedOutputStream** $tmp39 = &param0->body;
*$tmp39 = $tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// line 20
panda$collections$HashSet* $tmp40 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp40);
panda$collections$HashSet** $tmp41 = &param0->typeImports;
panda$collections$HashSet* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$collections$HashSet** $tmp43 = &param0->typeImports;
*$tmp43 = $tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// line 22
panda$collections$HashSet* $tmp44 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp44);
panda$collections$HashSet** $tmp45 = &param0->bodyImports;
panda$collections$HashSet* $tmp46 = *$tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$collections$HashSet** $tmp47 = &param0->bodyImports;
*$tmp47 = $tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// line 24
panda$collections$HashSet** $tmp48 = &param0->typeImports;
panda$collections$HashSet* $tmp49 = *$tmp48;
panda$collections$HashSet** $tmp50 = &param0->imports;
panda$collections$HashSet* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$collections$HashSet** $tmp52 = &param0->imports;
*$tmp52 = $tmp49;
// line 26
panda$io$MemoryOutputStream** $tmp53 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp54 = *$tmp53;
panda$io$MemoryOutputStream** $tmp55 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp56 = *$tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$io$MemoryOutputStream** $tmp57 = &param0->importStream;
*$tmp57 = $tmp54;
// line 34
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp58 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$io$MemoryOutputStream* $tmp59 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp59);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp58, &$s60, ((panda$io$OutputStream*) $tmp59));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp61 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp62 = *$tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp63 = &param0->llvmCodeGen;
*$tmp63 = $tmp58;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// line 47
panda$io$File** $tmp64 = &param0->outDir;
panda$io$File* $tmp65 = *$tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp66 = &param0->outDir;
*$tmp66 = param1;
// line 48
panda$io$IndentedOutputStream* $tmp67 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp68 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp68);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp67, ((panda$io$OutputStream*) $tmp68));
panda$io$IndentedOutputStream** $tmp69 = &param0->out;
panda$io$IndentedOutputStream* $tmp70 = *$tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$io$IndentedOutputStream** $tmp71 = &param0->out;
*$tmp71 = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// line 49
panda$io$IndentedOutputStream* $tmp72 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp73 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp73);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp72, ((panda$io$OutputStream*) $tmp73));
panda$io$IndentedOutputStream** $tmp74 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$io$IndentedOutputStream** $tmp76 = &param0->typesOut;
*$tmp76 = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// line 50
panda$core$Weak* $tmp77 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp77, ((panda$core$Object*) param2));
panda$core$Weak** $tmp78 = &param0->cCodeGen;
panda$core$Weak* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Weak** $tmp80 = &param0->cCodeGen;
*$tmp80 = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, panda$core$String* param1) {

// line 54
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp81 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp82 = *$tmp81;
panda$core$String* $tmp83 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String($tmp82, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
return $tmp83;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
// line 58
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp84 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp85 = *$tmp84;
panda$core$String* $tmp86 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String($tmp85, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp87 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local0) = $tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
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
// line 77
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
return $tmp144;
block5:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {3};
panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block6; else goto block7;
block6:;
// line 79
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
return $tmp158;
block7:;
panda$core$Int64 $tmp160 = (panda$core$Int64) {9};
panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block8; else goto block9;
block8:;
// line 81
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s163));
return &$s164;
block9:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {10};
panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block10; else goto block11;
block10:;
// line 83
panda$core$Int64 $tmp168 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp169 = (panda$core$Int64) {4};
panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp168, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block13; else goto block14;
block13:;
// line 84
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s172));
return &$s173;
block14:;
panda$core$Int64 $tmp174 = (panda$core$Int64) {8};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp168, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block15; else goto block16;
block15:;
// line 85
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s177));
return &$s178;
block16:;
// line 86
panda$core$Bit $tmp179 = panda$core$Bit$init$builtin_bit(false);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp181 = (panda$core$Int64) {86};
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
// line 89
panda$core$String** $tmp186 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp187 = *$tmp186;
panda$core$String* $tmp188 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp187);
panda$core$String* $tmp189 = panda$core$String$convert$R$panda$core$String($tmp188);
panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s191);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp192 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local0) = $tmp190;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// line 90
panda$core$Weak** $tmp193 = &param0->compiler;
panda$core$Weak* $tmp194 = *$tmp193;
panda$core$Object* $tmp195 = panda$core$Weak$get$R$panda$core$Weak$T($tmp194);
panda$core$Panda$unref$panda$core$Object$Q($tmp195);
org$pandalanguage$pandac$ClassDecl* $tmp196 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp195), param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp197 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
*(&local1) = $tmp196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// line 91
org$pandalanguage$pandac$ClassDecl* $tmp198 = *(&local1);
panda$core$Bit $tmp199 = panda$core$Bit$init$builtin_bit($tmp198 != NULL);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp201 = (panda$core$Int64) {91};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s202, $tmp201);
abort(); // unreachable
block21:;
// line 92
panda$core$Weak** $tmp203 = &param0->compiler;
panda$core$Weak* $tmp204 = *$tmp203;
panda$core$Object* $tmp205 = panda$core$Weak$get$R$panda$core$Weak$T($tmp204);
panda$core$Panda$unref$panda$core$Object$Q($tmp205);
org$pandalanguage$pandac$ClassDecl* $tmp206 = *(&local1);
panda$core$Bit $tmp207 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp205), $tmp206);
panda$core$Bit $tmp208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block23; else goto block24;
block23:;
// line 93
panda$collections$HashSet** $tmp210 = &param0->imports;
panda$collections$HashSet* $tmp211 = *$tmp210;
panda$core$String* $tmp212 = *(&local0);
panda$core$Bit $tmp213 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp211, ((panda$collections$Key*) $tmp212));
panda$core$Bit $tmp214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block25; else goto block26;
block25:;
// line 94
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// line 95
panda$collections$HashSet** $tmp229 = &param0->imports;
panda$collections$HashSet* $tmp230 = *$tmp229;
panda$core$String* $tmp231 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp230, ((panda$collections$Key*) $tmp231));
goto block26;
block26:;
// line 97
panda$core$String* $tmp232 = *(&local0);
panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s234);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
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
// line 99
org$pandalanguage$pandac$ClassDecl* $tmp237 = *(&local1);
panda$core$String* $tmp238 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp237, &$s239);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp240 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
*(&local2) = $tmp238;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// line 100
panda$collections$HashSet** $tmp241 = &param0->imports;
panda$collections$HashSet* $tmp242 = *$tmp241;
panda$core$String* $tmp243 = *(&local2);
panda$core$Bit $tmp244 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp242, ((panda$collections$Key*) $tmp243));
panda$core$Bit $tmp245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block27; else goto block28;
block27:;
// line 101
panda$io$MemoryOutputStream** $tmp247 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp248 = *$tmp247;
panda$core$String* $tmp249 = *(&local2);
panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s251, $tmp249);
panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s253);
$fn255 $tmp254 = ($fn255) ((panda$io$OutputStream*) $tmp248)->$class->vtable[19];
$tmp254(((panda$io$OutputStream*) $tmp248), $tmp252);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// line 102
panda$collections$HashSet** $tmp256 = &param0->imports;
panda$collections$HashSet* $tmp257 = *$tmp256;
panda$core$String* $tmp258 = *(&local2);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp257, ((panda$collections$Key*) $tmp258));
goto block28;
block28:;
// line 104
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
// line 106
panda$core$Weak** $tmp266 = &param0->compiler;
panda$core$Weak* $tmp267 = *$tmp266;
panda$core$Object* $tmp268 = panda$core$Weak$get$R$panda$core$Weak$T($tmp267);
panda$core$Panda$unref$panda$core$Object$Q($tmp268);
org$pandalanguage$pandac$ClassDecl* $tmp269 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp268), param1);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp270 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
*(&local3) = $tmp269;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// line 107
org$pandalanguage$pandac$ClassDecl* $tmp271 = *(&local3);
panda$core$Bit $tmp272 = panda$core$Bit$init$builtin_bit($tmp271 != NULL);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp274 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s275, $tmp274);
abort(); // unreachable
block31:;
// line 108
panda$core$Weak** $tmp276 = &param0->compiler;
panda$core$Weak* $tmp277 = *$tmp276;
panda$core$Object* $tmp278 = panda$core$Weak$get$R$panda$core$Weak$T($tmp277);
panda$core$Panda$unref$panda$core$Object$Q($tmp278);
org$pandalanguage$pandac$ClassDecl* $tmp279 = *(&local3);
panda$core$Bit $tmp280 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp278), $tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block33; else goto block34;
block33:;
// line 109
panda$collections$ImmutableArray** $tmp282 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp283 = *$tmp282;
panda$core$Int64 $tmp284 = (panda$core$Int64) {0};
panda$core$Object* $tmp285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp283, $tmp284);
panda$core$String* $tmp286 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp285));
panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s288);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
panda$core$Panda$unref$panda$core$Object$Q($tmp285);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
org$pandalanguage$pandac$ClassDecl* $tmp289 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp287;
block34:;
// line 111
panda$collections$ImmutableArray** $tmp290 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp291 = *$tmp290;
panda$core$Int64 $tmp292 = (panda$core$Int64) {0};
panda$core$Object* $tmp293 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp291, $tmp292);
panda$core$String* $tmp294 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp293));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$core$Panda$unref$panda$core$Object$Q($tmp293);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
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
// line 113
panda$collections$ImmutableArray** $tmp299 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp300 = *$tmp299;
panda$core$Int64 $tmp301 = (panda$core$Int64) {0};
panda$core$Object* $tmp302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp300, $tmp301);
panda$core$String** $tmp303 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp302))->name;
panda$core$String* $tmp304 = *$tmp303;
panda$core$Bit $tmp305 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp304, &$s306);
panda$core$Panda$unref$panda$core$Object$Q($tmp302);
bool $tmp307 = $tmp305.value;
if ($tmp307) goto block37; else goto block38;
block37:;
// line 114
panda$collections$ImmutableArray** $tmp308 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp309 = *$tmp308;
panda$core$Int64 $tmp310 = (panda$core$Int64) {1};
panda$core$Object* $tmp311 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp309, $tmp310);
panda$core$String* $tmp312 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp311));
panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s314);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$unref$panda$core$Object$Q($tmp311);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
return $tmp313;
block38:;
// line 116
panda$core$Weak** $tmp315 = &param0->compiler;
panda$core$Weak* $tmp316 = *$tmp315;
panda$core$Object* $tmp317 = panda$core$Weak$get$R$panda$core$Weak$T($tmp316);
panda$core$Panda$unref$panda$core$Object$Q($tmp317);
org$pandalanguage$pandac$ClassDecl* $tmp318 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp317), param1);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp319 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
*(&local4) = $tmp318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// line 117
org$pandalanguage$pandac$ClassDecl* $tmp320 = *(&local4);
panda$core$Bit $tmp321 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit($tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block39; else goto block40;
block39:;
// line 118
panda$core$String** $tmp323 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp324 = *$tmp323;
panda$core$String* $tmp325 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp324);
panda$core$String* $tmp326 = panda$core$String$convert$R$panda$core$String($tmp325);
panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s328);
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp329 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
*(&local5) = $tmp327;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// line 119
panda$core$Weak** $tmp330 = &param0->compiler;
panda$core$Weak* $tmp331 = *$tmp330;
panda$core$Object* $tmp332 = panda$core$Weak$get$R$panda$core$Weak$T($tmp331);
panda$core$Panda$unref$panda$core$Object$Q($tmp332);
org$pandalanguage$pandac$ClassDecl* $tmp333 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp332), param1);
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp334 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
*(&local6) = $tmp333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// line 120
org$pandalanguage$pandac$ClassDecl* $tmp335 = *(&local6);
panda$core$Bit $tmp336 = panda$core$Bit$init$builtin_bit($tmp335 != NULL);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp338 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s339, $tmp338);
abort(); // unreachable
block41:;
// line 121
panda$core$Weak** $tmp340 = &param0->compiler;
panda$core$Weak* $tmp341 = *$tmp340;
panda$core$Object* $tmp342 = panda$core$Weak$get$R$panda$core$Weak$T($tmp341);
panda$core$Panda$unref$panda$core$Object$Q($tmp342);
org$pandalanguage$pandac$ClassDecl* $tmp343 = *(&local6);
panda$core$Bit $tmp344 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp342), $tmp343);
panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block43; else goto block44;
block43:;
// line 122
panda$collections$HashSet** $tmp347 = &param0->imports;
panda$collections$HashSet* $tmp348 = *$tmp347;
panda$core$String* $tmp349 = *(&local5);
panda$core$Bit $tmp350 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp348, ((panda$collections$Key*) $tmp349));
panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block45; else goto block46;
block45:;
// line 123
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// line 124
panda$collections$HashSet** $tmp366 = &param0->imports;
panda$collections$HashSet* $tmp367 = *$tmp366;
panda$core$String* $tmp368 = *(&local5);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp367, ((panda$collections$Key*) $tmp368));
goto block46;
block46:;
// line 126
panda$core$String* $tmp369 = *(&local5);
panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s371);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
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
// line 128
org$pandalanguage$pandac$ClassDecl* $tmp375 = *(&local6);
panda$core$String* $tmp376 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp375, &$s377);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp378 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
*(&local7) = $tmp376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// line 129
panda$collections$HashSet** $tmp379 = &param0->imports;
panda$collections$HashSet* $tmp380 = *$tmp379;
panda$core$String* $tmp381 = *(&local7);
panda$core$Bit $tmp382 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp380, ((panda$collections$Key*) $tmp381));
panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block47; else goto block48;
block47:;
// line 130
panda$io$MemoryOutputStream** $tmp385 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp386 = *$tmp385;
panda$core$String* $tmp387 = *(&local7);
panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s389, $tmp387);
panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp388, &$s391);
$fn393 $tmp392 = ($fn393) ((panda$io$OutputStream*) $tmp386)->$class->vtable[19];
$tmp392(((panda$io$OutputStream*) $tmp386), $tmp390);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// line 131
panda$collections$HashSet** $tmp394 = &param0->imports;
panda$collections$HashSet* $tmp395 = *$tmp394;
panda$core$String* $tmp396 = *(&local7);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp395, ((panda$collections$Key*) $tmp396));
goto block48;
block48:;
// line 133
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
// line 135
panda$collections$ImmutableArray** $tmp402 = &param1->subtypes;
panda$collections$ImmutableArray* $tmp403 = *$tmp402;
panda$core$Int64 $tmp404 = (panda$core$Int64) {0};
panda$core$Object* $tmp405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp403, $tmp404);
panda$core$String* $tmp406 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp405));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
panda$core$Panda$unref$panda$core$Object$Q($tmp405);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
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
// line 137
panda$core$Weak** $tmp411 = &param1->genericParameter;
panda$core$Weak* $tmp412 = *$tmp411;
panda$core$Object* $tmp413 = panda$core$Weak$get$R$panda$core$Weak$T($tmp412);
panda$core$Panda$unref$panda$core$Object$Q($tmp413);
org$pandalanguage$pandac$Type** $tmp414 = &((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp413)->bound;
org$pandalanguage$pandac$Type* $tmp415 = *$tmp414;
panda$core$String* $tmp416 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp415);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
return $tmp416;
block50:;
panda$core$Int64 $tmp417 = (panda$core$Int64) {14};
panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp420 = (panda$core$Int64) {15};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block51; else goto block53;
block51:;
// line 139
org$pandalanguage$pandac$Type* $tmp423 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp424 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp423);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
return $tmp424;
block53:;
panda$core$Int64 $tmp425 = (panda$core$Int64) {16};
panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp428 = (panda$core$Int64) {17};
panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp126, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block54; else goto block56;
block54:;
// line 141
org$pandalanguage$pandac$Type* $tmp431 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp432 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp431);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
return $tmp432;
block56:;
// line 143
panda$core$Bit $tmp433 = panda$core$Bit$init$builtin_bit(false);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp435 = (panda$core$Int64) {143};
panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s437, ((panda$core$Object*) param1));
panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, &$s439);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s440, $tmp435, $tmp438);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
abort(); // unreachable
block57:;
goto block1;
block1:;
panda$core$Bit $tmp441 = panda$core$Bit$init$builtin_bit(false);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp443 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s444, $tmp443, &$s445);
abort(); // unreachable
block59:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$String* param2) {

// line 148
panda$core$String* $tmp446 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp447 = panda$core$String$convert$R$panda$core$String($tmp446);
panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s449);
panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, param2);
panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, &$s452);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
return $tmp451;

}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 153
panda$core$Weak* $tmp453 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp453, ((panda$core$Object*) param1));
panda$core$Weak** $tmp454 = &param0->compiler;
panda$core$Weak* $tmp455 = *$tmp454;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
panda$core$Weak** $tmp456 = &param0->compiler;
*$tmp456 = $tmp453;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// line 154
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp457 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp458 = *$tmp457;
org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler($tmp458, param1);
return;

}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 158
panda$io$File** $tmp459 = &param0->outDir;
panda$io$File* $tmp460 = *$tmp459;
panda$core$String* $tmp461 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, param1, param2);
panda$io$File* $tmp462 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp460, $tmp461);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
return $tmp462;

}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
panda$io$File* local1 = NULL;
org$pandalanguage$pandac$FieldDecl* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
panda$collections$ListView* local4 = NULL;
// line 163
panda$io$MemoryOutputStream** $tmp463 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp464 = *$tmp463;
panda$io$MemoryOutputStream$clear($tmp464);
// line 164
panda$io$MemoryOutputStream** $tmp465 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp466 = *$tmp465;
panda$io$MemoryOutputStream$clear($tmp466);
// line 165
panda$io$MemoryOutputStream** $tmp467 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp468 = *$tmp467;
panda$io$MemoryOutputStream$clear($tmp468);
// line 166
panda$io$MemoryOutputStream** $tmp469 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp470 = *$tmp469;
panda$io$MemoryOutputStream$clear($tmp470);
// line 167
panda$collections$HashSet** $tmp471 = &param0->typeImports;
panda$collections$HashSet* $tmp472 = *$tmp471;
panda$collections$HashSet$clear($tmp472);
// line 168
panda$collections$HashSet** $tmp473 = &param0->bodyImports;
panda$collections$HashSet* $tmp474 = *$tmp473;
panda$collections$HashSet$clear($tmp474);
// line 169
panda$io$File* $tmp475 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s476);
*(&local0) = ((panda$io$File*) NULL);
panda$io$File* $tmp477 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
*(&local0) = $tmp475;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// line 170
panda$io$File* $tmp478 = *(&local0);
panda$io$File* $tmp479 = panda$io$File$parent$R$panda$io$File$Q($tmp478);
panda$io$File$createDirectories($tmp479);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// line 171
panda$io$IndentedOutputStream* $tmp480 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp481 = *(&local0);
panda$io$OutputStream* $tmp482 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp481);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp480, $tmp482);
panda$io$IndentedOutputStream** $tmp483 = &param0->out;
panda$io$IndentedOutputStream* $tmp484 = *$tmp483;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$io$IndentedOutputStream** $tmp485 = &param0->out;
*$tmp485 = $tmp480;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// line 172
panda$io$File* $tmp486 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s487);
*(&local1) = ((panda$io$File*) NULL);
panda$io$File* $tmp488 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
*(&local1) = $tmp486;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// line 173
panda$io$IndentedOutputStream* $tmp489 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp490 = *(&local1);
panda$io$OutputStream* $tmp491 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp490);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp489, $tmp491);
panda$io$IndentedOutputStream** $tmp492 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp493 = *$tmp492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
panda$io$IndentedOutputStream** $tmp494 = &param0->typesOut;
*$tmp494 = $tmp489;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
// line 174
panda$io$IndentedOutputStream** $tmp495 = &param0->out;
panda$io$IndentedOutputStream* $tmp496 = *$tmp495;
$fn498 $tmp497 = ($fn498) ((panda$io$OutputStream*) $tmp496)->$class->vtable[19];
$tmp497(((panda$io$OutputStream*) $tmp496), &$s499);
// line 175
panda$io$IndentedOutputStream** $tmp500 = &param0->out;
panda$io$IndentedOutputStream* $tmp501 = *$tmp500;
$fn503 $tmp502 = ($fn503) ((panda$io$OutputStream*) $tmp501)->$class->vtable[19];
$tmp502(((panda$io$OutputStream*) $tmp501), &$s504);
// line 176
panda$io$IndentedOutputStream** $tmp505 = &param0->out;
panda$io$IndentedOutputStream* $tmp506 = *$tmp505;
panda$io$File* $tmp507 = *(&local1);
panda$core$String* $tmp508 = panda$io$File$name$R$panda$core$String($tmp507);
panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s510, $tmp508);
panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s512);
$fn514 $tmp513 = ($fn514) ((panda$io$OutputStream*) $tmp506)->$class->vtable[19];
$tmp513(((panda$io$OutputStream*) $tmp506), $tmp511);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// line 177
panda$io$IndentedOutputStream** $tmp515 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp516 = *$tmp515;
$fn518 $tmp517 = ($fn518) ((panda$io$OutputStream*) $tmp516)->$class->vtable[19];
$tmp517(((panda$io$OutputStream*) $tmp516), &$s519);
// line 178
panda$io$IndentedOutputStream** $tmp520 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp521 = *$tmp520;
$fn523 $tmp522 = ($fn523) ((panda$io$OutputStream*) $tmp521)->$class->vtable[19];
$tmp522(((panda$io$OutputStream*) $tmp521), &$s524);
// line 179
panda$io$MemoryOutputStream** $tmp525 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp526 = *$tmp525;
panda$io$MemoryOutputStream** $tmp527 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp528 = *$tmp527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
panda$io$MemoryOutputStream** $tmp529 = &param0->importStream;
*$tmp529 = $tmp526;
// line 180
panda$collections$HashSet** $tmp530 = &param0->typeImports;
panda$collections$HashSet* $tmp531 = *$tmp530;
panda$collections$HashSet** $tmp532 = &param0->imports;
panda$collections$HashSet* $tmp533 = *$tmp532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$collections$HashSet** $tmp534 = &param0->imports;
*$tmp534 = $tmp531;
// line 181
panda$io$IndentedOutputStream** $tmp535 = &param0->types;
panda$io$IndentedOutputStream* $tmp536 = *$tmp535;
panda$core$String** $tmp537 = &param1->name;
panda$core$String* $tmp538 = *$tmp537;
panda$core$String* $tmp539 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp538);
panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s541, $tmp539);
panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s543);
$fn545 $tmp544 = ($fn545) ((panda$io$OutputStream*) $tmp536)->$class->vtable[19];
$tmp544(((panda$io$OutputStream*) $tmp536), $tmp542);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// line 182
panda$io$IndentedOutputStream** $tmp546 = &param0->types;
panda$io$IndentedOutputStream* $tmp547 = *$tmp546;
panda$core$Int64* $tmp548 = &$tmp547->level;
panda$core$Int64 $tmp549 = *$tmp548;
panda$core$Int64 $tmp550 = (panda$core$Int64) {1};
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 + $tmp552;
panda$core$Int64 $tmp554 = (panda$core$Int64) {$tmp553};
panda$core$Int64* $tmp555 = &$tmp547->level;
*$tmp555 = $tmp554;
// line 183
panda$core$Weak** $tmp556 = &param0->compiler;
panda$core$Weak* $tmp557 = *$tmp556;
panda$core$Object* $tmp558 = panda$core$Weak$get$R$panda$core$Weak$T($tmp557);
panda$core$Panda$unref$panda$core$Object$Q($tmp558);
panda$collections$ListView* $tmp559 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp558), param1);
ITable* $tmp560 = ((panda$collections$Iterable*) $tmp559)->$class->itable;
while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
panda$collections$Iterator* $tmp563 = $tmp561(((panda$collections$Iterable*) $tmp559));
goto block1;
block1:;
ITable* $tmp564 = $tmp563->$class->itable;
while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[0];
panda$core$Bit $tmp567 = $tmp565($tmp563);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp569 = $tmp563->$class->itable;
while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[1];
panda$core$Object* $tmp572 = $tmp570($tmp563);
org$pandalanguage$pandac$FieldDecl* $tmp573 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp572)));
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) $tmp572);
// line 184
panda$core$Weak** $tmp574 = &param0->compiler;
panda$core$Weak* $tmp575 = *$tmp574;
panda$core$Object* $tmp576 = panda$core$Weak$get$R$panda$core$Weak$T($tmp575);
panda$core$Panda$unref$panda$core$Object$Q($tmp576);
org$pandalanguage$pandac$FieldDecl* $tmp577 = *(&local2);
panda$core$Bit $tmp578 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp576), $tmp577);
// line 185
org$pandalanguage$pandac$FieldDecl* $tmp579 = *(&local2);
org$pandalanguage$pandac$Type** $tmp580 = &$tmp579->type;
org$pandalanguage$pandac$Type* $tmp581 = *$tmp580;
org$pandalanguage$pandac$Type* $tmp582 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp583 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp581, $tmp582);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block4; else goto block6;
block4:;
// line 186
panda$io$IndentedOutputStream** $tmp585 = &param0->types;
panda$io$IndentedOutputStream* $tmp586 = *$tmp585;
org$pandalanguage$pandac$FieldDecl* $tmp587 = *(&local2);
panda$core$String** $tmp588 = &((org$pandalanguage$pandac$Symbol*) $tmp587)->name;
panda$core$String* $tmp589 = *$tmp588;
panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s591, $tmp589);
panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s593);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp594 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp595 = *$tmp594;
panda$core$Int64 $tmp596 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp595, param1);
panda$core$Int64$wrapper* $tmp597;
$tmp597 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp597->value = $tmp596;
panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp592, ((panda$core$Object*) $tmp597));
panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s600);
$fn602 $tmp601 = ($fn602) ((panda$io$OutputStream*) $tmp586)->$class->vtable[19];
$tmp601(((panda$io$OutputStream*) $tmp586), $tmp599);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
goto block5;
block6:;
// line 1
// line 189
panda$io$IndentedOutputStream** $tmp603 = &param0->types;
panda$io$IndentedOutputStream* $tmp604 = *$tmp603;
org$pandalanguage$pandac$FieldDecl* $tmp605 = *(&local2);
org$pandalanguage$pandac$Type** $tmp606 = &$tmp605->type;
org$pandalanguage$pandac$Type* $tmp607 = *$tmp606;
panda$core$String* $tmp608 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp607);
panda$core$String* $tmp609 = panda$core$String$convert$R$panda$core$String($tmp608);
panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s611);
org$pandalanguage$pandac$FieldDecl* $tmp612 = *(&local2);
panda$core$String** $tmp613 = &((org$pandalanguage$pandac$Symbol*) $tmp612)->name;
panda$core$String* $tmp614 = *$tmp613;
panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, $tmp614);
panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s617);
$fn619 $tmp618 = ($fn619) ((panda$io$OutputStream*) $tmp604)->$class->vtable[19];
$tmp618(((panda$io$OutputStream*) $tmp604), $tmp616);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp572);
org$pandalanguage$pandac$FieldDecl* $tmp620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing f
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// line 192
panda$core$String** $tmp621 = &param1->name;
panda$core$String* $tmp622 = *$tmp621;
panda$core$Bit $tmp623 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp622, &$s624);
bool $tmp625 = $tmp623.value;
if ($tmp625) goto block7; else goto block8;
block7:;
// line 193
panda$io$IndentedOutputStream** $tmp626 = &param0->types;
panda$io$IndentedOutputStream* $tmp627 = *$tmp626;
$fn629 $tmp628 = ($fn629) ((panda$io$OutputStream*) $tmp627)->$class->vtable[19];
$tmp628(((panda$io$OutputStream*) $tmp627), &$s630);
// line 194
panda$io$IndentedOutputStream** $tmp631 = &param0->types;
panda$io$IndentedOutputStream* $tmp632 = *$tmp631;
$fn634 $tmp633 = ($fn634) ((panda$io$OutputStream*) $tmp632)->$class->vtable[19];
$tmp633(((panda$io$OutputStream*) $tmp632), &$s635);
goto block8;
block8:;
// line 196
panda$io$IndentedOutputStream** $tmp636 = &param0->types;
panda$io$IndentedOutputStream* $tmp637 = *$tmp636;
panda$core$Int64* $tmp638 = &$tmp637->level;
panda$core$Int64 $tmp639 = *$tmp638;
panda$core$Int64 $tmp640 = (panda$core$Int64) {1};
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641 - $tmp642;
panda$core$Int64 $tmp644 = (panda$core$Int64) {$tmp643};
panda$core$Int64* $tmp645 = &$tmp637->level;
*$tmp645 = $tmp644;
// line 197
panda$io$IndentedOutputStream** $tmp646 = &param0->types;
panda$io$IndentedOutputStream* $tmp647 = *$tmp646;
panda$core$String** $tmp648 = &param1->name;
panda$core$String* $tmp649 = *$tmp648;
panda$core$String* $tmp650 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp649);
panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s652, $tmp650);
panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp651, &$s654);
$fn656 $tmp655 = ($fn656) ((panda$io$OutputStream*) $tmp647)->$class->vtable[19];
$tmp655(((panda$io$OutputStream*) $tmp647), $tmp653);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// line 198
panda$io$IndentedOutputStream** $tmp657 = &param0->types;
panda$io$IndentedOutputStream* $tmp658 = *$tmp657;
$fn660 $tmp659 = ($fn660) ((panda$io$OutputStream*) $tmp658)->$class->vtable[19];
$tmp659(((panda$io$OutputStream*) $tmp658), &$s661);
// line 199
panda$io$IndentedOutputStream** $tmp662 = &param0->types;
panda$io$IndentedOutputStream* $tmp663 = *$tmp662;
org$pandalanguage$pandac$Type* $tmp664 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp665 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp664);
panda$core$String* $tmp666 = panda$core$String$convert$R$panda$core$String($tmp665);
panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s668);
org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp670 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp669);
panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, $tmp670);
panda$core$String* $tmp672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s673);
panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s675, $tmp672);
panda$core$Weak** $tmp676 = &param0->compiler;
panda$core$Weak* $tmp677 = *$tmp676;
panda$core$Object* $tmp678 = panda$core$Weak$get$R$panda$core$Weak$T($tmp677);
panda$core$Panda$unref$panda$core$Object$Q($tmp678);
panda$collections$ListView* $tmp679 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp678), param1);
ITable* $tmp680 = ((panda$collections$CollectionView*) $tmp679)->$class->itable;
while ($tmp680->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp680 = $tmp680->next;
}
$fn682 $tmp681 = $tmp680->methods[0];
panda$core$Int64 $tmp683 = $tmp681(((panda$collections$CollectionView*) $tmp679));
panda$core$Int64$wrapper* $tmp684;
$tmp684 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp684->value = $tmp683;
panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s686, ((panda$core$Object*) $tmp684));
panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s688);
panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp674, $tmp687);
panda$core$String** $tmp690 = &param1->name;
panda$core$String* $tmp691 = *$tmp690;
panda$core$String* $tmp692 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp691);
panda$core$String* $tmp693 = panda$core$String$convert$R$panda$core$String($tmp692);
panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s695);
panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, $tmp694);
$fn698 $tmp697 = ($fn698) ((panda$io$OutputStream*) $tmp663)->$class->vtable[19];
$tmp697(((panda$io$OutputStream*) $tmp663), $tmp696);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// line 203
panda$io$IndentedOutputStream** $tmp699 = &param0->types;
panda$io$IndentedOutputStream* $tmp700 = *$tmp699;
panda$core$String** $tmp701 = &param1->name;
panda$core$String* $tmp702 = *$tmp701;
panda$core$String* $tmp703 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp702);
panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s705, $tmp703);
panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp704, &$s707);
panda$core$String** $tmp708 = &param1->name;
panda$core$String* $tmp709 = *$tmp708;
panda$core$String* $tmp710 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp709);
panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp706, $tmp710);
panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s713);
$fn715 $tmp714 = ($fn715) ((panda$io$OutputStream*) $tmp700)->$class->vtable[19];
$tmp714(((panda$io$OutputStream*) $tmp700), $tmp712);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// line 204
panda$core$Weak** $tmp716 = &param0->compiler;
panda$core$Weak* $tmp717 = *$tmp716;
panda$core$Object* $tmp718 = panda$core$Weak$get$R$panda$core$Weak$T($tmp717);
panda$core$Panda$unref$panda$core$Object$Q($tmp718);
panda$core$Bit $tmp719 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp718), param1);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block9; else goto block10;
block9:;
// line 205
panda$io$IndentedOutputStream** $tmp721 = &param0->types;
panda$io$IndentedOutputStream* $tmp722 = *$tmp721;
panda$core$String** $tmp723 = &param1->name;
panda$core$String* $tmp724 = *$tmp723;
panda$core$String* $tmp725 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp724);
panda$core$String* $tmp726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s727, $tmp725);
panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp726, &$s729);
$fn731 $tmp730 = ($fn731) ((panda$io$OutputStream*) $tmp722)->$class->vtable[19];
$tmp730(((panda$io$OutputStream*) $tmp722), $tmp728);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// line 206
panda$io$IndentedOutputStream** $tmp732 = &param0->types;
panda$io$IndentedOutputStream* $tmp733 = *$tmp732;
panda$core$Int64* $tmp734 = &$tmp733->level;
panda$core$Int64 $tmp735 = *$tmp734;
panda$core$Int64 $tmp736 = (panda$core$Int64) {1};
int64_t $tmp737 = $tmp735.value;
int64_t $tmp738 = $tmp736.value;
int64_t $tmp739 = $tmp737 + $tmp738;
panda$core$Int64 $tmp740 = (panda$core$Int64) {$tmp739};
panda$core$Int64* $tmp741 = &$tmp733->level;
*$tmp741 = $tmp740;
// line 207
panda$io$IndentedOutputStream** $tmp742 = &param0->types;
panda$io$IndentedOutputStream* $tmp743 = *$tmp742;
$fn745 $tmp744 = ($fn745) ((panda$io$OutputStream*) $tmp743)->$class->vtable[19];
$tmp744(((panda$io$OutputStream*) $tmp743), &$s746);
// line 208
panda$io$IndentedOutputStream** $tmp747 = &param0->types;
panda$io$IndentedOutputStream* $tmp748 = *$tmp747;
$fn750 $tmp749 = ($fn750) ((panda$io$OutputStream*) $tmp748)->$class->vtable[19];
$tmp749(((panda$io$OutputStream*) $tmp748), &$s751);
// line 209
panda$io$IndentedOutputStream** $tmp752 = &param0->types;
panda$io$IndentedOutputStream* $tmp753 = *$tmp752;
org$pandalanguage$pandac$Type** $tmp754 = &param1->type;
org$pandalanguage$pandac$Type* $tmp755 = *$tmp754;
panda$core$String* $tmp756 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp755);
panda$core$String* $tmp757 = panda$core$String$convert$R$panda$core$String($tmp756);
panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, &$s759);
$fn761 $tmp760 = ($fn761) ((panda$io$OutputStream*) $tmp753)->$class->vtable[19];
$tmp760(((panda$io$OutputStream*) $tmp753), $tmp758);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
// line 210
panda$io$IndentedOutputStream** $tmp762 = &param0->types;
panda$io$IndentedOutputStream* $tmp763 = *$tmp762;
panda$core$Int64* $tmp764 = &$tmp763->level;
panda$core$Int64 $tmp765 = *$tmp764;
panda$core$Int64 $tmp766 = (panda$core$Int64) {1};
int64_t $tmp767 = $tmp765.value;
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767 - $tmp768;
panda$core$Int64 $tmp770 = (panda$core$Int64) {$tmp769};
panda$core$Int64* $tmp771 = &$tmp763->level;
*$tmp771 = $tmp770;
// line 211
panda$io$IndentedOutputStream** $tmp772 = &param0->types;
panda$io$IndentedOutputStream* $tmp773 = *$tmp772;
panda$core$String** $tmp774 = &param1->name;
panda$core$String* $tmp775 = *$tmp774;
panda$core$String* $tmp776 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp775);
panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s778, $tmp776);
panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s780);
$fn782 $tmp781 = ($fn782) ((panda$io$OutputStream*) $tmp773)->$class->vtable[19];
$tmp781(((panda$io$OutputStream*) $tmp773), $tmp779);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp777));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
// line 212
panda$io$IndentedOutputStream** $tmp783 = &param0->types;
panda$io$IndentedOutputStream* $tmp784 = *$tmp783;
panda$core$String** $tmp785 = &param1->name;
panda$core$String* $tmp786 = *$tmp785;
panda$core$String* $tmp787 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp786);
panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s789, $tmp787);
panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s791);
$fn793 $tmp792 = ($fn793) ((panda$io$OutputStream*) $tmp784)->$class->vtable[19];
$tmp792(((panda$io$OutputStream*) $tmp784), $tmp790);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
// line 213
panda$io$IndentedOutputStream** $tmp794 = &param0->types;
panda$io$IndentedOutputStream* $tmp795 = *$tmp794;
panda$core$Int64* $tmp796 = &$tmp795->level;
panda$core$Int64 $tmp797 = *$tmp796;
panda$core$Int64 $tmp798 = (panda$core$Int64) {1};
int64_t $tmp799 = $tmp797.value;
int64_t $tmp800 = $tmp798.value;
int64_t $tmp801 = $tmp799 + $tmp800;
panda$core$Int64 $tmp802 = (panda$core$Int64) {$tmp801};
panda$core$Int64* $tmp803 = &$tmp795->level;
*$tmp803 = $tmp802;
// line 214
panda$io$IndentedOutputStream** $tmp804 = &param0->types;
panda$io$IndentedOutputStream* $tmp805 = *$tmp804;
panda$core$String** $tmp806 = &param1->name;
panda$core$String* $tmp807 = *$tmp806;
panda$core$String* $tmp808 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp807);
panda$core$String* $tmp809 = panda$core$String$convert$R$panda$core$String($tmp808);
panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, &$s811);
$fn813 $tmp812 = ($fn813) ((panda$io$OutputStream*) $tmp805)->$class->vtable[19];
$tmp812(((panda$io$OutputStream*) $tmp805), $tmp810);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// line 215
panda$io$IndentedOutputStream** $tmp814 = &param0->types;
panda$io$IndentedOutputStream* $tmp815 = *$tmp814;
$fn817 $tmp816 = ($fn817) ((panda$io$OutputStream*) $tmp815)->$class->vtable[19];
$tmp816(((panda$io$OutputStream*) $tmp815), &$s818);
// line 216
panda$io$IndentedOutputStream** $tmp819 = &param0->types;
panda$io$IndentedOutputStream* $tmp820 = *$tmp819;
panda$core$Int64* $tmp821 = &$tmp820->level;
panda$core$Int64 $tmp822 = *$tmp821;
panda$core$Int64 $tmp823 = (panda$core$Int64) {1};
int64_t $tmp824 = $tmp822.value;
int64_t $tmp825 = $tmp823.value;
int64_t $tmp826 = $tmp824 - $tmp825;
panda$core$Int64 $tmp827 = (panda$core$Int64) {$tmp826};
panda$core$Int64* $tmp828 = &$tmp820->level;
*$tmp828 = $tmp827;
// line 217
panda$io$IndentedOutputStream** $tmp829 = &param0->types;
panda$io$IndentedOutputStream* $tmp830 = *$tmp829;
panda$core$String** $tmp831 = &param1->name;
panda$core$String* $tmp832 = *$tmp831;
panda$core$String* $tmp833 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp832);
panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s835, $tmp833);
panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, &$s837);
$fn839 $tmp838 = ($fn839) ((panda$io$OutputStream*) $tmp830)->$class->vtable[19];
$tmp838(((panda$io$OutputStream*) $tmp830), $tmp836);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// line 218
panda$core$Weak** $tmp840 = &param0->compiler;
panda$core$Weak* $tmp841 = *$tmp840;
panda$core$Object* $tmp842 = panda$core$Weak$get$R$panda$core$Weak$T($tmp841);
panda$core$Panda$unref$panda$core$Object$Q($tmp842);
org$pandalanguage$pandac$Type* $tmp843 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp844 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp842), $tmp843);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp845 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
*(&local3) = $tmp844;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
// line 219
panda$core$Weak** $tmp846 = &param0->compiler;
panda$core$Weak* $tmp847 = *$tmp846;
panda$core$Object* $tmp848 = panda$core$Weak$get$R$panda$core$Weak$T($tmp847);
panda$core$Panda$unref$panda$core$Object$Q($tmp848);
org$pandalanguage$pandac$ClassDecl* $tmp849 = *(&local3);
panda$collections$ListView* $tmp850 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp848), $tmp849);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp851 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
*(&local4) = $tmp850;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// line 220
panda$io$IndentedOutputStream** $tmp852 = &param0->types;
panda$io$IndentedOutputStream* $tmp853 = *$tmp852;
panda$collections$ListView* $tmp854 = *(&local4);
ITable* $tmp855 = ((panda$collections$CollectionView*) $tmp854)->$class->itable;
while ($tmp855->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp855 = $tmp855->next;
}
$fn857 $tmp856 = $tmp855->methods[0];
panda$core$Int64 $tmp858 = $tmp856(((panda$collections$CollectionView*) $tmp854));
panda$core$Int64$wrapper* $tmp859;
$tmp859 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp859->value = $tmp858;
panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s861, ((panda$core$Object*) $tmp859));
panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s863);
panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s865, $tmp862);
panda$core$String** $tmp866 = &param1->name;
panda$core$String* $tmp867 = *$tmp866;
panda$core$String* $tmp868 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp867);
panda$core$String* $tmp869 = panda$core$String$convert$R$panda$core$String($tmp868);
panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s871);
panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, $tmp870);
$fn874 $tmp873 = ($fn874) ((panda$io$OutputStream*) $tmp853)->$class->vtable[19];
$tmp873(((panda$io$OutputStream*) $tmp853), $tmp872);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// line 224
panda$io$IndentedOutputStream** $tmp875 = &param0->types;
panda$io$IndentedOutputStream* $tmp876 = *$tmp875;
panda$core$String** $tmp877 = &param1->name;
panda$core$String* $tmp878 = *$tmp877;
panda$core$String* $tmp879 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp878);
panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s881, $tmp879);
panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s883);
panda$core$String** $tmp884 = &param1->name;
panda$core$String* $tmp885 = *$tmp884;
panda$core$String* $tmp886 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp885);
panda$core$String* $tmp887 = panda$core$String$convert$R$panda$core$String($tmp886);
panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s889);
panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, $tmp888);
$fn892 $tmp891 = ($fn892) ((panda$io$OutputStream*) $tmp876)->$class->vtable[19];
$tmp891(((panda$io$OutputStream*) $tmp876), $tmp890);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
panda$collections$ListView* $tmp893 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp894 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block10;
block10:;
panda$io$File* $tmp895 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing typesPath
*(&local1) = ((panda$io$File*) NULL);
panda$io$File* $tmp896 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 230
panda$core$Weak** $tmp897 = &param1->owner;
panda$core$Weak* $tmp898 = *$tmp897;
panda$core$Object* $tmp899 = panda$core$Weak$get$R$panda$core$Weak$T($tmp898);
panda$core$Panda$unref$panda$core$Object$Q($tmp899);
org$pandalanguage$pandac$Type** $tmp900 = &((org$pandalanguage$pandac$ClassDecl*) $tmp899)->type;
org$pandalanguage$pandac$Type* $tmp901 = *$tmp900;
panda$core$String* $tmp902 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp901);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp903 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
*(&local0) = $tmp902;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
// line 231
org$pandalanguage$pandac$MethodDecl$Kind* $tmp904 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp905 = *$tmp904;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp906;
$tmp906 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp906->value = $tmp905;
panda$core$Int64 $tmp907 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp908 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp907);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp909;
$tmp909 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp909->value = $tmp908;
ITable* $tmp910 = ((panda$core$Equatable*) $tmp906)->$class->itable;
while ($tmp910->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp910 = $tmp910->next;
}
$fn912 $tmp911 = $tmp910->methods[0];
panda$core$Bit $tmp913 = $tmp911(((panda$core$Equatable*) $tmp906), ((panda$core$Equatable*) $tmp909));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp906)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp909)));
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block1; else goto block2;
block1:;
panda$core$String* $tmp915 = *(&local0);
panda$core$Bit $tmp916 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp915, &$s917);
panda$core$Bit $tmp918 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp916);
*(&local1) = $tmp918;
goto block3;
block2:;
*(&local1) = $tmp913;
goto block3;
block3:;
panda$core$Bit $tmp919 = *(&local1);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block4; else goto block5;
block4:;
// line 232
panda$core$String* $tmp921 = *(&local0);
panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, &$s923);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
panda$core$String* $tmp924 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp922;
block5:;
// line 234
panda$core$String* $tmp925 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp925));
panda$core$String* $tmp926 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp925;

}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
// line 254
org$pandalanguage$pandac$Type** $tmp927 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp928 = *$tmp927;
panda$core$Bit $tmp929 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp928);
panda$core$Bit $tmp930 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp929);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block1; else goto block2;
block1:;
// line 255
panda$core$Bit $tmp932 = panda$core$Bit$init$builtin_bit(false);
return $tmp932;
block2:;
// line 257
org$pandalanguage$pandac$Annotations** $tmp933 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp934 = *$tmp933;
panda$core$Bit $tmp935 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit($tmp934);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$Type** $tmp937 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp938 = *$tmp937;
panda$core$Bit $tmp939 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp938);
*(&local1) = $tmp939;
goto block5;
block4:;
*(&local1) = $tmp935;
goto block5;
block5:;
panda$core$Bit $tmp940 = *(&local1);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block6; else goto block7;
block6:;
panda$core$Weak** $tmp942 = &param0->compiler;
panda$core$Weak* $tmp943 = *$tmp942;
panda$core$Object* $tmp944 = panda$core$Weak$get$R$panda$core$Weak$T($tmp943);
panda$core$Panda$unref$panda$core$Object$Q($tmp944);
panda$core$Weak** $tmp945 = &param0->compiler;
panda$core$Weak* $tmp946 = *$tmp945;
panda$core$Object* $tmp947 = panda$core$Weak$get$R$panda$core$Weak$T($tmp946);
panda$core$Panda$unref$panda$core$Object$Q($tmp947);
org$pandalanguage$pandac$Type** $tmp948 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp949 = *$tmp948;
org$pandalanguage$pandac$ClassDecl* $tmp950 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp947), $tmp949);
panda$core$Bit $tmp951 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp944), $tmp950);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
*(&local0) = $tmp951;
goto block8;
block7:;
*(&local0) = $tmp940;
goto block8;
block8:;
panda$core$Bit $tmp952 = *(&local0);
*(&local2) = $tmp952;
// line 263
panda$core$Bit $tmp953 = *(&local2);
panda$core$Bit $tmp954 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp953);
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block9; else goto block10;
block9:;
*(&local3) = $tmp954;
goto block11;
block10:;
org$pandalanguage$pandac$Annotations** $tmp956 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp957 = *$tmp956;
panda$core$Bit $tmp958 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit($tmp957);
panda$core$Bit $tmp959 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Annotations** $tmp961 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp962 = *$tmp961;
panda$core$Bit $tmp963 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp962);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block15; else goto block16;
block15:;
*(&local5) = $tmp963;
goto block17;
block16:;
org$pandalanguage$pandac$Annotations** $tmp965 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp966 = *$tmp965;
panda$core$Bit $tmp967 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp966);
*(&local5) = $tmp967;
goto block17;
block17:;
panda$core$Bit $tmp968 = *(&local5);
*(&local4) = $tmp968;
goto block14;
block13:;
*(&local4) = $tmp959;
goto block14;
block14:;
panda$core$Bit $tmp969 = *(&local4);
*(&local3) = $tmp969;
goto block11;
block11:;
panda$core$Bit $tmp970 = *(&local3);
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp972 = (panda$core$Int64) {263};
panda$core$String* $tmp973 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param1);
panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s975, $tmp973);
panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp974, &$s977);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s978, $tmp972, $tmp976);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
abort(); // unreachable
block18:;
// line 265
panda$core$Bit $tmp979 = *(&local2);
return $tmp979;

}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
panda$core$String* local3 = NULL;
// line 270
panda$io$MemoryOutputStream** $tmp980 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp981 = *$tmp980;
panda$io$MemoryOutputStream** $tmp982 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp983 = *$tmp982;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
panda$io$MemoryOutputStream** $tmp984 = &param0->importStream;
*$tmp984 = $tmp981;
// line 271
panda$collections$HashSet** $tmp985 = &param0->bodyImports;
panda$collections$HashSet* $tmp986 = *$tmp985;
panda$collections$HashSet** $tmp987 = &param0->imports;
panda$collections$HashSet* $tmp988 = *$tmp987;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
panda$collections$HashSet** $tmp989 = &param0->imports;
*$tmp989 = $tmp986;
// line 272
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp990 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s991));
*(&local0) = &$s992;
// line 273
panda$core$Bit $tmp993 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param1);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block1; else goto block3;
block1:;
// line 274
panda$io$IndentedOutputStream** $tmp995 = &param0->body;
panda$io$IndentedOutputStream* $tmp996 = *$tmp995;
panda$core$String* $tmp997 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s999, $tmp997);
panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, &$s1001);
org$pandalanguage$pandac$Type** $tmp1002 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1003 = *$tmp1002;
panda$core$String* $tmp1004 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1003);
panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1000, $tmp1004);
panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1005, &$s1007);
$fn1009 $tmp1008 = ($fn1009) ((panda$io$OutputStream*) $tmp996)->$class->vtable[17];
$tmp1008(((panda$io$OutputStream*) $tmp996), $tmp1006);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
// line 275
panda$core$String* $tmp1010 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1011));
*(&local0) = &$s1012;
goto block2;
block3:;
// line 1
// line 278
panda$io$IndentedOutputStream** $tmp1013 = &param0->body;
panda$io$IndentedOutputStream* $tmp1014 = *$tmp1013;
org$pandalanguage$pandac$Type** $tmp1015 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1016 = *$tmp1015;
panda$core$String* $tmp1017 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1016);
panda$core$String* $tmp1018 = panda$core$String$convert$R$panda$core$String($tmp1017);
panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1018, &$s1020);
panda$core$String* $tmp1021 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1019, $tmp1021);
panda$core$String* $tmp1023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1024);
$fn1026 $tmp1025 = ($fn1026) ((panda$io$OutputStream*) $tmp1014)->$class->vtable[17];
$tmp1025(((panda$io$OutputStream*) $tmp1014), $tmp1023);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
goto block2;
block2:;
// line 280
org$pandalanguage$pandac$Annotations** $tmp1027 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1028 = *$tmp1027;
panda$core$Bit $tmp1029 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1028);
panda$core$Bit $tmp1030 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1029);
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block4; else goto block5;
block4:;
panda$core$Weak** $tmp1032 = &param0->compiler;
panda$core$Weak* $tmp1033 = *$tmp1032;
panda$core$Object* $tmp1034 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1033);
panda$core$Panda$unref$panda$core$Object$Q($tmp1034);
panda$core$Bit $tmp1035 = org$pandalanguage$pandac$Compiler$isValueInit$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1034), param1);
panda$core$Bit $tmp1036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1035);
*(&local1) = $tmp1036;
goto block6;
block5:;
*(&local1) = $tmp1030;
goto block6;
block6:;
panda$core$Bit $tmp1037 = *(&local1);
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block7; else goto block8;
block7:;
// line 281
panda$io$IndentedOutputStream** $tmp1039 = &param0->body;
panda$io$IndentedOutputStream* $tmp1040 = *$tmp1039;
panda$core$String* $tmp1041 = *(&local0);
panda$core$String* $tmp1042 = panda$core$String$convert$R$panda$core$String($tmp1041);
panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1044);
panda$core$String* $tmp1045 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, $tmp1045);
panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1048);
$fn1050 $tmp1049 = ($fn1050) ((panda$io$OutputStream*) $tmp1040)->$class->vtable[17];
$tmp1049(((panda$io$OutputStream*) $tmp1040), $tmp1047);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
// line 282
panda$core$String* $tmp1051 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1052));
*(&local0) = &$s1053;
goto block8;
block8:;
// line 284
panda$collections$Array** $tmp1054 = &param1->parameters;
panda$collections$Array* $tmp1055 = *$tmp1054;
ITable* $tmp1056 = ((panda$collections$Iterable*) $tmp1055)->$class->itable;
while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1056 = $tmp1056->next;
}
$fn1058 $tmp1057 = $tmp1056->methods[0];
panda$collections$Iterator* $tmp1059 = $tmp1057(((panda$collections$Iterable*) $tmp1055));
goto block9;
block9:;
ITable* $tmp1060 = $tmp1059->$class->itable;
while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1060 = $tmp1060->next;
}
$fn1062 $tmp1061 = $tmp1060->methods[0];
panda$core$Bit $tmp1063 = $tmp1061($tmp1059);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block11; else goto block10;
block10:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp1065 = $tmp1059->$class->itable;
while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[1];
panda$core$Object* $tmp1068 = $tmp1066($tmp1059);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1069 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1068)));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1068);
// line 285
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1070 = *(&local2);
panda$core$String** $tmp1071 = &$tmp1070->name;
panda$core$String* $tmp1072 = *$tmp1071;
panda$core$String* $tmp1073 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1072);
panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1075, $tmp1073);
panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1077);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1078 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
*(&local3) = $tmp1076;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// line 286
panda$io$IndentedOutputStream** $tmp1079 = &param0->body;
panda$io$IndentedOutputStream* $tmp1080 = *$tmp1079;
panda$core$String* $tmp1081 = *(&local0);
panda$core$String* $tmp1082 = panda$core$String$convert$R$panda$core$String($tmp1081);
panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1084);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1085 = *(&local2);
org$pandalanguage$pandac$Type** $tmp1086 = &$tmp1085->type;
org$pandalanguage$pandac$Type* $tmp1087 = *$tmp1086;
panda$core$String* $tmp1088 = *(&local3);
panda$core$String* $tmp1089 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(param0, $tmp1087, $tmp1088);
panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, $tmp1089);
panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1090, &$s1092);
$fn1094 $tmp1093 = ($fn1094) ((panda$io$OutputStream*) $tmp1080)->$class->vtable[17];
$tmp1093(((panda$io$OutputStream*) $tmp1080), $tmp1091);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
// line 287
panda$core$String* $tmp1095 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1096));
*(&local0) = &$s1097;
panda$core$Panda$unref$panda$core$Object$Q($tmp1068);
panda$core$String* $tmp1098 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1099 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
// line 289
panda$io$IndentedOutputStream** $tmp1100 = &param0->body;
panda$io$IndentedOutputStream* $tmp1101 = *$tmp1100;
$fn1103 $tmp1102 = ($fn1103) ((panda$io$OutputStream*) $tmp1101)->$class->vtable[19];
$tmp1102(((panda$io$OutputStream*) $tmp1101), &$s1104);
panda$core$String* $tmp1105 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
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
panda$io$IndentedOutputStream** $tmp1106 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1107 = *$tmp1106;
panda$io$MemoryOutputStream** $tmp1108 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1109 = *$tmp1108;
$fn1111 $tmp1110 = ($fn1111) ((panda$io$OutputStream*) $tmp1107)->$class->vtable[20];
$tmp1110(((panda$io$OutputStream*) $tmp1107), ((panda$core$Object*) $tmp1109));
// line 300
panda$io$IndentedOutputStream** $tmp1112 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1113 = *$tmp1112;
panda$io$MemoryOutputStream** $tmp1114 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1115 = *$tmp1114;
$fn1117 $tmp1116 = ($fn1117) ((panda$io$OutputStream*) $tmp1113)->$class->vtable[20];
$tmp1116(((panda$io$OutputStream*) $tmp1113), ((panda$core$Object*) $tmp1115));
// line 301
panda$io$IndentedOutputStream** $tmp1118 = &param0->out;
panda$io$IndentedOutputStream* $tmp1119 = *$tmp1118;
panda$io$MemoryOutputStream** $tmp1120 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1121 = *$tmp1120;
$fn1123 $tmp1122 = ($fn1123) ((panda$io$OutputStream*) $tmp1119)->$class->vtable[20];
$tmp1122(((panda$io$OutputStream*) $tmp1119), ((panda$core$Object*) $tmp1121));
// line 302
panda$io$IndentedOutputStream** $tmp1124 = &param0->out;
panda$io$IndentedOutputStream* $tmp1125 = *$tmp1124;
panda$io$MemoryOutputStream** $tmp1126 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1127 = *$tmp1126;
$fn1129 $tmp1128 = ($fn1129) ((panda$io$OutputStream*) $tmp1125)->$class->vtable[20];
$tmp1128(((panda$io$OutputStream*) $tmp1125), ((panda$core$Object*) $tmp1127));
return;

}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* param0) {

return;

}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* param0) {

panda$core$Weak** $tmp1130 = &param0->compiler;
panda$core$Weak* $tmp1131 = *$tmp1130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
panda$io$MemoryOutputStream** $tmp1132 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1133 = *$tmp1132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
panda$io$MemoryOutputStream** $tmp1134 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1135 = *$tmp1134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
panda$io$IndentedOutputStream** $tmp1136 = &param0->types;
panda$io$IndentedOutputStream* $tmp1137 = *$tmp1136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
panda$io$MemoryOutputStream** $tmp1138 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1139 = *$tmp1138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
panda$io$MemoryOutputStream** $tmp1140 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1141 = *$tmp1140;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
panda$io$IndentedOutputStream** $tmp1142 = &param0->body;
panda$io$IndentedOutputStream* $tmp1143 = *$tmp1142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
panda$collections$HashSet** $tmp1144 = &param0->typeImports;
panda$collections$HashSet* $tmp1145 = *$tmp1144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
panda$collections$HashSet** $tmp1146 = &param0->bodyImports;
panda$collections$HashSet* $tmp1147 = *$tmp1146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
panda$collections$HashSet** $tmp1148 = &param0->imports;
panda$collections$HashSet* $tmp1149 = *$tmp1148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$io$MemoryOutputStream** $tmp1150 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp1151 = *$tmp1150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
panda$io$File** $tmp1152 = &param0->outDir;
panda$io$File* $tmp1153 = *$tmp1152;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
panda$io$IndentedOutputStream** $tmp1154 = &param0->out;
panda$io$IndentedOutputStream* $tmp1155 = *$tmp1154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
panda$io$IndentedOutputStream** $tmp1156 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1157 = *$tmp1156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp1158 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp1159 = *$tmp1158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
panda$core$Weak** $tmp1160 = &param0->cCodeGen;
panda$core$Weak* $tmp1161 = *$tmp1160;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
org$pandalanguage$pandac$CCodeGenerator** $tmp1162 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp1163 = *$tmp1162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
return;

}

