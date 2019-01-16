#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/HashSet.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
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

typedef void (*$fn243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn435)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn618)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn649)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn675)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn680)(panda$collections$Iterator*);
typedef void (*$fn716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn774)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn801)(panda$collections$CollectionView*);
typedef void (*$fn817)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn885)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn906)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn963)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn996)(panda$collections$CollectionView*);
typedef void (*$fn1013)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1031)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1051)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1204)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1221)(panda$collections$Iterator*);
typedef void (*$fn1248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1265)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1271)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1277)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1283)(panda$io$OutputStream*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x27", 117, -8927603854897346687, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x27", 141, -1373936697915893741, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x27", 143, 3985793072538673273, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x74\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, -4892902456452664750, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 1337001098912597051, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x27", 105, -9149076832702950651, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, panda$io$File* param1) {

// line 42
org$pandalanguage$pandac$CCodeGenerator* $tmp2 = (org$pandalanguage$pandac$CCodeGenerator*) frostObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
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
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp10 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(param0, param1, $tmp7);
return;

}
void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File$org$pandalanguage$pandac$CCodeGenerator(org$pandalanguage$pandac$HCodeGenerator* param0, panda$io$File* param1, org$pandalanguage$pandac$CCodeGenerator* param2) {

// line 6
panda$core$Weak* $tmp13 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp13, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Weak** $tmp14 = &param0->compiler;
panda$core$Weak* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Weak** $tmp16 = &param0->compiler;
*$tmp16 = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.Compiler?>)
// line 8
panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$io$MemoryOutputStream** $tmp18 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$io$MemoryOutputStream** $tmp20 = &param0->typeImportStream;
*$tmp20 = $tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($17:panda.io.MemoryOutputStream)
// line 10
panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp21);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$io$MemoryOutputStream** $tmp22 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$io$MemoryOutputStream** $tmp24 = &param0->typesBuffer;
*$tmp24 = $tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($31:panda.io.MemoryOutputStream)
// line 12
panda$io$IndentedOutputStream* $tmp25 = (panda$io$IndentedOutputStream*) frostObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp26 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp27 = *$tmp26;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp25, ((panda$io$OutputStream*) $tmp27));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$io$IndentedOutputStream** $tmp28 = &param0->types;
panda$io$IndentedOutputStream* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$io$IndentedOutputStream** $tmp30 = &param0->types;
*$tmp30 = $tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($45:panda.io.IndentedOutputStream)
// line 14
panda$io$MemoryOutputStream* $tmp31 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp31);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$io$MemoryOutputStream** $tmp32 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$io$MemoryOutputStream** $tmp34 = &param0->bodyImportStream;
*$tmp34 = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($62:panda.io.MemoryOutputStream)
// line 16
panda$io$MemoryOutputStream* $tmp35 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp35);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$io$MemoryOutputStream** $tmp36 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$io$MemoryOutputStream** $tmp38 = &param0->bodyBuffer;
*$tmp38 = $tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($76:panda.io.MemoryOutputStream)
// line 18
panda$io$IndentedOutputStream* $tmp39 = (panda$io$IndentedOutputStream*) frostObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream** $tmp40 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp41 = *$tmp40;
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp39, ((panda$io$OutputStream*) $tmp41));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$io$IndentedOutputStream** $tmp42 = &param0->body;
panda$io$IndentedOutputStream* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$io$IndentedOutputStream** $tmp44 = &param0->body;
*$tmp44 = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($90:panda.io.IndentedOutputStream)
// line 20
panda$collections$HashSet* $tmp45 = (panda$collections$HashSet*) frostObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp45);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$collections$HashSet** $tmp46 = &param0->typeImports;
panda$collections$HashSet* $tmp47 = *$tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$collections$HashSet** $tmp48 = &param0->typeImports;
*$tmp48 = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($107:panda.collections.HashSet<panda.core.String>)
// line 22
panda$collections$HashSet* $tmp49 = (panda$collections$HashSet*) frostObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp49);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$collections$HashSet** $tmp50 = &param0->bodyImports;
panda$collections$HashSet* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$collections$HashSet** $tmp52 = &param0->bodyImports;
*$tmp52 = $tmp49;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($122:panda.collections.HashSet<panda.core.String>)
// line 24
panda$collections$HashSet** $tmp53 = &param0->typeImports;
panda$collections$HashSet* $tmp54 = *$tmp53;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$collections$HashSet** $tmp55 = &param0->imports;
panda$collections$HashSet* $tmp56 = *$tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$collections$HashSet** $tmp57 = &param0->imports;
*$tmp57 = $tmp54;
// line 26
panda$io$MemoryOutputStream** $tmp58 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp59 = *$tmp58;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$io$MemoryOutputStream** $tmp60 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp61 = *$tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$io$MemoryOutputStream** $tmp62 = &param0->importStream;
*$tmp62 = $tmp59;
// line 34
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp63 = (org$pandalanguage$pandac$LLVMCodeGenerator*) frostObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$io$MemoryOutputStream* $tmp64 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp64);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp63, &$s65, ((panda$io$OutputStream*) $tmp64));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp66 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp68 = &param0->llvmCodeGen;
*$tmp68 = $tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($160:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing REF($159:org.pandalanguage.pandac.LLVMCodeGenerator)
// line 47
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp69 = &param0->outDir;
panda$io$File* $tmp70 = *$tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$io$File** $tmp71 = &param0->outDir;
*$tmp71 = param1;
// line 48
panda$io$IndentedOutputStream* $tmp72 = (panda$io$IndentedOutputStream*) frostObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp73 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp73);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp72, ((panda$io$OutputStream*) $tmp73));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$io$IndentedOutputStream** $tmp74 = &param0->out;
panda$io$IndentedOutputStream* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$io$IndentedOutputStream** $tmp76 = &param0->out;
*$tmp76 = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($189:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($188:panda.io.IndentedOutputStream)
// line 49
panda$io$IndentedOutputStream* $tmp77 = (panda$io$IndentedOutputStream*) frostObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$MemoryOutputStream* $tmp78 = (panda$io$MemoryOutputStream*) frostObjectAlloc(40, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
panda$io$MemoryOutputStream$init($tmp78);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp77, ((panda$io$OutputStream*) $tmp78));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$io$IndentedOutputStream** $tmp79 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp80 = *$tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$io$IndentedOutputStream** $tmp81 = &param0->typesOut;
*$tmp81 = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($209:panda.io.MemoryOutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($208:panda.io.IndentedOutputStream)
// line 50
panda$core$Weak* $tmp82 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp82, ((panda$core$Object*) param2));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Weak** $tmp83 = &param0->cCodeGen;
panda$core$Weak* $tmp84 = *$tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$Weak** $tmp85 = &param0->cCodeGen;
*$tmp85 = $tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($228:panda.core.Weak<org.pandalanguage.pandac.CCodeGenerator>)
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, panda$core$String* param1) {

// line 54
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp86 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp87 = *$tmp86;
panda$core$String* $tmp88 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String($tmp87, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing REF($3:panda.core.String)
return $tmp88;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
// line 58
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp89 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp90 = *$tmp89;
panda$core$String* $tmp91 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String($tmp90, param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$String* $tmp92 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
*(&local0) = $tmp91;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($3:panda.core.String)
// line 59
panda$core$String* $tmp93 = *(&local0);
panda$core$Bit $tmp94 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp93, &$s95);
bool $tmp96 = $tmp94.value;
if ($tmp96) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp97 = (panda$core$Int64) {59};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s98, $tmp97);
abort(); // unreachable
block1:;
// line 60
panda$core$String* $tmp99 = *(&local0);
panda$core$Int64 $tmp100 = (panda$core$Int64) {1};
panda$core$Bit $tmp101 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp102 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp100, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp101);
panda$core$String* $tmp103 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp99, $tmp102);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($28:panda.core.String)
panda$core$String* $tmp104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing llvmName
*(&local0) = ((panda$core$String*) NULL);
return $tmp103;

}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1) {

// line 64
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp105 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp106 = *$tmp105;
panda$core$Int64 $tmp107 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64($tmp106, param1);
return $tmp107;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 68
panda$core$String** $tmp108 = &param1->name;
panda$core$String* $tmp109 = *$tmp108;
panda$core$String* $tmp110 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp109, &$s111, &$s112);
panda$core$String* $tmp113 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp110, &$s114, &$s115);
panda$core$String* $tmp116 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp113, &$s117, &$s118);
panda$core$String* $tmp119 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp116, &$s120, &$s121);
panda$core$String* $tmp122 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp119, &$s123, &$s124);
panda$core$String* $tmp125 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp122, &$s126, &$s127);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($3:panda.core.String)
return $tmp128;

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
org$pandalanguage$pandac$Type$Kind* $tmp129 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp130 = *$tmp129;
panda$core$Int64 $tmp131 = $tmp130.$rawValue;
panda$core$Int64 $tmp132 = (panda$core$Int64) {4};
panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block2; else goto block3;
block2:;
// line 75
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s135));
return &$s136;
block3:;
panda$core$Int64 $tmp137 = (panda$core$Int64) {2};
panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block4; else goto block5;
block4:;
// line 78
panda$core$Int64 $tmp140 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp141 = (panda$core$Int64) {8};
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 * $tmp143;
panda$core$Int64 $tmp145 = (panda$core$Int64) {$tmp144};
panda$core$Int64$wrapper* $tmp146;
$tmp146 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp146->value = $tmp145;
panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s148, ((panda$core$Object*) $tmp146));
panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s150);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($23:panda.core.Object)
return $tmp149;
block5:;
panda$core$Int64 $tmp151 = (panda$core$Int64) {3};
panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp151);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block6; else goto block7;
block6:;
// line 81
panda$core$Int64 $tmp154 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp155 = (panda$core$Int64) {8};
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156 * $tmp157;
panda$core$Int64 $tmp159 = (panda$core$Int64) {$tmp158};
panda$core$Int64$wrapper* $tmp160;
$tmp160 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp160->value = $tmp159;
panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s162, ((panda$core$Object*) $tmp160));
panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s164);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing REF($49:panda.core.Object)
return $tmp163;
block7:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {9};
panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block8; else goto block9;
block8:;
// line 84
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s168));
return &$s169;
block9:;
panda$core$Int64 $tmp170 = (panda$core$Int64) {10};
panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block10; else goto block11;
block10:;
// line 87
panda$core$Int64 $tmp173 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(param0, param1);
panda$core$Int64 $tmp174 = (panda$core$Int64) {4};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block13; else goto block14;
block13:;
// line 88
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s177));
return &$s178;
block14:;
panda$core$Int64 $tmp179 = (panda$core$Int64) {8};
panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block15; else goto block16;
block15:;
// line 89
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s182));
return &$s183;
block16:;
// line 90
panda$core$Bit $tmp184 = panda$core$Bit$init$builtin_bit(false);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp186 = (panda$core$Int64) {90};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s187, $tmp186);
abort(); // unreachable
block17:;
goto block12;
block12:;
goto block1;
block11:;
panda$core$Int64 $tmp188 = (panda$core$Int64) {0};
panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block19; else goto block20;
block19:;
// line 94
panda$core$String** $tmp191 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp192 = *$tmp191;
panda$core$String* $tmp193 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp192);
panda$core$String* $tmp194 = panda$core$String$convert$R$panda$core$String($tmp193);
panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s196);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
panda$core$String* $tmp197 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
*(&local0) = $tmp195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($112:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($111:panda.core.String)
// line 95
panda$core$Weak** $tmp198 = &param0->compiler;
panda$core$Weak* $tmp199 = *$tmp198;
panda$core$Object* $tmp200 = panda$core$Weak$get$R$panda$core$Weak$T($tmp199);
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp200) != NULL);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp203 = (panda$core$Int64) {95};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block21:;
org$pandalanguage$pandac$ClassDecl* $tmp206 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp200), param1);
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
org$pandalanguage$pandac$ClassDecl* $tmp207 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
*(&local1) = $tmp206;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($144:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp200);
// unreffing REF($134:panda.core.Weak.T)
// line 96
org$pandalanguage$pandac$ClassDecl* $tmp208 = *(&local1);
panda$core$Bit $tmp209 = panda$core$Bit$init$builtin_bit($tmp208 != NULL);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp211 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s212, $tmp211);
abort(); // unreachable
block23:;
// line 97
panda$core$Weak** $tmp213 = &param0->compiler;
panda$core$Weak* $tmp214 = *$tmp213;
panda$core$Object* $tmp215 = panda$core$Weak$get$R$panda$core$Weak$T($tmp214);
panda$core$Bit $tmp216 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp215) != NULL);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp218 = (panda$core$Int64) {97};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s219, $tmp218, &$s220);
abort(); // unreachable
block27:;
org$pandalanguage$pandac$ClassDecl* $tmp221 = *(&local1);
panda$core$Bit $tmp222 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp215), $tmp221);
panda$core$Bit $tmp223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp222);
bool $tmp224 = $tmp223.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp215);
// unreffing REF($171:panda.core.Weak.T)
if ($tmp224) goto block25; else goto block26;
block25:;
// line 98
panda$collections$HashSet** $tmp225 = &param0->imports;
panda$collections$HashSet* $tmp226 = *$tmp225;
panda$core$String* $tmp227 = *(&local0);
panda$core$Bit $tmp228 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp226, ((panda$collections$Key*) $tmp227));
panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block29; else goto block30;
block29:;
// line 99
panda$io$MemoryOutputStream** $tmp231 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp232 = *$tmp231;
panda$core$String* $tmp233 = *(&local0);
panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s235, $tmp233);
panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s237);
panda$core$String* $tmp238 = *(&local0);
panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, $tmp238);
panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s241);
$fn243 $tmp242 = ($fn243) ((panda$io$OutputStream*) $tmp232)->$class->vtable[19];
$tmp242(((panda$io$OutputStream*) $tmp232), $tmp240);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($208:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing REF($207:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($205:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($204:panda.core.String)
// line 100
panda$collections$HashSet** $tmp244 = &param0->imports;
panda$collections$HashSet* $tmp245 = *$tmp244;
panda$core$String* $tmp246 = *(&local0);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp245, ((panda$collections$Key*) $tmp246));
goto block30;
block30:;
// line 102
panda$core$String* $tmp247 = *(&local0);
panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s249);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($233:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp250 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp251 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp248;
block26:;
// line 104
org$pandalanguage$pandac$ClassDecl* $tmp252 = *(&local1);
panda$core$Bit $tmp253 = panda$core$Bit$init$builtin_bit($tmp252 != NULL);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp255 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block31:;
panda$core$String* $tmp258 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp252, &$s259);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
panda$core$String* $tmp260 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
*(&local2) = $tmp258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($260:panda.core.String)
// line 105
panda$collections$HashSet** $tmp261 = &param0->imports;
panda$collections$HashSet* $tmp262 = *$tmp261;
panda$core$String* $tmp263 = *(&local2);
panda$core$Bit $tmp264 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp262, ((panda$collections$Key*) $tmp263));
panda$core$Bit $tmp265 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block33; else goto block34;
block33:;
// line 106
panda$io$MemoryOutputStream** $tmp267 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp268 = *$tmp267;
panda$core$String* $tmp269 = *(&local2);
panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s271, $tmp269);
panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s273);
$fn275 $tmp274 = ($fn275) ((panda$io$OutputStream*) $tmp268)->$class->vtable[19];
$tmp274(((panda$io$OutputStream*) $tmp268), $tmp272);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing REF($287:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($286:panda.core.String)
// line 107
panda$collections$HashSet** $tmp276 = &param0->imports;
panda$collections$HashSet* $tmp277 = *$tmp276;
panda$core$String* $tmp278 = *(&local2);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp277, ((panda$collections$Key*) $tmp278));
goto block34;
block34:;
// line 109
panda$core$String* $tmp279 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$core$String* $tmp280 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
// unreffing includePath
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp281 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing cl
*(&local1) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp282 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp279;
block20:;
panda$core$Int64 $tmp283 = (panda$core$Int64) {1};
panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block35; else goto block36;
block35:;
// line 112
panda$core$Weak** $tmp286 = &param0->compiler;
panda$core$Weak* $tmp287 = *$tmp286;
panda$core$Object* $tmp288 = panda$core$Weak$get$R$panda$core$Weak$T($tmp287);
panda$core$Bit $tmp289 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp288) != NULL);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp291 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s292, $tmp291, &$s293);
abort(); // unreachable
block37:;
org$pandalanguage$pandac$ClassDecl* $tmp294 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp288), param1);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
org$pandalanguage$pandac$ClassDecl* $tmp295 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
*(&local3) = $tmp294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($342:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp288);
// unreffing REF($332:panda.core.Weak.T)
// line 113
org$pandalanguage$pandac$ClassDecl* $tmp296 = *(&local3);
panda$core$Bit $tmp297 = panda$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp299 = (panda$core$Int64) {113};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s300, $tmp299);
abort(); // unreachable
block39:;
// line 114
panda$core$Weak** $tmp301 = &param0->compiler;
panda$core$Weak* $tmp302 = *$tmp301;
panda$core$Object* $tmp303 = panda$core$Weak$get$R$panda$core$Weak$T($tmp302);
panda$core$Bit $tmp304 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp303) != NULL);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp306 = (panda$core$Int64) {114};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s307, $tmp306, &$s308);
abort(); // unreachable
block43:;
org$pandalanguage$pandac$ClassDecl* $tmp309 = *(&local3);
panda$core$Bit $tmp310 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp303), $tmp309);
bool $tmp311 = $tmp310.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp303);
// unreffing REF($369:panda.core.Weak.T)
if ($tmp311) goto block41; else goto block42;
block41:;
// line 115
org$pandalanguage$pandac$FixedArray** $tmp312 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp313 = *$tmp312;
panda$core$Bit $tmp314 = panda$core$Bit$init$builtin_bit($tmp313 != NULL);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp316 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s317, $tmp316, &$s318);
abort(); // unreachable
block45:;
panda$core$Int64 $tmp319 = (panda$core$Int64) {0};
panda$core$Object* $tmp320 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp313, $tmp319);
panda$core$String* $tmp321 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp320));
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s323);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($402:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($401:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp320);
// unreffing REF($399:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp324 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp322;
block42:;
// line 117
org$pandalanguage$pandac$FixedArray** $tmp325 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp326 = *$tmp325;
panda$core$Bit $tmp327 = panda$core$Bit$init$builtin_bit($tmp326 != NULL);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp329 = (panda$core$Int64) {117};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block47:;
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
panda$core$Object* $tmp333 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp326, $tmp332);
panda$core$String* $tmp334 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($435:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp333);
// unreffing REF($433:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp335 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp334;
block36:;
panda$core$Int64 $tmp336 = (panda$core$Int64) {11};
panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp336);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block49; else goto block50;
block49:;
// line 120
org$pandalanguage$pandac$FixedArray** $tmp339 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp340 = *$tmp339;
panda$core$Bit $tmp341 = panda$core$Bit$init$builtin_bit($tmp340 != NULL);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp343 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s344, $tmp343, &$s345);
abort(); // unreachable
block53:;
panda$core$Int64 $tmp346 = (panda$core$Int64) {0};
panda$core$Object* $tmp347 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp340, $tmp346);
panda$core$String** $tmp348 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp347))->name;
panda$core$String* $tmp349 = *$tmp348;
panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp349, &$s351);
bool $tmp352 = $tmp350.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp347);
// unreffing REF($467:org.pandalanguage.pandac.FixedArray.T)
if ($tmp352) goto block51; else goto block52;
block51:;
// line 121
org$pandalanguage$pandac$FixedArray** $tmp353 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp354 = *$tmp353;
panda$core$Bit $tmp355 = panda$core$Bit$init$builtin_bit($tmp354 != NULL);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp357 = (panda$core$Int64) {121};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block55:;
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
panda$core$Object* $tmp361 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp354, $tmp360);
panda$core$String* $tmp362 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp361));
panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s364);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing REF($494:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($493:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp361);
// unreffing REF($491:org.pandalanguage.pandac.FixedArray.T)
return $tmp363;
block52:;
// line 123
panda$core$Weak** $tmp365 = &param0->compiler;
panda$core$Weak* $tmp366 = *$tmp365;
panda$core$Object* $tmp367 = panda$core$Weak$get$R$panda$core$Weak$T($tmp366);
panda$core$Bit $tmp368 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp367) != NULL);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp370 = (panda$core$Int64) {123};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s371, $tmp370, &$s372);
abort(); // unreachable
block57:;
org$pandalanguage$pandac$ClassDecl* $tmp373 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp367), param1);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
org$pandalanguage$pandac$ClassDecl* $tmp374 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
*(&local4) = $tmp373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing REF($521:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp367);
// unreffing REF($511:panda.core.Weak.T)
// line 124
org$pandalanguage$pandac$ClassDecl* $tmp375 = *(&local4);
panda$core$Bit $tmp376 = panda$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block61; else goto block62;
block62:;
panda$core$Int64 $tmp378 = (panda$core$Int64) {124};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block61:;
panda$core$Bit $tmp381 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit($tmp375);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block59; else goto block60;
block59:;
// line 125
panda$core$String** $tmp383 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp384 = *$tmp383;
panda$core$String* $tmp385 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp384);
panda$core$String* $tmp386 = panda$core$String$convert$R$panda$core$String($tmp385);
panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp386, &$s388);
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
panda$core$String* $tmp389 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
*(&local5) = $tmp387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($554:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing REF($553:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($552:panda.core.String)
// line 126
panda$core$Weak** $tmp390 = &param0->compiler;
panda$core$Weak* $tmp391 = *$tmp390;
panda$core$Object* $tmp392 = panda$core$Weak$get$R$panda$core$Weak$T($tmp391);
panda$core$Bit $tmp393 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp392) != NULL);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block63; else goto block64;
block64:;
panda$core$Int64 $tmp395 = (panda$core$Int64) {126};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s396, $tmp395, &$s397);
abort(); // unreachable
block63:;
org$pandalanguage$pandac$ClassDecl* $tmp398 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp392), param1);
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
org$pandalanguage$pandac$ClassDecl* $tmp399 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
*(&local6) = $tmp398;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing REF($585:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp392);
// unreffing REF($575:panda.core.Weak.T)
// line 127
org$pandalanguage$pandac$ClassDecl* $tmp400 = *(&local6);
panda$core$Bit $tmp401 = panda$core$Bit$init$builtin_bit($tmp400 != NULL);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp403 = (panda$core$Int64) {127};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s404, $tmp403);
abort(); // unreachable
block65:;
// line 128
panda$core$Weak** $tmp405 = &param0->compiler;
panda$core$Weak* $tmp406 = *$tmp405;
panda$core$Object* $tmp407 = panda$core$Weak$get$R$panda$core$Weak$T($tmp406);
panda$core$Bit $tmp408 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp407) != NULL);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block69; else goto block70;
block70:;
panda$core$Int64 $tmp410 = (panda$core$Int64) {128};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s411, $tmp410, &$s412);
abort(); // unreachable
block69:;
org$pandalanguage$pandac$ClassDecl* $tmp413 = *(&local6);
panda$core$Bit $tmp414 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp407), $tmp413);
panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp414);
bool $tmp416 = $tmp415.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp407);
// unreffing REF($612:panda.core.Weak.T)
if ($tmp416) goto block67; else goto block68;
block67:;
// line 129
panda$collections$HashSet** $tmp417 = &param0->imports;
panda$collections$HashSet* $tmp418 = *$tmp417;
panda$core$String* $tmp419 = *(&local5);
panda$core$Bit $tmp420 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp418, ((panda$collections$Key*) $tmp419));
panda$core$Bit $tmp421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block71; else goto block72;
block71:;
// line 130
panda$io$MemoryOutputStream** $tmp423 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp424 = *$tmp423;
panda$core$String* $tmp425 = *(&local5);
panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s427, $tmp425);
panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s429);
panda$core$String* $tmp430 = *(&local5);
panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, $tmp430);
panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, &$s433);
$fn435 $tmp434 = ($fn435) ((panda$io$OutputStream*) $tmp424)->$class->vtable[19];
$tmp434(((panda$io$OutputStream*) $tmp424), $tmp432);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($649:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
// unreffing REF($648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($646:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing REF($645:panda.core.String)
// line 131
panda$collections$HashSet** $tmp436 = &param0->imports;
panda$collections$HashSet* $tmp437 = *$tmp436;
panda$core$String* $tmp438 = *(&local5);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp437, ((panda$collections$Key*) $tmp438));
goto block72;
block72:;
// line 133
panda$core$String* $tmp439 = *(&local5);
panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s441);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
// unreffing REF($674:panda.core.String)
org$pandalanguage$pandac$ClassDecl* $tmp442 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
// unreffing cl
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp443 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp444 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp440;
block68:;
// line 135
org$pandalanguage$pandac$ClassDecl* $tmp445 = *(&local6);
panda$core$Bit $tmp446 = panda$core$Bit$init$builtin_bit($tmp445 != NULL);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block73; else goto block74;
block74:;
panda$core$Int64 $tmp448 = (panda$core$Int64) {135};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s449, $tmp448, &$s450);
abort(); // unreachable
block73:;
panda$core$String* $tmp451 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, $tmp445, &$s452);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
panda$core$String* $tmp453 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
*(&local7) = $tmp451;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing REF($706:panda.core.String)
// line 136
panda$collections$HashSet** $tmp454 = &param0->imports;
panda$collections$HashSet* $tmp455 = *$tmp454;
panda$core$String* $tmp456 = *(&local7);
panda$core$Bit $tmp457 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp455, ((panda$collections$Key*) $tmp456));
panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp457);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block75; else goto block76;
block75:;
// line 137
panda$io$MemoryOutputStream** $tmp460 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp461 = *$tmp460;
panda$core$String* $tmp462 = *(&local7);
panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s464, $tmp462);
panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, &$s466);
$fn468 $tmp467 = ($fn468) ((panda$io$OutputStream*) $tmp461)->$class->vtable[19];
$tmp467(((panda$io$OutputStream*) $tmp461), $tmp465);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
// unreffing REF($733:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing REF($732:panda.core.String)
// line 138
panda$collections$HashSet** $tmp469 = &param0->imports;
panda$collections$HashSet* $tmp470 = *$tmp469;
panda$core$String* $tmp471 = *(&local7);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp470, ((panda$collections$Key*) $tmp471));
goto block76;
block76:;
// line 140
panda$core$String* $tmp472 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
panda$core$String* $tmp473 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing includePath
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp474 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing cl
*(&local6) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$String* $tmp475 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp476 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp472;
block60:;
// line 142
org$pandalanguage$pandac$FixedArray** $tmp477 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp478 = *$tmp477;
panda$core$Bit $tmp479 = panda$core$Bit$init$builtin_bit($tmp478 != NULL);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block77; else goto block78;
block78:;
panda$core$Int64 $tmp481 = (panda$core$Int64) {142};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s482, $tmp481, &$s483);
abort(); // unreachable
block77:;
panda$core$Int64 $tmp484 = (panda$core$Int64) {0};
panda$core$Object* $tmp485 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp478, $tmp484);
panda$core$String* $tmp486 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, ((org$pandalanguage$pandac$Type*) $tmp485));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing REF($790:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp485);
// unreffing REF($788:org.pandalanguage.pandac.FixedArray.T)
org$pandalanguage$pandac$ClassDecl* $tmp487 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
// unreffing cl
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp486;
block50:;
panda$core$Int64 $tmp488 = (panda$core$Int64) {12};
panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block79; else goto block80;
block79:;
// line 145
panda$core$Weak** $tmp491 = &param1->genericClassParameter;
panda$core$Weak* $tmp492 = *$tmp491;
panda$core$Object* $tmp493 = panda$core$Weak$get$R$panda$core$Weak$T($tmp492);
panda$core$Bit $tmp494 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp493) != NULL);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block81; else goto block82;
block82:;
panda$core$Int64 $tmp496 = (panda$core$Int64) {145};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s497, $tmp496, &$s498);
abort(); // unreachable
block81:;
org$pandalanguage$pandac$Type** $tmp499 = &((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp493)->bound;
org$pandalanguage$pandac$Type* $tmp500 = *$tmp499;
panda$core$String* $tmp501 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp500);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($825:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp493);
// unreffing REF($813:panda.core.Weak.T)
return $tmp501;
block80:;
panda$core$Int64 $tmp502 = (panda$core$Int64) {13};
panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block83; else goto block84;
block83:;
// line 148
panda$core$Weak** $tmp505 = &param1->genericMethodParameter;
panda$core$Weak* $tmp506 = *$tmp505;
panda$core$Object* $tmp507 = panda$core$Weak$get$R$panda$core$Weak$T($tmp506);
panda$core$Bit $tmp508 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp507) != NULL);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block85; else goto block86;
block86:;
panda$core$Int64 $tmp510 = (panda$core$Int64) {148};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s511, $tmp510, &$s512);
abort(); // unreachable
block85:;
org$pandalanguage$pandac$Type** $tmp513 = &((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp507)->bound;
org$pandalanguage$pandac$Type* $tmp514 = *$tmp513;
panda$core$String* $tmp515 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp514);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing REF($855:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp507);
// unreffing REF($843:panda.core.Weak.T)
return $tmp515;
block84:;
panda$core$Int64 $tmp516 = (panda$core$Int64) {15};
panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block87; else goto block88;
block88:;
panda$core$Int64 $tmp519 = (panda$core$Int64) {16};
panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block87; else goto block89;
block87:;
// line 151
org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp523 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp522);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($875:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($874:org.pandalanguage.pandac.Type)
return $tmp523;
block89:;
panda$core$Int64 $tmp524 = (panda$core$Int64) {17};
panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block90; else goto block91;
block91:;
panda$core$Int64 $tmp527 = (panda$core$Int64) {18};
panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp131, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block90; else goto block92;
block90:;
// line 154
org$pandalanguage$pandac$Type* $tmp530 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp531 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing REF($895:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing REF($894:org.pandalanguage.pandac.Type)
return $tmp531;
block92:;
// line 157
panda$core$Bit $tmp532 = panda$core$Bit$init$builtin_bit(false);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block93; else goto block94;
block94:;
panda$core$Int64 $tmp534 = (panda$core$Int64) {157};
panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s536, ((panda$core$Object*) param1));
panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s538);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s539, $tmp534, $tmp537);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($912:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing REF($911:panda.core.String)
abort(); // unreachable
block93:;
goto block1;
block1:;
panda$core$Bit $tmp540 = panda$core$Bit$init$builtin_bit(false);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block95; else goto block96;
block96:;
panda$core$Int64 $tmp542 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s543, $tmp542, &$s544);
abort(); // unreachable
block95:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Type* param1, panda$core$String* param2) {

// line 163
panda$core$String* $tmp545 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, param1);
panda$core$String* $tmp546 = panda$core$String$convert$R$panda$core$String($tmp545);
panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s548);
panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, param2);
panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s551);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing REF($1:panda.core.String)
return $tmp550;

}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 168
panda$core$Weak* $tmp552 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp552, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
panda$core$Weak** $tmp553 = &param0->compiler;
panda$core$Weak* $tmp554 = *$tmp553;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
panda$core$Weak** $tmp555 = &param0->compiler;
*$tmp555 = $tmp552;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing REF($2:panda.core.Weak<org.pandalanguage.pandac.Compiler?>)
// line 169
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp556 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp557 = *$tmp556;
org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler($tmp557, param1);
return;

}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$core$String* param2) {

// line 173
panda$io$File** $tmp558 = &param0->outDir;
panda$io$File* $tmp559 = *$tmp558;
panda$core$String* $tmp560 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(param0, param1, param2);
panda$io$File* $tmp561 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp559, $tmp560);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing REF($4:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($3:panda.core.String)
return $tmp561;

}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$ClassDecl* param1) {

panda$io$File* local0 = NULL;
panda$io$File* local1 = NULL;
org$pandalanguage$pandac$FieldDecl* local2 = NULL;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
panda$collections$ListView* local4 = NULL;
// line 178
panda$io$MemoryOutputStream** $tmp562 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp563 = *$tmp562;
panda$io$MemoryOutputStream$clear($tmp563);
// line 179
panda$io$MemoryOutputStream** $tmp564 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp565 = *$tmp564;
panda$io$MemoryOutputStream$clear($tmp565);
// line 180
panda$io$MemoryOutputStream** $tmp566 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp567 = *$tmp566;
panda$io$MemoryOutputStream$clear($tmp567);
// line 181
panda$io$MemoryOutputStream** $tmp568 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp569 = *$tmp568;
panda$io$MemoryOutputStream$clear($tmp569);
// line 182
panda$collections$HashSet** $tmp570 = &param0->typeImports;
panda$collections$HashSet* $tmp571 = *$tmp570;
panda$collections$HashSet$clear($tmp571);
// line 183
panda$collections$HashSet** $tmp572 = &param0->bodyImports;
panda$collections$HashSet* $tmp573 = *$tmp572;
panda$collections$HashSet$clear($tmp573);
// line 184
panda$io$File* $tmp574 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s575);
*(&local0) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
panda$io$File* $tmp576 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
*(&local0) = $tmp574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing REF($27:panda.io.File)
// line 185
panda$io$File* $tmp577 = *(&local0);
panda$io$File* $tmp578 = panda$io$File$get_parent$R$panda$io$File$Q($tmp577);
panda$core$Bit $tmp579 = panda$core$Bit$init$builtin_bit($tmp578 != NULL);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp581 = (panda$core$Int64) {185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block1:;
panda$io$File$createDirectories($tmp578);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($40:panda.io.File?)
// line 186
panda$io$IndentedOutputStream* $tmp584 = (panda$io$IndentedOutputStream*) frostObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp585 = *(&local0);
panda$io$OutputStream* $tmp586 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp585);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp584, $tmp586);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
panda$io$IndentedOutputStream** $tmp587 = &param0->out;
panda$io$IndentedOutputStream* $tmp588 = *$tmp587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
panda$io$IndentedOutputStream** $tmp589 = &param0->out;
*$tmp589 = $tmp584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($56:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($54:panda.io.IndentedOutputStream)
// line 187
panda$io$File* $tmp590 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(param0, param1, &$s591);
*(&local1) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
panda$io$File* $tmp592 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
*(&local1) = $tmp590;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
// unreffing REF($73:panda.io.File)
// line 188
panda$io$IndentedOutputStream* $tmp593 = (panda$io$IndentedOutputStream*) frostObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
panda$io$File* $tmp594 = *(&local1);
panda$io$OutputStream* $tmp595 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp594);
panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp593, $tmp595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
panda$io$IndentedOutputStream** $tmp596 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp597 = *$tmp596;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$io$IndentedOutputStream** $tmp598 = &param0->typesOut;
*$tmp598 = $tmp593;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
// unreffing REF($87:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
// unreffing REF($85:panda.io.IndentedOutputStream)
// line 189
panda$io$IndentedOutputStream** $tmp599 = &param0->out;
panda$io$IndentedOutputStream* $tmp600 = *$tmp599;
$fn602 $tmp601 = ($fn602) ((panda$io$OutputStream*) $tmp600)->$class->vtable[19];
$tmp601(((panda$io$OutputStream*) $tmp600), &$s603);
// line 190
panda$io$IndentedOutputStream** $tmp604 = &param0->out;
panda$io$IndentedOutputStream* $tmp605 = *$tmp604;
$fn607 $tmp606 = ($fn607) ((panda$io$OutputStream*) $tmp605)->$class->vtable[19];
$tmp606(((panda$io$OutputStream*) $tmp605), &$s608);
// line 191
panda$io$IndentedOutputStream** $tmp609 = &param0->out;
panda$io$IndentedOutputStream* $tmp610 = *$tmp609;
panda$io$File* $tmp611 = *(&local1);
panda$core$String* $tmp612 = panda$io$File$get_name$R$panda$core$String($tmp611);
panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s614, $tmp612);
panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s616);
$fn618 $tmp617 = ($fn618) ((panda$io$OutputStream*) $tmp610)->$class->vtable[19];
$tmp617(((panda$io$OutputStream*) $tmp610), $tmp615);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing REF($120:panda.core.String)
// line 192
panda$io$IndentedOutputStream** $tmp619 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp620 = *$tmp619;
$fn622 $tmp621 = ($fn622) ((panda$io$OutputStream*) $tmp620)->$class->vtable[19];
$tmp621(((panda$io$OutputStream*) $tmp620), &$s623);
// line 193
panda$io$IndentedOutputStream** $tmp624 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp625 = *$tmp624;
$fn627 $tmp626 = ($fn627) ((panda$io$OutputStream*) $tmp625)->$class->vtable[19];
$tmp626(((panda$io$OutputStream*) $tmp625), &$s628);
// line 194
panda$io$MemoryOutputStream** $tmp629 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp630 = *$tmp629;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
panda$io$MemoryOutputStream** $tmp631 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp632 = *$tmp631;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$io$MemoryOutputStream** $tmp633 = &param0->importStream;
*$tmp633 = $tmp630;
// line 195
panda$collections$HashSet** $tmp634 = &param0->typeImports;
panda$collections$HashSet* $tmp635 = *$tmp634;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$collections$HashSet** $tmp636 = &param0->imports;
panda$collections$HashSet* $tmp637 = *$tmp636;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
panda$collections$HashSet** $tmp638 = &param0->imports;
*$tmp638 = $tmp635;
// line 196
panda$io$IndentedOutputStream** $tmp639 = &param0->types;
panda$io$IndentedOutputStream* $tmp640 = *$tmp639;
panda$core$String** $tmp641 = &param1->name;
panda$core$String* $tmp642 = *$tmp641;
panda$core$String* $tmp643 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp642);
panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s645, $tmp643);
panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s647);
$fn649 $tmp648 = ($fn649) ((panda$io$OutputStream*) $tmp640)->$class->vtable[19];
$tmp648(((panda$io$OutputStream*) $tmp640), $tmp646);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
// unreffing REF($174:panda.core.String)
// line 197
panda$io$IndentedOutputStream** $tmp650 = &param0->types;
panda$io$IndentedOutputStream* $tmp651 = *$tmp650;
panda$core$Int64* $tmp652 = &$tmp651->level;
panda$core$Int64 $tmp653 = *$tmp652;
panda$core$Int64 $tmp654 = (panda$core$Int64) {1};
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655 + $tmp656;
panda$core$Int64 $tmp658 = (panda$core$Int64) {$tmp657};
panda$core$Int64* $tmp659 = &$tmp651->level;
*$tmp659 = $tmp658;
// line 198
panda$core$Weak** $tmp660 = &param0->compiler;
panda$core$Weak* $tmp661 = *$tmp660;
panda$core$Object* $tmp662 = panda$core$Weak$get$R$panda$core$Weak$T($tmp661);
panda$core$Bit $tmp663 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp662) != NULL);
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp665 = (panda$core$Int64) {198};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s666, $tmp665, &$s667);
abort(); // unreachable
block3:;
panda$collections$ListView* $tmp668 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp662), param1);
ITable* $tmp669 = ((panda$collections$Iterable*) $tmp668)->$class->itable;
while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp669 = $tmp669->next;
}
$fn671 $tmp670 = $tmp669->methods[0];
panda$collections$Iterator* $tmp672 = $tmp670(((panda$collections$Iterable*) $tmp668));
goto block5;
block5:;
ITable* $tmp673 = $tmp672->$class->itable;
while ($tmp673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp673 = $tmp673->next;
}
$fn675 $tmp674 = $tmp673->methods[0];
panda$core$Bit $tmp676 = $tmp674($tmp672);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block7; else goto block6;
block6:;
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
ITable* $tmp678 = $tmp672->$class->itable;
while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp678 = $tmp678->next;
}
$fn680 $tmp679 = $tmp678->methods[1];
panda$core$Object* $tmp681 = $tmp679($tmp672);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp681)));
org$pandalanguage$pandac$FieldDecl* $tmp682 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) $tmp681);
// line 199
panda$core$Weak** $tmp683 = &param0->compiler;
panda$core$Weak* $tmp684 = *$tmp683;
panda$core$Object* $tmp685 = panda$core$Weak$get$R$panda$core$Weak$T($tmp684);
panda$core$Bit $tmp686 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp685) != NULL);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp688 = (panda$core$Int64) {199};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s689, $tmp688, &$s690);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$FieldDecl* $tmp691 = *(&local2);
panda$core$Bit $tmp692 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp685), $tmp691);
panda$core$Panda$unref$panda$core$Object$Q($tmp685);
// unreffing REF($241:panda.core.Weak.T)
// line 200
org$pandalanguage$pandac$FieldDecl* $tmp693 = *(&local2);
org$pandalanguage$pandac$Type** $tmp694 = &$tmp693->type;
org$pandalanguage$pandac$Type* $tmp695 = *$tmp694;
org$pandalanguage$pandac$Type* $tmp696 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp697 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp695, $tmp696);
bool $tmp698 = $tmp697.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// unreffing REF($260:org.pandalanguage.pandac.Type)
if ($tmp698) goto block10; else goto block12;
block10:;
// line 201
panda$io$IndentedOutputStream** $tmp699 = &param0->types;
panda$io$IndentedOutputStream* $tmp700 = *$tmp699;
org$pandalanguage$pandac$FieldDecl* $tmp701 = *(&local2);
panda$core$String** $tmp702 = &((org$pandalanguage$pandac$Symbol*) $tmp701)->name;
panda$core$String* $tmp703 = *$tmp702;
panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s705, $tmp703);
panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp704, &$s707);
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp708 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp709 = *$tmp708;
panda$core$Int64 $tmp710 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64($tmp709, param1);
panda$core$Int64$wrapper* $tmp711;
$tmp711 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp711->value = $tmp710;
panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp706, ((panda$core$Object*) $tmp711));
panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s714);
$fn716 $tmp715 = ($fn716) ((panda$io$OutputStream*) $tmp700)->$class->vtable[19];
$tmp715(((panda$io$OutputStream*) $tmp700), $tmp713);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing REF($282:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing REF($281:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing REF($280:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
// unreffing REF($276:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing REF($275:panda.core.String)
goto block11;
block12:;
// line 1
// line 204
panda$io$IndentedOutputStream** $tmp717 = &param0->types;
panda$io$IndentedOutputStream* $tmp718 = *$tmp717;
org$pandalanguage$pandac$FieldDecl* $tmp719 = *(&local2);
org$pandalanguage$pandac$Type** $tmp720 = &$tmp719->type;
org$pandalanguage$pandac$Type* $tmp721 = *$tmp720;
panda$core$String* $tmp722 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp721);
panda$core$String* $tmp723 = panda$core$String$convert$R$panda$core$String($tmp722);
panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp723, &$s725);
org$pandalanguage$pandac$FieldDecl* $tmp726 = *(&local2);
panda$core$String** $tmp727 = &((org$pandalanguage$pandac$Symbol*) $tmp726)->name;
panda$core$String* $tmp728 = *$tmp727;
panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp724, $tmp728);
panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s731);
$fn733 $tmp732 = ($fn733) ((panda$io$OutputStream*) $tmp718)->$class->vtable[19];
$tmp732(((panda$io$OutputStream*) $tmp718), $tmp730);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing REF($317:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp729));
// unreffing REF($316:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// unreffing REF($311:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($310:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing REF($309:panda.core.String)
goto block11;
block11:;
panda$core$Panda$unref$panda$core$Object$Q($tmp681);
// unreffing REF($229:panda.collections.Iterator.T)
org$pandalanguage$pandac$FieldDecl* $tmp734 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing f
*(&local2) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing REF($218:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
// unreffing REF($214:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp662);
// unreffing REF($204:panda.core.Weak.T)
// line 207
panda$core$String** $tmp735 = &param1->name;
panda$core$String* $tmp736 = *$tmp735;
panda$core$Bit $tmp737 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp736, &$s738);
bool $tmp739 = $tmp737.value;
if ($tmp739) goto block13; else goto block14;
block13:;
// line 208
panda$io$IndentedOutputStream** $tmp740 = &param0->types;
panda$io$IndentedOutputStream* $tmp741 = *$tmp740;
$fn743 $tmp742 = ($fn743) ((panda$io$OutputStream*) $tmp741)->$class->vtable[19];
$tmp742(((panda$io$OutputStream*) $tmp741), &$s744);
// line 209
panda$io$IndentedOutputStream** $tmp745 = &param0->types;
panda$io$IndentedOutputStream* $tmp746 = *$tmp745;
$fn748 $tmp747 = ($fn748) ((panda$io$OutputStream*) $tmp746)->$class->vtable[19];
$tmp747(((panda$io$OutputStream*) $tmp746), &$s749);
goto block14;
block14:;
// line 211
panda$io$IndentedOutputStream** $tmp750 = &param0->types;
panda$io$IndentedOutputStream* $tmp751 = *$tmp750;
panda$core$Int64* $tmp752 = &$tmp751->level;
panda$core$Int64 $tmp753 = *$tmp752;
panda$core$Int64 $tmp754 = (panda$core$Int64) {1};
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754.value;
int64_t $tmp757 = $tmp755 - $tmp756;
panda$core$Int64 $tmp758 = (panda$core$Int64) {$tmp757};
panda$core$Int64* $tmp759 = &$tmp751->level;
*$tmp759 = $tmp758;
// line 212
panda$io$IndentedOutputStream** $tmp760 = &param0->types;
panda$io$IndentedOutputStream* $tmp761 = *$tmp760;
panda$core$String** $tmp762 = &param1->name;
panda$core$String* $tmp763 = *$tmp762;
panda$core$String* $tmp764 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp763);
panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s766, $tmp764);
panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s768);
$fn770 $tmp769 = ($fn770) ((panda$io$OutputStream*) $tmp761)->$class->vtable[19];
$tmp769(((panda$io$OutputStream*) $tmp761), $tmp767);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing REF($393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($392:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing REF($391:panda.core.String)
// line 213
panda$io$IndentedOutputStream** $tmp771 = &param0->types;
panda$io$IndentedOutputStream* $tmp772 = *$tmp771;
$fn774 $tmp773 = ($fn774) ((panda$io$OutputStream*) $tmp772)->$class->vtable[19];
$tmp773(((panda$io$OutputStream*) $tmp772), &$s775);
// line 214
panda$io$IndentedOutputStream** $tmp776 = &param0->types;
panda$io$IndentedOutputStream* $tmp777 = *$tmp776;
org$pandalanguage$pandac$Type* $tmp778 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp779 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp778);
panda$core$String* $tmp780 = panda$core$String$convert$R$panda$core$String($tmp779);
panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s782);
org$pandalanguage$pandac$Type* $tmp783 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$String* $tmp784 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp783);
panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, $tmp784);
panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s787);
panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s789, $tmp786);
panda$core$Weak** $tmp790 = &param0->compiler;
panda$core$Weak* $tmp791 = *$tmp790;
panda$core$Object* $tmp792 = panda$core$Weak$get$R$panda$core$Weak$T($tmp791);
panda$core$Bit $tmp793 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp792) != NULL);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp795 = (panda$core$Int64) {216};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s796, $tmp795, &$s797);
abort(); // unreachable
block15:;
panda$collections$ListView* $tmp798 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp792), param1);
ITable* $tmp799 = ((panda$collections$CollectionView*) $tmp798)->$class->itable;
while ($tmp799->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp799 = $tmp799->next;
}
$fn801 $tmp800 = $tmp799->methods[0];
panda$core$Int64 $tmp802 = $tmp800(((panda$collections$CollectionView*) $tmp798));
panda$core$Int64$wrapper* $tmp803;
$tmp803 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp803->value = $tmp802;
panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s805, ((panda$core$Object*) $tmp803));
panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp804, &$s807);
panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, $tmp806);
panda$core$String** $tmp809 = &param1->name;
panda$core$String* $tmp810 = *$tmp809;
panda$core$String* $tmp811 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp810);
panda$core$String* $tmp812 = panda$core$String$convert$R$panda$core$String($tmp811);
panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, &$s814);
panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, $tmp813);
$fn817 $tmp816 = ($fn817) ((panda$io$OutputStream*) $tmp777)->$class->vtable[19];
$tmp816(((panda$io$OutputStream*) $tmp777), $tmp815);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
// unreffing REF($450:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing REF($449:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($448:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing REF($447:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
// unreffing REF($444:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
// unreffing REF($443:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing REF($442:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing REF($441:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
// unreffing REF($437:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp792);
// unreffing REF($427:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($423:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($422:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing REF($421:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing REF($420:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
// unreffing REF($419:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing REF($418:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
// unreffing REF($417:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
// unreffing REF($416:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing REF($415:org.pandalanguage.pandac.Type)
// line 218
panda$io$IndentedOutputStream** $tmp818 = &param0->types;
panda$io$IndentedOutputStream* $tmp819 = *$tmp818;
panda$core$String** $tmp820 = &param1->name;
panda$core$String* $tmp821 = *$tmp820;
panda$core$String* $tmp822 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp821);
panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s824, $tmp822);
panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp823, &$s826);
panda$core$String** $tmp827 = &param1->name;
panda$core$String* $tmp828 = *$tmp827;
panda$core$String* $tmp829 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp828);
panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, $tmp829);
panda$core$String* $tmp831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, &$s832);
$fn834 $tmp833 = ($fn834) ((panda$io$OutputStream*) $tmp819)->$class->vtable[19];
$tmp833(((panda$io$OutputStream*) $tmp819), $tmp831);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
// unreffing REF($523:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
// unreffing REF($522:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
// unreffing REF($521:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing REF($518:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing REF($517:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
// unreffing REF($516:panda.core.String)
// line 219
panda$core$Weak** $tmp835 = &param0->compiler;
panda$core$Weak* $tmp836 = *$tmp835;
panda$core$Object* $tmp837 = panda$core$Weak$get$R$panda$core$Weak$T($tmp836);
panda$core$Bit $tmp838 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp837) != NULL);
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp840 = (panda$core$Int64) {219};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s841, $tmp840, &$s842);
abort(); // unreachable
block19:;
panda$core$Bit $tmp843 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp837), param1);
bool $tmp844 = $tmp843.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp837);
// unreffing REF($548:panda.core.Weak.T)
if ($tmp844) goto block17; else goto block18;
block17:;
// line 220
panda$io$IndentedOutputStream** $tmp845 = &param0->types;
panda$io$IndentedOutputStream* $tmp846 = *$tmp845;
panda$core$String** $tmp847 = &param1->name;
panda$core$String* $tmp848 = *$tmp847;
panda$core$String* $tmp849 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp848);
panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, $tmp849);
panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, &$s853);
$fn855 $tmp854 = ($fn855) ((panda$io$OutputStream*) $tmp846)->$class->vtable[19];
$tmp854(((panda$io$OutputStream*) $tmp846), $tmp852);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
// unreffing REF($573:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// unreffing REF($572:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
// unreffing REF($571:panda.core.String)
// line 221
panda$io$IndentedOutputStream** $tmp856 = &param0->types;
panda$io$IndentedOutputStream* $tmp857 = *$tmp856;
panda$core$Int64* $tmp858 = &$tmp857->level;
panda$core$Int64 $tmp859 = *$tmp858;
panda$core$Int64 $tmp860 = (panda$core$Int64) {1};
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860.value;
int64_t $tmp863 = $tmp861 + $tmp862;
panda$core$Int64 $tmp864 = (panda$core$Int64) {$tmp863};
panda$core$Int64* $tmp865 = &$tmp857->level;
*$tmp865 = $tmp864;
// line 222
panda$io$IndentedOutputStream** $tmp866 = &param0->types;
panda$io$IndentedOutputStream* $tmp867 = *$tmp866;
$fn869 $tmp868 = ($fn869) ((panda$io$OutputStream*) $tmp867)->$class->vtable[19];
$tmp868(((panda$io$OutputStream*) $tmp867), &$s870);
// line 223
panda$io$IndentedOutputStream** $tmp871 = &param0->types;
panda$io$IndentedOutputStream* $tmp872 = *$tmp871;
$fn874 $tmp873 = ($fn874) ((panda$io$OutputStream*) $tmp872)->$class->vtable[19];
$tmp873(((panda$io$OutputStream*) $tmp872), &$s875);
// line 224
panda$io$IndentedOutputStream** $tmp876 = &param0->types;
panda$io$IndentedOutputStream* $tmp877 = *$tmp876;
org$pandalanguage$pandac$Type** $tmp878 = &param1->type;
org$pandalanguage$pandac$Type* $tmp879 = *$tmp878;
panda$core$String* $tmp880 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp879);
panda$core$String* $tmp881 = panda$core$String$convert$R$panda$core$String($tmp880);
panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp881, &$s883);
$fn885 $tmp884 = ($fn885) ((panda$io$OutputStream*) $tmp877)->$class->vtable[19];
$tmp884(((panda$io$OutputStream*) $tmp877), $tmp882);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// unreffing REF($617:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing REF($616:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing REF($615:panda.core.String)
// line 225
panda$io$IndentedOutputStream** $tmp886 = &param0->types;
panda$io$IndentedOutputStream* $tmp887 = *$tmp886;
panda$core$Int64* $tmp888 = &$tmp887->level;
panda$core$Int64 $tmp889 = *$tmp888;
panda$core$Int64 $tmp890 = (panda$core$Int64) {1};
int64_t $tmp891 = $tmp889.value;
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891 - $tmp892;
panda$core$Int64 $tmp894 = (panda$core$Int64) {$tmp893};
panda$core$Int64* $tmp895 = &$tmp887->level;
*$tmp895 = $tmp894;
// line 226
panda$io$IndentedOutputStream** $tmp896 = &param0->types;
panda$io$IndentedOutputStream* $tmp897 = *$tmp896;
panda$core$String** $tmp898 = &param1->name;
panda$core$String* $tmp899 = *$tmp898;
panda$core$String* $tmp900 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp899);
panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s902, $tmp900);
panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp901, &$s904);
$fn906 $tmp905 = ($fn906) ((panda$io$OutputStream*) $tmp897)->$class->vtable[19];
$tmp905(((panda$io$OutputStream*) $tmp897), $tmp903);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing REF($649:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing REF($648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing REF($647:panda.core.String)
// line 227
panda$io$IndentedOutputStream** $tmp907 = &param0->types;
panda$io$IndentedOutputStream* $tmp908 = *$tmp907;
panda$core$String** $tmp909 = &param1->name;
panda$core$String* $tmp910 = *$tmp909;
panda$core$String* $tmp911 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp910);
panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s913, $tmp911);
panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, &$s915);
$fn917 $tmp916 = ($fn917) ((panda$io$OutputStream*) $tmp908)->$class->vtable[19];
$tmp916(((panda$io$OutputStream*) $tmp908), $tmp914);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing REF($669:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
// unreffing REF($668:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
// unreffing REF($667:panda.core.String)
// line 228
panda$io$IndentedOutputStream** $tmp918 = &param0->types;
panda$io$IndentedOutputStream* $tmp919 = *$tmp918;
panda$core$Int64* $tmp920 = &$tmp919->level;
panda$core$Int64 $tmp921 = *$tmp920;
panda$core$Int64 $tmp922 = (panda$core$Int64) {1};
int64_t $tmp923 = $tmp921.value;
int64_t $tmp924 = $tmp922.value;
int64_t $tmp925 = $tmp923 + $tmp924;
panda$core$Int64 $tmp926 = (panda$core$Int64) {$tmp925};
panda$core$Int64* $tmp927 = &$tmp919->level;
*$tmp927 = $tmp926;
// line 229
panda$io$IndentedOutputStream** $tmp928 = &param0->types;
panda$io$IndentedOutputStream* $tmp929 = *$tmp928;
panda$core$String** $tmp930 = &param1->name;
panda$core$String* $tmp931 = *$tmp930;
panda$core$String* $tmp932 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp931);
panda$core$String* $tmp933 = panda$core$String$convert$R$panda$core$String($tmp932);
panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, &$s935);
$fn937 $tmp936 = ($fn937) ((panda$io$OutputStream*) $tmp929)->$class->vtable[19];
$tmp936(((panda$io$OutputStream*) $tmp929), $tmp934);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing REF($701:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing REF($700:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($699:panda.core.String)
// line 230
panda$io$IndentedOutputStream** $tmp938 = &param0->types;
panda$io$IndentedOutputStream* $tmp939 = *$tmp938;
$fn941 $tmp940 = ($fn941) ((panda$io$OutputStream*) $tmp939)->$class->vtable[19];
$tmp940(((panda$io$OutputStream*) $tmp939), &$s942);
// line 231
panda$io$IndentedOutputStream** $tmp943 = &param0->types;
panda$io$IndentedOutputStream* $tmp944 = *$tmp943;
panda$core$Int64* $tmp945 = &$tmp944->level;
panda$core$Int64 $tmp946 = *$tmp945;
panda$core$Int64 $tmp947 = (panda$core$Int64) {1};
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947.value;
int64_t $tmp950 = $tmp948 - $tmp949;
panda$core$Int64 $tmp951 = (panda$core$Int64) {$tmp950};
panda$core$Int64* $tmp952 = &$tmp944->level;
*$tmp952 = $tmp951;
// line 232
panda$io$IndentedOutputStream** $tmp953 = &param0->types;
panda$io$IndentedOutputStream* $tmp954 = *$tmp953;
panda$core$String** $tmp955 = &param1->name;
panda$core$String* $tmp956 = *$tmp955;
panda$core$String* $tmp957 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp956);
panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s959, $tmp957);
panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s961);
$fn963 $tmp962 = ($fn963) ((panda$io$OutputStream*) $tmp954)->$class->vtable[19];
$tmp962(((panda$io$OutputStream*) $tmp954), $tmp960);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// unreffing REF($739:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
// unreffing REF($738:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
// unreffing REF($737:panda.core.String)
// line 233
panda$core$Weak** $tmp964 = &param0->compiler;
panda$core$Weak* $tmp965 = *$tmp964;
panda$core$Object* $tmp966 = panda$core$Weak$get$R$panda$core$Weak$T($tmp965);
panda$core$Bit $tmp967 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp966) != NULL);
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp969 = (panda$core$Int64) {233};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s970, $tmp969, &$s971);
abort(); // unreachable
block21:;
org$pandalanguage$pandac$Type* $tmp972 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp973 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp966), $tmp972);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
org$pandalanguage$pandac$ClassDecl* $tmp974 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
*(&local3) = $tmp973;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
// unreffing REF($766:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
// unreffing REF($765:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp966);
// unreffing REF($755:panda.core.Weak.T)
// line 234
panda$core$Weak** $tmp975 = &param0->compiler;
panda$core$Weak* $tmp976 = *$tmp975;
panda$core$Object* $tmp977 = panda$core$Weak$get$R$panda$core$Weak$T($tmp976);
panda$core$Bit $tmp978 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp977) != NULL);
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp980 = (panda$core$Int64) {234};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s981, $tmp980, &$s982);
abort(); // unreachable
block23:;
org$pandalanguage$pandac$ClassDecl* $tmp983 = *(&local3);
panda$core$Bit $tmp984 = panda$core$Bit$init$builtin_bit($tmp983 != NULL);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp986 = (panda$core$Int64) {234};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s987, $tmp986, &$s988);
abort(); // unreachable
block25:;
panda$collections$ListView* $tmp989 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp977), $tmp983);
*(&local4) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
panda$collections$ListView* $tmp990 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
*(&local4) = $tmp989;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing REF($806:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp977);
// unreffing REF($787:panda.core.Weak.T)
// line 235
panda$io$IndentedOutputStream** $tmp991 = &param0->types;
panda$io$IndentedOutputStream* $tmp992 = *$tmp991;
panda$collections$ListView* $tmp993 = *(&local4);
ITable* $tmp994 = ((panda$collections$CollectionView*) $tmp993)->$class->itable;
while ($tmp994->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp994 = $tmp994->next;
}
$fn996 $tmp995 = $tmp994->methods[0];
panda$core$Int64 $tmp997 = $tmp995(((panda$collections$CollectionView*) $tmp993));
panda$core$Int64$wrapper* $tmp998;
$tmp998 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp998->value = $tmp997;
panda$core$String* $tmp999 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1000, ((panda$core$Object*) $tmp998));
panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1002);
panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1004, $tmp1001);
panda$core$String** $tmp1005 = &param1->name;
panda$core$String* $tmp1006 = *$tmp1005;
panda$core$String* $tmp1007 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1006);
panda$core$String* $tmp1008 = panda$core$String$convert$R$panda$core$String($tmp1007);
panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1008, &$s1010);
panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1003, $tmp1009);
$fn1013 $tmp1012 = ($fn1013) ((panda$io$OutputStream*) $tmp992)->$class->vtable[19];
$tmp1012(((panda$io$OutputStream*) $tmp992), $tmp1011);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
// unreffing REF($837:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
// unreffing REF($836:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// unreffing REF($835:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing REF($834:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
// unreffing REF($831:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing REF($830:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing REF($829:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing REF($828:panda.core.Object)
// line 239
panda$io$IndentedOutputStream** $tmp1014 = &param0->types;
panda$io$IndentedOutputStream* $tmp1015 = *$tmp1014;
panda$core$String** $tmp1016 = &param1->name;
panda$core$String* $tmp1017 = *$tmp1016;
panda$core$String* $tmp1018 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1017);
panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1020, $tmp1018);
panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1019, &$s1022);
panda$core$String** $tmp1023 = &param1->name;
panda$core$String* $tmp1024 = *$tmp1023;
panda$core$String* $tmp1025 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1024);
panda$core$String* $tmp1026 = panda$core$String$convert$R$panda$core$String($tmp1025);
panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1028);
panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1021, $tmp1027);
$fn1031 $tmp1030 = ($fn1031) ((panda$io$OutputStream*) $tmp1015)->$class->vtable[19];
$tmp1030(((panda$io$OutputStream*) $tmp1015), $tmp1029);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
// unreffing REF($878:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing REF($877:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing REF($876:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// unreffing REF($875:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
// unreffing REF($872:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing REF($871:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($870:panda.core.String)
panda$collections$ListView* $tmp1032 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
// unreffing valueVTable
*(&local4) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1033 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
// unreffing value
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block18;
block18:;
panda$io$File* $tmp1034 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing typesPath
*(&local1) = ((panda$io$File*) NULL);
panda$io$File* $tmp1035 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
// unreffing path
*(&local0) = ((panda$io$File*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
// line 245
panda$core$Weak** $tmp1036 = &param1->owner;
panda$core$Weak* $tmp1037 = *$tmp1036;
panda$core$Object* $tmp1038 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1037);
org$pandalanguage$pandac$Type** $tmp1039 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1038)->type;
org$pandalanguage$pandac$Type* $tmp1040 = *$tmp1039;
panda$core$String* $tmp1041 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1040);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
panda$core$String* $tmp1042 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
*(&local0) = $tmp1041;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1038);
// unreffing REF($4:panda.core.Weak.T)
// line 246
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1043 = &param1->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp1044 = *$tmp1043;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1045;
$tmp1045 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1045->value = $tmp1044;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1047 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1046);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1048;
$tmp1048 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
ITable* $tmp1049 = ((panda$core$Equatable*) $tmp1045)->$class->itable;
while ($tmp1049->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[0];
panda$core$Bit $tmp1052 = $tmp1050(((panda$core$Equatable*) $tmp1045), ((panda$core$Equatable*) $tmp1048));
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block3; else goto block4;
block3:;
panda$core$String* $tmp1054 = *(&local0);
panda$core$Bit $tmp1055 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1054, &$s1056);
panda$core$Bit $tmp1057 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1055);
*(&local1) = $tmp1057;
goto block5;
block4:;
*(&local1) = $tmp1052;
goto block5;
block5:;
panda$core$Bit $tmp1058 = *(&local1);
bool $tmp1059 = $tmp1058.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1048)));
// unreffing REF($29:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1045)));
// unreffing REF($25:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1059) goto block1; else goto block2;
block1:;
// line 247
panda$core$String* $tmp1060 = *(&local0);
panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1060, &$s1062);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing REF($52:panda.core.String)
panda$core$String* $tmp1063 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp1061;
block2:;
// line 249
panda$core$String* $tmp1064 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
panda$core$String* $tmp1065 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
// unreffing result
*(&local0) = ((panda$core$String*) NULL);
return $tmp1064;

}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
// line 269
org$pandalanguage$pandac$Type** $tmp1066 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1067 = *$tmp1066;
panda$core$Bit $tmp1068 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1067);
panda$core$Bit $tmp1069 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1068);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block1; else goto block2;
block1:;
// line 270
panda$core$Bit $tmp1071 = panda$core$Bit$init$builtin_bit(false);
return $tmp1071;
block2:;
// line 272
org$pandalanguage$pandac$Annotations** $tmp1072 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1073 = *$tmp1072;
panda$core$Bit $tmp1074 = org$pandalanguage$pandac$Annotations$get_isExternal$R$panda$core$Bit($tmp1073);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$Type** $tmp1076 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1077 = *$tmp1076;
panda$core$Bit $tmp1078 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1077);
*(&local1) = $tmp1078;
goto block5;
block4:;
*(&local1) = $tmp1074;
goto block5;
block5:;
panda$core$Bit $tmp1079 = *(&local1);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block6; else goto block7;
block6:;
panda$core$Weak** $tmp1081 = &param0->compiler;
panda$core$Weak* $tmp1082 = *$tmp1081;
panda$core$Object* $tmp1083 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1082);
panda$core$Bit $tmp1084 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp1083) != NULL);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1086 = (panda$core$Int64) {273};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1087, $tmp1086, &$s1088);
abort(); // unreachable
block9:;
panda$core$Weak** $tmp1089 = &param0->compiler;
panda$core$Weak* $tmp1090 = *$tmp1089;
panda$core$Object* $tmp1091 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1090);
panda$core$Bit $tmp1092 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp1091) != NULL);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1094 = (panda$core$Int64) {273};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1095, $tmp1094, &$s1096);
abort(); // unreachable
block11:;
org$pandalanguage$pandac$Type** $tmp1097 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1098 = *$tmp1097;
org$pandalanguage$pandac$ClassDecl* $tmp1099 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1091), $tmp1098);
panda$core$Bit $tmp1100 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1083), $tmp1099);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing REF($54:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1091);
// unreffing REF($42:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1083);
// unreffing REF($29:panda.core.Weak.T)
*(&local0) = $tmp1100;
goto block8;
block7:;
*(&local0) = $tmp1079;
goto block8;
block8:;
panda$core$Bit $tmp1101 = *(&local0);
*(&local2) = $tmp1101;
// line 278
panda$core$Bit $tmp1102 = *(&local2);
panda$core$Bit $tmp1103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1102);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block13; else goto block14;
block13:;
*(&local3) = $tmp1103;
goto block15;
block14:;
org$pandalanguage$pandac$Annotations** $tmp1105 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1106 = *$tmp1105;
panda$core$Bit $tmp1107 = org$pandalanguage$pandac$Annotations$get_isOverride$R$panda$core$Bit($tmp1106);
panda$core$Bit $tmp1108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1107);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Annotations** $tmp1110 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1111 = *$tmp1110;
panda$core$Bit $tmp1112 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1111);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block19; else goto block20;
block19:;
*(&local5) = $tmp1112;
goto block21;
block20:;
org$pandalanguage$pandac$Annotations** $tmp1114 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1115 = *$tmp1114;
panda$core$Bit $tmp1116 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1115);
*(&local5) = $tmp1116;
goto block21;
block21:;
panda$core$Bit $tmp1117 = *(&local5);
*(&local4) = $tmp1117;
goto block18;
block17:;
*(&local4) = $tmp1108;
goto block18;
block18:;
panda$core$Bit $tmp1118 = *(&local4);
*(&local3) = $tmp1118;
goto block15;
block15:;
panda$core$Bit $tmp1119 = *(&local3);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1121 = (panda$core$Int64) {278};
panda$core$String* $tmp1122 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param1);
panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1124, $tmp1122);
panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1123, &$s1126);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1127, $tmp1121, $tmp1125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
// unreffing REF($110:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
// unreffing REF($109:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// unreffing REF($108:panda.core.String)
abort(); // unreachable
block22:;
// line 280
panda$core$Bit $tmp1128 = *(&local2);
return $tmp1128;

}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$String* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
panda$core$String* local3 = NULL;
// line 285
panda$io$MemoryOutputStream** $tmp1129 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1130 = *$tmp1129;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
panda$io$MemoryOutputStream** $tmp1131 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp1132 = *$tmp1131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
panda$io$MemoryOutputStream** $tmp1133 = &param0->importStream;
*$tmp1133 = $tmp1130;
// line 286
panda$collections$HashSet** $tmp1134 = &param0->bodyImports;
panda$collections$HashSet* $tmp1135 = *$tmp1134;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
panda$collections$HashSet** $tmp1136 = &param0->imports;
panda$collections$HashSet* $tmp1137 = *$tmp1136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
panda$collections$HashSet** $tmp1138 = &param0->imports;
*$tmp1138 = $tmp1135;
// line 287
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1139));
panda$core$String* $tmp1140 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
*(&local0) = &$s1141;
// line 288
panda$core$Bit $tmp1142 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, param1);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block1; else goto block3;
block1:;
// line 289
panda$io$IndentedOutputStream** $tmp1144 = &param0->body;
panda$io$IndentedOutputStream* $tmp1145 = *$tmp1144;
panda$core$String* $tmp1146 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1148, $tmp1146);
panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, &$s1150);
org$pandalanguage$pandac$Type** $tmp1151 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1152 = *$tmp1151;
panda$core$String* $tmp1153 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1152);
panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, $tmp1153);
panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, &$s1156);
$fn1158 $tmp1157 = ($fn1158) ((panda$io$OutputStream*) $tmp1145)->$class->vtable[17];
$tmp1157(((panda$io$OutputStream*) $tmp1145), $tmp1155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
// unreffing REF($38:panda.core.String)
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1159));
panda$core$String* $tmp1160 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
*(&local0) = &$s1161;
goto block2;
block3:;
// line 1
// line 293
panda$io$IndentedOutputStream** $tmp1162 = &param0->body;
panda$io$IndentedOutputStream* $tmp1163 = *$tmp1162;
org$pandalanguage$pandac$Type** $tmp1164 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp1165 = *$tmp1164;
panda$core$String* $tmp1166 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(param0, $tmp1165);
panda$core$String* $tmp1167 = panda$core$String$convert$R$panda$core$String($tmp1166);
panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1167, &$s1169);
panda$core$String* $tmp1170 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, $tmp1170);
panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, &$s1173);
$fn1175 $tmp1174 = ($fn1175) ((panda$io$OutputStream*) $tmp1163)->$class->vtable[17];
$tmp1174(((panda$io$OutputStream*) $tmp1163), $tmp1172);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing REF($85:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing REF($81:panda.core.String)
goto block2;
block2:;
// line 295
org$pandalanguage$pandac$Annotations** $tmp1176 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1177 = *$tmp1176;
panda$core$Bit $tmp1178 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1177);
panda$core$Bit $tmp1179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block6; else goto block7;
block6:;
panda$core$Weak** $tmp1181 = &param0->compiler;
panda$core$Weak* $tmp1182 = *$tmp1181;
panda$core$Object* $tmp1183 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1182);
panda$core$Bit $tmp1184 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$Compiler*) $tmp1183) != NULL);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1186 = (panda$core$Int64) {295};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1187, $tmp1186, &$s1188);
abort(); // unreachable
block9:;
panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Compiler$isValueInit$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1183), param1);
panda$core$Bit $tmp1190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1189);
panda$core$Panda$unref$panda$core$Object$Q($tmp1183);
// unreffing REF($118:panda.core.Weak.T)
*(&local1) = $tmp1190;
goto block8;
block7:;
*(&local1) = $tmp1179;
goto block8;
block8:;
panda$core$Bit $tmp1191 = *(&local1);
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block4; else goto block5;
block4:;
// line 296
panda$io$IndentedOutputStream** $tmp1193 = &param0->body;
panda$io$IndentedOutputStream* $tmp1194 = *$tmp1193;
panda$core$String* $tmp1195 = *(&local0);
panda$core$String* $tmp1196 = panda$core$String$convert$R$panda$core$String($tmp1195);
panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1196, &$s1198);
panda$core$String* $tmp1199 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(param0, param1);
panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1197, $tmp1199);
panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, &$s1202);
$fn1204 $tmp1203 = ($fn1204) ((panda$io$OutputStream*) $tmp1194)->$class->vtable[17];
$tmp1203(((panda$io$OutputStream*) $tmp1194), $tmp1201);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1201));
// unreffing REF($149:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing REF($148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($146:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing REF($145:panda.core.String)
// line 297
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1205));
panda$core$String* $tmp1206 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
*(&local0) = &$s1207;
goto block5;
block5:;
// line 299
panda$collections$Array** $tmp1208 = &param1->parameters;
panda$collections$Array* $tmp1209 = *$tmp1208;
ITable* $tmp1210 = ((panda$collections$Iterable*) $tmp1209)->$class->itable;
while ($tmp1210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1210 = $tmp1210->next;
}
$fn1212 $tmp1211 = $tmp1210->methods[0];
panda$collections$Iterator* $tmp1213 = $tmp1211(((panda$collections$Iterable*) $tmp1209));
goto block11;
block11:;
ITable* $tmp1214 = $tmp1213->$class->itable;
while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1214 = $tmp1214->next;
}
$fn1216 $tmp1215 = $tmp1214->methods[0];
panda$core$Bit $tmp1217 = $tmp1215($tmp1213);
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block13; else goto block12;
block12:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp1219 = $tmp1213->$class->itable;
while ($tmp1219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1219 = $tmp1219->next;
}
$fn1221 $tmp1220 = $tmp1219->methods[1];
panda$core$Object* $tmp1222 = $tmp1220($tmp1213);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1222)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1223 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1222);
// line 300
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1224 = *(&local2);
panda$core$String** $tmp1225 = &$tmp1224->name;
panda$core$String* $tmp1226 = *$tmp1225;
panda$core$String* $tmp1227 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(param0, $tmp1226);
panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1229, $tmp1227);
panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1231);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
panda$core$String* $tmp1232 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
*(&local3) = $tmp1230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($206:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing REF($205:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing REF($204:panda.core.String)
// line 301
panda$io$IndentedOutputStream** $tmp1233 = &param0->body;
panda$io$IndentedOutputStream* $tmp1234 = *$tmp1233;
panda$core$String* $tmp1235 = *(&local0);
panda$core$String* $tmp1236 = panda$core$String$convert$R$panda$core$String($tmp1235);
panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1236, &$s1238);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1239 = *(&local2);
org$pandalanguage$pandac$Type** $tmp1240 = &$tmp1239->type;
org$pandalanguage$pandac$Type* $tmp1241 = *$tmp1240;
panda$core$String* $tmp1242 = *(&local3);
panda$core$String* $tmp1243 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(param0, $tmp1241, $tmp1242);
panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, $tmp1243);
panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1244, &$s1246);
$fn1248 $tmp1247 = ($fn1248) ((panda$io$OutputStream*) $tmp1234)->$class->vtable[17];
$tmp1247(((panda$io$OutputStream*) $tmp1234), $tmp1245);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
// unreffing REF($236:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
// unreffing REF($235:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
// unreffing REF($234:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// unreffing REF($229:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing REF($228:panda.core.String)
// line 302
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1249));
panda$core$String* $tmp1250 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
*(&local0) = &$s1251;
panda$core$String* $tmp1252 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
// unreffing name
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1222);
// unreffing REF($192:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1253 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block11;
block13:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
// unreffing REF($181:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 304
panda$io$IndentedOutputStream** $tmp1254 = &param0->body;
panda$io$IndentedOutputStream* $tmp1255 = *$tmp1254;
$fn1257 $tmp1256 = ($fn1257) ((panda$io$OutputStream*) $tmp1255)->$class->vtable[19];
$tmp1256(((panda$io$OutputStream*) $tmp1255), &$s1258);
panda$core$String* $tmp1259 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
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
panda$io$IndentedOutputStream** $tmp1260 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1261 = *$tmp1260;
panda$io$MemoryOutputStream** $tmp1262 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1263 = *$tmp1262;
$fn1265 $tmp1264 = ($fn1265) ((panda$io$OutputStream*) $tmp1261)->$class->vtable[20];
$tmp1264(((panda$io$OutputStream*) $tmp1261), ((panda$core$Object*) $tmp1263));
// line 315
panda$io$IndentedOutputStream** $tmp1266 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1267 = *$tmp1266;
panda$io$MemoryOutputStream** $tmp1268 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1269 = *$tmp1268;
$fn1271 $tmp1270 = ($fn1271) ((panda$io$OutputStream*) $tmp1267)->$class->vtable[20];
$tmp1270(((panda$io$OutputStream*) $tmp1267), ((panda$core$Object*) $tmp1269));
// line 316
panda$io$IndentedOutputStream** $tmp1272 = &param0->out;
panda$io$IndentedOutputStream* $tmp1273 = *$tmp1272;
panda$io$MemoryOutputStream** $tmp1274 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1275 = *$tmp1274;
$fn1277 $tmp1276 = ($fn1277) ((panda$io$OutputStream*) $tmp1273)->$class->vtable[20];
$tmp1276(((panda$io$OutputStream*) $tmp1273), ((panda$core$Object*) $tmp1275));
// line 317
panda$io$IndentedOutputStream** $tmp1278 = &param0->out;
panda$io$IndentedOutputStream* $tmp1279 = *$tmp1278;
panda$io$MemoryOutputStream** $tmp1280 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1281 = *$tmp1280;
$fn1283 $tmp1282 = ($fn1283) ((panda$io$OutputStream*) $tmp1279)->$class->vtable[20];
$tmp1282(((panda$io$OutputStream*) $tmp1279), ((panda$core$Object*) $tmp1281));
return;

}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* param0) {

return;

}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Weak** $tmp1284 = &param0->compiler;
panda$core$Weak* $tmp1285 = *$tmp1284;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
panda$io$MemoryOutputStream** $tmp1286 = &param0->typeImportStream;
panda$io$MemoryOutputStream* $tmp1287 = *$tmp1286;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
panda$io$MemoryOutputStream** $tmp1288 = &param0->typesBuffer;
panda$io$MemoryOutputStream* $tmp1289 = *$tmp1288;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
panda$io$IndentedOutputStream** $tmp1290 = &param0->types;
panda$io$IndentedOutputStream* $tmp1291 = *$tmp1290;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1291));
panda$io$MemoryOutputStream** $tmp1292 = &param0->bodyImportStream;
panda$io$MemoryOutputStream* $tmp1293 = *$tmp1292;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1293));
panda$io$MemoryOutputStream** $tmp1294 = &param0->bodyBuffer;
panda$io$MemoryOutputStream* $tmp1295 = *$tmp1294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
panda$io$IndentedOutputStream** $tmp1296 = &param0->body;
panda$io$IndentedOutputStream* $tmp1297 = *$tmp1296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
panda$collections$HashSet** $tmp1298 = &param0->typeImports;
panda$collections$HashSet* $tmp1299 = *$tmp1298;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
panda$collections$HashSet** $tmp1300 = &param0->bodyImports;
panda$collections$HashSet* $tmp1301 = *$tmp1300;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
panda$collections$HashSet** $tmp1302 = &param0->imports;
panda$collections$HashSet* $tmp1303 = *$tmp1302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
panda$io$MemoryOutputStream** $tmp1304 = &param0->importStream;
panda$io$MemoryOutputStream* $tmp1305 = *$tmp1304;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
panda$io$File** $tmp1306 = &param0->outDir;
panda$io$File* $tmp1307 = *$tmp1306;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
panda$io$IndentedOutputStream** $tmp1308 = &param0->out;
panda$io$IndentedOutputStream* $tmp1309 = *$tmp1308;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
panda$io$IndentedOutputStream** $tmp1310 = &param0->typesOut;
panda$io$IndentedOutputStream* $tmp1311 = *$tmp1310;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
org$pandalanguage$pandac$LLVMCodeGenerator** $tmp1312 = &param0->llvmCodeGen;
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp1313 = *$tmp1312;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
panda$core$Weak** $tmp1314 = &param0->cCodeGen;
panda$core$Weak* $tmp1315 = *$tmp1314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
org$pandalanguage$pandac$CCodeGenerator** $tmp1316 = &param0->cCodeGenRetain;
org$pandalanguage$pandac$CCodeGenerator* $tmp1317 = *$tmp1316;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
return;

}

