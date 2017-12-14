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
#include "panda/collections/Key.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/IRNode.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef void (*$fn87)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn99)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn137)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn173)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn191)(panda$collections$Iterator*);
typedef void (*$fn200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn208)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn221)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn233)(panda$collections$CollectionView*);
typedef void (*$fn244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn300)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn312)(panda$collections$CollectionView*);
typedef void (*$fn323)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn348)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn420)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn437)(panda$collections$Iterator*);
typedef void (*$fn450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn467)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x4C\x54", 3, 1507307, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x47\x54", 3, 1506802, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x51", 2, 14928, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 145, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x43", 2, 14914, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74", 3, 2112632, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74", 2, 19912, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x69\x6E\x74", 4, 225687949, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74", 2, 19912, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C", 4, 206173529, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6C\x6F\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x75\x62\x6C\x65", 6, 2124202461136, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 14951, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 14951, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 14951, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6D\x61\x20\x6F\x6E\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x5F\x63\x2E\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B", 2, 13556, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B", 24, 4222731004450900160, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B", 15, -8241052240123179492, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B\x5D\x3B", 15, -9098552628456137650, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 22858, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6E\x65\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22\x70\x61\x6E\x64\x61\x2F\x63\x6F\x72\x65\x2F\x43\x6C\x61\x73\x73\x2E\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 6717043003744978738, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 20248844642, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 12, -7792097500760480153, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 215700458722495, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 146480100229230, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7B", 10, 3561855747138321733, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B", 21, -6601947243355683084, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B", 17, -4679513013374136619, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 142432578224233, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 22858, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3B", 9, 1496394141948660765, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x7B", 11, -550213747663851793, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x76\x61\x6C\x75\x65\x3B", 7, 142432578224233, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20\x6E\x6F\x6E\x6E\x75\x6C\x6C\x3B", 13, -7076984795403153902, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20", 2, 22858, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x3B", 10, 3464731917354630015, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7B\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x63\x6C\x3B\x20\x69\x6E\x74\x33\x32\x5F\x74\x20\x72\x65\x66\x43\x6F\x75\x6E\x74\x3B\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x73\x75\x70\x65\x72\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 41, -8662367119082393781, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x76\x74\x61\x62\x6C\x65\x5B", 13, 6717043003744978738, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 20248844642, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x3B", 19, -2708419327357398444, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6E\x20", 7, 215700458722495, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x5F\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, -3925411815915941145, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, -9085029162737573691, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x3B", 7, 142401464005259, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x72\x65\x73\x75\x6C\x74", 8, 15366712961196246, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 13959559259, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1368140, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x75\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x66\x6E\x64\x65\x66\x20\x50\x41\x4E\x44\x41\x5F\x54\x59\x50\x45\x53\x4F\x4E\x4C\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x65\x6E\x64\x69\x66", 6, 1439998132554, NULL };

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
    panda$io$IndentedOutputStream* $tmp5 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(56);
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
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp17 = (org$pandalanguage$pandac$LLVMCodeGenerator*) malloc(200);
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
    panda$io$IndentedOutputStream* $tmp21 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp30, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
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
    panda$core$String* $tmp47 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp44, &$s45, &$s46);
    panda$core$String* $tmp50 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp47, &$s48, &$s49);
    panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, p_extension);
    return $tmp51;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name69;
    org$pandalanguage$pandac$ClassDecl* cl74;
    panda$core$String* includePath90;
    org$pandalanguage$pandac$ClassDecl* cl100;
    org$pandalanguage$pandac$ClassDecl* cl116;
    panda$core$String* name119;
    org$pandalanguage$pandac$ClassDecl* cl124;
    panda$core$String* includePath140;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s52;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp54 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp55 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp54, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s53, ((panda$core$Object*) wrap_panda$core$Int64($tmp55)));
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
            return $tmp58;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp60 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp61 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp60, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s59, ((panda$core$Object*) wrap_panda$core$Int64($tmp61)));
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
            return $tmp64;
        }
        break;
        case 19:
        {
            return &$s65;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp66 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp66.value) {
                case 4:
                {
                    return &$s67;
                }
                break;
                case 8:
                {
                    return &$s68;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        break;
        case 10:
        {
            panda$core$String* $tmp70 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp71 = panda$core$String$convert$R$panda$core$String($tmp70);
            panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s72);
            name69 = $tmp73;
            org$pandalanguage$pandac$ClassDecl* $tmp75 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl74 = $tmp75;
            PANDA_ASSERT(((panda$core$Bit) { cl74 != NULL }).value);
            panda$core$Bit $tmp76 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl74);
            panda$core$Bit $tmp77 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp76);
            if ($tmp77.value) {
            {
                panda$core$Bit $tmp78 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name69));
                panda$core$Bit $tmp79 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp78);
                if ($tmp79.value) {
                {
                    panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s80, name69);
                    panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp81, &$s82);
                    panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, name69);
                    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s85);
                    (($fn87) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp86);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name69));
                }
                }
                panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name69, &$s88);
                return $tmp89;
            }
            }
            panda$core$String* $tmp92 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl74, &$s91);
            includePath90 = $tmp92;
            panda$core$Bit $tmp93 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath90));
            panda$core$Bit $tmp94 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp93);
            if ($tmp94.value) {
            {
                panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s95, includePath90);
                panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, &$s97);
                (($fn99) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp98);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath90));
            }
            }
            return name69;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp101 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl100 = $tmp101;
            PANDA_ASSERT(((panda$core$Bit) { cl100 != NULL }).value);
            panda$core$Bit $tmp102 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl100);
            if ($tmp102.value) {
            {
                panda$core$Object* $tmp103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp104 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp103));
                panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s105);
                return $tmp106;
            }
            }
            panda$core$Object* $tmp107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp108 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp107));
            return $tmp108;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp111 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp109))->name, &$s110);
            if ($tmp111.value) {
            {
                panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp113 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp112));
                panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, &$s114);
                return $tmp115;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp117 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl116 = $tmp117;
            panda$core$Bit $tmp118 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl116);
            if ($tmp118.value) {
            {
                panda$core$String* $tmp120 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp121 = panda$core$String$convert$R$panda$core$String($tmp120);
                panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
                name119 = $tmp123;
                org$pandalanguage$pandac$ClassDecl* $tmp125 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl124 = $tmp125;
                PANDA_ASSERT(((panda$core$Bit) { cl124 != NULL }).value);
                panda$core$Bit $tmp126 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl124);
                panda$core$Bit $tmp127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp126);
                if ($tmp127.value) {
                {
                    panda$core$Bit $tmp128 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name119));
                    panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp128);
                    if ($tmp129.value) {
                    {
                        panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s130, name119);
                        panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
                        panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, name119);
                        panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
                        (($fn137) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp136);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name119));
                    }
                    }
                    panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name119, &$s138);
                    return $tmp139;
                }
                }
                panda$core$String* $tmp142 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl124, &$s141);
                includePath140 = $tmp142;
                panda$core$Bit $tmp143 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath140));
                panda$core$Bit $tmp144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp143);
                if ($tmp144.value) {
                {
                    panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s145, includePath140);
                    panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
                    (($fn149) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp148);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath140));
                }
                }
                return name119;
            }
            }
            panda$core$Object* $tmp150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp151 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp150));
            return $tmp151;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp152 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp152;
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
    panda$core$String* $tmp153 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp154 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp153);
    return $tmp154;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path155;
    panda$collections$Iterator* f$Iter175;
    org$pandalanguage$pandac$FieldDecl* f188;
    org$pandalanguage$pandac$ClassDecl* value301;
    panda$collections$ListView* valueVTable304;
    if (self->inClass.value) {
    {
        org$pandalanguage$pandac$HCodeGenerator$finish(self);
    }
    }
    panda$io$MemoryOutputStream$clear(self->typeImportStream);
    panda$io$MemoryOutputStream$clear(self->typesBuffer);
    panda$io$MemoryOutputStream$clear(self->bodyImportStream);
    panda$io$MemoryOutputStream$clear(self->bodyBuffer);
    panda$collections$Set$clear(self->typeImports);
    panda$collections$Set$clear(self->bodyImports);
    self->inClass = ((panda$core$Bit) { true });
    panda$io$File* $tmp157 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s156);
    path155 = $tmp157;
    panda$io$File* $tmp158 = panda$io$File$parent$R$panda$io$File$Q(path155);
    panda$io$File$createDirectories($tmp158);
    panda$io$IndentedOutputStream* $tmp159 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp159->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp159->refCount.value = 1;
    panda$io$OutputStream* $tmp161 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path155);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp159, $tmp161);
    self->out = $tmp159;
    (($fn163) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s162);
    (($fn165) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s164);
    (($fn167) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s166);
    self->importStream = self->typeImportStream;
    self->imports = self->typeImports;
    panda$core$String* $tmp169 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s168, $tmp169);
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s171);
    (($fn173) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp172);
    panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp174;
    {
        panda$collections$ListView* $tmp176 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, p_cl);
        ITable* $tmp177 = ((panda$collections$Iterable*) $tmp176)->$class->itable;
        while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp177 = $tmp177->next;
        }
        $fn179 $tmp178 = $tmp177->methods[0];
        panda$collections$Iterator* $tmp180 = $tmp178(((panda$collections$Iterable*) $tmp176));
        f$Iter175 = $tmp180;
        $l181:;
        ITable* $tmp183 = f$Iter175->$class->itable;
        while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp183 = $tmp183->next;
        }
        $fn185 $tmp184 = $tmp183->methods[0];
        panda$core$Bit $tmp186 = $tmp184(f$Iter175);
        panda$core$Bit $tmp187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp186);
        if (!$tmp187.value) goto $l182;
        {
            ITable* $tmp189 = f$Iter175->$class->itable;
            while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp189 = $tmp189->next;
            }
            $fn191 $tmp190 = $tmp189->methods[1];
            panda$core$Object* $tmp192 = $tmp190(f$Iter175);
            f188 = ((org$pandalanguage$pandac$FieldDecl*) $tmp192);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f188);
            panda$core$String* $tmp193 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f188->type);
            panda$core$String* $tmp194 = panda$core$String$convert$R$panda$core$String($tmp193);
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s195);
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, ((org$pandalanguage$pandac$Symbol*) f188)->name);
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            (($fn200) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp199);
        }
        goto $l181;
        $l182:;
    }
    panda$core$Bit $tmp202 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s201);
    if ($tmp202.value) {
    {
        (($fn204) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s203);
        (($fn206) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s205);
        (($fn208) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s207);
    }
    }
    panda$core$Int64 $tmp209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp209;
    panda$core$String* $tmp211 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s210, $tmp211);
    panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s213);
    (($fn215) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp214);
    (($fn217) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s216);
    (($fn219) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s218);
    (($fn221) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s220);
    org$pandalanguage$pandac$Type* $tmp223 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp224 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp223);
    panda$core$String* $tmp225 = panda$core$String$convert$R$panda$core$String($tmp224);
    panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
    panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s222, $tmp227);
    panda$collections$ListView* $tmp230 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
    ITable* $tmp231 = ((panda$collections$CollectionView*) $tmp230)->$class->itable;
    while ($tmp231->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp231 = $tmp231->next;
    }
    $fn233 $tmp232 = $tmp231->methods[0];
    panda$core$Int64 $tmp234 = $tmp232(((panda$collections$CollectionView*) $tmp230));
    panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s229, ((panda$core$Object*) wrap_panda$core$Int64($tmp234)));
    panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
    panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, $tmp237);
    panda$core$String* $tmp239 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp240 = panda$core$String$convert$R$panda$core$String($tmp239);
    panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, $tmp242);
    (($fn244) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp243);
    panda$core$String* $tmp246 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s245, $tmp246);
    panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
    panda$core$String* $tmp250 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, $tmp250);
    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
    (($fn254) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp253);
    panda$core$Bit $tmp255 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp255.value) {
    {
        panda$core$String* $tmp257 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s256, $tmp257);
        panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
        (($fn261) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp260);
        panda$core$Int64 $tmp262 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp262;
        (($fn264) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s263);
        (($fn266) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s265);
        org$pandalanguage$pandac$Type* $tmp267 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp268 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp267);
        panda$core$String* $tmp269 = panda$core$String$convert$R$panda$core$String($tmp268);
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
        panda$core$String* $tmp287 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp288 = panda$core$String$convert$R$panda$core$String($tmp287);
        panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s289);
        (($fn291) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp290);
        (($fn293) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s292);
        panda$core$Int64 $tmp294 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp294;
        panda$core$String* $tmp296 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s295, $tmp296);
        panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s298);
        (($fn300) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp299);
        org$pandalanguage$pandac$Type* $tmp302 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp303 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp302);
        value301 = $tmp303;
        panda$collections$ListView* $tmp305 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value301);
        valueVTable304 = $tmp305;
        panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s306, &$s307);
        ITable* $tmp310 = ((panda$collections$CollectionView*) valueVTable304)->$class->itable;
        while ($tmp310->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp310 = $tmp310->next;
        }
        $fn312 $tmp311 = $tmp310->methods[0];
        panda$core$Int64 $tmp313 = $tmp311(((panda$collections$CollectionView*) valueVTable304));
        panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s309, ((panda$core$Object*) wrap_panda$core$Int64($tmp313)));
        panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, &$s315);
        panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, $tmp316);
        panda$core$String* $tmp318 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp319 = panda$core$String$convert$R$panda$core$String($tmp318);
        panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s320);
        panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, $tmp321);
        (($fn323) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp322);
        panda$core$String* $tmp325 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s324, $tmp325);
        panda$core$String* $tmp328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s327);
        panda$core$String* $tmp329 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp330 = panda$core$String$convert$R$panda$core$String($tmp329);
        panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
        panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp328, $tmp332);
        (($fn334) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp333);
        panda$core$String* $tmp335 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp336 = panda$core$String$convert$R$panda$core$String($tmp335);
        panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
        panda$core$String* $tmp339 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, $tmp339);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
        panda$core$String* $tmp343 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp344 = panda$core$String$convert$R$panda$core$String($tmp343);
        panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s345);
        panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, $tmp346);
        (($fn348) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp347);
    }
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result349;
    org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp351 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp350);
    result349 = $tmp351;
    panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp352 = $tmp353.value;
    if (!$tmp352) goto $l354;
    panda$core$Bit $tmp356 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result349, &$s355);
    panda$core$Bit $tmp357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp356);
    $tmp352 = $tmp357.value;
    $l354:;
    panda$core$Bit $tmp358 = { $tmp352 };
    if ($tmp358.value) {
    {
        panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result349, &$s359);
        return $tmp360;
    }
    }
    return result349;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result363;
    panda$core$Bit $tmp361 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp361);
    if ($tmp362.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp366 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp365 = $tmp366.value;
    if (!$tmp365) goto $l367;
    panda$core$Bit $tmp368 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp365 = $tmp368.value;
    $l367:;
    panda$core$Bit $tmp369 = { $tmp365 };
    bool $tmp364 = $tmp369.value;
    if (!$tmp364) goto $l370;
    org$pandalanguage$pandac$ClassDecl* $tmp371 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp372 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp371);
    $tmp364 = $tmp372.value;
    $l370:;
    panda$core$Bit $tmp373 = { $tmp364 };
    result363 = $tmp373;
    panda$core$Bit $tmp375 = panda$core$Bit$$NOT$R$panda$core$Bit(result363);
    bool $tmp374 = $tmp375.value;
    if ($tmp374) goto $l376;
    panda$core$Bit $tmp378 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
    bool $tmp377 = $tmp379.value;
    if (!$tmp377) goto $l380;
    panda$core$Bit $tmp382 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp381 = $tmp382.value;
    if ($tmp381) goto $l383;
    panda$core$Bit $tmp384 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp381 = $tmp384.value;
    $l383:;
    panda$core$Bit $tmp385 = { $tmp381 };
    $tmp377 = $tmp385.value;
    $l380:;
    panda$core$Bit $tmp386 = { $tmp377 };
    $tmp374 = $tmp386.value;
    $l376:;
    panda$core$Bit $tmp387 = { $tmp374 };
    PANDA_ASSERT($tmp387.value);
    return result363;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator388;
    panda$collections$Iterator* p$Iter422;
    org$pandalanguage$pandac$MethodDecl$Parameter* p434;
    self->importStream = self->bodyImportStream;
    self->imports = self->bodyImports;
    separator388 = &$s389;
    panda$core$Bit $tmp390 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp390.value) {
    {
        panda$core$String* $tmp392 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s391, $tmp392);
        panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, &$s394);
        panda$core$String* $tmp396 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, $tmp396);
        panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
        (($fn400) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp399);
        separator388 = &$s401;
    }
    }
    else {
    {
        panda$core$String* $tmp402 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp403 = panda$core$String$convert$R$panda$core$String($tmp402);
        panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
        panda$core$String* $tmp406 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, $tmp406);
        panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
        (($fn410) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp409);
    }
    }
    panda$core$Bit $tmp411 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp411);
    if ($tmp412.value) {
    {
        panda$core$String* $tmp413 = panda$core$String$convert$R$panda$core$String(separator388);
        panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
        panda$core$String* $tmp416 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, $tmp416);
        panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
        (($fn420) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp419);
        separator388 = &$s421;
    }
    }
    {
        ITable* $tmp423 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp423 = $tmp423->next;
        }
        $fn425 $tmp424 = $tmp423->methods[0];
        panda$collections$Iterator* $tmp426 = $tmp424(((panda$collections$Iterable*) p_m->parameters));
        p$Iter422 = $tmp426;
        $l427:;
        ITable* $tmp429 = p$Iter422->$class->itable;
        while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp429 = $tmp429->next;
        }
        $fn431 $tmp430 = $tmp429->methods[0];
        panda$core$Bit $tmp432 = $tmp430(p$Iter422);
        panda$core$Bit $tmp433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp432);
        if (!$tmp433.value) goto $l428;
        {
            ITable* $tmp435 = p$Iter422->$class->itable;
            while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp435 = $tmp435->next;
            }
            $fn437 $tmp436 = $tmp435->methods[1];
            panda$core$Object* $tmp438 = $tmp436(p$Iter422);
            p434 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp438);
            panda$core$String* $tmp439 = panda$core$String$convert$R$panda$core$String(separator388);
            panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s440);
            panda$core$String* $tmp442 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p434->type);
            panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, $tmp442);
            panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
            panda$core$String* $tmp446 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p434->name);
            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, $tmp446);
            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s448);
            (($fn450) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp449);
            separator388 = &$s451;
        }
        goto $l427;
        $l428:;
    }
    (($fn453) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s452);
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn455) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s454);
    panda$core$String* $tmp456 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn457) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp456);
    panda$core$String* $tmp458 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn459) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp458);
    (($fn461) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s460);
    panda$core$String* $tmp462 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn463) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp462);
    panda$core$String* $tmp464 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn465) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp464);
    (($fn467) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s466);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}

