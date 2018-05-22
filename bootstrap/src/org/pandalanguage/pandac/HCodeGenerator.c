#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/core/Panda.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Method.h"
#include "panda/collections/Key.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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

typedef panda$core$Object* (*$fn157)(panda$core$Weak*);
typedef panda$core$Object* (*$fn161)(panda$core$Weak*);
typedef void (*$fn178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn198)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn211)(panda$core$Weak*);
typedef panda$core$Object* (*$fn215)(panda$core$Weak*);
typedef panda$core$Object* (*$fn258)(panda$core$Weak*);
typedef panda$core$Object* (*$fn278)(panda$core$Weak*);
typedef panda$core$Object* (*$fn282)(panda$core$Weak*);
typedef void (*$fn299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn320)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn338)(panda$core$Weak*);
typedef void (*$fn507)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn524)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn534)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn539)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn546)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn557)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn560)(panda$core$Weak*);
typedef void (*$fn579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn616)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn646)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn651)(panda$collections$CollectionView*);
typedef void (*$fn666)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn682)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn684)(panda$core$Weak*);
typedef void (*$fn698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn732)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn753)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn758)(panda$core$Weak*);
typedef panda$core$Object* (*$fn767)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn782)(panda$collections$CollectionView*);
typedef void (*$fn797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn815)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn826)(panda$core$Weak*);
typedef panda$core$Object* (*$fn861)(panda$core$Weak*);
typedef panda$core$Object* (*$fn865)(panda$core$Weak*);
typedef void (*$fn911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn929)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn944)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn956)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn963)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn974)(panda$collections$Iterator*);
typedef void (*$fn998)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1019)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1024)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a\x29\x28", 4, 145705064, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

