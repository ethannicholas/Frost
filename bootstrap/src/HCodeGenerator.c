#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/io/OutputStream.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/io/File.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"


typedef void (*$fn24)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn26)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn28)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn29)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn32)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn36)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn43)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn49)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn55)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn97)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn99)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn102)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn112)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn113)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Bit (*$fn118)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn126)(panda$collections$Set*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn129)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn131)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn133)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn138)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn142)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn146)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn151)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn155)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn158)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef void (*$fn164)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn167)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn171)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn183)(panda$collections$Iterator*);
typedef void (*$fn185)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn215)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn225)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn229)(panda$collections$CollectionView*);
typedef void (*$fn241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn251)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn252)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn264)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn266)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn301)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn304)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn307)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn315)(panda$collections$CollectionView*);
typedef void (*$fn327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn355)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn357)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn369)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn375)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn378)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn382)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn384)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn410)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn411)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn422)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn427)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn433)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn439)(panda$collections$Iterator*);
typedef void (*$fn453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn460)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn463)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn464)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn466)(panda$io$OutputStream*, panda$core$String*);
struct { panda$core$Class* cl; ITable* next; void* methods[5]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$finish} };

org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getIncludePath$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$finish} };


static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6D\x61\x20\x6F\x6E\x63\x65", 12 };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x5F\x63\x2E\x68\x22", 20 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74", 3 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74", 2 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C", 4 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1 };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9 };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20 };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15 };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B", 2 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B", 24 };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B", 15 };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B\x5D\x3B", 15 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23 };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x2F\x63\x6F\x72\x65\x2F\x43\x6C\x61\x73\x73\x2E\x68\x22", 29 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 24 };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13 };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 12 };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 12 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15 };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7B", 10 };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B", 21 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B", 17 };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3B", 9 };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x7B", 11 };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20\x6E\x6F\x6E\x6E\x75\x6C\x6C\x3B", 13 };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x3B", 10 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57 };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 41 };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5 };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 19 };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7 };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 19 };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14 };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x3B", 7 };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x72\x65\x73\x75\x6C\x74", 8 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1 };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5 };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3 };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2 };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22 };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x66\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23 };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x65\x6E\x64\x69\x66", 6 };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$OutputStream(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$OutputStream* p_out) {
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
    panda$io$IndentedOutputStream* $tmp21 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp21->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp21, p_out);
    self->out = $tmp21;
    (($fn24) p_out->$class->vtable[19])(p_out, &$s23);
    (($fn26) p_out->$class->vtable[19])(p_out, &$s25);
    (($fn28) p_out->$class->vtable[19])(p_out, &$s27);
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp30 = (($fn29) self->llvmCodeGen->$class->vtable[28])(self->llvmCodeGen, p_s);
    return $tmp30;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName31;
    panda$core$Range $tmp34;
    panda$core$String* $tmp33 = (($fn32) self->llvmCodeGen->$class->vtable[30])(self->llvmCodeGen, p_m);
    llvmName31 = $tmp33;
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp34, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp35 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName31, $tmp34);
    return $tmp35;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp37 = (($fn36) self->llvmCodeGen->$class->vtable[10])(self->llvmCodeGen, p_t);
    return $tmp37;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getIncludePath$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* path38;
    panda$core$String* longestFound39;
    panda$collections$Iterator* imp$Iter40;
    panda$io$File* imp52;
    panda$core$Range $tmp66;
    path38 = p_cl->source->path;
    longestFound39 = NULL;
    {
        ITable* $tmp41 = ((panda$collections$Iterable*) self->compiler->settings->importDirs)->$class->itable;
        while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp41 = $tmp41->next;
        }
        $fn43 $tmp42 = $tmp41->methods[0];
        panda$collections$Iterator* $tmp44 = $tmp42(((panda$collections$Iterable*) self->compiler->settings->importDirs));
        imp$Iter40 = $tmp44;
        $l45:;
        ITable* $tmp47 = imp$Iter40->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[0];
        panda$core$Bit $tmp50 = $tmp48(imp$Iter40);
        panda$core$Bit $tmp51 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp50);
        if (!$tmp51.value) goto $l46;
        {
            ITable* $tmp53 = imp$Iter40->$class->itable;
            while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp53 = $tmp53->next;
            }
            $fn55 $tmp54 = $tmp53->methods[1];
            panda$core$Object* $tmp56 = $tmp54(imp$Iter40);
            imp52 = ((panda$io$File*) $tmp56);
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(imp52->path, &$s57);
            panda$core$Bit $tmp59 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(path38, $tmp58);
            if ($tmp59.value) {
            {
                bool $tmp60 = ((panda$core$Bit) { longestFound39 == NULL }).value;
                if ($tmp60) goto $l61;
                panda$core$Int64 $tmp62 = panda$core$String$length$R$panda$core$Int64(imp52->path);
                panda$core$Int64 $tmp63 = panda$core$String$length$R$panda$core$Int64(longestFound39);
                panda$core$Bit $tmp64 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp62, $tmp63);
                $tmp60 = $tmp64.value;
                $l61:;
                panda$core$Bit $tmp65 = { $tmp60 };
                if ($tmp65.value) {
                {
                    longestFound39 = imp52->path;
                }
                }
            }
            }
        }
        goto $l45;
        $l46:;
    }
    if (((panda$core$Bit) { longestFound39 != NULL }).value) {
    {
        panda$core$Int64 $tmp67 = panda$core$String$length$R$panda$core$Int64(longestFound39);
        panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp67, ((panda$core$Int64) { 1 }));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp66, (((panda$core$Int64$nullable) { $tmp68, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp68, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp69 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(path38, $tmp66);
        path38 = $tmp69;
    }
    }
    panda$core$String* $tmp72 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(path38, &$s70, &$s71);
    return $tmp72;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$178873;
    panda$core$String* name90;
    org$pandalanguage$pandac$ClassDecl* cl96;
    panda$core$String* includePath116;
    org$pandalanguage$pandac$ClassDecl* cl128;
    {
        $match$178873 = p_t->typeKind;
        panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 14 }));
        if ($tmp74.value) {
        {
            return &$s75;
        }
        }
        else {
        panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 12 }));
        bool $tmp76 = $tmp77.value;
        if ($tmp76) goto $l78;
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 13 }));
        $tmp76 = $tmp79.value;
        $l78:;
        panda$core$Bit $tmp80 = { $tmp76 };
        if ($tmp80.value) {
        {
            panda$core$Int64 $tmp82 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp83 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp82, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s81, ((panda$core$Object*) wrap_panda$core$Int64($tmp83)));
            panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s85);
            return $tmp86;
        }
        }
        else {
        panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 19 }));
        if ($tmp87.value) {
        {
            return &$s88;
        }
        }
        else {
        panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 10 }));
        if ($tmp89.value) {
        {
            panda$core$String* $tmp92 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s91, $tmp92);
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
            name90 = $tmp95;
            org$pandalanguage$pandac$ClassDecl* $tmp98 = (($fn97) self->compiler->$class->vtable[13])(self->compiler, p_t);
            cl96 = $tmp98;
            panda$core$Bit $tmp100 = (($fn99) self->compiler->$class->vtable[9])(self->compiler, cl96);
            panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp100);
            if ($tmp101.value) {
            {
                panda$core$Bit $tmp103 = (($fn102) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) name90));
                panda$core$Bit $tmp104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp103);
                if ($tmp104.value) {
                {
                    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s105, name90);
                    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
                    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, name90);
                    panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s110);
                    (($fn112) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp111);
                    (($fn113) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) name90)));
                }
                }
                panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name90, &$s114);
                return $tmp115;
            }
            }
            panda$core$String* $tmp117 = org$pandalanguage$pandac$HCodeGenerator$getIncludePath$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, cl96);
            includePath116 = $tmp117;
            panda$core$Bit $tmp119 = (($fn118) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) includePath116));
            panda$core$Bit $tmp120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp119);
            if ($tmp120.value) {
            {
                panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s121, includePath116);
                panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, &$s123);
                (($fn125) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp124);
                (($fn126) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) includePath116)));
            }
            }
            return name90;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 11 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp130 = (($fn129) self->compiler->$class->vtable[13])(self->compiler, p_t);
            cl128 = $tmp130;
            panda$core$Bit $tmp132 = (($fn131) self->compiler->$class->vtable[9])(self->compiler, cl128);
            if ($tmp132.value) {
            {
                panda$core$Object* $tmp134 = (($fn133) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp135 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp134));
                panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s136);
                return $tmp137;
            }
            }
            panda$core$Object* $tmp139 = (($fn138) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp140 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp139));
            return $tmp140;
        }
        }
        else {
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 21 }));
        if ($tmp141.value) {
        {
            panda$core$Object* $tmp143 = (($fn142) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp145 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp143))->name, &$s144);
            if ($tmp145.value) {
            {
                panda$core$Object* $tmp147 = (($fn146) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp148 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp147));
                panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp148, &$s149);
                return $tmp150;
            }
            }
            panda$core$Object* $tmp152 = (($fn151) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp153 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp152));
            return $tmp153;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$178873, ((panda$core$Int64) { 22 }));
        if ($tmp154.value) {
        {
            panda$core$Object* $tmp156 = (($fn155) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp157 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp156));
            return $tmp157;
        }
        }
        else {
        {
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
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
    (($fn158) self->llvmCodeGen->$class->vtable[2])(self->llvmCodeGen, p_compiler);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* f$Iter166;
    org$pandalanguage$pandac$FieldDecl* f180;
    org$pandalanguage$pandac$ClassDecl* value302;
    panda$collections$ListView* valueVTable306;
    self->importStream = self->typeImportStream;
    self->imports = self->typeImports;
    panda$core$String* $tmp160 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s159, $tmp160);
    panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s162);
    (($fn164) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp163);
    panda$core$Int64 $tmp165 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp165;
    {
        panda$collections$ListView* $tmp168 = (($fn167) self->compiler->$class->vtable[10])(self->compiler, p_cl);
        ITable* $tmp169 = ((panda$collections$Iterable*) $tmp168)->$class->itable;
        while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp169 = $tmp169->next;
        }
        $fn171 $tmp170 = $tmp169->methods[0];
        panda$collections$Iterator* $tmp172 = $tmp170(((panda$collections$Iterable*) $tmp168));
        f$Iter166 = $tmp172;
        $l173:;
        ITable* $tmp175 = f$Iter166->$class->itable;
        while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp175 = $tmp175->next;
        }
        $fn177 $tmp176 = $tmp175->methods[0];
        panda$core$Bit $tmp178 = $tmp176(f$Iter166);
        panda$core$Bit $tmp179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp178);
        if (!$tmp179.value) goto $l174;
        {
            ITable* $tmp181 = f$Iter166->$class->itable;
            while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp181 = $tmp181->next;
            }
            $fn183 $tmp182 = $tmp181->methods[1];
            panda$core$Object* $tmp184 = $tmp182(f$Iter166);
            f180 = ((org$pandalanguage$pandac$FieldDecl*) $tmp184);
            (($fn185) self->compiler->$class->vtable[7])(self->compiler, f180);
            panda$core$String* $tmp187 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f180->type);
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s186, $tmp187);
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s189);
            panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, ((org$pandalanguage$pandac$Symbol*) f180)->name);
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
            (($fn194) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp193);
        }
        goto $l173;
        $l174:;
    }
    panda$core$Bit $tmp196 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s195);
    if ($tmp196.value) {
    {
        (($fn198) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s197);
        (($fn200) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s199);
        (($fn202) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s201);
    }
    }
    panda$core$Int64 $tmp203 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp203;
    panda$core$String* $tmp205 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s204, $tmp205);
    panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s207);
    (($fn209) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp208);
    (($fn211) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s210);
    (($fn213) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s212);
    (($fn215) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s214);
    org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp219 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp218);
    panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s217, $tmp219);
    panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
    panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s216, $tmp222);
    panda$collections$ListView* $tmp226 = (($fn225) self->compiler->$class->vtable[20])(self->compiler, p_cl);
    ITable* $tmp227 = ((panda$collections$CollectionView*) $tmp226)->$class->itable;
    while ($tmp227->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp227 = $tmp227->next;
    }
    $fn229 $tmp228 = $tmp227->methods[0];
    panda$core$Int64 $tmp230 = $tmp228(((panda$collections$CollectionView*) $tmp226));
    panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s224, ((panda$core$Object*) wrap_panda$core$Int64($tmp230)));
    panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s232);
    panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp223, $tmp233);
    panda$core$String* $tmp236 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s235, $tmp236);
    panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s238);
    panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, $tmp239);
    (($fn241) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp240);
    panda$core$String* $tmp243 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s242, $tmp243);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
    panda$core$String* $tmp247 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, $tmp247);
    panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s249);
    (($fn251) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp250);
    panda$core$Bit $tmp253 = (($fn252) self->compiler->$class->vtable[9])(self->compiler, p_cl);
    if ($tmp253.value) {
    {
        panda$core$String* $tmp255 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s254, $tmp255);
        panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s257);
        (($fn259) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp258);
        panda$core$Int64 $tmp260 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp260;
        (($fn262) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s261);
        (($fn264) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s263);
        org$pandalanguage$pandac$Type* $tmp267 = (($fn266) p_cl->$class->vtable[3])(p_cl);
        panda$core$String* $tmp268 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp267);
        panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, $tmp268);
        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s270);
        (($fn272) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp271);
        panda$core$Int64 $tmp273 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp273;
        panda$core$String* $tmp275 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s274, $tmp275);
        panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s277);
        (($fn279) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp278);
        panda$core$String* $tmp281 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s280, $tmp281);
        panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
        (($fn285) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp284);
        panda$core$Int64 $tmp286 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp286;
        panda$core$String* $tmp288 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s287, $tmp288);
        panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s290);
        (($fn292) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp291);
        (($fn294) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s293);
        panda$core$Int64 $tmp295 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp295;
        panda$core$String* $tmp297 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s296, $tmp297);
        panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s299);
        (($fn301) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp300);
        org$pandalanguage$pandac$Type* $tmp303 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp305 = (($fn304) self->compiler->$class->vtable[13])(self->compiler, $tmp303);
        value302 = $tmp305;
        panda$collections$ListView* $tmp308 = (($fn307) self->compiler->$class->vtable[20])(self->compiler, value302);
        valueVTable306 = $tmp308;
        panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s309, &$s310);
        ITable* $tmp313 = ((panda$collections$CollectionView*) valueVTable306)->$class->itable;
        while ($tmp313->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp313 = $tmp313->next;
        }
        $fn315 $tmp314 = $tmp313->methods[0];
        panda$core$Int64 $tmp316 = $tmp314(((panda$collections$CollectionView*) valueVTable306));
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s312, ((panda$core$Object*) wrap_panda$core$Int64($tmp316)));
        panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s318);
        panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, $tmp319);
        panda$core$String* $tmp322 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s321, $tmp322);
        panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s324);
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, $tmp325);
        (($fn327) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp326);
        panda$core$String* $tmp329 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s328, $tmp329);
        panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
        panda$core$String* $tmp334 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s333, $tmp334);
        panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s336);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, $tmp337);
        (($fn339) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp338);
        panda$core$String* $tmp341 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s340, $tmp341);
        panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s343);
        panda$core$String* $tmp345 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, $tmp345);
        panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s347);
        panda$core$String* $tmp350 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s349, $tmp350);
        panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
        panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, $tmp353);
        (($fn355) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp354);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result356;
    org$pandalanguage$pandac$Type* $tmp358 = (($fn357) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp359 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp358);
    result356 = $tmp359;
    panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp360 = $tmp361.value;
    if (!$tmp360) goto $l362;
    panda$core$Bit $tmp364 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result356, &$s363);
    panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
    $tmp360 = $tmp365.value;
    $l362:;
    panda$core$Bit $tmp366 = { $tmp360 };
    if ($tmp366.value) {
    {
        panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result356, &$s367);
        return $tmp368;
    }
    }
    return result356;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result372;
    panda$core$Bit $tmp370 = (($fn369) p_m->returnType->$class->vtable[8])(p_m->returnType);
    panda$core$Bit $tmp371 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp370);
    if ($tmp371.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp376 = (($fn375) p_m->annotations->$class->vtable[7])(p_m->annotations);
    bool $tmp374 = $tmp376.value;
    if (!$tmp374) goto $l377;
    panda$core$Bit $tmp379 = (($fn378) p_m->returnType->$class->vtable[8])(p_m->returnType);
    $tmp374 = $tmp379.value;
    $l377:;
    panda$core$Bit $tmp380 = { $tmp374 };
    bool $tmp373 = $tmp380.value;
    if (!$tmp373) goto $l381;
    org$pandalanguage$pandac$ClassDecl* $tmp383 = (($fn382) self->compiler->$class->vtable[13])(self->compiler, p_m->returnType);
    panda$core$Bit $tmp385 = (($fn384) self->compiler->$class->vtable[9])(self->compiler, $tmp383);
    $tmp373 = $tmp385.value;
    $l381:;
    panda$core$Bit $tmp386 = { $tmp373 };
    result372 = $tmp386;
    return result372;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator387;
    panda$collections$Iterator* p$Iter424;
    org$pandalanguage$pandac$MethodDecl$Parameter* p436;
    self->importStream = self->bodyImportStream;
    self->imports = self->bodyImports;
    separator387 = &$s388;
    panda$core$Bit $tmp389 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp389.value) {
    {
        panda$core$String* $tmp391 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s390, $tmp391);
        panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s393);
        panda$core$String* $tmp395 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, $tmp395);
        panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, &$s397);
        (($fn399) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp398);
        separator387 = &$s400;
    }
    }
    else {
    {
        panda$core$String* $tmp402 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s401, $tmp402);
        panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
        panda$core$String* $tmp406 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, $tmp406);
        panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
        (($fn410) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp409);
    }
    }
    panda$core$Bit $tmp412 = (($fn411) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp412);
    if ($tmp413.value) {
    {
        panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s414, separator387);
        panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
        panda$core$String* $tmp418 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, $tmp418);
        panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s420);
        (($fn422) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp421);
        separator387 = &$s423;
    }
    }
    {
        ITable* $tmp425 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp425 = $tmp425->next;
        }
        $fn427 $tmp426 = $tmp425->methods[0];
        panda$collections$Iterator* $tmp428 = $tmp426(((panda$collections$Iterable*) p_m->parameters));
        p$Iter424 = $tmp428;
        $l429:;
        ITable* $tmp431 = p$Iter424->$class->itable;
        while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp431 = $tmp431->next;
        }
        $fn433 $tmp432 = $tmp431->methods[0];
        panda$core$Bit $tmp434 = $tmp432(p$Iter424);
        panda$core$Bit $tmp435 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp434);
        if (!$tmp435.value) goto $l430;
        {
            ITable* $tmp437 = p$Iter424->$class->itable;
            while ($tmp437->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp437 = $tmp437->next;
            }
            $fn439 $tmp438 = $tmp437->methods[1];
            panda$core$Object* $tmp440 = $tmp438(p$Iter424);
            p436 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp440);
            panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s441, separator387);
            panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp442, &$s443);
            panda$core$String* $tmp445 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p436->type);
            panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, $tmp445);
            panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s447);
            panda$core$String* $tmp449 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p436->name);
            panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, $tmp449);
            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, &$s451);
            (($fn453) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp452);
            separator387 = &$s454;
        }
        goto $l429;
        $l430:;
    }
    (($fn456) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s455);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
    (($fn458) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s457);
    (($fn459) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typeImportStream));
    (($fn460) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typesBuffer));
    (($fn462) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s461);
    (($fn463) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyImportStream));
    (($fn464) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyBuffer));
    (($fn466) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s465);
}

