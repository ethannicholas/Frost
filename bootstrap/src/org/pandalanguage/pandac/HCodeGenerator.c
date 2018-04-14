#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
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
org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef panda$core$Object* (*$fn67)(panda$core$Weak*);
typedef panda$core$Object* (*$fn70)(panda$core$Weak*);
typedef void (*$fn83)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn96)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn99)(panda$core$Weak*);
typedef panda$core$Object* (*$fn102)(panda$core$Weak*);
typedef panda$core$Object* (*$fn121)(panda$core$Weak*);
typedef panda$core$Object* (*$fn131)(panda$core$Weak*);
typedef panda$core$Object* (*$fn134)(panda$core$Weak*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn188)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn191)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn196)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn210)(panda$core$Weak*);
typedef void (*$fn223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn254)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn268)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn273)(panda$collections$CollectionView*);
typedef void (*$fn285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn295)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn296)(panda$core$Weak*);
typedef void (*$fn304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn328)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn343)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn345)(panda$core$Weak*);
typedef panda$core$Object* (*$fn350)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn359)(panda$collections$CollectionView*);
typedef void (*$fn371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn382)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn407)(panda$core$Weak*);
typedef panda$core$Object* (*$fn409)(panda$core$Weak*);
typedef void (*$fn440)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn450)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn460)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn465)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn471)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn477)(panda$collections$Iterator*);
typedef void (*$fn490)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn507)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b", 24, -3891582111104392533, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b", 24, 4222731004450900160, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
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
    self->llvmCodeGen = NULL;
    panda$io$MemoryOutputStream* $tmp2 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp2);
    self->typeImportStream = $tmp2;
    panda$io$MemoryOutputStream* $tmp3 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp3);
    self->typesBuffer = $tmp3;
    panda$io$IndentedOutputStream* $tmp4 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp4, ((panda$io$OutputStream*) self->typesBuffer));
    self->types = $tmp4;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp5);
    self->bodyImportStream = $tmp5;
    panda$io$MemoryOutputStream* $tmp6 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp6);
    self->bodyBuffer = $tmp6;
    panda$io$IndentedOutputStream* $tmp7 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp7, ((panda$io$OutputStream*) self->bodyBuffer));
    self->body = $tmp7;
    panda$collections$Set* $tmp8 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp8);
    self->typeImports = $tmp8;
    panda$collections$Set* $tmp9 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp9);
    self->bodyImports = $tmp9;
    self->imports = self->typeImports;
    self->importStream = self->typeImportStream;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp10 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp11 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp11);
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp10, ((panda$io$OutputStream*) $tmp11));
    self->llvmCodeGen = $tmp10;
    self->inClass = ((panda$core$Bit) { false });
    {
        self->outDir = p_outDir;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    }
    {
        panda$io$IndentedOutputStream* $tmp12 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp13);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp12, ((panda$io$OutputStream*) $tmp13));
        self->out = $tmp12;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp14 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    return $tmp14;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName15;
    panda$core$String* tmp119;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp20;
    panda$core$String* $tmp16 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
    llvmName15 = $tmp16;
    panda$core$Bit $tmp18 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName15, &$s17);
    PANDA_ASSERT($tmp18.value);
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp20, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp21 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName15, $tmp20);
        tmp119 = $tmp21;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName15));
        return tmp119;
    }
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp22 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    return $tmp22;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp25 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s23, &$s24);
    panda$core$String* $tmp28 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp25, &$s26, &$s27);
    panda$core$String* $tmp31 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp28, &$s29, &$s30);
    panda$core$String* $tmp34 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp31, &$s32, &$s33);
    panda$core$String* $tmp37 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp34, &$s35, &$s36);
    panda$core$String* $tmp40 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp37, &$s38, &$s39);
    panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, p_extension);
    return $tmp41;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name61;
    org$pandalanguage$pandac$ClassDecl* cl66;
    panda$core$String* tmp284;
    panda$core$String* includePath87;
    panda$core$String* tmp397;
    org$pandalanguage$pandac$ClassDecl* cl98;
    panda$core$String* tmp4105;
    panda$core$String* tmp5110;
    org$pandalanguage$pandac$ClassDecl* cl120;
    panda$core$String* name125;
    org$pandalanguage$pandac$ClassDecl* cl130;
    panda$core$String* tmp6148;
    panda$core$String* tmp8151;
    panda$core$String* includePath152;
    panda$core$String* tmp7162;
    panda$core$String* tmp9163;
    panda$core$String* tmp10164;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s42;
        }
        break;
        case 12:
        {
            panda$core$Int64 $tmp44 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp45 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp44, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp46;
            $tmp46 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp46->value = $tmp45;
            panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s43, ((panda$core$Object*) $tmp46));
            panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s48);
            return $tmp49;
        }
        break;
        case 13:
        {
            panda$core$Int64 $tmp51 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp52 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp51, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp53;
            $tmp53 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp53->value = $tmp52;
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s50, ((panda$core$Object*) $tmp53));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
            return $tmp56;
        }
        break;
        case 19:
        {
            return &$s57;
        }
        break;
        case 20:
        {
            panda$core$Int64 $tmp58 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp58.value) {
                case 4:
                {
                    return &$s59;
                }
                break;
                case 8:
                {
                    return &$s60;
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
            panda$core$String* $tmp62 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp63 = panda$core$String$convert$R$panda$core$String($tmp62);
            panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
            name61 = $tmp65;
            panda$core$Object* $tmp68 = (($fn67) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp69 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp68), p_t);
            cl66 = $tmp69;
            PANDA_ASSERT(((panda$core$Bit) { cl66 != NULL }).value);
            panda$core$Object* $tmp71 = (($fn70) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Bit $tmp72 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp71), cl66);
            panda$core$Bit $tmp73 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp72);
            if ($tmp73.value) {
            {
                panda$core$Bit $tmp74 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name61));
                panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
                if ($tmp75.value) {
                {
                    panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s76, name61);
                    panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
                    panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, name61);
                    panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s81);
                    (($fn83) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp82);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name61));
                }
                }
                {
                    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name61, &$s85);
                    tmp284 = $tmp86;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl66));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name61));
                    }
                    return tmp284;
                }
            }
            }
            panda$core$String* $tmp89 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl66, &$s88);
            includePath87 = $tmp89;
            panda$core$Bit $tmp90 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath87));
            panda$core$Bit $tmp91 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp90);
            if ($tmp91.value) {
            {
                panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s92, includePath87);
                panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
                (($fn96) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp95);
                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath87));
            }
            }
            {
                tmp397 = name61;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath87));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl66));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name61));
                }
                return tmp397;
            }
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp100 = (($fn99) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp101 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp100), p_t);
            cl98 = $tmp101;
            PANDA_ASSERT(((panda$core$Bit) { cl98 != NULL }).value);
            panda$core$Object* $tmp103 = (($fn102) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Bit $tmp104 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp103), cl98);
            if ($tmp104.value) {
            {
                {
                    panda$core$Object* $tmp106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    panda$core$String* $tmp107 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp106));
                    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s108);
                    tmp4105 = $tmp109;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl98));
                    return tmp4105;
                }
            }
            }
            {
                panda$core$Object* $tmp111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp112 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp111));
                tmp5110 = $tmp112;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl98));
                return tmp5110;
            }
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp113 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp115 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp113))->name, &$s114);
            if ($tmp115.value) {
            {
                panda$core$Object* $tmp116 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp117 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp116));
                panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp117, &$s118);
                return $tmp119;
            }
            }
            panda$core$Object* $tmp122 = (($fn121) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$ClassDecl* $tmp123 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp122), p_t);
            cl120 = $tmp123;
            panda$core$Bit $tmp124 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl120);
            if ($tmp124.value) {
            {
                panda$core$String* $tmp126 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp127 = panda$core$String$convert$R$panda$core$String($tmp126);
                panda$core$String* $tmp129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp127, &$s128);
                name125 = $tmp129;
                panda$core$Object* $tmp132 = (($fn131) self->compiler->$class->vtable[2])(self->compiler);
                org$pandalanguage$pandac$ClassDecl* $tmp133 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp132), p_t);
                cl130 = $tmp133;
                PANDA_ASSERT(((panda$core$Bit) { cl130 != NULL }).value);
                panda$core$Object* $tmp135 = (($fn134) self->compiler->$class->vtable[2])(self->compiler);
                panda$core$Bit $tmp136 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp135), cl130);
                panda$core$Bit $tmp137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp136);
                if ($tmp137.value) {
                {
                    panda$core$Bit $tmp138 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name125));
                    panda$core$Bit $tmp139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp138);
                    if ($tmp139.value) {
                    {
                        panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s140, name125);
                        panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s142);
                        panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, name125);
                        panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s145);
                        (($fn147) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp146);
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name125));
                    }
                    }
                    {
                        panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name125, &$s149);
                        tmp6148 = $tmp150;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl130));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name125));
                        }
                        {
                            tmp8151 = tmp6148;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl120));
                            return tmp8151;
                        }
                    }
                }
                }
                panda$core$String* $tmp154 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl130, &$s153);
                includePath152 = $tmp154;
                panda$core$Bit $tmp155 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath152));
                panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
                if ($tmp156.value) {
                {
                    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s157, includePath152);
                    panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, &$s159);
                    (($fn161) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp160);
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath152));
                }
                }
                {
                    tmp7162 = name125;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl130));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name125));
                    }
                    {
                        tmp9163 = tmp7162;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl120));
                        return tmp9163;
                    }
                }
            }
            }
            {
                panda$core$Object* $tmp165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp166 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp165));
                tmp10164 = $tmp166;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl120));
                return tmp10164;
            }
        }
        break;
        case 22:
        {
            panda$core$String* $tmp167 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp167;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        panda$core$Weak* $tmp168 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp168, ((panda$core$Object*) p_compiler));
        self->compiler = $tmp168;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $tmp169 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    panda$io$File* $tmp170 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp169);
    return $tmp170;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path171;
    panda$collections$Iterator* Iter$163$9190;
    org$pandalanguage$pandac$FieldDecl* f205;
    org$pandalanguage$pandac$ClassDecl* value344;
    panda$collections$ListView* valueVTable349;
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
    panda$io$File* $tmp173 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s172);
    path171 = $tmp173;
    panda$io$File* $tmp174 = panda$io$File$parent$R$panda$io$File$Q(path171);
    panda$io$File$createDirectories($tmp174);
    {
        panda$io$IndentedOutputStream* $tmp175 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$OutputStream* $tmp176 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path171);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp175, $tmp176);
        self->out = $tmp175;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    }
    (($fn178) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s177);
    (($fn180) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s179);
    (($fn182) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s181);
    {
        self->importStream = self->typeImportStream;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->importStream));
    }
    {
        self->imports = self->typeImports;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->imports));
    }
    panda$core$String* $tmp184 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s183, $tmp184);
    panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, &$s186);
    (($fn188) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp187);
    panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
    self->types->level = $tmp189;
    {
        panda$core$Object* $tmp192 = (($fn191) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp193 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp192), p_cl);
        ITable* $tmp194 = ((panda$collections$Iterable*) $tmp193)->$class->itable;
        while ($tmp194->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp194 = $tmp194->next;
        }
        $fn196 $tmp195 = $tmp194->methods[0];
        panda$collections$Iterator* $tmp197 = $tmp195(((panda$collections$Iterable*) $tmp193));
        Iter$163$9190 = $tmp197;
        $l198:;
        ITable* $tmp200 = Iter$163$9190->$class->itable;
        while ($tmp200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp200 = $tmp200->next;
        }
        $fn202 $tmp201 = $tmp200->methods[0];
        panda$core$Bit $tmp203 = $tmp201(Iter$163$9190);
        panda$core$Bit $tmp204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp203);
        if (!$tmp204.value) goto $l199;
        {
            ITable* $tmp206 = Iter$163$9190->$class->itable;
            while ($tmp206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp206 = $tmp206->next;
            }
            $fn208 $tmp207 = $tmp206->methods[1];
            panda$core$Object* $tmp209 = $tmp207(Iter$163$9190);
            f205 = ((org$pandalanguage$pandac$FieldDecl*) $tmp209);
            panda$core$Object* $tmp211 = (($fn210) self->compiler->$class->vtable[2])(self->compiler);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp211), f205);
            org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp213 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f205->type, $tmp212);
            if ($tmp213.value) {
            {
                panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s214, ((org$pandalanguage$pandac$Symbol*) f205)->name);
                panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp215, &$s216);
                panda$core$Int64 $tmp218 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                panda$core$Int64$wrapper* $tmp219;
                $tmp219 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp219->value = $tmp218;
                panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp217, ((panda$core$Object*) $tmp219));
                panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
                (($fn223) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp222);
            }
            }
            else {
            {
                panda$core$String* $tmp224 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f205->type);
                panda$core$String* $tmp225 = panda$core$String$convert$R$panda$core$String($tmp224);
                panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
                panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, ((org$pandalanguage$pandac$Symbol*) f205)->name);
                panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s229);
                (($fn231) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp230);
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f205));
        }
        goto $l198;
        $l199:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$9190));
    }
    panda$core$Bit $tmp233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s232);
    if ($tmp233.value) {
    {
        (($fn235) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s234);
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
    org$pandalanguage$pandac$Type* $tmp256 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp257 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp256);
    panda$core$String* $tmp258 = panda$core$String$convert$R$panda$core$String($tmp257);
    panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
    org$pandalanguage$pandac$Type* $tmp261 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp262 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp261);
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, $tmp262);
    panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s264);
    panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s255, $tmp265);
    panda$core$Object* $tmp269 = (($fn268) self->compiler->$class->vtable[2])(self->compiler);
    panda$collections$ListView* $tmp270 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp269), p_cl);
    ITable* $tmp271 = ((panda$collections$CollectionView*) $tmp270)->$class->itable;
    while ($tmp271->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp271 = $tmp271->next;
    }
    $fn273 $tmp272 = $tmp271->methods[0];
    panda$core$Int64 $tmp274 = $tmp272(((panda$collections$CollectionView*) $tmp270));
    panda$core$Int64$wrapper* $tmp275;
    $tmp275 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp275->value = $tmp274;
    panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s267, ((panda$core$Object*) $tmp275));
    panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s277);
    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, $tmp278);
    panda$core$String* $tmp280 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp281 = panda$core$String$convert$R$panda$core$String($tmp280);
    panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s282);
    panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, $tmp283);
    (($fn285) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp284);
    panda$core$String* $tmp287 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s286, $tmp287);
    panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s289);
    panda$core$String* $tmp291 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, $tmp291);
    panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s293);
    (($fn295) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp294);
    panda$core$Object* $tmp297 = (($fn296) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Bit $tmp298 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp297), p_cl);
    if ($tmp298.value) {
    {
        panda$core$String* $tmp300 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s299, $tmp300);
        panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp301, &$s302);
        (($fn304) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp303);
        panda$core$Int64 $tmp305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp305;
        (($fn307) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s306);
        (($fn309) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s308);
        org$pandalanguage$pandac$Type* $tmp310 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp311 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp310);
        panda$core$String* $tmp312 = panda$core$String$convert$R$panda$core$String($tmp311);
        panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s313);
        (($fn315) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp314);
        panda$core$Int64 $tmp316 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp316;
        panda$core$String* $tmp318 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s317, $tmp318);
        panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s320);
        (($fn322) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp321);
        panda$core$String* $tmp324 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s323, $tmp324);
        panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, &$s326);
        (($fn328) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp327);
        panda$core$Int64 $tmp329 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp329;
        panda$core$String* $tmp330 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp331 = panda$core$String$convert$R$panda$core$String($tmp330);
        panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
        (($fn334) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp333);
        (($fn336) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s335);
        panda$core$Int64 $tmp337 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp337;
        panda$core$String* $tmp339 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, $tmp339);
        panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
        (($fn343) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp342);
        panda$core$Object* $tmp346 = (($fn345) self->compiler->$class->vtable[2])(self->compiler);
        org$pandalanguage$pandac$Type* $tmp347 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp348 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp346), $tmp347);
        value344 = $tmp348;
        panda$core$Object* $tmp351 = (($fn350) self->compiler->$class->vtable[2])(self->compiler);
        panda$collections$ListView* $tmp352 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp351), value344);
        valueVTable349 = $tmp352;
        panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s353, &$s354);
        ITable* $tmp357 = ((panda$collections$CollectionView*) valueVTable349)->$class->itable;
        while ($tmp357->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp357 = $tmp357->next;
        }
        $fn359 $tmp358 = $tmp357->methods[0];
        panda$core$Int64 $tmp360 = $tmp358(((panda$collections$CollectionView*) valueVTable349));
        panda$core$Int64$wrapper* $tmp361;
        $tmp361 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp361->value = $tmp360;
        panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s356, ((panda$core$Object*) $tmp361));
        panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
        panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, $tmp364);
        panda$core$String* $tmp366 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp367 = panda$core$String$convert$R$panda$core$String($tmp366);
        panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, &$s368);
        panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, $tmp369);
        (($fn371) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp370);
        panda$core$String* $tmp373 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s372, $tmp373);
        panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s375);
        panda$core$String* $tmp377 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp378 = panda$core$String$convert$R$panda$core$String($tmp377);
        panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s379);
        panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, $tmp380);
        (($fn382) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp381);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable349));
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path171));
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result383;
    panda$core$String* tmp11393;
    panda$core$String* tmp12396;
    org$pandalanguage$pandac$Type* $tmp384 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp385 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp384);
    result383 = $tmp385;
    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp386 = $tmp387.value;
    if (!$tmp386) goto $l388;
    panda$core$Bit $tmp390 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result383, &$s389);
    panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
    $tmp386 = $tmp391.value;
    $l388:;
    panda$core$Bit $tmp392 = { $tmp386 };
    if ($tmp392.value) {
    {
        {
            panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result383, &$s394);
            tmp11393 = $tmp395;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result383));
            return tmp11393;
        }
    }
    }
    {
        tmp12396 = result383;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result383));
        return tmp12396;
    }
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result399;
    panda$core$Bit $tmp397 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp397);
    if ($tmp398.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp402 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp401 = $tmp402.value;
    if (!$tmp401) goto $l403;
    panda$core$Bit $tmp404 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp401 = $tmp404.value;
    $l403:;
    panda$core$Bit $tmp405 = { $tmp401 };
    bool $tmp400 = $tmp405.value;
    if (!$tmp400) goto $l406;
    panda$core$Object* $tmp408 = (($fn407) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp410 = (($fn409) self->compiler->$class->vtable[2])(self->compiler);
    org$pandalanguage$pandac$ClassDecl* $tmp411 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp410), p_m->returnType);
    panda$core$Bit $tmp412 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp408), $tmp411);
    $tmp400 = $tmp412.value;
    $l406:;
    panda$core$Bit $tmp413 = { $tmp400 };
    result399 = $tmp413;
    panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit(result399);
    bool $tmp414 = $tmp415.value;
    if ($tmp414) goto $l416;
    panda$core$Bit $tmp418 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp418);
    bool $tmp417 = $tmp419.value;
    if (!$tmp417) goto $l420;
    panda$core$Bit $tmp422 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp421 = $tmp422.value;
    if ($tmp421) goto $l423;
    panda$core$Bit $tmp424 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp421 = $tmp424.value;
    $l423:;
    panda$core$Bit $tmp425 = { $tmp421 };
    $tmp417 = $tmp425.value;
    $l420:;
    panda$core$Bit $tmp426 = { $tmp417 };
    $tmp414 = $tmp426.value;
    $l416:;
    panda$core$Bit $tmp427 = { $tmp414 };
    PANDA_ASSERT($tmp427.value);
    return result399;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* separator428;
    panda$collections$Iterator* Iter$268$9462;
    org$pandalanguage$pandac$MethodDecl$Parameter* p474;
    {
        self->importStream = self->bodyImportStream;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->importStream));
    }
    {
        self->imports = self->bodyImports;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->imports));
    }
    separator428 = &$s429;
    panda$core$Bit $tmp430 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp430.value) {
    {
        panda$core$String* $tmp432 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s431, $tmp432);
        panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s434);
        panda$core$String* $tmp436 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, $tmp436);
        panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, &$s438);
        (($fn440) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp439);
        {
            separator428 = &$s441;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator428));
        }
    }
    }
    else {
    {
        panda$core$String* $tmp442 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp443 = panda$core$String$convert$R$panda$core$String($tmp442);
        panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s444);
        panda$core$String* $tmp446 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, $tmp446);
        panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s448);
        (($fn450) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp449);
    }
    }
    panda$core$Bit $tmp451 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp451);
    if ($tmp452.value) {
    {
        panda$core$String* $tmp453 = panda$core$String$convert$R$panda$core$String(separator428);
        panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s454);
        panda$core$String* $tmp456 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, $tmp456);
        panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s458);
        (($fn460) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp459);
        {
            separator428 = &$s461;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator428));
        }
    }
    }
    {
        ITable* $tmp463 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp463 = $tmp463->next;
        }
        $fn465 $tmp464 = $tmp463->methods[0];
        panda$collections$Iterator* $tmp466 = $tmp464(((panda$collections$Iterable*) p_m->parameters));
        Iter$268$9462 = $tmp466;
        $l467:;
        ITable* $tmp469 = Iter$268$9462->$class->itable;
        while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp469 = $tmp469->next;
        }
        $fn471 $tmp470 = $tmp469->methods[0];
        panda$core$Bit $tmp472 = $tmp470(Iter$268$9462);
        panda$core$Bit $tmp473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp472);
        if (!$tmp473.value) goto $l468;
        {
            ITable* $tmp475 = Iter$268$9462->$class->itable;
            while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp475 = $tmp475->next;
            }
            $fn477 $tmp476 = $tmp475->methods[1];
            panda$core$Object* $tmp478 = $tmp476(Iter$268$9462);
            p474 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp478);
            panda$core$String* $tmp479 = panda$core$String$convert$R$panda$core$String(separator428);
            panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s480);
            panda$core$String* $tmp482 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p474->type);
            panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, $tmp482);
            panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s484);
            panda$core$String* $tmp486 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p474->name);
            panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, $tmp486);
            panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp487, &$s488);
            (($fn490) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp489);
            {
                separator428 = &$s491;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator428));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p474));
        }
        goto $l467;
        $l468:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$9462));
    }
    (($fn493) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s492);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator428));
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    (($fn495) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s494);
    panda$core$String* $tmp496 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    (($fn497) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp496);
    panda$core$String* $tmp498 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    (($fn499) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp498);
    (($fn501) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s500);
    panda$core$String* $tmp502 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    (($fn503) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp502);
    panda$core$String* $tmp504 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    (($fn505) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp504);
    (($fn507) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s506);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmCodeGen));
}