void org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, panda$io$File* p_outDir) {
    panda$io$MemoryOutputStream* $tmp2;
    panda$io$MemoryOutputStream* $tmp3;
    panda$io$MemoryOutputStream* $tmp5;
    panda$io$MemoryOutputStream* $tmp6;
    panda$io$IndentedOutputStream* $tmp8;
    panda$io$IndentedOutputStream* $tmp9;
    panda$io$MemoryOutputStream* $tmp11;
    panda$io$MemoryOutputStream* $tmp12;
    panda$io$MemoryOutputStream* $tmp14;
    panda$io$MemoryOutputStream* $tmp15;
    panda$io$IndentedOutputStream* $tmp17;
    panda$io$IndentedOutputStream* $tmp18;
    panda$collections$Set* $tmp20;
    panda$collections$Set* $tmp21;
    panda$collections$Set* $tmp23;
    panda$collections$Set* $tmp24;
    panda$collections$Set* $tmp26;
    panda$io$MemoryOutputStream* $tmp27;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp28;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp29;
    panda$io$MemoryOutputStream* $tmp32;
    panda$io$File* $tmp34;
    panda$io$File* $tmp35;
    panda$io$IndentedOutputStream* $tmp36;
    panda$io$IndentedOutputStream* $tmp37;
    panda$io$IndentedOutputStream* $tmp38;
    panda$io$MemoryOutputStream* $tmp40;
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
    panda$io$MemoryOutputStream* $tmp4 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->typeImportStream = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$io$MemoryOutputStream* $tmp7 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->typesBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$io$IndentedOutputStream* $tmp10 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp10, ((panda$io$OutputStream*) self->typesBuffer));
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->types = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->bodyImportStream = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$io$MemoryOutputStream* $tmp16 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->bodyBuffer = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->bodyBuffer));
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->body = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$collections$Set* $tmp22 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp22);
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->typeImports = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$Set* $tmp25 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
    panda$collections$Set$init($tmp25);
    $tmp24 = $tmp25;
    $tmp23 = $tmp24;
    self->bodyImports = $tmp23;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    $tmp26 = self->typeImports;
    self->imports = $tmp26;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
    $tmp27 = self->typeImportStream;
    self->importStream = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp30 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
    panda$io$MemoryOutputStream* $tmp33 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
    panda$io$MemoryOutputStream$init($tmp33);
    $tmp32 = $tmp33;
    org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp30, &$s31, ((panda$io$OutputStream*) $tmp32));
    $tmp29 = $tmp30;
    $tmp28 = $tmp29;
    self->llvmCodeGen = $tmp28;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    self->inClass = ((panda$core$Bit) { false });
    {
        $tmp34 = self->outDir;
        $tmp35 = p_outDir;
        self->outDir = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    }
    {
        $tmp36 = self->out;
        panda$io$IndentedOutputStream* $tmp39 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp41 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp41);
        $tmp40 = $tmp41;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp39, ((panda$io$OutputStream*) $tmp40));
        $tmp38 = $tmp39;
        $tmp37 = $tmp38;
        self->out = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $returnValue42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp44 = $tmp45;
    $tmp43 = $tmp44;
    $returnValue42 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    return $returnValue42;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName50 = NULL;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$String* $returnValue56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp59;
    int $tmp49;
    {
        panda$core$String* $tmp53 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp52 = $tmp53;
        $tmp51 = $tmp52;
        llvmName50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Bit $tmp55 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName50, &$s54);
        PANDA_ASSERT($tmp55.value);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp59, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp60 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName50, $tmp59);
        $tmp58 = $tmp60;
        $tmp57 = $tmp58;
        $returnValue56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        $tmp49 = 0;
        goto $l47;
        $l61:;
        return $returnValue56;
    }
    $l47:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName50));
    llvmName50 = NULL;
    switch ($tmp49) {
        case 0: goto $l61;
    }
    $l63:;
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue64;
    panda$core$Int64 $tmp65 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue64 = $tmp65;
    return $returnValue64;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue67;
    panda$core$String* $tmp68;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp78 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s76, &$s77);
    $tmp75 = $tmp78;
    panda$core$String* $tmp81 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp75, &$s79, &$s80);
    $tmp74 = $tmp81;
    panda$core$String* $tmp84 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp74, &$s82, &$s83);
    $tmp73 = $tmp84;
    panda$core$String* $tmp87 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp73, &$s85, &$s86);
    $tmp72 = $tmp87;
    panda$core$String* $tmp90 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp72, &$s88, &$s89);
    $tmp71 = $tmp90;
    panda$core$String* $tmp93 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp71, &$s91, &$s92);
    $tmp70 = $tmp93;
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, p_extension);
    $tmp69 = $tmp94;
    $tmp68 = $tmp69;
    $returnValue67 = $tmp68;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    return $returnValue67;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$61_996;
    panda$core$String* $returnValue98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$Object* $tmp107;
    panda$core$String* $tmp116;
    panda$core$String* $tmp117;
    panda$core$String* $tmp118;
    panda$core$Object* $tmp120;
    panda$core$String* $tmp129;
    panda$core$String* $tmp134;
    panda$core$String* $tmp137;
    panda$core$String* name144 = NULL;
    panda$core$String* $tmp145;
    panda$core$String* $tmp146;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    org$pandalanguage$pandac$ClassDecl* cl153 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp154;
    org$pandalanguage$pandac$ClassDecl* $tmp155;
    panda$core$Object* $tmp156;
    panda$core$Object* $tmp160;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp179;
    panda$core$String* $tmp180;
    panda$core$String* includePath185 = NULL;
    panda$core$String* $tmp186;
    panda$core$String* $tmp187;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp199;
    org$pandalanguage$pandac$ClassDecl* cl207 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp208;
    org$pandalanguage$pandac$ClassDecl* $tmp209;
    panda$core$Object* $tmp210;
    panda$core$Object* $tmp214;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$Object* $tmp221;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$core$Object* $tmp230;
    panda$core$Object* $tmp240;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$Object* $tmp247;
    org$pandalanguage$pandac$ClassDecl* cl254 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp255;
    org$pandalanguage$pandac$ClassDecl* $tmp256;
    panda$core$Object* $tmp257;
    panda$core$String* name265 = NULL;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    org$pandalanguage$pandac$ClassDecl* cl274 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp275;
    org$pandalanguage$pandac$ClassDecl* $tmp276;
    panda$core$Object* $tmp277;
    panda$core$Object* $tmp281;
    panda$core$String* $tmp288;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$core$String* $tmp300;
    panda$core$String* $tmp301;
    panda$core$String* includePath307 = NULL;
    panda$core$String* $tmp308;
    panda$core$String* $tmp309;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp321;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$Object* $tmp328;
    panda$core$String* $tmp335;
    panda$core$String* $tmp336;
    panda$core$Object* $tmp337;
    panda$core$MutableString* result350 = NULL;
    panda$core$MutableString* $tmp351;
    panda$core$MutableString* $tmp352;
    panda$core$String* $tmp354;
    panda$core$Object* $tmp355;
    panda$core$String* separator361 = NULL;
    panda$core$String* $tmp362;
    panda$core$Range$LTpanda$core$Int64$GT $tmp364;
    panda$core$String* $tmp380;
    panda$core$Object* $tmp381;
    panda$core$String* $tmp384;
    panda$core$String* $tmp385;
    panda$core$Char8 $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395;
    {
        $match$61_996 = p_t->typeKind;
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp97.value) {
        {
            $tmp99 = &$s100;
            $returnValue98 = $tmp99;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp102.value) {
        {
            panda$core$Int64 $tmp108 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp109 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp108, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp110;
            $tmp110 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp110->value = $tmp109;
            $tmp107 = ((panda$core$Object*) $tmp110);
            panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s106, $tmp107);
            $tmp105 = $tmp111;
            panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s112);
            $tmp104 = $tmp113;
            $tmp103 = $tmp104;
            $returnValue98 = $tmp103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object($tmp107);
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp115.value) {
        {
            panda$core$Int64 $tmp121 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp122 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp121, ((panda$core$Int64) { 8 }));
            panda$core$Int64$wrapper* $tmp123;
            $tmp123 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp123->value = $tmp122;
            $tmp120 = ((panda$core$Object*) $tmp123);
            panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s119, $tmp120);
            $tmp118 = $tmp124;
            panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s125);
            $tmp117 = $tmp126;
            $tmp116 = $tmp117;
            $returnValue98 = $tmp116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object($tmp120);
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp128.value) {
        {
            $tmp129 = &$s130;
            $returnValue98 = $tmp129;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp132.value) {
        {
            panda$core$Int64 $tmp133 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp133.value) {
                case 4:
                {
                    $tmp134 = &$s135;
                    $returnValue98 = $tmp134;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
                    return $returnValue98;
                }
                break;
                case 8:
                {
                    $tmp137 = &$s138;
                    $returnValue98 = $tmp137;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                    return $returnValue98;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp140.value) {
        {
            int $tmp143;
            {
                panda$core$String* $tmp149 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp148 = $tmp149;
                panda$core$String* $tmp150 = panda$core$String$convert$R$panda$core$String($tmp148);
                $tmp147 = $tmp150;
                panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s151);
                $tmp146 = $tmp152;
                $tmp145 = $tmp146;
                name144 = $tmp145;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                panda$core$Object* $tmp158 = (($fn157) self->compiler->$class->vtable[2])(self->compiler);
                $tmp156 = $tmp158;
                org$pandalanguage$pandac$ClassDecl* $tmp159 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp156), p_t);
                $tmp155 = $tmp159;
                $tmp154 = $tmp155;
                cl153 = $tmp154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                panda$core$Panda$unref$panda$core$Object($tmp156);
                PANDA_ASSERT(((panda$core$Bit) { cl153 != NULL }).value);
                panda$core$Object* $tmp162 = (($fn161) self->compiler->$class->vtable[2])(self->compiler);
                $tmp160 = $tmp162;
                panda$core$Bit $tmp163 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp160), cl153);
                panda$core$Bit $tmp164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp163);
                panda$core$Panda$unref$panda$core$Object($tmp160);
                if ($tmp164.value) {
                {
                    panda$core$Bit $tmp165 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name144));
                    panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
                    if ($tmp166.value) {
                    {
                        panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s171, name144);
                        $tmp170 = $tmp172;
                        panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s173);
                        $tmp169 = $tmp174;
                        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, name144);
                        $tmp168 = $tmp175;
                        panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s176);
                        $tmp167 = $tmp177;
                        (($fn178) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp167);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name144));
                    }
                    }
                    panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name144, &$s181);
                    $tmp180 = $tmp182;
                    $tmp179 = $tmp180;
                    $returnValue98 = $tmp179;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
                    $tmp143 = 0;
                    goto $l141;
                    $l183:;
                    return $returnValue98;
                }
                }
                panda$core$String* $tmp189 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl153, &$s188);
                $tmp187 = $tmp189;
                $tmp186 = $tmp187;
                includePath185 = $tmp186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
                panda$core$Bit $tmp190 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath185));
                panda$core$Bit $tmp191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp190);
                if ($tmp191.value) {
                {
                    panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s194, includePath185);
                    $tmp193 = $tmp195;
                    panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s196);
                    $tmp192 = $tmp197;
                    (($fn198) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp192);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
                    panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath185));
                }
                }
                $tmp199 = name144;
                $returnValue98 = $tmp199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                $tmp143 = 1;
                goto $l141;
                $l200:;
                return $returnValue98;
            }
            $l141:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name144));
            name144 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl153));
            cl153 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath185));
            includePath185 = NULL;
            switch ($tmp143) {
                case 1: goto $l200;
                case 0: goto $l183;
            }
            $l202:;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp203.value) {
        {
            int $tmp206;
            {
                panda$core$Object* $tmp212 = (($fn211) self->compiler->$class->vtable[2])(self->compiler);
                $tmp210 = $tmp212;
                org$pandalanguage$pandac$ClassDecl* $tmp213 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp210), p_t);
                $tmp209 = $tmp213;
                $tmp208 = $tmp209;
                cl207 = $tmp208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
                panda$core$Panda$unref$panda$core$Object($tmp210);
                PANDA_ASSERT(((panda$core$Bit) { cl207 != NULL }).value);
                panda$core$Object* $tmp216 = (($fn215) self->compiler->$class->vtable[2])(self->compiler);
                $tmp214 = $tmp216;
                panda$core$Bit $tmp217 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp214), cl207);
                panda$core$Panda$unref$panda$core$Object($tmp214);
                if ($tmp217.value) {
                {
                    panda$core$Object* $tmp222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                    $tmp221 = $tmp222;
                    panda$core$String* $tmp223 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp221));
                    $tmp220 = $tmp223;
                    panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s224);
                    $tmp219 = $tmp225;
                    $tmp218 = $tmp219;
                    $returnValue98 = $tmp218;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                    panda$core$Panda$unref$panda$core$Object($tmp221);
                    $tmp206 = 0;
                    goto $l204;
                    $l226:;
                    return $returnValue98;
                }
                }
                panda$core$Object* $tmp231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp230 = $tmp231;
                panda$core$String* $tmp232 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp230));
                $tmp229 = $tmp232;
                $tmp228 = $tmp229;
                $returnValue98 = $tmp228;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                panda$core$Panda$unref$panda$core$Object($tmp230);
                $tmp206 = 1;
                goto $l204;
                $l233:;
                return $returnValue98;
            }
            $l204:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl207));
            cl207 = NULL;
            switch ($tmp206) {
                case 0: goto $l226;
                case 1: goto $l233;
            }
            $l235:;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp236.value) {
        {
            int $tmp239;
            {
                panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp240 = $tmp241;
                panda$core$Bit $tmp243 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp240))->name, &$s242);
                panda$core$Panda$unref$panda$core$Object($tmp240);
                if ($tmp243.value) {
                {
                    panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                    $tmp247 = $tmp248;
                    panda$core$String* $tmp249 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp247));
                    $tmp246 = $tmp249;
                    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s250);
                    $tmp245 = $tmp251;
                    $tmp244 = $tmp245;
                    $returnValue98 = $tmp244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    panda$core$Panda$unref$panda$core$Object($tmp247);
                    $tmp239 = 0;
                    goto $l237;
                    $l252:;
                    return $returnValue98;
                }
                }
                panda$core$Object* $tmp259 = (($fn258) self->compiler->$class->vtable[2])(self->compiler);
                $tmp257 = $tmp259;
                org$pandalanguage$pandac$ClassDecl* $tmp260 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp257), p_t);
                $tmp256 = $tmp260;
                $tmp255 = $tmp256;
                cl254 = $tmp255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                panda$core$Panda$unref$panda$core$Object($tmp257);
                panda$core$Bit $tmp261 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl254);
                if ($tmp261.value) {
                {
                    int $tmp264;
                    {
                        panda$core$String* $tmp270 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp269 = $tmp270;
                        panda$core$String* $tmp271 = panda$core$String$convert$R$panda$core$String($tmp269);
                        $tmp268 = $tmp271;
                        panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s272);
                        $tmp267 = $tmp273;
                        $tmp266 = $tmp267;
                        name265 = $tmp266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Object* $tmp279 = (($fn278) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp277 = $tmp279;
                        org$pandalanguage$pandac$ClassDecl* $tmp280 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp277), p_t);
                        $tmp276 = $tmp280;
                        $tmp275 = $tmp276;
                        cl274 = $tmp275;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                        panda$core$Panda$unref$panda$core$Object($tmp277);
                        PANDA_ASSERT(((panda$core$Bit) { cl274 != NULL }).value);
                        panda$core$Object* $tmp283 = (($fn282) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp281 = $tmp283;
                        panda$core$Bit $tmp284 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp281), cl274);
                        panda$core$Bit $tmp285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp284);
                        panda$core$Panda$unref$panda$core$Object($tmp281);
                        if ($tmp285.value) {
                        {
                            panda$core$Bit $tmp286 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name265));
                            panda$core$Bit $tmp287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp286);
                            if ($tmp287.value) {
                            {
                                panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s292, name265);
                                $tmp291 = $tmp293;
                                panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, &$s294);
                                $tmp290 = $tmp295;
                                panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, name265);
                                $tmp289 = $tmp296;
                                panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s297);
                                $tmp288 = $tmp298;
                                (($fn299) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp288);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                                panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) name265));
                            }
                            }
                            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name265, &$s302);
                            $tmp301 = $tmp303;
                            $tmp300 = $tmp301;
                            $returnValue98 = $tmp300;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                            $tmp264 = 0;
                            goto $l262;
                            $l304:;
                            $tmp239 = 1;
                            goto $l237;
                            $l305:;
                            return $returnValue98;
                        }
                        }
                        panda$core$String* $tmp311 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl274, &$s310);
                        $tmp309 = $tmp311;
                        $tmp308 = $tmp309;
                        includePath307 = $tmp308;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                        panda$core$Bit $tmp312 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath307));
                        panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
                        if ($tmp313.value) {
                        {
                            panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s316, includePath307);
                            $tmp315 = $tmp317;
                            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s318);
                            $tmp314 = $tmp319;
                            (($fn320) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp314);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$collections$Set$add$panda$collections$Set$T(self->imports, ((panda$collections$Key*) includePath307));
                        }
                        }
                        $tmp321 = name265;
                        $returnValue98 = $tmp321;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
                        $tmp264 = 1;
                        goto $l262;
                        $l322:;
                        $tmp239 = 2;
                        goto $l237;
                        $l323:;
                        return $returnValue98;
                    }
                    $l262:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name265));
                    name265 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl274));
                    cl274 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath307));
                    includePath307 = NULL;
                    switch ($tmp264) {
                        case 0: goto $l304;
                        case 1: goto $l322;
                    }
                    $l325:;
                }
                }
                panda$core$Object* $tmp329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
                $tmp328 = $tmp329;
                panda$core$String* $tmp330 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp328));
                $tmp327 = $tmp330;
                $tmp326 = $tmp327;
                $returnValue98 = $tmp326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                panda$core$Panda$unref$panda$core$Object($tmp328);
                $tmp239 = 3;
                goto $l237;
                $l331:;
                return $returnValue98;
            }
            $l237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl254));
            cl254 = NULL;
            switch ($tmp239) {
                case 2: goto $l323;
                case 3: goto $l331;
                case 0: goto $l252;
                case 1: goto $l305;
            }
            $l333:;
        }
        }
        else {
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp334.value) {
        {
            panda$core$Object* $tmp339 = (($fn338) p_t->parameter->$class->vtable[2])(p_t->parameter);
            $tmp337 = $tmp339;
            panda$core$String* $tmp340 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp337)->bound);
            $tmp336 = $tmp340;
            $tmp335 = $tmp336;
            $returnValue98 = $tmp335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
            panda$core$Panda$unref$panda$core$Object($tmp337);
            return $returnValue98;
        }
        }
        else {
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 14 }));
        bool $tmp342 = $tmp343.value;
        if ($tmp342) goto $l344;
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp342 = $tmp345.value;
        $l344:;
        panda$core$Bit $tmp346 = { $tmp342 };
        if ($tmp346.value) {
        {
            int $tmp349;
            {
                panda$core$MutableString* $tmp353 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp353);
                $tmp352 = $tmp353;
                $tmp351 = $tmp352;
                result350 = $tmp351;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                panda$core$Int64 $tmp356 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
                panda$core$Int64 $tmp357 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp356, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp357);
                $tmp355 = $tmp358;
                panda$core$String* $tmp359 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp355));
                $tmp354 = $tmp359;
                panda$core$MutableString$append$panda$core$String(result350, $tmp354);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                panda$core$Panda$unref$panda$core$Object($tmp355);
                panda$core$MutableString$append$panda$core$String(result350, &$s360);
                $tmp362 = &$s363;
                separator361 = $tmp362;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
                panda$core$Int64 $tmp365 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
                panda$core$Int64 $tmp366 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp365, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp364, ((panda$core$Int64) { 0 }), $tmp366, ((panda$core$Bit) { false }));
                int64_t $tmp368 = $tmp364.min.value;
                panda$core$Int64 i367 = { $tmp368 };
                int64_t $tmp370 = $tmp364.max.value;
                bool $tmp371 = $tmp364.inclusive.value;
                if ($tmp371) goto $l378; else goto $l379;
                $l378:;
                if ($tmp368 <= $tmp370) goto $l372; else goto $l374;
                $l379:;
                if ($tmp368 < $tmp370) goto $l372; else goto $l374;
                $l372:;
                {
                    panda$core$MutableString$append$panda$core$String(result350, separator361);
                    panda$core$Object* $tmp382 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i367);
                    $tmp381 = $tmp382;
                    panda$core$String* $tmp383 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp381));
                    $tmp380 = $tmp383;
                    panda$core$MutableString$append$panda$core$String(result350, $tmp380);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                    panda$core$Panda$unref$panda$core$Object($tmp381);
                    {
                        $tmp384 = separator361;
                        $tmp385 = &$s386;
                        separator361 = $tmp385;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                    }
                }
                $l375:;
                int64_t $tmp388 = $tmp370 - i367.value;
                if ($tmp371) goto $l389; else goto $l390;
                $l389:;
                if ((uint64_t) $tmp388 >= 1) goto $l387; else goto $l374;
                $l390:;
                if ((uint64_t) $tmp388 > 1) goto $l387; else goto $l374;
                $l387:;
                i367.value += 1;
                goto $l372;
                $l374:;
                panda$core$Char8$init$panda$core$UInt8(&$tmp393, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(result350, $tmp393);
                panda$core$String* $tmp396 = panda$core$MutableString$finish$R$panda$core$String(result350);
                $tmp395 = $tmp396;
                $tmp394 = $tmp395;
                $returnValue98 = $tmp394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                $tmp349 = 0;
                goto $l347;
                $l397:;
                return $returnValue98;
            }
            $l347:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result350));
            result350 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator361));
            separator361 = NULL;
            switch ($tmp349) {
                case 0: goto $l397;
            }
            $l399:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_name) {
    org$pandalanguage$pandac$Type$Kind $match$144_9400;
    panda$core$MutableString* result409 = NULL;
    panda$core$MutableString* $tmp410;
    panda$core$MutableString* $tmp411;
    panda$core$String* $tmp413;
    panda$core$Object* $tmp414;
    panda$core$String* $tmp419;
    panda$core$String* $tmp420;
    panda$core$String* separator425 = NULL;
    panda$core$String* $tmp426;
    panda$core$Range$LTpanda$core$Int64$GT $tmp428;
    panda$core$String* $tmp444;
    panda$core$Object* $tmp445;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$Char8 $tmp457;
    panda$core$String* $returnValue458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466;
    panda$core$String* $tmp467;
    panda$core$String* $tmp468;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    {
        $match$144_9400 = p_t->typeKind;
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9400.$rawValue, ((panda$core$Int64) { 14 }));
        bool $tmp401 = $tmp402.value;
        if ($tmp401) goto $l403;
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9400.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp401 = $tmp404.value;
        $l403:;
        panda$core$Bit $tmp405 = { $tmp401 };
        if ($tmp405.value) {
        {
            int $tmp408;
            {
                panda$core$MutableString* $tmp412 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp412);
                $tmp411 = $tmp412;
                $tmp410 = $tmp411;
                result409 = $tmp410;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
                panda$core$Int64 $tmp415 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
                panda$core$Int64 $tmp416 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp415, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp417 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp416);
                $tmp414 = $tmp417;
                panda$core$String* $tmp418 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp414));
                $tmp413 = $tmp418;
                panda$core$MutableString$append$panda$core$String(result409, $tmp413);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                panda$core$Panda$unref$panda$core$Object($tmp414);
                panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s421, p_name);
                $tmp420 = $tmp422;
                panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s423);
                $tmp419 = $tmp424;
                panda$core$MutableString$append$panda$core$String(result409, $tmp419);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
                $tmp426 = &$s427;
                separator425 = $tmp426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
                panda$core$Int64 $tmp429 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
                panda$core$Int64 $tmp430 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp429, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp428, ((panda$core$Int64) { 0 }), $tmp430, ((panda$core$Bit) { false }));
                int64_t $tmp432 = $tmp428.min.value;
                panda$core$Int64 i431 = { $tmp432 };
                int64_t $tmp434 = $tmp428.max.value;
                bool $tmp435 = $tmp428.inclusive.value;
                if ($tmp435) goto $l442; else goto $l443;
                $l442:;
                if ($tmp432 <= $tmp434) goto $l436; else goto $l438;
                $l443:;
                if ($tmp432 < $tmp434) goto $l436; else goto $l438;
                $l436:;
                {
                    panda$core$MutableString$append$panda$core$String(result409, separator425);
                    panda$core$Object* $tmp446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i431);
                    $tmp445 = $tmp446;
                    panda$core$String* $tmp447 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp445));
                    $tmp444 = $tmp447;
                    panda$core$MutableString$append$panda$core$String(result409, $tmp444);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                    panda$core$Panda$unref$panda$core$Object($tmp445);
                    {
                        $tmp448 = separator425;
                        $tmp449 = &$s450;
                        separator425 = $tmp449;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                    }
                }
                $l439:;
                int64_t $tmp452 = $tmp434 - i431.value;
                if ($tmp435) goto $l453; else goto $l454;
                $l453:;
                if ((uint64_t) $tmp452 >= 1) goto $l451; else goto $l438;
                $l454:;
                if ((uint64_t) $tmp452 > 1) goto $l451; else goto $l438;
                $l451:;
                i431.value += 1;
                goto $l436;
                $l438:;
                panda$core$Char8$init$panda$core$UInt8(&$tmp457, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(result409, $tmp457);
                panda$core$String* $tmp461 = panda$core$MutableString$finish$R$panda$core$String(result409);
                $tmp460 = $tmp461;
                $tmp459 = $tmp460;
                $returnValue458 = $tmp459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                $tmp408 = 0;
                goto $l406;
                $l462:;
                return $returnValue458;
            }
            $l406:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result409));
            result409 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator425));
            separator425 = NULL;
            switch ($tmp408) {
                case 0: goto $l462;
            }
            $l464:;
        }
        }
        else {
        {
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
            $returnValue458 = $tmp465;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
            return $returnValue458;
        }
        }
    }
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp479;
    panda$core$Weak* $tmp480;
    panda$core$Weak* $tmp481;
    {
        $tmp479 = self->compiler;
        panda$core$Weak* $tmp482 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp482, ((panda$core$Object*) p_compiler));
        $tmp481 = $tmp482;
        $tmp480 = $tmp481;
        self->compiler = $tmp480;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
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
    panda$io$MemoryOutputStream* $tmp512;
    panda$io$MemoryOutputStream* $tmp513;
    panda$collections$Set* $tmp514;
    panda$collections$Set* $tmp515;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$String* $tmp519;
    panda$collections$Iterator* Iter$194$9529 = NULL;
    panda$collections$Iterator* $tmp530;
    panda$collections$Iterator* $tmp531;
    panda$collections$ListView* $tmp532;
    panda$core$Object* $tmp533;
    org$pandalanguage$pandac$FieldDecl* f552 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp553;
    panda$core$Object* $tmp554;
    panda$core$Object* $tmp559;
    org$pandalanguage$pandac$Type* $tmp562;
    panda$core$String* $tmp565;
    panda$core$String* $tmp566;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    panda$core$Object* $tmp573;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $tmp602;
    panda$core$String* $tmp603;
    panda$core$String* $tmp605;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* $tmp619;
    panda$core$String* $tmp621;
    panda$core$String* $tmp622;
    panda$core$String* $tmp623;
    panda$core$String* $tmp624;
    panda$core$String* $tmp625;
    org$pandalanguage$pandac$Type* $tmp626;
    panda$core$String* $tmp632;
    org$pandalanguage$pandac$Type* $tmp633;
    panda$core$String* $tmp640;
    panda$core$String* $tmp641;
    panda$core$Object* $tmp643;
    panda$collections$ListView* $tmp644;
    panda$core$Object* $tmp645;
    panda$core$String* $tmp658;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp667;
    panda$core$String* $tmp668;
    panda$core$String* $tmp669;
    panda$core$String* $tmp670;
    panda$core$String* $tmp672;
    panda$core$String* $tmp677;
    panda$core$Object* $tmp683;
    panda$core$String* $tmp690;
    panda$core$String* $tmp691;
    panda$core$String* $tmp693;
    panda$core$String* $tmp704;
    panda$core$String* $tmp705;
    panda$core$String* $tmp706;
    org$pandalanguage$pandac$Type* $tmp707;
    panda$core$String* $tmp715;
    panda$core$String* $tmp716;
    panda$core$String* $tmp718;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    panda$core$String* $tmp727;
    panda$core$String* $tmp734;
    panda$core$String* $tmp735;
    panda$core$String* $tmp736;
    panda$core$String* $tmp745;
    panda$core$String* $tmp746;
    panda$core$String* $tmp748;
    org$pandalanguage$pandac$ClassDecl* value754 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp755;
    org$pandalanguage$pandac$ClassDecl* $tmp756;
    panda$core$Object* $tmp757;
    org$pandalanguage$pandac$Type* $tmp760;
    panda$collections$ListView* valueVTable763 = NULL;
    panda$collections$ListView* $tmp764;
    panda$collections$ListView* $tmp765;
    panda$core$Object* $tmp766;
    panda$core$String* $tmp770;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    panda$core$String* $tmp776;
    panda$core$String* $tmp777;
    panda$core$Object* $tmp779;
    panda$core$String* $tmp789;
    panda$core$String* $tmp790;
    panda$core$String* $tmp791;
    panda$core$String* $tmp798;
    panda$core$String* $tmp799;
    panda$core$String* $tmp800;
    panda$core$String* $tmp802;
    panda$core$String* $tmp807;
    panda$core$String* $tmp808;
    panda$core$String* $tmp809;
    int $tmp492;
    {
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
        panda$io$File* $tmp497 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s496);
        $tmp495 = $tmp497;
        $tmp494 = $tmp495;
        path493 = $tmp494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        panda$io$File* $tmp499 = panda$io$File$parent$R$panda$io$File$Q(path493);
        $tmp498 = $tmp499;
        panda$io$File$createDirectories($tmp498);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
        {
            $tmp500 = self->out;
            panda$io$IndentedOutputStream* $tmp503 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp505 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path493);
            $tmp504 = $tmp505;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp503, $tmp504);
            $tmp502 = $tmp503;
            $tmp501 = $tmp502;
            self->out = $tmp501;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        }
        (($fn507) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s506);
        (($fn509) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s508);
        (($fn511) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s510);
        {
            $tmp512 = self->importStream;
            $tmp513 = self->typeImportStream;
            self->importStream = $tmp513;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp513));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
        }
        {
            $tmp514 = self->imports;
            $tmp515 = self->typeImports;
            self->imports = $tmp515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        }
        panda$core$String* $tmp520 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp519 = $tmp520;
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s518, $tmp519);
        $tmp517 = $tmp521;
        panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s522);
        $tmp516 = $tmp523;
        (($fn524) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp516);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
        panda$core$Int64 $tmp525 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp525;
        {
            int $tmp528;
            {
                panda$core$Object* $tmp535 = (($fn534) self->compiler->$class->vtable[2])(self->compiler);
                $tmp533 = $tmp535;
                panda$collections$ListView* $tmp536 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp533), p_cl);
                $tmp532 = $tmp536;
                ITable* $tmp537 = ((panda$collections$Iterable*) $tmp532)->$class->itable;
                while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp537 = $tmp537->next;
                }
                $fn539 $tmp538 = $tmp537->methods[0];
                panda$collections$Iterator* $tmp540 = $tmp538(((panda$collections$Iterable*) $tmp532));
                $tmp531 = $tmp540;
                $tmp530 = $tmp531;
                Iter$194$9529 = $tmp530;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp530));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
                panda$core$Panda$unref$panda$core$Object($tmp533);
                $l541:;
                ITable* $tmp544 = Iter$194$9529->$class->itable;
                while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp544 = $tmp544->next;
                }
                $fn546 $tmp545 = $tmp544->methods[0];
                panda$core$Bit $tmp547 = $tmp545(Iter$194$9529);
                panda$core$Bit $tmp548 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp547);
                bool $tmp543 = $tmp548.value;
                if (!$tmp543) goto $l542;
                {
                    int $tmp551;
                    {
                        ITable* $tmp555 = Iter$194$9529->$class->itable;
                        while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp555 = $tmp555->next;
                        }
                        $fn557 $tmp556 = $tmp555->methods[1];
                        panda$core$Object* $tmp558 = $tmp556(Iter$194$9529);
                        $tmp554 = $tmp558;
                        $tmp553 = ((org$pandalanguage$pandac$FieldDecl*) $tmp554);
                        f552 = $tmp553;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp553));
                        panda$core$Panda$unref$panda$core$Object($tmp554);
                        panda$core$Object* $tmp561 = (($fn560) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp559 = $tmp561;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp559), f552);
                        panda$core$Panda$unref$panda$core$Object($tmp559);
                        org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp562 = $tmp563;
                        panda$core$Bit $tmp564 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f552->type, $tmp562);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                        if ($tmp564.value) {
                        {
                            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s569, ((org$pandalanguage$pandac$Symbol*) f552)->name);
                            $tmp568 = $tmp570;
                            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s571);
                            $tmp567 = $tmp572;
                            panda$core$Int64 $tmp574 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp575;
                            $tmp575 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp575->value = $tmp574;
                            $tmp573 = ((panda$core$Object*) $tmp575);
                            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp567, $tmp573);
                            $tmp566 = $tmp576;
                            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s577);
                            $tmp565 = $tmp578;
                            (($fn579) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp565);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                            panda$core$Panda$unref$panda$core$Object($tmp573);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp585 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f552->type);
                            $tmp584 = $tmp585;
                            panda$core$String* $tmp586 = panda$core$String$convert$R$panda$core$String($tmp584);
                            $tmp583 = $tmp586;
                            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s587);
                            $tmp582 = $tmp588;
                            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, ((org$pandalanguage$pandac$Symbol*) f552)->name);
                            $tmp581 = $tmp589;
                            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s590);
                            $tmp580 = $tmp591;
                            (($fn592) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp580);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                        }
                        }
                    }
                    $tmp551 = -1;
                    goto $l549;
                    $l549:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f552));
                    f552 = NULL;
                    switch ($tmp551) {
                        case -1: goto $l593;
                    }
                    $l593:;
                }
                goto $l541;
                $l542:;
            }
            $tmp528 = -1;
            goto $l526;
            $l526:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$9529));
            Iter$194$9529 = NULL;
            switch ($tmp528) {
                case -1: goto $l594;
            }
            $l594:;
        }
        panda$core$Bit $tmp596 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s595);
        if ($tmp596.value) {
        {
            (($fn598) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s597);
            (($fn600) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s599);
        }
        }
        panda$core$Int64 $tmp601 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp601;
        panda$core$String* $tmp606 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp605 = $tmp606;
        panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s604, $tmp605);
        $tmp603 = $tmp607;
        panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp603, &$s608);
        $tmp602 = $tmp609;
        (($fn610) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp602);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
        (($fn612) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s611);
        (($fn614) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s613);
        (($fn616) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s615);
        org$pandalanguage$pandac$Type* $tmp627 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp626 = $tmp627;
        panda$core$String* $tmp628 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp626);
        $tmp625 = $tmp628;
        panda$core$String* $tmp629 = panda$core$String$convert$R$panda$core$String($tmp625);
        $tmp624 = $tmp629;
        panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s630);
        $tmp623 = $tmp631;
        org$pandalanguage$pandac$Type* $tmp634 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp633 = $tmp634;
        panda$core$String* $tmp635 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp633);
        $tmp632 = $tmp635;
        panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, $tmp632);
        $tmp622 = $tmp636;
        panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s637);
        $tmp621 = $tmp638;
        panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s620, $tmp621);
        $tmp619 = $tmp639;
        panda$core$Object* $tmp647 = (($fn646) self->compiler->$class->vtable[2])(self->compiler);
        $tmp645 = $tmp647;
        panda$collections$ListView* $tmp648 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp645), p_cl);
        $tmp644 = $tmp648;
        ITable* $tmp649 = ((panda$collections$CollectionView*) $tmp644)->$class->itable;
        while ($tmp649->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp649 = $tmp649->next;
        }
        $fn651 $tmp650 = $tmp649->methods[0];
        panda$core$Int64 $tmp652 = $tmp650(((panda$collections$CollectionView*) $tmp644));
        panda$core$Int64$wrapper* $tmp653;
        $tmp653 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp653->value = $tmp652;
        $tmp643 = ((panda$core$Object*) $tmp653);
        panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s642, $tmp643);
        $tmp641 = $tmp654;
        panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s655);
        $tmp640 = $tmp656;
        panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, $tmp640);
        $tmp618 = $tmp657;
        panda$core$String* $tmp661 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp660 = $tmp661;
        panda$core$String* $tmp662 = panda$core$String$convert$R$panda$core$String($tmp660);
        $tmp659 = $tmp662;
        panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s663);
        $tmp658 = $tmp664;
        panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, $tmp658);
        $tmp617 = $tmp665;
        (($fn666) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp617);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object($tmp643);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object($tmp645);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
        panda$core$String* $tmp673 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp672 = $tmp673;
        panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s671, $tmp672);
        $tmp670 = $tmp674;
        panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s675);
        $tmp669 = $tmp676;
        panda$core$String* $tmp678 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp677 = $tmp678;
        panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, $tmp677);
        $tmp668 = $tmp679;
        panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp668, &$s680);
        $tmp667 = $tmp681;
        (($fn682) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp667);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
        panda$core$Object* $tmp685 = (($fn684) self->compiler->$class->vtable[2])(self->compiler);
        $tmp683 = $tmp685;
        panda$core$Bit $tmp686 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp683), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp683);
        if ($tmp686.value) {
        {
            int $tmp689;
            {
                panda$core$String* $tmp694 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp693 = $tmp694;
                panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s692, $tmp693);
                $tmp691 = $tmp695;
                panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s696);
                $tmp690 = $tmp697;
                (($fn698) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp690);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                panda$core$Int64 $tmp699 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp699;
                (($fn701) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s700);
                (($fn703) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s702);
                org$pandalanguage$pandac$Type* $tmp708 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp707 = $tmp708;
                panda$core$String* $tmp709 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp707);
                $tmp706 = $tmp709;
                panda$core$String* $tmp710 = panda$core$String$convert$R$panda$core$String($tmp706);
                $tmp705 = $tmp710;
                panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s711);
                $tmp704 = $tmp712;
                (($fn713) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp704);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
                panda$core$Int64 $tmp714 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp714;
                panda$core$String* $tmp719 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp718 = $tmp719;
                panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s717, $tmp718);
                $tmp716 = $tmp720;
                panda$core$String* $tmp722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp716, &$s721);
                $tmp715 = $tmp722;
                (($fn723) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp715);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                panda$core$String* $tmp728 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp727 = $tmp728;
                panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s726, $tmp727);
                $tmp725 = $tmp729;
                panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s730);
                $tmp724 = $tmp731;
                (($fn732) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp724);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
                panda$core$Int64 $tmp733 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp733;
                panda$core$String* $tmp737 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp736 = $tmp737;
                panda$core$String* $tmp738 = panda$core$String$convert$R$panda$core$String($tmp736);
                $tmp735 = $tmp738;
                panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s739);
                $tmp734 = $tmp740;
                (($fn741) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp734);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                (($fn743) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s742);
                panda$core$Int64 $tmp744 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp744;
                panda$core$String* $tmp749 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp748 = $tmp749;
                panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s747, $tmp748);
                $tmp746 = $tmp750;
                panda$core$String* $tmp752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s751);
                $tmp745 = $tmp752;
                (($fn753) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp745);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                panda$core$Object* $tmp759 = (($fn758) self->compiler->$class->vtable[2])(self->compiler);
                $tmp757 = $tmp759;
                org$pandalanguage$pandac$Type* $tmp761 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp760 = $tmp761;
                org$pandalanguage$pandac$ClassDecl* $tmp762 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp757), $tmp760);
                $tmp756 = $tmp762;
                $tmp755 = $tmp756;
                value754 = $tmp755;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp755));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                panda$core$Panda$unref$panda$core$Object($tmp757);
                panda$core$Object* $tmp768 = (($fn767) self->compiler->$class->vtable[2])(self->compiler);
                $tmp766 = $tmp768;
                panda$collections$ListView* $tmp769 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp766), value754);
                $tmp765 = $tmp769;
                $tmp764 = $tmp765;
                valueVTable763 = $tmp764;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                panda$core$Panda$unref$panda$core$Object($tmp766);
                panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s773, &$s774);
                $tmp772 = $tmp775;
                ITable* $tmp780 = ((panda$collections$CollectionView*) valueVTable763)->$class->itable;
                while ($tmp780->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp780 = $tmp780->next;
                }
                $fn782 $tmp781 = $tmp780->methods[0];
                panda$core$Int64 $tmp783 = $tmp781(((panda$collections$CollectionView*) valueVTable763));
                panda$core$Int64$wrapper* $tmp784;
                $tmp784 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp784->value = $tmp783;
                $tmp779 = ((panda$core$Object*) $tmp784);
                panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s778, $tmp779);
                $tmp777 = $tmp785;
                panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s786);
                $tmp776 = $tmp787;
                panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, $tmp776);
                $tmp771 = $tmp788;
                panda$core$String* $tmp792 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp791 = $tmp792;
                panda$core$String* $tmp793 = panda$core$String$convert$R$panda$core$String($tmp791);
                $tmp790 = $tmp793;
                panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s794);
                $tmp789 = $tmp795;
                panda$core$String* $tmp796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, $tmp789);
                $tmp770 = $tmp796;
                (($fn797) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp770);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
                panda$core$Panda$unref$panda$core$Object($tmp779);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
                panda$core$String* $tmp803 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp802 = $tmp803;
                panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s801, $tmp802);
                $tmp800 = $tmp804;
                panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, &$s805);
                $tmp799 = $tmp806;
                panda$core$String* $tmp810 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp809 = $tmp810;
                panda$core$String* $tmp811 = panda$core$String$convert$R$panda$core$String($tmp809);
                $tmp808 = $tmp811;
                panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, &$s812);
                $tmp807 = $tmp813;
                panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp799, $tmp807);
                $tmp798 = $tmp814;
                (($fn815) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp798);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp809));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
            }
            $tmp689 = -1;
            goto $l687;
            $l687:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value754));
            value754 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable763));
            valueVTable763 = NULL;
            switch ($tmp689) {
                case -1: goto $l816;
            }
            $l816:;
        }
        }
    }
    $tmp492 = -1;
    goto $l490;
    $l490:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path493));
    path493 = NULL;
    switch ($tmp492) {
        case -1: goto $l817;
    }
    $l817:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result821 = NULL;
    panda$core$String* $tmp822;
    panda$core$String* $tmp823;
    org$pandalanguage$pandac$Type* $tmp824;
    panda$core$Object* $tmp825;
    panda$core$String* $returnValue837;
    panda$core$String* $tmp838;
    panda$core$String* $tmp839;
    panda$core$String* $tmp844;
    int $tmp820;
    {
        panda$core$Object* $tmp827 = (($fn826) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp825 = $tmp827;
        org$pandalanguage$pandac$Type* $tmp828 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp825));
        $tmp824 = $tmp828;
        panda$core$String* $tmp829 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp824);
        $tmp823 = $tmp829;
        $tmp822 = $tmp823;
        result821 = $tmp822;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
        panda$core$Panda$unref$panda$core$Object($tmp825);
        panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp830 = $tmp831.value;
        if (!$tmp830) goto $l832;
        panda$core$Bit $tmp834 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result821, &$s833);
        panda$core$Bit $tmp835 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp834);
        $tmp830 = $tmp835.value;
        $l832:;
        panda$core$Bit $tmp836 = { $tmp830 };
        if ($tmp836.value) {
        {
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result821, &$s840);
            $tmp839 = $tmp841;
            $tmp838 = $tmp839;
            $returnValue837 = $tmp838;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
            $tmp820 = 0;
            goto $l818;
            $l842:;
            return $returnValue837;
        }
        }
        $tmp844 = result821;
        $returnValue837 = $tmp844;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
        $tmp820 = 1;
        goto $l818;
        $l845:;
        return $returnValue837;
    }
    $l818:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result821));
    result821 = NULL;
    switch ($tmp820) {
        case 0: goto $l842;
        case 1: goto $l845;
    }
    $l847:;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue850;
    panda$core$Bit result852;
    panda$core$Object* $tmp860;
    org$pandalanguage$pandac$ClassDecl* $tmp863;
    panda$core$Object* $tmp864;
    panda$core$Bit $tmp848 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
    if ($tmp849.value) {
    {
        $returnValue850 = ((panda$core$Bit) { false });
        return $returnValue850;
    }
    }
    panda$core$Bit $tmp855 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp854 = $tmp855.value;
    if (!$tmp854) goto $l856;
    panda$core$Bit $tmp857 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp854 = $tmp857.value;
    $l856:;
    panda$core$Bit $tmp858 = { $tmp854 };
    bool $tmp853 = $tmp858.value;
    if (!$tmp853) goto $l859;
    panda$core$Object* $tmp862 = (($fn861) self->compiler->$class->vtable[2])(self->compiler);
    $tmp860 = $tmp862;
    panda$core$Object* $tmp866 = (($fn865) self->compiler->$class->vtable[2])(self->compiler);
    $tmp864 = $tmp866;
    org$pandalanguage$pandac$ClassDecl* $tmp867 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp864), p_m->returnType);
    $tmp863 = $tmp867;
    panda$core$Bit $tmp868 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp860), $tmp863);
    $tmp853 = $tmp868.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
    panda$core$Panda$unref$panda$core$Object($tmp864);
    panda$core$Panda$unref$panda$core$Object($tmp860);
    $l859:;
    panda$core$Bit $tmp869 = { $tmp853 };
    result852 = $tmp869;
    panda$core$Bit $tmp871 = panda$core$Bit$$NOT$R$panda$core$Bit(result852);
    bool $tmp870 = $tmp871.value;
    if ($tmp870) goto $l872;
    panda$core$Bit $tmp874 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp874);
    bool $tmp873 = $tmp875.value;
    if (!$tmp873) goto $l876;
    panda$core$Bit $tmp878 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp877 = $tmp878.value;
    if ($tmp877) goto $l879;
    panda$core$Bit $tmp880 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp877 = $tmp880.value;
    $l879:;
    panda$core$Bit $tmp881 = { $tmp877 };
    $tmp873 = $tmp881.value;
    $l876:;
    panda$core$Bit $tmp882 = { $tmp873 };
    $tmp870 = $tmp882.value;
    $l872:;
    panda$core$Bit $tmp883 = { $tmp870 };
    PANDA_ASSERT($tmp883.value);
    $returnValue850 = result852;
    return $returnValue850;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp888;
    panda$io$MemoryOutputStream* $tmp889;
    panda$collections$Set* $tmp890;
    panda$collections$Set* $tmp891;
    panda$core$String* separator892 = NULL;
    panda$core$String* $tmp893;
    panda$core$String* $tmp896;
    panda$core$String* $tmp897;
    panda$core$String* $tmp898;
    panda$core$String* $tmp899;
    panda$core$String* $tmp901;
    panda$core$String* $tmp906;
    panda$core$String* $tmp912;
    panda$core$String* $tmp913;
    panda$core$String* $tmp915;
    panda$core$String* $tmp916;
    panda$core$String* $tmp917;
    panda$core$String* $tmp918;
    panda$core$String* $tmp919;
    panda$core$String* $tmp924;
    panda$core$String* $tmp932;
    panda$core$String* $tmp933;
    panda$core$String* $tmp934;
    panda$core$String* $tmp935;
    panda$core$String* $tmp939;
    panda$core$String* $tmp945;
    panda$core$String* $tmp946;
    panda$collections$Iterator* Iter$297$9951 = NULL;
    panda$collections$Iterator* $tmp952;
    panda$collections$Iterator* $tmp953;
    org$pandalanguage$pandac$MethodDecl$Parameter* p969 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp970;
    panda$core$Object* $tmp971;
    panda$core$String* name976 = NULL;
    panda$core$String* $tmp977;
    panda$core$String* $tmp978;
    panda$core$String* $tmp979;
    panda$core$String* $tmp981;
    panda$core$String* $tmp986;
    panda$core$String* $tmp987;
    panda$core$String* $tmp988;
    panda$core$String* $tmp989;
    panda$core$String* $tmp993;
    panda$core$String* $tmp999;
    panda$core$String* $tmp1000;
    int $tmp887;
    {
        {
            $tmp888 = self->importStream;
            $tmp889 = self->bodyImportStream;
            self->importStream = $tmp889;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
        }
        {
            $tmp890 = self->imports;
            $tmp891 = self->bodyImports;
            self->imports = $tmp891;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
        }
        $tmp893 = &$s894;
        separator892 = $tmp893;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
        panda$core$Bit $tmp895 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp895.value) {
        {
            panda$core$String* $tmp902 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp901 = $tmp902;
            panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s900, $tmp901);
            $tmp899 = $tmp903;
            panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp899, &$s904);
            $tmp898 = $tmp905;
            panda$core$String* $tmp907 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp906 = $tmp907;
            panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, $tmp906);
            $tmp897 = $tmp908;
            panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s909);
            $tmp896 = $tmp910;
            (($fn911) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp896);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
            {
                $tmp912 = separator892;
                $tmp913 = &$s914;
                separator892 = $tmp913;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp920 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp919 = $tmp920;
            panda$core$String* $tmp921 = panda$core$String$convert$R$panda$core$String($tmp919);
            $tmp918 = $tmp921;
            panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s922);
            $tmp917 = $tmp923;
            panda$core$String* $tmp925 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp924 = $tmp925;
            panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp917, $tmp924);
            $tmp916 = $tmp926;
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s927);
            $tmp915 = $tmp928;
            (($fn929) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp915);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
        }
        }
        panda$core$Bit $tmp930 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp931 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp930);
        if ($tmp931.value) {
        {
            panda$core$String* $tmp936 = panda$core$String$convert$R$panda$core$String(separator892);
            $tmp935 = $tmp936;
            panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp935, &$s937);
            $tmp934 = $tmp938;
            panda$core$String* $tmp940 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp939 = $tmp940;
            panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp934, $tmp939);
            $tmp933 = $tmp941;
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, &$s942);
            $tmp932 = $tmp943;
            (($fn944) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp932);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            {
                $tmp945 = separator892;
                $tmp946 = &$s947;
                separator892 = $tmp946;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
            }
        }
        }
        {
            int $tmp950;
            {
                ITable* $tmp954 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp954 = $tmp954->next;
                }
                $fn956 $tmp955 = $tmp954->methods[0];
                panda$collections$Iterator* $tmp957 = $tmp955(((panda$collections$Iterable*) p_m->parameters));
                $tmp953 = $tmp957;
                $tmp952 = $tmp953;
                Iter$297$9951 = $tmp952;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
                $l958:;
                ITable* $tmp961 = Iter$297$9951->$class->itable;
                while ($tmp961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp961 = $tmp961->next;
                }
                $fn963 $tmp962 = $tmp961->methods[0];
                panda$core$Bit $tmp964 = $tmp962(Iter$297$9951);
                panda$core$Bit $tmp965 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp964);
                bool $tmp960 = $tmp965.value;
                if (!$tmp960) goto $l959;
                {
                    int $tmp968;
                    {
                        ITable* $tmp972 = Iter$297$9951->$class->itable;
                        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp972 = $tmp972->next;
                        }
                        $fn974 $tmp973 = $tmp972->methods[1];
                        panda$core$Object* $tmp975 = $tmp973(Iter$297$9951);
                        $tmp971 = $tmp975;
                        $tmp970 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp971);
                        p969 = $tmp970;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp970));
                        panda$core$Panda$unref$panda$core$Object($tmp971);
                        panda$core$String* $tmp982 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p969->name);
                        $tmp981 = $tmp982;
                        panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s980, $tmp981);
                        $tmp979 = $tmp983;
                        panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s984);
                        $tmp978 = $tmp985;
                        $tmp977 = $tmp978;
                        name976 = $tmp977;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
                        panda$core$String* $tmp990 = panda$core$String$convert$R$panda$core$String(separator892);
                        $tmp989 = $tmp990;
                        panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s991);
                        $tmp988 = $tmp992;
                        panda$core$String* $tmp994 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p969->type, name976);
                        $tmp993 = $tmp994;
                        panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp988, $tmp993);
                        $tmp987 = $tmp995;
                        panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, &$s996);
                        $tmp986 = $tmp997;
                        (($fn998) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp986);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                        {
                            $tmp999 = separator892;
                            $tmp1000 = &$s1001;
                            separator892 = $tmp1000;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                        }
                    }
                    $tmp968 = -1;
                    goto $l966;
                    $l966:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p969));
                    p969 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name976));
                    name976 = NULL;
                    switch ($tmp968) {
                        case -1: goto $l1002;
                    }
                    $l1002:;
                }
                goto $l958;
                $l959:;
            }
            $tmp950 = -1;
            goto $l948;
            $l948:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$297$9951));
            Iter$297$9951 = NULL;
            switch ($tmp950) {
                case -1: goto $l1003;
            }
            $l1003:;
        }
        (($fn1005) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s1004);
    }
    $tmp887 = -1;
    goto $l885;
    $l885:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator892));
    separator892 = NULL;
    switch ($tmp887) {
        case -1: goto $l1006;
    }
    $l1006:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp1009;
    panda$core$String* $tmp1012;
    panda$core$String* $tmp1017;
    panda$core$String* $tmp1020;
    (($fn1008) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s1007);
    panda$core$String* $tmp1010 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp1009 = $tmp1010;
    (($fn1011) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1009);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
    panda$core$String* $tmp1013 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp1012 = $tmp1013;
    (($fn1014) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1012);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
    (($fn1016) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s1015);
    panda$core$String* $tmp1018 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp1017 = $tmp1018;
    (($fn1019) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1017);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
    panda$core$String* $tmp1021 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp1020 = $tmp1021;
    (($fn1022) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1020);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
    (($fn1024) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s1023);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp1027;
    {
    }
    $tmp1027 = -1;
    goto $l1025;
    $l1025:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1027) {
        case -1: goto $l1028;
    }
    $l1028:;
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

