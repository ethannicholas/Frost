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

typedef panda$core$String* (*$fn25)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn28)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn32)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn71)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn73)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn76)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn86)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn87)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Bit (*$fn93)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn101)(panda$collections$Set*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn104)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn106)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn108)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn113)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn117)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn121)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn127)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn129)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn138)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn140)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn143)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn154)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Bit (*$fn160)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn168)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$Object* (*$fn169)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn173)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn176)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef void (*$fn179)(panda$io$MemoryOutputStream*);
typedef void (*$fn180)(panda$io$MemoryOutputStream*);
typedef void (*$fn181)(panda$io$MemoryOutputStream*);
typedef void (*$fn182)(panda$io$MemoryOutputStream*);
typedef void (*$fn183)(panda$collections$Set*);
typedef void (*$fn184)(panda$collections$Set*);
typedef void (*$fn193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn206)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn222)(panda$collections$Iterator*);
typedef void (*$fn224)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn254)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$ListView* (*$fn264)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn268)(panda$collections$CollectionView*);
typedef void (*$fn280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn290)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn291)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn303)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn305)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn318)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn340)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn343)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn346)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn354)(panda$collections$CollectionView*);
typedef void (*$fn366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn394)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn396)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn408)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn414)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn417)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn421)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn423)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn449)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn450)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn466)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn472)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn478)(panda$collections$Iterator*);
typedef void (*$fn492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn498)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn499)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn502)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn505)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x4C\x54", 3, 1 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x47\x54", 3, 1 };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x51", 2, 1 };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74", 3, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74", 2, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C", 4, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6D\x61\x20\x6F\x6E\x63\x65", 12, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x5F\x63\x2E\x68\x22", 20, 1 };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B", 2, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B", 24, 1 };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B", 15, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B\x5D\x3B", 15, 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x2F\x63\x6F\x72\x65\x2F\x43\x6C\x61\x73\x73\x2E\x68\x22", 29, 1 };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, 1 };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 1 };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 24, 1 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 12, 1 };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 1 };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 12, 1 };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7B", 10, 1 };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B", 21, 1 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B", 17, 1 };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3B", 9, 1 };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x7B", 11, 1 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20\x6E\x6F\x6E\x6E\x75\x6C\x6C\x3B", 13, 1 };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x3B", 10, 1 };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 1 };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 41, 1 };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 1 };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 19, 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 1 };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 19, 1 };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x3B", 7, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x72\x65\x73\x75\x6C\x74", 8, 1 };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, 1 };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x66\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x65\x6E\x64\x69\x66", 6, 1 };

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
    panda$core$String* $tmp26 = (($fn25) self->llvmCodeGen->$class->vtable[28])(self->llvmCodeGen, p_s);
    return $tmp26;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName27;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp30;
    panda$core$String* $tmp29 = (($fn28) self->llvmCodeGen->$class->vtable[30])(self->llvmCodeGen, p_m);
    llvmName27 = $tmp29;
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp30, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp31 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName27, $tmp30);
    return $tmp31;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp33 = (($fn32) self->llvmCodeGen->$class->vtable[10])(self->llvmCodeGen, p_t);
    return $tmp33;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp36 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s34, &$s35);
    panda$core$String* $tmp39 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp36, &$s37, &$s38);
    panda$core$String* $tmp42 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp39, &$s40, &$s41);
    panda$core$String* $tmp45 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp42, &$s43, &$s44);
    panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp45, p_extension);
    return $tmp46;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$140147;
    panda$core$String* name64;
    org$pandalanguage$pandac$ClassDecl* cl70;
    panda$core$String* includePath90;
    org$pandalanguage$pandac$ClassDecl* cl103;
    org$pandalanguage$pandac$ClassDecl* cl126;
    panda$core$String* name131;
    org$pandalanguage$pandac$ClassDecl* cl137;
    panda$core$String* includePath157;
    {
        $match$140147 = p_t->typeKind;
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 14 }));
        if ($tmp48.value) {
        {
            return &$s49;
        }
        }
        else {
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 12 }));
        bool $tmp50 = $tmp51.value;
        if ($tmp50) goto $l52;
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 13 }));
        $tmp50 = $tmp53.value;
        $l52:;
        panda$core$Bit $tmp54 = { $tmp50 };
        if ($tmp54.value) {
        {
            panda$core$Int64 $tmp56 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp57 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp56, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s55, ((panda$core$Object*) wrap_panda$core$Int64($tmp57)));
            panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
            return $tmp60;
        }
        }
        else {
        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 19 }));
        if ($tmp61.value) {
        {
            return &$s62;
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 10 }));
        if ($tmp63.value) {
        {
            panda$core$String* $tmp66 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s65, $tmp66);
            panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s68);
            name64 = $tmp69;
            org$pandalanguage$pandac$ClassDecl* $tmp72 = (($fn71) self->compiler->$class->vtable[14])(self->compiler, p_t);
            cl70 = $tmp72;
            panda$core$Bit $tmp74 = (($fn73) self->compiler->$class->vtable[9])(self->compiler, cl70);
            panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
            if ($tmp75.value) {
            {
                panda$core$Bit $tmp77 = (($fn76) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) name64));
                panda$core$Bit $tmp78 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp77);
                if ($tmp78.value) {
                {
                    panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s79, name64);
                    panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s81);
                    panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, name64);
                    panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s84);
                    (($fn86) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp85);
                    (($fn87) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) name64)));
                }
                }
                panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name64, &$s88);
                return $tmp89;
            }
            }
            panda$core$String* $tmp92 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl70, &$s91);
            includePath90 = $tmp92;
            panda$core$Bit $tmp94 = (($fn93) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) includePath90));
            panda$core$Bit $tmp95 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp94);
            if ($tmp95.value) {
            {
                panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s96, includePath90);
                panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
                (($fn100) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp99);
                (($fn101) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) includePath90)));
            }
            }
            return name64;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 11 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp105 = (($fn104) self->compiler->$class->vtable[14])(self->compiler, p_t);
            cl103 = $tmp105;
            panda$core$Bit $tmp107 = (($fn106) self->compiler->$class->vtable[9])(self->compiler, cl103);
            if ($tmp107.value) {
            {
                panda$core$Object* $tmp109 = (($fn108) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp110 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp109));
                panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
                return $tmp112;
            }
            }
            panda$core$Object* $tmp114 = (($fn113) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp115 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp114));
            return $tmp115;
        }
        }
        else {
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 21 }));
        if ($tmp116.value) {
        {
            panda$core$Object* $tmp118 = (($fn117) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp120 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp118))->name, &$s119);
            if ($tmp120.value) {
            {
                panda$core$Object* $tmp122 = (($fn121) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp123 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp122));
                panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp123, &$s124);
                return $tmp125;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp128 = (($fn127) self->compiler->$class->vtable[14])(self->compiler, p_t);
            cl126 = $tmp128;
            panda$core$Bit $tmp130 = (($fn129) cl126->$class->vtable[5])(cl126);
            if ($tmp130.value) {
            {
                panda$core$String* $tmp133 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, $tmp133);
                panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
                name131 = $tmp136;
                org$pandalanguage$pandac$ClassDecl* $tmp139 = (($fn138) self->compiler->$class->vtable[14])(self->compiler, p_t);
                cl137 = $tmp139;
                panda$core$Bit $tmp141 = (($fn140) self->compiler->$class->vtable[9])(self->compiler, cl137);
                panda$core$Bit $tmp142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp141);
                if ($tmp142.value) {
                {
                    panda$core$Bit $tmp144 = (($fn143) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) name131));
                    panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
                    if ($tmp145.value) {
                    {
                        panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s146, name131);
                        panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s148);
                        panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, name131);
                        panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s151);
                        (($fn153) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp152);
                        (($fn154) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) name131)));
                    }
                    }
                    panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name131, &$s155);
                    return $tmp156;
                }
                }
                panda$core$String* $tmp159 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl137, &$s158);
                includePath157 = $tmp159;
                panda$core$Bit $tmp161 = (($fn160) self->imports->$class->vtable[7])(self->imports, ((panda$collections$Key*) includePath157));
                panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
                if ($tmp162.value) {
                {
                    panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s163, includePath157);
                    panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s165);
                    (($fn167) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp166);
                    (($fn168) self->imports->$class->vtable[2])(self->imports, ((panda$core$Object*) ((panda$collections$Key*) includePath157)));
                }
                }
                return name131;
            }
            }
            panda$core$Object* $tmp170 = (($fn169) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp171 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp170));
            return $tmp171;
        }
        }
        else {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140147, ((panda$core$Int64) { 22 }));
        if ($tmp172.value) {
        {
            panda$core$Object* $tmp174 = (($fn173) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp175 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp174));
            return $tmp175;
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
    (($fn176) self->llvmCodeGen->$class->vtable[2])(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp177 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp178 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp177);
    return $tmp178;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path185;
    panda$collections$Iterator* f$Iter205;
    org$pandalanguage$pandac$FieldDecl* f219;
    org$pandalanguage$pandac$ClassDecl* value341;
    panda$collections$ListView* valueVTable345;
    if (self->inClass.value) {
    {
        org$pandalanguage$pandac$HCodeGenerator$finish(self);
    }
    }
    (($fn179) self->typeImportStream->$class->vtable[20])(self->typeImportStream);
    (($fn180) self->typesBuffer->$class->vtable[20])(self->typesBuffer);
    (($fn181) self->bodyImportStream->$class->vtable[20])(self->bodyImportStream);
    (($fn182) self->bodyBuffer->$class->vtable[20])(self->bodyBuffer);
    (($fn183) self->typeImports->$class->vtable[5])(self->typeImports);
    (($fn184) self->bodyImports->$class->vtable[5])(self->bodyImports);
    self->inClass = ((panda$core$Bit) { true });
    panda$io$File* $tmp187 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s186);
    path185 = $tmp187;
    panda$io$File* $tmp188 = panda$io$File$parent$R$panda$io$File$Q(path185);
    panda$io$File$createDirectories($tmp188);
    panda$io$IndentedOutputStream* $tmp189 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp189->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp189->refCount.value = 1;
    panda$io$OutputStream* $tmp191 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path185);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp189, $tmp191);
    self->out = $tmp189;
    (($fn193) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s192);
    (($fn195) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s194);
    (($fn197) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s196);
    self->importStream = self->typeImportStream;
    self->imports = self->typeImports;
    panda$core$String* $tmp199 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s198, $tmp199);
    panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s201);
    (($fn203) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp202);
    panda$core$Int64 $tmp204 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp204;
    {
        panda$collections$ListView* $tmp207 = (($fn206) self->compiler->$class->vtable[10])(self->compiler, p_cl);
        ITable* $tmp208 = ((panda$collections$Iterable*) $tmp207)->$class->itable;
        while ($tmp208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp208 = $tmp208->next;
        }
        $fn210 $tmp209 = $tmp208->methods[0];
        panda$collections$Iterator* $tmp211 = $tmp209(((panda$collections$Iterable*) $tmp207));
        f$Iter205 = $tmp211;
        $l212:;
        ITable* $tmp214 = f$Iter205->$class->itable;
        while ($tmp214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp214 = $tmp214->next;
        }
        $fn216 $tmp215 = $tmp214->methods[0];
        panda$core$Bit $tmp217 = $tmp215(f$Iter205);
        panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
        if (!$tmp218.value) goto $l213;
        {
            ITable* $tmp220 = f$Iter205->$class->itable;
            while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp220 = $tmp220->next;
            }
            $fn222 $tmp221 = $tmp220->methods[1];
            panda$core$Object* $tmp223 = $tmp221(f$Iter205);
            f219 = ((org$pandalanguage$pandac$FieldDecl*) $tmp223);
            (($fn224) self->compiler->$class->vtable[7])(self->compiler, f219);
            panda$core$String* $tmp226 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f219->type);
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s225, $tmp226);
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s228);
            panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, ((org$pandalanguage$pandac$Symbol*) f219)->name);
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s231);
            (($fn233) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp232);
        }
        goto $l212;
        $l213:;
    }
    panda$core$Bit $tmp235 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s234);
    if ($tmp235.value) {
    {
        (($fn237) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s236);
        (($fn239) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s238);
        (($fn241) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s240);
    }
    }
    panda$core$Int64 $tmp242 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp242;
    panda$core$String* $tmp244 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, $tmp244);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
    (($fn248) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp247);
    (($fn250) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s249);
    (($fn252) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s251);
    (($fn254) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s253);
    org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp258 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp257);
    panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s256, $tmp258);
    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
    panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s255, $tmp261);
    panda$collections$ListView* $tmp265 = (($fn264) self->compiler->$class->vtable[21])(self->compiler, p_cl);
    ITable* $tmp266 = ((panda$collections$CollectionView*) $tmp265)->$class->itable;
    while ($tmp266->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp266 = $tmp266->next;
    }
    $fn268 $tmp267 = $tmp266->methods[0];
    panda$core$Int64 $tmp269 = $tmp267(((panda$collections$CollectionView*) $tmp265));
    panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s263, ((panda$core$Object*) wrap_panda$core$Int64($tmp269)));
    panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s271);
    panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, $tmp272);
    panda$core$String* $tmp275 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s274, $tmp275);
    panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s277);
    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, $tmp278);
    (($fn280) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp279);
    panda$core$String* $tmp282 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s281, $tmp282);
    panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s284);
    panda$core$String* $tmp286 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, $tmp286);
    panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp287, &$s288);
    (($fn290) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp289);
    panda$core$Bit $tmp292 = (($fn291) self->compiler->$class->vtable[9])(self->compiler, p_cl);
    if ($tmp292.value) {
    {
        panda$core$String* $tmp294 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s293, $tmp294);
        panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp295, &$s296);
        (($fn298) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp297);
        panda$core$Int64 $tmp299 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp299;
        (($fn301) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s300);
        (($fn303) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s302);
        org$pandalanguage$pandac$Type* $tmp306 = (($fn305) p_cl->$class->vtable[3])(p_cl);
        panda$core$String* $tmp307 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp306);
        panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s304, $tmp307);
        panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s309);
        (($fn311) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp310);
        panda$core$Int64 $tmp312 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp312;
        panda$core$String* $tmp314 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s313, $tmp314);
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
        (($fn318) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp317);
        panda$core$String* $tmp320 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s319, $tmp320);
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s322);
        (($fn324) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp323);
        panda$core$Int64 $tmp325 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp325;
        panda$core$String* $tmp327 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s326, $tmp327);
        panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp328, &$s329);
        (($fn331) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp330);
        (($fn333) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s332);
        panda$core$Int64 $tmp334 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp334;
        panda$core$String* $tmp336 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s335, $tmp336);
        panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
        (($fn340) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp339);
        org$pandalanguage$pandac$Type* $tmp342 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp344 = (($fn343) self->compiler->$class->vtable[14])(self->compiler, $tmp342);
        value341 = $tmp344;
        panda$collections$ListView* $tmp347 = (($fn346) self->compiler->$class->vtable[21])(self->compiler, value341);
        valueVTable345 = $tmp347;
        panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s348, &$s349);
        ITable* $tmp352 = ((panda$collections$CollectionView*) valueVTable345)->$class->itable;
        while ($tmp352->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp352 = $tmp352->next;
        }
        $fn354 $tmp353 = $tmp352->methods[0];
        panda$core$Int64 $tmp355 = $tmp353(((panda$collections$CollectionView*) valueVTable345));
        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s351, ((panda$core$Object*) wrap_panda$core$Int64($tmp355)));
        panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s357);
        panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, $tmp358);
        panda$core$String* $tmp361 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, $tmp361);
        panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
        panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, $tmp364);
        (($fn366) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp365);
        panda$core$String* $tmp368 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s367, $tmp368);
        panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s370);
        panda$core$String* $tmp373 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s372, $tmp373);
        panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s375);
        panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, $tmp376);
        (($fn378) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp377);
        panda$core$String* $tmp380 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s379, $tmp380);
        panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s382);
        panda$core$String* $tmp384 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, $tmp384);
        panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, &$s386);
        panda$core$String* $tmp389 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s388, $tmp389);
        panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s391);
        panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, $tmp392);
        (($fn394) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp393);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result395;
    org$pandalanguage$pandac$Type* $tmp397 = (($fn396) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp398 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp397);
    result395 = $tmp398;
    panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp399 = $tmp400.value;
    if (!$tmp399) goto $l401;
    panda$core$Bit $tmp403 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result395, &$s402);
    panda$core$Bit $tmp404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp403);
    $tmp399 = $tmp404.value;
    $l401:;
    panda$core$Bit $tmp405 = { $tmp399 };
    if ($tmp405.value) {
    {
        panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result395, &$s406);
        return $tmp407;
    }
    }
    return result395;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result411;
    panda$core$Bit $tmp409 = (($fn408) p_m->returnType->$class->vtable[8])(p_m->returnType);
    panda$core$Bit $tmp410 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp409);
    if ($tmp410.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp415 = (($fn414) p_m->annotations->$class->vtable[7])(p_m->annotations);
    bool $tmp413 = $tmp415.value;
    if (!$tmp413) goto $l416;
    panda$core$Bit $tmp418 = (($fn417) p_m->returnType->$class->vtable[8])(p_m->returnType);
    $tmp413 = $tmp418.value;
    $l416:;
    panda$core$Bit $tmp419 = { $tmp413 };
    bool $tmp412 = $tmp419.value;
    if (!$tmp412) goto $l420;
    org$pandalanguage$pandac$ClassDecl* $tmp422 = (($fn421) self->compiler->$class->vtable[14])(self->compiler, p_m->returnType);
    panda$core$Bit $tmp424 = (($fn423) self->compiler->$class->vtable[9])(self->compiler, $tmp422);
    $tmp412 = $tmp424.value;
    $l420:;
    panda$core$Bit $tmp425 = { $tmp412 };
    result411 = $tmp425;
    return result411;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator426;
    panda$collections$Iterator* p$Iter463;
    org$pandalanguage$pandac$MethodDecl$Parameter* p475;
    self->importStream = self->bodyImportStream;
    self->imports = self->bodyImports;
    separator426 = &$s427;
    panda$core$Bit $tmp428 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp428.value) {
    {
        panda$core$String* $tmp430 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s429, $tmp430);
        panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, &$s432);
        panda$core$String* $tmp434 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, $tmp434);
        panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
        (($fn438) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp437);
        separator426 = &$s439;
    }
    }
    else {
    {
        panda$core$String* $tmp441 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s440, $tmp441);
        panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp442, &$s443);
        panda$core$String* $tmp445 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, $tmp445);
        panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s447);
        (($fn449) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp448);
    }
    }
    panda$core$Bit $tmp451 = (($fn450) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp451);
    if ($tmp452.value) {
    {
        panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s453, separator426);
        panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s455);
        panda$core$String* $tmp457 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, $tmp457);
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s459);
        (($fn461) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp460);
        separator426 = &$s462;
    }
    }
    {
        ITable* $tmp464 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp464 = $tmp464->next;
        }
        $fn466 $tmp465 = $tmp464->methods[0];
        panda$collections$Iterator* $tmp467 = $tmp465(((panda$collections$Iterable*) p_m->parameters));
        p$Iter463 = $tmp467;
        $l468:;
        ITable* $tmp470 = p$Iter463->$class->itable;
        while ($tmp470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp470 = $tmp470->next;
        }
        $fn472 $tmp471 = $tmp470->methods[0];
        panda$core$Bit $tmp473 = $tmp471(p$Iter463);
        panda$core$Bit $tmp474 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp473);
        if (!$tmp474.value) goto $l469;
        {
            ITable* $tmp476 = p$Iter463->$class->itable;
            while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp476 = $tmp476->next;
            }
            $fn478 $tmp477 = $tmp476->methods[1];
            panda$core$Object* $tmp479 = $tmp477(p$Iter463);
            p475 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp479);
            panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s480, separator426);
            panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s482);
            panda$core$String* $tmp484 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p475->type);
            panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, $tmp484);
            panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s486);
            panda$core$String* $tmp488 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p475->name);
            panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp487, $tmp488);
            panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, &$s490);
            (($fn492) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp491);
            separator426 = &$s493;
        }
        goto $l468;
        $l469:;
    }
    (($fn495) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s494);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn497) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s496);
    (($fn498) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typeImportStream));
    (($fn499) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typesBuffer));
    (($fn501) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s500);
    (($fn502) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyImportStream));
    (($fn503) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyBuffer));
    (($fn505) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s504);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}

