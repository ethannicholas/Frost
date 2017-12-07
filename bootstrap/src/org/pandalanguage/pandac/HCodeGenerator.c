#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/IRNode.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn73)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn85)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn143)(panda$io$MemoryOutputStream*);
typedef void (*$fn144)(panda$io$MemoryOutputStream*);
typedef void (*$fn145)(panda$io$MemoryOutputStream*);
typedef void (*$fn146)(panda$io$MemoryOutputStream*);
typedef void (*$fn155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn171)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn183)(panda$collections$Iterator*);
typedef void (*$fn193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn208)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn214)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn227)(panda$collections$CollectionView*);
typedef void (*$fn239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn297)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn309)(panda$collections$CollectionView*);
typedef void (*$fn321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn349)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn423)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn440)(panda$collections$Iterator*);
typedef void (*$fn454)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn460)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn464)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn465)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn467)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x4C\x54", 3, 1 };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x47\x54", 3, 1 };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x51", 2, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74", 3, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74", 2, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C", 4, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6D\x61\x20\x6F\x6E\x63\x65", 12, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x5F\x63\x2E\x68\x22", 20, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B", 2, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B", 24, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B", 15, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B\x5D\x3B", 15, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x2F\x63\x6F\x72\x65\x2F\x43\x6C\x61\x73\x73\x2E\x68\x22", 29, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 24, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 1 };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 12, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 12, 1 };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7B", 10, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B", 21, 1 };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B", 17, 1 };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3B", 9, 1 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x7B", 11, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20\x6E\x6F\x6E\x6E\x75\x6C\x6C\x3B", 13, 1 };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x3B", 10, 1 };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 1 };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 41, 1 };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 1 };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 19, 1 };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 1 };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 19, 1 };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x3B", 7, 1 };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x72\x65\x73\x75\x6C\x74", 8, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, 1 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x66\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x65\x6E\x64\x69\x66", 6, 1 };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->typeImportStream = $tmp1;
    panda$io$MemoryOutputStream* $tmp3 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3);
    self->typesBuffer = $tmp3;
    panda$io$IndentedOutputStream* $tmp5 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp5->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5, ((panda$io$OutputStream*) self->typesBuffer));
    self->types = $tmp5;
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp7);
    self->bodyImportStream = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->bodyBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->bodyBuffer));
    self->body = $tmp11;
    panda$collections$Set* $tmp13 = (panda$collections$Set*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp13->refCount.value = 1;
    panda$collections$Set$init($tmp13);
    self->typeImports = $tmp13;
    panda$collections$Set* $tmp15 = (panda$collections$Set*) malloc(24);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp15->refCount.value = 1;
    panda$collections$Set$init($tmp15);
    self->bodyImports = $tmp15;
    self->imports = self->typeImports;
    self->importStream = self->typeImportStream;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp17 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(232);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp19 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp19->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp19);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp17, ((panda$io$OutputStream*) $tmp19));
    self->llvmCodeGen = $tmp17;
    self->inClass = ((panda$core$Bit) { false });
    self->outDir = p_outDir;
    panda$io$IndentedOutputStream* $tmp21 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp21->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream* $tmp23 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp23->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp23->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp23);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp21, ((panda$io$OutputStream*) $tmp23));
    self->out = $tmp21;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp25 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp25;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName26;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp30;
    panda$core$String* $tmp27 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName26 = $tmp27;
    panda$core$Bit $tmp29 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName26, &$s28);
    PANDA_ASSERT($tmp29.value);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp30, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp31 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName26, $tmp30);
    return $tmp31;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp32 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp32;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp35 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s33, &$s34);
    panda$core$String* $tmp38 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp35, &$s36, &$s37);
    panda$core$String* $tmp41 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp38, &$s39, &$s40);
    panda$core$String* $tmp44 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp41, &$s42, &$s43);
    panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp44, p_extension);
    return $tmp45;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name54;
    org$pandalanguage$pandac$ClassDecl* cl60;
    panda$core$String* includePath76;
    org$pandalanguage$pandac$ClassDecl* cl86;
    org$pandalanguage$pandac$ClassDecl* cl102;
    panda$core$String* name105;
    org$pandalanguage$pandac$ClassDecl* cl111;
    panda$core$String* includePath127;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s46;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp48 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp49 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp48, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s47, ((panda$core$Object*) wrap_panda$core$Int64($tmp49)));
            panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
            return $tmp52;
        }
        break;
        case 19:
        {
            return &$s53;
        }
        break;
        case 10:
        {
            panda$core$String* $tmp56 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s55, $tmp56);
            panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
            name54 = $tmp59;
            org$pandalanguage$pandac$ClassDecl* $tmp61 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl60 = $tmp61;
            PANDA_ASSERT(((panda$core$Bit) { cl60 != NULL }).value);
            panda$core$Bit $tmp62 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl60);
            panda$core$Bit $tmp63 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp62);
            if ($tmp63.value) {
            {
                panda$core$Bit $tmp64 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name54));
                panda$core$Bit $tmp65 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp64);
                if ($tmp65.value) {
                {
                    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s66, name54);
                    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s68);
                    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, name54);
                    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s71);
                    (($fn73) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp72);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name54));
                }
                }
                panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name54, &$s74);
                return $tmp75;
            }
            }
            panda$core$String* $tmp78 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl60, &$s77);
            includePath76 = $tmp78;
            panda$core$Bit $tmp79 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath76));
            panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
            if ($tmp80.value) {
            {
                panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s81, includePath76);
                panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
                (($fn85) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp84);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath76));
            }
            }
            return name54;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp87 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl86 = $tmp87;
            PANDA_ASSERT(((panda$core$Bit) { cl86 != NULL }).value);
            panda$core$Bit $tmp88 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl86);
            if ($tmp88.value) {
            {
                panda$core$Object* $tmp89 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp90 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp89));
                panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s91);
                return $tmp92;
            }
            }
            panda$core$Object* $tmp93 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp94 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp93));
            return $tmp94;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp95 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp97 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp95))->name, &$s96);
            if ($tmp97.value) {
            {
                panda$core$Object* $tmp98 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp99 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp98));
                panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s100);
                return $tmp101;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp103 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl102 = $tmp103;
            panda$core$Bit $tmp104 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl102);
            if ($tmp104.value) {
            {
                panda$core$String* $tmp107 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s106, $tmp107);
                panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
                name105 = $tmp110;
                org$pandalanguage$pandac$ClassDecl* $tmp112 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl111 = $tmp112;
                PANDA_ASSERT(((panda$core$Bit) { cl111 != NULL }).value);
                panda$core$Bit $tmp113 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl111);
                panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
                if ($tmp114.value) {
                {
                    panda$core$Bit $tmp115 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name105));
                    panda$core$Bit $tmp116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp115);
                    if ($tmp116.value) {
                    {
                        panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s117, name105);
                        panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s119);
                        panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, name105);
                        panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
                        (($fn124) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp123);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name105));
                    }
                    }
                    panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name105, &$s125);
                    return $tmp126;
                }
                }
                panda$core$String* $tmp129 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl111, &$s128);
                includePath127 = $tmp129;
                panda$core$Bit $tmp130 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath127));
                panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp130);
                if ($tmp131.value) {
                {
                    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, includePath127);
                    panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
                    (($fn136) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp135);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath127));
                }
                }
                return name105;
            }
            }
            panda$core$Object* $tmp137 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp138 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp137));
            return $tmp138;
        }
        break;
        case 22:
        {
            panda$core$Object* $tmp139 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp140 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp139));
            return $tmp140;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp141 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp142 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp141);
    return $tmp142;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path147;
    panda$collections$Iterator* f$Iter167;
    org$pandalanguage$pandac$FieldDecl* f180;
    org$pandalanguage$pandac$ClassDecl* value298;
    panda$collections$ListView* valueVTable301;
    if (self->inClass.value) {
    {
        org$pandalanguage$pandac$HCodeGenerator$finish(self);
    }
    }
    (($fn143) self->typeImportStream->$class->vtable[20])(self->typeImportStream);
    (($fn144) self->typesBuffer->$class->vtable[20])(self->typesBuffer);
    (($fn145) self->bodyImportStream->$class->vtable[20])(self->bodyImportStream);
    (($fn146) self->bodyBuffer->$class->vtable[20])(self->bodyBuffer);
    panda$collections$Set$clear(self->typeImports);
    panda$collections$Set$clear(self->bodyImports);
    self->inClass = ((panda$core$Bit) { true });
    panda$io$File* $tmp149 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s148);
    path147 = $tmp149;
    panda$io$File* $tmp150 = panda$io$File$parent$R$panda$io$File$Q(path147);
    panda$io$File$createDirectories($tmp150);
    panda$io$IndentedOutputStream* $tmp151 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp151->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp151->refCount.value = 1;
    panda$io$OutputStream* $tmp153 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path147);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp151, $tmp153);
    self->out = $tmp151;
    (($fn155) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s154);
    (($fn157) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s156);
    (($fn159) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s158);
    self->importStream = self->typeImportStream;
    self->imports = self->typeImports;
    panda$core$String* $tmp161 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s160, $tmp161);
    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s163);
    (($fn165) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp164);
    panda$core$Int64 $tmp166 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp166;
    {
        panda$collections$ListView* $tmp168 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp169 = ((panda$collections$Iterable*) $tmp168)->$class->itable;
        while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp169 = $tmp169->next;
        }
        $fn171 $tmp170 = $tmp169->methods[0];
        panda$collections$Iterator* $tmp172 = $tmp170(((panda$collections$Iterable*) $tmp168));
        f$Iter167 = $tmp172;
        $l173:;
        ITable* $tmp175 = f$Iter167->$class->itable;
        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp175 = $tmp175->next;
        }
        $fn177 $tmp176 = $tmp175->methods[0];
        panda$core$Bit $tmp178 = $tmp176(f$Iter167);
        panda$core$Bit $tmp179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp178);
        if (!$tmp179.value) goto $l174;
        {
            ITable* $tmp181 = f$Iter167->$class->itable;
            while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp181 = $tmp181->next;
            }
            $fn183 $tmp182 = $tmp181->methods[1];
            panda$core$Object* $tmp184 = $tmp182(f$Iter167);
            f180 = ((org$pandalanguage$pandac$FieldDecl*) $tmp184);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f180);
            panda$core$String* $tmp186 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f180->type);
            panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s185, $tmp186);
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, ((org$pandalanguage$pandac$Symbol*) f180)->name);
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s191);
            (($fn193) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp192);
        }
        goto $l173;
        $l174:;
    }
    panda$core$Bit $tmp195 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s194);
    if ($tmp195.value) {
    {
        (($fn197) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s196);
        (($fn199) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s198);
        (($fn201) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s200);
    }
    }
    panda$core$Int64 $tmp202 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp202;
    panda$core$String* $tmp204 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s203, $tmp204);
    panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, &$s206);
    (($fn208) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp207);
    (($fn210) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s209);
    (($fn212) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s211);
    (($fn214) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s213);
    org$pandalanguage$pandac$Type* $tmp217 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp218 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp217);
    panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s216, $tmp218);
    panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s220);
    panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s215, $tmp221);
    panda$collections$ListView* $tmp224 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp225 = ((panda$collections$CollectionView*) $tmp224)->$class->itable;
    while ($tmp225->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp225 = $tmp225->next;
    }
    $fn227 $tmp226 = $tmp225->methods[0];
    panda$core$Int64 $tmp228 = $tmp226(((panda$collections$CollectionView*) $tmp224));
    panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s223, ((panda$core$Object*) wrap_panda$core$Int64($tmp228)));
    panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s230);
    panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, $tmp231);
    panda$core$String* $tmp234 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s233, $tmp234);
    panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
    panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, $tmp237);
    (($fn239) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp238);
    panda$core$String* $tmp241 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s240, $tmp241);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s243);
    panda$core$String* $tmp245 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, $tmp245);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
    (($fn249) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp248);
    panda$core$Bit $tmp250 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp250.value) {
    {
        panda$core$String* $tmp252 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s251, $tmp252);
        panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, &$s254);
        (($fn256) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp255);
        panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp257;
        (($fn259) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s258);
        (($fn261) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s260);
        org$pandalanguage$pandac$Type* $tmp263 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp264 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp263);
        panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s262, $tmp264);
        panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s266);
        (($fn268) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp267);
        panda$core$Int64 $tmp269 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp269;
        panda$core$String* $tmp271 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s270, $tmp271);
        panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
        (($fn275) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp274);
        panda$core$String* $tmp277 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s276, $tmp277);
        panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s279);
        (($fn281) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp280);
        panda$core$Int64 $tmp282 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp282;
        panda$core$String* $tmp284 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, $tmp284);
        panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s286);
        (($fn288) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp287);
        (($fn290) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s289);
        panda$core$Int64 $tmp291 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp291;
        panda$core$String* $tmp293 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s292, $tmp293);
        panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp294, &$s295);
        (($fn297) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp296);
        org$pandalanguage$pandac$Type* $tmp299 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp300 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp299);
        value298 = $tmp300;
        panda$collections$ListView* $tmp302 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value298);
        valueVTable301 = $tmp302;
        panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s303, &$s304);
        ITable* $tmp307 = ((panda$collections$CollectionView*) valueVTable301)->$class->itable;
        while ($tmp307->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp307 = $tmp307->next;
        }
        $fn309 $tmp308 = $tmp307->methods[0];
        panda$core$Int64 $tmp310 = $tmp308(((panda$collections$CollectionView*) valueVTable301));
        panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s306, ((panda$core$Object*) wrap_panda$core$Int64($tmp310)));
        panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s312);
        panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp305, $tmp313);
        panda$core$String* $tmp316 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s315, $tmp316);
        panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s318);
        panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, $tmp319);
        (($fn321) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp320);
        panda$core$String* $tmp323 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s322, $tmp323);
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s325);
        panda$core$String* $tmp328 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, $tmp328);
        panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s330);
        panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, $tmp331);
        (($fn333) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp332);
        panda$core$String* $tmp335 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s334, $tmp335);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
        panda$core$String* $tmp339 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, $tmp339);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
        panda$core$String* $tmp344 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s343, $tmp344);
        panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s346);
        panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, $tmp347);
        (($fn349) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp348);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result350;
    org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp352 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp351);
    result350 = $tmp352;
    panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp353 = $tmp354.value;
    if (!$tmp353) goto $l355;
    panda$core$Bit $tmp357 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result350, &$s356);
    panda$core$Bit $tmp358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp357);
    $tmp353 = $tmp358.value;
    $l355:;
    panda$core$Bit $tmp359 = { $tmp353 };
    if ($tmp359.value) {
    {
        panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result350, &$s360);
        return $tmp361;
    }
    }
    return result350;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result364;
    panda$core$Bit $tmp362 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp362);
    if ($tmp363.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp367 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp366 = $tmp367.value;
    if (!$tmp366) goto $l368;
    panda$core$Bit $tmp369 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp366 = $tmp369.value;
    $l368:;
    panda$core$Bit $tmp370 = { $tmp366 };
    bool $tmp365 = $tmp370.value;
    if (!$tmp365) goto $l371;
    org$pandalanguage$pandac$ClassDecl* $tmp372 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp373 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp372);
    $tmp365 = $tmp373.value;
    $l371:;
    panda$core$Bit $tmp374 = { $tmp365 };
    result364 = $tmp374;
    panda$core$Bit $tmp376 = panda$core$Bit$$NOT$R$panda$core$Bit(result364);
    bool $tmp375 = $tmp376.value;
    if ($tmp375) goto $l377;
    panda$core$Bit $tmp379 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp379);
    bool $tmp378 = $tmp380.value;
    if (!$tmp378) goto $l381;
    panda$core$Bit $tmp383 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp382 = $tmp383.value;
    if ($tmp382) goto $l384;
    panda$core$Bit $tmp385 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp382 = $tmp385.value;
    $l384:;
    panda$core$Bit $tmp386 = { $tmp382 };
    $tmp378 = $tmp386.value;
    $l381:;
    panda$core$Bit $tmp387 = { $tmp378 };
    $tmp375 = $tmp387.value;
    $l377:;
    panda$core$Bit $tmp388 = { $tmp375 };
    PANDA_ASSERT($tmp388.value);
    return result364;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator389;
    panda$collections$Iterator* p$Iter425;
    org$pandalanguage$pandac$MethodDecl$Parameter* p437;
    self->importStream = self->bodyImportStream;
    self->imports = self->bodyImports;
    separator389 = &$s390;
    panda$core$Bit $tmp391 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp391.value) {
    {
        panda$core$String* $tmp393 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s392, $tmp393);
        panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s395);
        panda$core$String* $tmp397 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, $tmp397);
        panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp398, &$s399);
        (($fn401) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp400);
        separator389 = &$s402;
    }
    }
    else {
    {
        panda$core$String* $tmp404 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s403, $tmp404);
        panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
        panda$core$String* $tmp408 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, $tmp408);
        panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s410);
        (($fn412) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp411);
    }
    }
    panda$core$Bit $tmp413 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp413);
    if ($tmp414.value) {
    {
        panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, separator389);
        panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
        panda$core$String* $tmp419 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, $tmp419);
        panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s421);
        (($fn423) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp422);
        separator389 = &$s424;
    }
    }
    {
        ITable* $tmp426 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp426 = $tmp426->next;
        }
        $fn428 $tmp427 = $tmp426->methods[0];
        panda$collections$Iterator* $tmp429 = $tmp427(((panda$collections$Iterable*) p_m->parameters));
        p$Iter425 = $tmp429;
        $l430:;
        ITable* $tmp432 = p$Iter425->$class->itable;
        while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp432 = $tmp432->next;
        }
        $fn434 $tmp433 = $tmp432->methods[0];
        panda$core$Bit $tmp435 = $tmp433(p$Iter425);
        panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
        if (!$tmp436.value) goto $l431;
        {
            ITable* $tmp438 = p$Iter425->$class->itable;
            while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp438 = $tmp438->next;
            }
            $fn440 $tmp439 = $tmp438->methods[1];
            panda$core$Object* $tmp441 = $tmp439(p$Iter425);
            p437 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp441);
            panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s442, separator389);
            panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
            panda$core$String* $tmp446 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p437->type);
            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, $tmp446);
            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s448);
            panda$core$String* $tmp450 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p437->name);
            panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, $tmp450);
            panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s452);
            (($fn454) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp453);
            separator389 = &$s455;
        }
        goto $l430;
        $l431:;
    }
    (($fn457) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s456);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn459) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s458);
    (($fn460) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typeImportStream));
    (($fn461) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typesBuffer));
    (($fn463) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s462);
    (($fn464) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyImportStream));
    (($fn465) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyBuffer));
    (($fn467) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s466);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}

