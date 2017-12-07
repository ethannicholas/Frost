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

typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn92)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn153)(panda$io$MemoryOutputStream*);
typedef void (*$fn154)(panda$io$MemoryOutputStream*);
typedef void (*$fn155)(panda$io$MemoryOutputStream*);
typedef void (*$fn156)(panda$io$MemoryOutputStream*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn175)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn181)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn193)(panda$collections$Iterator*);
typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn220)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn224)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn237)(panda$collections$CollectionView*);
typedef void (*$fn249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn307)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn319)(panda$collections$CollectionView*);
typedef void (*$fn331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn424)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn430)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn436)(panda$collections$Iterator*);
typedef void (*$fn450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn457)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn460)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn463)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x4C\x54", 3, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x47\x54", 3, 1 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x51", 2, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74", 3, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74", 2, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C", 4, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 1 };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 1 };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6D\x61\x20\x6F\x6E\x63\x65", 12, 1 };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x5F\x63\x2E\x68\x22", 20, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B", 2, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B", 24, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B", 15, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B\x5D\x3B", 15, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 1 };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x2F\x63\x6F\x72\x65\x2F\x43\x6C\x61\x73\x73\x2E\x68\x22", 29, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 1 };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 24, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 12, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 1 };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 12, 1 };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 1 };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7B", 10, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B", 21, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B", 17, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3B", 9, 1 };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 1 };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x7B", 11, 1 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20\x6E\x6F\x6E\x6E\x75\x6C\x6C\x3B", 13, 1 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 1 };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x3B", 10, 1 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 1 };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 41, 1 };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 1 };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 1 };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 19, 1 };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 1 };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 19, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, 1 };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, 1 };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x3B", 7, 1 };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x72\x65\x73\x75\x6C\x74", 8, 1 };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 1 };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, 1 };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x66\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 1 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x65\x6E\x64\x69\x66", 6, 1 };

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
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp28;
    panda$core$String* $tmp27 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName26 = $tmp27;
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp28, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp29 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName26, $tmp28);
    return $tmp29;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp30 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp30;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp33 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s31, &$s32);
    panda$core$String* $tmp36 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp33, &$s34, &$s35);
    panda$core$String* $tmp39 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp36, &$s37, &$s38);
    panda$core$String* $tmp42 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp39, &$s40, &$s41);
    panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, p_extension);
    return $tmp43;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$140144;
    panda$core$String* name61;
    org$pandalanguage$pandac$ClassDecl* cl67;
    panda$core$String* includePath83;
    org$pandalanguage$pandac$ClassDecl* cl94;
    org$pandalanguage$pandac$ClassDecl* cl111;
    panda$core$String* name114;
    org$pandalanguage$pandac$ClassDecl* cl120;
    panda$core$String* includePath136;
    {
        $match$140144 = p_t->typeKind;
        panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 14 }));
        if ($tmp45.value) {
        {
            return &$s46;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 12 }));
        bool $tmp47 = $tmp48.value;
        if ($tmp47) goto $l49;
        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 13 }));
        $tmp47 = $tmp50.value;
        $l49:;
        panda$core$Bit $tmp51 = { $tmp47 };
        if ($tmp51.value) {
        {
            panda$core$Int64 $tmp53 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp54 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp53, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s52, ((panda$core$Object*) wrap_panda$core$Int64($tmp54)));
            panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s56);
            return $tmp57;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 19 }));
        if ($tmp58.value) {
        {
            return &$s59;
        }
        }
        else {
        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 10 }));
        if ($tmp60.value) {
        {
            panda$core$String* $tmp63 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s62, $tmp63);
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            name61 = $tmp66;
            org$pandalanguage$pandac$ClassDecl* $tmp68 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl67 = $tmp68;
            panda$core$Bit $tmp69 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl67);
            panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp69);
            if ($tmp70.value) {
            {
                panda$core$Bit $tmp71 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name61));
                panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
                if ($tmp72.value) {
                {
                    panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s73, name61);
                    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s75);
                    panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, name61);
                    panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
                    (($fn80) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp79);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name61));
                }
                }
                panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name61, &$s81);
                return $tmp82;
            }
            }
            panda$core$String* $tmp85 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl67, &$s84);
            includePath83 = $tmp85;
            panda$core$Bit $tmp86 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath83));
            panda$core$Bit $tmp87 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp86);
            if ($tmp87.value) {
            {
                panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s88, includePath83);
                panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s90);
                (($fn92) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp91);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath83));
            }
            }
            return name61;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 11 }));
        if ($tmp93.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp95 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl94 = $tmp95;
            panda$core$Bit $tmp96 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl94);
            if ($tmp96.value) {
            {
                panda$core$Object* $tmp97 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp98 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp97));
                panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
                return $tmp100;
            }
            }
            panda$core$Object* $tmp101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp102 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp101));
            return $tmp102;
        }
        }
        else {
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 21 }));
        if ($tmp103.value) {
        {
            panda$core$Object* $tmp104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp106 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp104))->name, &$s105);
            if ($tmp106.value) {
            {
                panda$core$Object* $tmp107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp108 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp107));
                panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
                return $tmp110;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp112 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl111 = $tmp112;
            panda$core$Bit $tmp113 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl111);
            if ($tmp113.value) {
            {
                panda$core$String* $tmp116 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s115, $tmp116);
                panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp117, &$s118);
                name114 = $tmp119;
                org$pandalanguage$pandac$ClassDecl* $tmp121 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl120 = $tmp121;
                panda$core$Bit $tmp122 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl120);
                panda$core$Bit $tmp123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp122);
                if ($tmp123.value) {
                {
                    panda$core$Bit $tmp124 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name114));
                    panda$core$Bit $tmp125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp124);
                    if ($tmp125.value) {
                    {
                        panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s126, name114);
                        panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s128);
                        panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, name114);
                        panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, &$s131);
                        (($fn133) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp132);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name114));
                    }
                    }
                    panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name114, &$s134);
                    return $tmp135;
                }
                }
                panda$core$String* $tmp138 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl120, &$s137);
                includePath136 = $tmp138;
                panda$core$Bit $tmp139 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath136));
                panda$core$Bit $tmp140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp139);
                if ($tmp140.value) {
                {
                    panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s141, includePath136);
                    panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s143);
                    (($fn145) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp144);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath136));
                }
                }
                return name114;
            }
            }
            panda$core$Object* $tmp146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp147 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp146));
            return $tmp147;
        }
        }
        else {
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140144, ((panda$core$Int64) { 22 }));
        if ($tmp148.value) {
        {
            panda$core$Object* $tmp149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp150 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp149));
            return $tmp150;
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
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp151 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp152 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp151);
    return $tmp152;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path157;
    panda$collections$Iterator* f$Iter177;
    org$pandalanguage$pandac$FieldDecl* f190;
    org$pandalanguage$pandac$ClassDecl* value308;
    panda$collections$ListView* valueVTable311;
    if (self->inClass.value) {
    {
        org$pandalanguage$pandac$HCodeGenerator$finish(self);
    }
    }
    (($fn153) self->typeImportStream->$class->vtable[20])(self->typeImportStream);
    (($fn154) self->typesBuffer->$class->vtable[20])(self->typesBuffer);
    (($fn155) self->bodyImportStream->$class->vtable[20])(self->bodyImportStream);
    (($fn156) self->bodyBuffer->$class->vtable[20])(self->bodyBuffer);
    panda$collections$Set$clear(self->typeImports);
    panda$collections$Set$clear(self->bodyImports);
    self->inClass = ((panda$core$Bit) { true });
    panda$io$File* $tmp159 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s158);
    path157 = $tmp159;
    panda$io$File* $tmp160 = panda$io$File$parent$R$panda$io$File$Q(path157);
    panda$io$File$createDirectories($tmp160);
    panda$io$IndentedOutputStream* $tmp161 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp161->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp161->refCount.value = 1;
    panda$io$OutputStream* $tmp163 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path157);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp161, $tmp163);
    self->out = $tmp161;
    (($fn165) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s164);
    (($fn167) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s166);
    (($fn169) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s168);
    self->importStream = self->typeImportStream;
    self->imports = self->typeImports;
    panda$core$String* $tmp171 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, $tmp171);
    panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s173);
    (($fn175) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp174);
    panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp176;
    {
        panda$collections$ListView* $tmp178 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp179 = ((panda$collections$Iterable*) $tmp178)->$class->itable;
        while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp179 = $tmp179->next;
        }
        $fn181 $tmp180 = $tmp179->methods[0];
        panda$collections$Iterator* $tmp182 = $tmp180(((panda$collections$Iterable*) $tmp178));
        f$Iter177 = $tmp182;
        $l183:;
        ITable* $tmp185 = f$Iter177->$class->itable;
        while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp185 = $tmp185->next;
        }
        $fn187 $tmp186 = $tmp185->methods[0];
        panda$core$Bit $tmp188 = $tmp186(f$Iter177);
        panda$core$Bit $tmp189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp188);
        if (!$tmp189.value) goto $l184;
        {
            ITable* $tmp191 = f$Iter177->$class->itable;
            while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp191 = $tmp191->next;
            }
            $fn193 $tmp192 = $tmp191->methods[1];
            panda$core$Object* $tmp194 = $tmp192(f$Iter177);
            f190 = ((org$pandalanguage$pandac$FieldDecl*) $tmp194);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f190);
            panda$core$String* $tmp196 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f190->type);
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s195, $tmp196);
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, ((org$pandalanguage$pandac$Symbol*) f190)->name);
            panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s201);
            (($fn203) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp202);
        }
        goto $l183;
        $l184:;
    }
    panda$core$Bit $tmp205 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s204);
    if ($tmp205.value) {
    {
        (($fn207) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s206);
        (($fn209) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s208);
        (($fn211) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s210);
    }
    }
    panda$core$Int64 $tmp212 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp212;
    panda$core$String* $tmp214 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s213, $tmp214);
    panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp215, &$s216);
    (($fn218) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp217);
    (($fn220) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s219);
    (($fn222) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s221);
    (($fn224) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s223);
    org$pandalanguage$pandac$Type* $tmp227 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp228 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp227);
    panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s226, $tmp228);
    panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s230);
    panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s225, $tmp231);
    panda$collections$ListView* $tmp234 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp235 = ((panda$collections$CollectionView*) $tmp234)->$class->itable;
    while ($tmp235->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp235 = $tmp235->next;
    }
    $fn237 $tmp236 = $tmp235->methods[0];
    panda$core$Int64 $tmp238 = $tmp236(((panda$collections$CollectionView*) $tmp234));
    panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s233, ((panda$core$Object*) wrap_panda$core$Int64($tmp238)));
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
    panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, $tmp241);
    panda$core$String* $tmp244 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, $tmp244);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, $tmp247);
    (($fn249) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp248);
    panda$core$String* $tmp251 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s250, $tmp251);
    panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp252, &$s253);
    panda$core$String* $tmp255 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, $tmp255);
    panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s257);
    (($fn259) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp258);
    panda$core$Bit $tmp260 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp260.value) {
    {
        panda$core$String* $tmp262 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s261, $tmp262);
        panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s264);
        (($fn266) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp265);
        panda$core$Int64 $tmp267 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp267;
        (($fn269) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s268);
        (($fn271) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s270);
        org$pandalanguage$pandac$Type* $tmp273 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp274 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp273);
        panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s272, $tmp274);
        panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s276);
        (($fn278) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp277);
        panda$core$Int64 $tmp279 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp279;
        panda$core$String* $tmp281 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s280, $tmp281);
        panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
        (($fn285) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp284);
        panda$core$String* $tmp287 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s286, $tmp287);
        panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s289);
        (($fn291) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp290);
        panda$core$Int64 $tmp292 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp292;
        panda$core$String* $tmp294 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s293, $tmp294);
        panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp295, &$s296);
        (($fn298) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp297);
        (($fn300) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s299);
        panda$core$Int64 $tmp301 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp301;
        panda$core$String* $tmp303 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s302, $tmp303);
        panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s305);
        (($fn307) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp306);
        org$pandalanguage$pandac$Type* $tmp309 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp310 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp309);
        value308 = $tmp310;
        panda$collections$ListView* $tmp312 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value308);
        valueVTable311 = $tmp312;
        panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s313, &$s314);
        ITable* $tmp317 = ((panda$collections$CollectionView*) valueVTable311)->$class->itable;
        while ($tmp317->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp317 = $tmp317->next;
        }
        $fn319 $tmp318 = $tmp317->methods[0];
        panda$core$Int64 $tmp320 = $tmp318(((panda$collections$CollectionView*) valueVTable311));
        panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s316, ((panda$core$Object*) wrap_panda$core$Int64($tmp320)));
        panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s322);
        panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, $tmp323);
        panda$core$String* $tmp326 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s325, $tmp326);
        panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s328);
        panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, $tmp329);
        (($fn331) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp330);
        panda$core$String* $tmp333 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s332, $tmp333);
        panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s335);
        panda$core$String* $tmp338 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s337, $tmp338);
        panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, &$s340);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, $tmp341);
        (($fn343) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp342);
        panda$core$String* $tmp345 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s344, $tmp345);
        panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s347);
        panda$core$String* $tmp349 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, $tmp349);
        panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s351);
        panda$core$String* $tmp354 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s353, $tmp354);
        panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s356);
        panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, $tmp357);
        (($fn359) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp358);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result360;
    org$pandalanguage$pandac$Type* $tmp361 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp362 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp361);
    result360 = $tmp362;
    panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp363 = $tmp364.value;
    if (!$tmp363) goto $l365;
    panda$core$Bit $tmp367 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result360, &$s366);
    panda$core$Bit $tmp368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp367);
    $tmp363 = $tmp368.value;
    $l365:;
    panda$core$Bit $tmp369 = { $tmp363 };
    if ($tmp369.value) {
    {
        panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result360, &$s370);
        return $tmp371;
    }
    }
    return result360;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result374;
    panda$core$Bit $tmp372 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp372);
    if ($tmp373.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp377 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp376 = $tmp377.value;
    if (!$tmp376) goto $l378;
    panda$core$Bit $tmp379 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp376 = $tmp379.value;
    $l378:;
    panda$core$Bit $tmp380 = { $tmp376 };
    bool $tmp375 = $tmp380.value;
    if (!$tmp375) goto $l381;
    org$pandalanguage$pandac$ClassDecl* $tmp382 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp383 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp382);
    $tmp375 = $tmp383.value;
    $l381:;
    panda$core$Bit $tmp384 = { $tmp375 };
    result374 = $tmp384;
    return result374;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator385;
    panda$collections$Iterator* p$Iter421;
    org$pandalanguage$pandac$MethodDecl$Parameter* p433;
    self->importStream = self->bodyImportStream;
    self->imports = self->bodyImports;
    separator385 = &$s386;
    panda$core$Bit $tmp387 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp387.value) {
    {
        panda$core$String* $tmp389 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s388, $tmp389);
        panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s391);
        panda$core$String* $tmp393 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, $tmp393);
        panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s395);
        (($fn397) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp396);
        separator385 = &$s398;
    }
    }
    else {
    {
        panda$core$String* $tmp400 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s399, $tmp400);
        panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
        panda$core$String* $tmp404 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, $tmp404);
        panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
        (($fn408) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp407);
    }
    }
    panda$core$Bit $tmp409 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp410 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp409);
    if ($tmp410.value) {
    {
        panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, separator385);
        panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
        panda$core$String* $tmp415 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, $tmp415);
        panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
        (($fn419) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp418);
        separator385 = &$s420;
    }
    }
    {
        ITable* $tmp422 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp422 = $tmp422->next;
        }
        $fn424 $tmp423 = $tmp422->methods[0];
        panda$collections$Iterator* $tmp425 = $tmp423(((panda$collections$Iterable*) p_m->parameters));
        p$Iter421 = $tmp425;
        $l426:;
        ITable* $tmp428 = p$Iter421->$class->itable;
        while ($tmp428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp428 = $tmp428->next;
        }
        $fn430 $tmp429 = $tmp428->methods[0];
        panda$core$Bit $tmp431 = $tmp429(p$Iter421);
        panda$core$Bit $tmp432 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp431);
        if (!$tmp432.value) goto $l427;
        {
            ITable* $tmp434 = p$Iter421->$class->itable;
            while ($tmp434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp434 = $tmp434->next;
            }
            $fn436 $tmp435 = $tmp434->methods[1];
            panda$core$Object* $tmp437 = $tmp435(p$Iter421);
            p433 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp437);
            panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s438, separator385);
            panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s440);
            panda$core$String* $tmp442 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p433->type);
            panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, $tmp442);
            panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
            panda$core$String* $tmp446 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p433->name);
            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, $tmp446);
            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s448);
            (($fn450) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp449);
            separator385 = &$s451;
        }
        goto $l426;
        $l427:;
    }
    (($fn453) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s452);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn455) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s454);
    (($fn456) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typeImportStream));
    (($fn457) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->typesBuffer));
    (($fn459) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s458);
    (($fn460) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyImportStream));
    (($fn461) ((panda$io$OutputStream*) self->out)->$class->vtable[18])(((panda$io$OutputStream*) self->out), ((panda$core$Object*) self->bodyBuffer));
    (($fn463) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s462);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}

