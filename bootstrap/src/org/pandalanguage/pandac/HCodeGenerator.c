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
#include "panda/collections/HashSet.h"
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
org$pandalanguage$pandac$HCodeGenerator$class_type org$pandalanguage$pandac$HCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$HCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$cleanup, org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$HCodeGenerator$finish} };

typedef panda$core$Object* (*$fn181)(panda$core$Weak*);
typedef panda$core$Object* (*$fn188)(panda$core$Weak*);
typedef void (*$fn205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn225)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn239)(panda$core$Weak*);
typedef panda$core$Object* (*$fn246)(panda$core$Weak*);
typedef panda$core$Object* (*$fn294)(panda$core$Weak*);
typedef panda$core$Object* (*$fn314)(panda$core$Weak*);
typedef panda$core$Object* (*$fn321)(panda$core$Weak*);
typedef void (*$fn338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn359)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn379)(panda$core$Weak*);
typedef void (*$fn474)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn502)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn513)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn518)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn525)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn536)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn539)(panda$core$Weak*);
typedef void (*$fn558)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn577)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn592)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn622)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn627)(panda$collections$CollectionView*);
typedef void (*$fn642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn658)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn660)(panda$core$Weak*);
typedef void (*$fn674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn690)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn710)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn722)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn733)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn738)(panda$core$Weak*);
typedef panda$core$Object* (*$fn747)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn759)(panda$collections$CollectionView*);
typedef void (*$fn774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn792)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn803)(panda$core$Weak*);
typedef panda$core$Object* (*$fn840)(panda$core$Weak*);
typedef panda$core$Object* (*$fn844)(panda$core$Weak*);
typedef void (*$fn901)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn934)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn946)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn964)(panda$collections$Iterator*);
typedef void (*$fn988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1008)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 39, 1240305825190866532, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74", 3, 2112632, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x69\x6e\x74", 4, 225687949, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74", 2, 19912, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c", 4, 206173529, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6c\x6f\x61\x74", 5, 21236676135, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x75\x62\x6c\x65", 6, 2124202461136, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20\x27", 18, -3453142829537489193, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x73\x2e\x68", 8, 21138272720930911, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 123, -6756753529053380675, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 20, 1337001099935674209, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x75\x63\x74\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6f\x6e\x20", 30, 6584878107879042618, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };

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
    panda$collections$HashSet* $tmp20;
    panda$collections$HashSet* $tmp21;
    panda$collections$HashSet* $tmp23;
    panda$collections$HashSet* $tmp24;
    panda$collections$HashSet* $tmp26;
    panda$io$MemoryOutputStream* $tmp27;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp28;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp29;
    panda$io$MemoryOutputStream* $tmp32;
    panda$core$Bit $tmp34;
    panda$io$File* $tmp35;
    panda$io$File* $tmp36;
    panda$io$IndentedOutputStream* $tmp37;
    panda$io$IndentedOutputStream* $tmp38;
    panda$io$IndentedOutputStream* $tmp39;
    panda$io$MemoryOutputStream* $tmp41;
    panda$io$IndentedOutputStream* $tmp43;
    panda$io$IndentedOutputStream* $tmp44;
    panda$io$IndentedOutputStream* $tmp45;
    panda$io$MemoryOutputStream* $tmp47;
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
    self->typesOut = NULL;
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
    panda$collections$HashSet* $tmp22 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp22);
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->typeImports = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$HashSet* $tmp25 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp25);
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
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp30 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
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
    panda$core$Bit$init$builtin_bit(&$tmp34, false);
    self->inClass = $tmp34;
    {
        $tmp35 = self->outDir;
        $tmp36 = p_outDir;
        self->outDir = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
    {
        $tmp37 = self->out;
        panda$io$IndentedOutputStream* $tmp40 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp42 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp42);
        $tmp41 = $tmp42;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp40, ((panda$io$OutputStream*) $tmp41));
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        self->out = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    {
        $tmp43 = self->typesOut;
        panda$io$IndentedOutputStream* $tmp46 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$MemoryOutputStream* $tmp48 = (panda$io$MemoryOutputStream*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$MemoryOutputStream$class);
        panda$io$MemoryOutputStream$init($tmp48);
        $tmp47 = $tmp48;
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp46, ((panda$io$OutputStream*) $tmp47));
        $tmp45 = $tmp46;
        $tmp44 = $tmp45;
        self->typesOut = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $returnValue49;
    panda$core$String* $tmp50;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self->llvmCodeGen, p_s);
    $tmp51 = $tmp52;
    $tmp50 = $tmp51;
    $returnValue49 = $tmp50;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
    return $returnValue49;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* llvmName57 = NULL;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    panda$core$String* $returnValue66;
    panda$core$String* $tmp67;
    panda$core$String* $tmp68;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Bit $tmp71;
    int $tmp56;
    {
        panda$core$String* $tmp60 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self->llvmCodeGen, p_m);
        $tmp59 = $tmp60;
        $tmp58 = $tmp59;
        llvmName57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Bit $tmp62 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(llvmName57, &$s61);
        if ($tmp62.value) goto $l63; else goto $l64;
        $l64:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s65, (panda$core$Int64) { 50 });
        abort();
        $l63:;
        panda$core$Int64$init$builtin_int64(&$tmp70, 1);
        panda$core$Bit$init$builtin_bit(&$tmp71, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp69, ((panda$core$Int64$nullable) { $tmp70, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp71);
        panda$core$String* $tmp72 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(llvmName57, $tmp69);
        $tmp68 = $tmp72;
        $tmp67 = $tmp68;
        $returnValue66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        $tmp56 = 0;
        goto $l54;
        $l73:;
        return $returnValue66;
    }
    $l54:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmName57));
    llvmName57 = NULL;
    switch ($tmp56) {
        case 0: goto $l73;
    }
    $l75:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $returnValue76;
    panda$core$Int64 $tmp77 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self->llvmCodeGen, p_t);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue79;
    panda$core$String* $tmp80;
    panda$core$String* $tmp81;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp90 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s88, &$s89);
    $tmp87 = $tmp90;
    panda$core$String* $tmp93 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp87, &$s91, &$s92);
    $tmp86 = $tmp93;
    panda$core$String* $tmp96 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp86, &$s94, &$s95);
    $tmp85 = $tmp96;
    panda$core$String* $tmp99 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp85, &$s97, &$s98);
    $tmp84 = $tmp99;
    panda$core$String* $tmp102 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp84, &$s100, &$s101);
    $tmp83 = $tmp102;
    panda$core$String* $tmp105 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp83, &$s103, &$s104);
    $tmp82 = $tmp105;
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, p_extension);
    $tmp81 = $tmp106;
    $tmp80 = $tmp81;
    $returnValue79 = $tmp80;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    return $returnValue79;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$64_9108;
    panda$core$Int64 $tmp109;
    panda$core$String* $returnValue111;
    panda$core$String* $tmp112;
    panda$core$Int64 $tmp115;
    panda$core$String* $tmp117;
    panda$core$String* $tmp118;
    panda$core$String* $tmp119;
    panda$core$Object* $tmp121;
    panda$core$Int64 $tmp123;
    panda$core$Int64 $tmp130;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    panda$core$Object* $tmp136;
    panda$core$Int64 $tmp138;
    panda$core$Int64 $tmp145;
    panda$core$String* $tmp147;
    panda$core$Int64 $tmp150;
    panda$core$String* $tmp153;
    panda$core$String* $tmp156;
    panda$core$Bit $tmp159;
    panda$core$Int64 $tmp163;
    panda$core$String* name168 = NULL;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp172;
    org$pandalanguage$pandac$ClassDecl* cl177 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp178;
    org$pandalanguage$pandac$ClassDecl* $tmp179;
    panda$core$Object* $tmp180;
    panda$core$Object* $tmp187;
    panda$core$String* $tmp194;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* $tmp197;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$String* includePath212 = NULL;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$String* $tmp226;
    panda$core$Int64 $tmp230;
    org$pandalanguage$pandac$ClassDecl* cl235 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp236;
    org$pandalanguage$pandac$ClassDecl* $tmp237;
    panda$core$Object* $tmp238;
    panda$core$Object* $tmp245;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    panda$core$String* $tmp251;
    panda$core$Object* $tmp252;
    panda$core$Int64 $tmp253;
    panda$core$String* $tmp260;
    panda$core$String* $tmp261;
    panda$core$Object* $tmp262;
    panda$core$Int64 $tmp263;
    panda$core$Int64 $tmp269;
    panda$core$Object* $tmp274;
    panda$core$Int64 $tmp275;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    panda$core$Object* $tmp282;
    panda$core$Int64 $tmp283;
    org$pandalanguage$pandac$ClassDecl* cl290 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp291;
    org$pandalanguage$pandac$ClassDecl* $tmp292;
    panda$core$Object* $tmp293;
    panda$core$String* name301 = NULL;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    org$pandalanguage$pandac$ClassDecl* cl310 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp311;
    org$pandalanguage$pandac$ClassDecl* $tmp312;
    panda$core$Object* $tmp313;
    panda$core$Object* $tmp320;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$String* includePath346 = NULL;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp360;
    panda$core$String* $tmp365;
    panda$core$String* $tmp366;
    panda$core$Object* $tmp367;
    panda$core$Int64 $tmp368;
    panda$core$Int64 $tmp374;
    panda$core$String* $tmp376;
    panda$core$String* $tmp377;
    panda$core$Object* $tmp378;
    panda$core$Int64 $tmp384;
    panda$core$Int64 $tmp387;
    panda$core$String* $tmp390;
    panda$core$String* $tmp391;
    org$pandalanguage$pandac$Type* $tmp392;
    panda$core$Int64 $tmp397;
    panda$core$Int64 $tmp400;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    org$pandalanguage$pandac$Type* $tmp405;
    panda$core$Bit $tmp409;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    {
        $match$64_9108 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp109, 4);
        panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp109);
        if ($tmp110.value) {
        {
            $tmp112 = &$s113;
            $returnValue111 = $tmp112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp115, 2);
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp115);
        if ($tmp116.value) {
        {
            panda$core$Int64 $tmp122 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp123, 8);
            panda$core$Int64 $tmp124 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp122, $tmp123);
            panda$core$Int64$wrapper* $tmp125;
            $tmp125 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp125->value = $tmp124;
            $tmp121 = ((panda$core$Object*) $tmp125);
            panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s120, $tmp121);
            $tmp119 = $tmp126;
            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, &$s127);
            $tmp118 = $tmp128;
            $tmp117 = $tmp118;
            $returnValue111 = $tmp117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
            panda$core$Panda$unref$panda$core$Object($tmp121);
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp130, 3);
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp130);
        if ($tmp131.value) {
        {
            panda$core$Int64 $tmp137 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64$init$builtin_int64(&$tmp138, 8);
            panda$core$Int64 $tmp139 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp137, $tmp138);
            panda$core$Int64$wrapper* $tmp140;
            $tmp140 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp140->value = $tmp139;
            $tmp136 = ((panda$core$Object*) $tmp140);
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s135, $tmp136);
            $tmp134 = $tmp141;
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s142);
            $tmp133 = $tmp143;
            $tmp132 = $tmp133;
            $returnValue111 = $tmp132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
            panda$core$Panda$unref$panda$core$Object($tmp136);
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp145, 9);
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp145);
        if ($tmp146.value) {
        {
            $tmp147 = &$s148;
            $returnValue111 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp150, 10);
        panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp150);
        if ($tmp151.value) {
        {
            panda$core$Int64 $tmp152 = org$pandalanguage$pandac$HCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            switch ($tmp152.value) {
                case 4:
                {
                    $tmp153 = &$s154;
                    $returnValue111 = $tmp153;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                    return $returnValue111;
                }
                break;
                case 8:
                {
                    $tmp156 = &$s157;
                    $returnValue111 = $tmp156;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
                    return $returnValue111;
                }
                break;
                default:
                {
                    panda$core$Bit$init$builtin_bit(&$tmp159, false);
                    if ($tmp159.value) goto $l160; else goto $l161;
                    $l161:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s162, (panda$core$Int64) { 77 });
                    abort();
                    $l160:;
                }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp163, 0);
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp163);
        if ($tmp164.value) {
        {
            int $tmp167;
            {
                panda$core$String* $tmp173 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                $tmp172 = $tmp173;
                panda$core$String* $tmp174 = panda$core$String$convert$R$panda$core$String($tmp172);
                $tmp171 = $tmp174;
                panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s175);
                $tmp170 = $tmp176;
                $tmp169 = $tmp170;
                name168 = $tmp169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
                panda$core$Object* $tmp182 = (($fn181) self->compiler->$class->vtable[2])(self->compiler);
                $tmp180 = $tmp182;
                org$pandalanguage$pandac$ClassDecl* $tmp183 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp180), p_t);
                $tmp179 = $tmp183;
                $tmp178 = $tmp179;
                cl177 = $tmp178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                panda$core$Panda$unref$panda$core$Object($tmp180);
                if (((panda$core$Bit) { cl177 != NULL }).value) goto $l184; else goto $l185;
                $l185:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s186, (panda$core$Int64) { 82 });
                abort();
                $l184:;
                panda$core$Object* $tmp189 = (($fn188) self->compiler->$class->vtable[2])(self->compiler);
                $tmp187 = $tmp189;
                panda$core$Bit $tmp190 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp187), cl177);
                panda$core$Bit $tmp191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp190);
                panda$core$Panda$unref$panda$core$Object($tmp187);
                if ($tmp191.value) {
                {
                    panda$core$Bit $tmp192 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name168));
                    panda$core$Bit $tmp193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp192);
                    if ($tmp193.value) {
                    {
                        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s198, name168);
                        $tmp197 = $tmp199;
                        panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s200);
                        $tmp196 = $tmp201;
                        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, name168);
                        $tmp195 = $tmp202;
                        panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s203);
                        $tmp194 = $tmp204;
                        (($fn205) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp194);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
                        panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name168));
                    }
                    }
                    panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name168, &$s208);
                    $tmp207 = $tmp209;
                    $tmp206 = $tmp207;
                    $returnValue111 = $tmp206;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                    $tmp167 = 0;
                    goto $l165;
                    $l210:;
                    return $returnValue111;
                }
                }
                panda$core$String* $tmp216 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl177, &$s215);
                $tmp214 = $tmp216;
                $tmp213 = $tmp214;
                includePath212 = $tmp213;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                panda$core$Bit $tmp217 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath212));
                panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
                if ($tmp218.value) {
                {
                    panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s221, includePath212);
                    $tmp220 = $tmp222;
                    panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s223);
                    $tmp219 = $tmp224;
                    (($fn225) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp219);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                    panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath212));
                }
                }
                $tmp226 = name168;
                $returnValue111 = $tmp226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                $tmp167 = 1;
                goto $l165;
                $l227:;
                return $returnValue111;
            }
            $l165:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name168));
            name168 = NULL;
            cl177 = NULL;
            includePath212 = NULL;
            switch ($tmp167) {
                case 1: goto $l227;
                case 0: goto $l210;
            }
            $l229:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp230, 1);
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp230);
        if ($tmp231.value) {
        {
            int $tmp234;
            {
                panda$core$Object* $tmp240 = (($fn239) self->compiler->$class->vtable[2])(self->compiler);
                $tmp238 = $tmp240;
                org$pandalanguage$pandac$ClassDecl* $tmp241 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp238), p_t);
                $tmp237 = $tmp241;
                $tmp236 = $tmp237;
                cl235 = $tmp236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                panda$core$Panda$unref$panda$core$Object($tmp238);
                if (((panda$core$Bit) { cl235 != NULL }).value) goto $l242; else goto $l243;
                $l243:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s244, (panda$core$Int64) { 98 });
                abort();
                $l242:;
                panda$core$Object* $tmp247 = (($fn246) self->compiler->$class->vtable[2])(self->compiler);
                $tmp245 = $tmp247;
                panda$core$Bit $tmp248 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp245), cl235);
                panda$core$Panda$unref$panda$core$Object($tmp245);
                if ($tmp248.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp253, 0);
                    panda$core$Object* $tmp254 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp253);
                    $tmp252 = $tmp254;
                    panda$core$String* $tmp255 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp252));
                    $tmp251 = $tmp255;
                    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s256);
                    $tmp250 = $tmp257;
                    $tmp249 = $tmp250;
                    $returnValue111 = $tmp249;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                    panda$core$Panda$unref$panda$core$Object($tmp252);
                    $tmp234 = 0;
                    goto $l232;
                    $l258:;
                    return $returnValue111;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp263, 0);
                panda$core$Object* $tmp264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp263);
                $tmp262 = $tmp264;
                panda$core$String* $tmp265 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp262));
                $tmp261 = $tmp265;
                $tmp260 = $tmp261;
                $returnValue111 = $tmp260;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
                panda$core$Panda$unref$panda$core$Object($tmp262);
                $tmp234 = 1;
                goto $l232;
                $l266:;
                return $returnValue111;
            }
            $l232:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl235));
            cl235 = NULL;
            switch ($tmp234) {
                case 0: goto $l258;
                case 1: goto $l266;
            }
            $l268:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp269, 11);
        panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp269);
        if ($tmp270.value) {
        {
            int $tmp273;
            {
                panda$core$Int64$init$builtin_int64(&$tmp275, 0);
                panda$core$Object* $tmp276 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp275);
                $tmp274 = $tmp276;
                panda$core$Bit $tmp278 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp274))->name, &$s277);
                panda$core$Panda$unref$panda$core$Object($tmp274);
                if ($tmp278.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp283, 1);
                    panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp283);
                    $tmp282 = $tmp284;
                    panda$core$String* $tmp285 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp282));
                    $tmp281 = $tmp285;
                    panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s286);
                    $tmp280 = $tmp287;
                    $tmp279 = $tmp280;
                    $returnValue111 = $tmp279;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                    panda$core$Panda$unref$panda$core$Object($tmp282);
                    $tmp273 = 0;
                    goto $l271;
                    $l288:;
                    return $returnValue111;
                }
                }
                panda$core$Object* $tmp295 = (($fn294) self->compiler->$class->vtable[2])(self->compiler);
                $tmp293 = $tmp295;
                org$pandalanguage$pandac$ClassDecl* $tmp296 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp293), p_t);
                $tmp292 = $tmp296;
                $tmp291 = $tmp292;
                cl290 = $tmp291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
                panda$core$Panda$unref$panda$core$Object($tmp293);
                panda$core$Bit $tmp297 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl290);
                if ($tmp297.value) {
                {
                    int $tmp300;
                    {
                        panda$core$String* $tmp306 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                        $tmp305 = $tmp306;
                        panda$core$String* $tmp307 = panda$core$String$convert$R$panda$core$String($tmp305);
                        $tmp304 = $tmp307;
                        panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s308);
                        $tmp303 = $tmp309;
                        $tmp302 = $tmp303;
                        name301 = $tmp302;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                        panda$core$Object* $tmp315 = (($fn314) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp313 = $tmp315;
                        org$pandalanguage$pandac$ClassDecl* $tmp316 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp313), p_t);
                        $tmp312 = $tmp316;
                        $tmp311 = $tmp312;
                        cl310 = $tmp311;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                        panda$core$Panda$unref$panda$core$Object($tmp313);
                        if (((panda$core$Bit) { cl310 != NULL }).value) goto $l317; else goto $l318;
                        $l318:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s319, (panda$core$Int64) { 111 });
                        abort();
                        $l317:;
                        panda$core$Object* $tmp322 = (($fn321) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp320 = $tmp322;
                        panda$core$Bit $tmp323 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp320), cl310);
                        panda$core$Bit $tmp324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp323);
                        panda$core$Panda$unref$panda$core$Object($tmp320);
                        if ($tmp324.value) {
                        {
                            panda$core$Bit $tmp325 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) name301));
                            panda$core$Bit $tmp326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp325);
                            if ($tmp326.value) {
                            {
                                panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s331, name301);
                                $tmp330 = $tmp332;
                                panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s333);
                                $tmp329 = $tmp334;
                                panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, name301);
                                $tmp328 = $tmp335;
                                panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp328, &$s336);
                                $tmp327 = $tmp337;
                                (($fn338) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp327);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) name301));
                            }
                            }
                            panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name301, &$s341);
                            $tmp340 = $tmp342;
                            $tmp339 = $tmp340;
                            $returnValue111 = $tmp339;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                            $tmp300 = 0;
                            goto $l298;
                            $l343:;
                            $tmp273 = 1;
                            goto $l271;
                            $l344:;
                            return $returnValue111;
                        }
                        }
                        panda$core$String* $tmp350 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, cl310, &$s349);
                        $tmp348 = $tmp350;
                        $tmp347 = $tmp348;
                        includePath346 = $tmp347;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                        panda$core$Bit $tmp351 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(self->imports, ((panda$collections$Key*) includePath346));
                        panda$core$Bit $tmp352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp351);
                        if ($tmp352.value) {
                        {
                            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s355, includePath346);
                            $tmp354 = $tmp356;
                            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s357);
                            $tmp353 = $tmp358;
                            (($fn359) ((panda$io$OutputStream*) self->importStream)->$class->vtable[19])(((panda$io$OutputStream*) self->importStream), $tmp353);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                            panda$collections$HashSet$add$panda$collections$HashSet$T(self->imports, ((panda$collections$Key*) includePath346));
                        }
                        }
                        $tmp360 = name301;
                        $returnValue111 = $tmp360;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
                        $tmp300 = 1;
                        goto $l298;
                        $l361:;
                        $tmp273 = 2;
                        goto $l271;
                        $l362:;
                        return $returnValue111;
                    }
                    $l298:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) includePath346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl310));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name301));
                    name301 = NULL;
                    cl310 = NULL;
                    includePath346 = NULL;
                    switch ($tmp300) {
                        case 1: goto $l361;
                        case 0: goto $l343;
                    }
                    $l364:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp368, 0);
                panda$core$Object* $tmp369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp368);
                $tmp367 = $tmp369;
                panda$core$String* $tmp370 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp367));
                $tmp366 = $tmp370;
                $tmp365 = $tmp366;
                $returnValue111 = $tmp365;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
                panda$core$Panda$unref$panda$core$Object($tmp367);
                $tmp273 = 3;
                goto $l271;
                $l371:;
                return $returnValue111;
            }
            $l271:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl290));
            cl290 = NULL;
            switch ($tmp273) {
                case 0: goto $l288;
                case 3: goto $l371;
                case 2: goto $l362;
                case 1: goto $l344;
            }
            $l373:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp374, 12);
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp374);
        if ($tmp375.value) {
        {
            panda$core$Object* $tmp380 = (($fn379) p_t->parameter->$class->vtable[2])(p_t->parameter);
            $tmp378 = $tmp380;
            panda$core$String* $tmp381 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp378)->bound);
            $tmp377 = $tmp381;
            $tmp376 = $tmp377;
            $returnValue111 = $tmp376;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
            panda$core$Panda$unref$panda$core$Object($tmp378);
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp384, 14);
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp384);
        bool $tmp383 = $tmp385.value;
        if ($tmp383) goto $l386;
        panda$core$Int64$init$builtin_int64(&$tmp387, 15);
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp387);
        $tmp383 = $tmp388.value;
        $l386:;
        panda$core$Bit $tmp389 = { $tmp383 };
        if ($tmp389.value) {
        {
            org$pandalanguage$pandac$Type* $tmp393 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
            $tmp392 = $tmp393;
            panda$core$String* $tmp394 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp392);
            $tmp391 = $tmp394;
            $tmp390 = $tmp391;
            $returnValue111 = $tmp390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
            return $returnValue111;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp397, 16);
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp397);
        bool $tmp396 = $tmp398.value;
        if ($tmp396) goto $l399;
        panda$core$Int64$init$builtin_int64(&$tmp400, 17);
        panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_9108.$rawValue, $tmp400);
        $tmp396 = $tmp401.value;
        $l399:;
        panda$core$Bit $tmp402 = { $tmp396 };
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$Type* $tmp406 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp405 = $tmp406;
            panda$core$String* $tmp407 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp405);
            $tmp404 = $tmp407;
            $tmp403 = $tmp404;
            $returnValue111 = $tmp403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
            return $returnValue111;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp409, false);
            if ($tmp409.value) goto $l410; else goto $l411;
            $l411:;
            panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s415, ((panda$core$Object*) p_t));
            $tmp414 = $tmp416;
            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, &$s417);
            $tmp413 = $tmp418;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s412, (panda$core$Int64) { 134 }, $tmp413);
            abort();
            $l410:;
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
    abort();
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_name) {
    panda$core$String* $returnValue419;
    panda$core$String* $tmp420;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$String* $tmp423;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* $tmp426 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp425 = $tmp426;
    panda$core$String* $tmp427 = panda$core$String$convert$R$panda$core$String($tmp425);
    $tmp424 = $tmp427;
    panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, &$s428);
    $tmp423 = $tmp429;
    panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, p_name);
    $tmp422 = $tmp430;
    panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s431);
    $tmp421 = $tmp432;
    $tmp420 = $tmp421;
    $returnValue419 = $tmp420;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
    return $returnValue419;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp434;
    panda$core$Weak* $tmp435;
    panda$core$Weak* $tmp436;
    {
        $tmp434 = self->compiler;
        panda$core$Weak* $tmp437 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp437, ((panda$core$Object*) p_compiler));
        $tmp436 = $tmp437;
        $tmp435 = $tmp436;
        self->compiler = $tmp435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp435));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue438;
    panda$io$File* $tmp439;
    panda$io$File* $tmp440;
    panda$core$String* $tmp441;
    panda$core$String* $tmp442 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp441 = $tmp442;
    panda$io$File* $tmp443 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp441);
    $tmp440 = $tmp443;
    $tmp439 = $tmp440;
    $returnValue438 = $tmp439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
    return $returnValue438;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp448;
    panda$io$File* path449 = NULL;
    panda$io$File* $tmp450;
    panda$io$File* $tmp451;
    panda$io$File* $tmp454;
    panda$io$IndentedOutputStream* $tmp456;
    panda$io$IndentedOutputStream* $tmp457;
    panda$io$IndentedOutputStream* $tmp458;
    panda$io$OutputStream* $tmp460;
    panda$io$File* typesPath462 = NULL;
    panda$io$File* $tmp463;
    panda$io$File* $tmp464;
    panda$io$IndentedOutputStream* $tmp467;
    panda$io$IndentedOutputStream* $tmp468;
    panda$io$IndentedOutputStream* $tmp469;
    panda$io$OutputStream* $tmp471;
    panda$core$String* $tmp477;
    panda$core$String* $tmp478;
    panda$core$String* $tmp480;
    panda$io$MemoryOutputStream* $tmp490;
    panda$io$MemoryOutputStream* $tmp491;
    panda$collections$HashSet* $tmp492;
    panda$collections$HashSet* $tmp493;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$String* $tmp497;
    panda$core$Int64 $tmp503;
    panda$collections$Iterator* Iter$178$9508 = NULL;
    panda$collections$Iterator* $tmp509;
    panda$collections$Iterator* $tmp510;
    panda$collections$ListView* $tmp511;
    panda$core$Object* $tmp512;
    org$pandalanguage$pandac$FieldDecl* f531 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp532;
    panda$core$Object* $tmp533;
    panda$core$Object* $tmp538;
    org$pandalanguage$pandac$Type* $tmp541;
    panda$core$String* $tmp544;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$Object* $tmp552;
    panda$core$String* $tmp559;
    panda$core$String* $tmp560;
    panda$core$String* $tmp561;
    panda$core$String* $tmp562;
    panda$core$String* $tmp563;
    panda$core$Int64 $tmp580;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$String* $tmp585;
    panda$core$String* $tmp593;
    panda$core$String* $tmp594;
    panda$core$String* $tmp595;
    panda$core$String* $tmp597;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $tmp600;
    panda$core$String* $tmp601;
    org$pandalanguage$pandac$Type* $tmp602;
    panda$core$String* $tmp608;
    org$pandalanguage$pandac$Type* $tmp609;
    panda$core$String* $tmp616;
    panda$core$String* $tmp617;
    panda$core$Object* $tmp619;
    panda$collections$ListView* $tmp620;
    panda$core$Object* $tmp621;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp643;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$String* $tmp646;
    panda$core$String* $tmp648;
    panda$core$String* $tmp653;
    panda$core$Object* $tmp659;
    panda$core$String* $tmp666;
    panda$core$String* $tmp667;
    panda$core$String* $tmp669;
    panda$core$Int64 $tmp675;
    panda$core$String* $tmp681;
    panda$core$String* $tmp682;
    panda$core$String* $tmp683;
    org$pandalanguage$pandac$Type* $tmp684;
    panda$core$Int64 $tmp691;
    panda$core$String* $tmp693;
    panda$core$String* $tmp694;
    panda$core$String* $tmp696;
    panda$core$String* $tmp702;
    panda$core$String* $tmp703;
    panda$core$String* $tmp705;
    panda$core$Int64 $tmp711;
    panda$core$String* $tmp713;
    panda$core$String* $tmp714;
    panda$core$String* $tmp715;
    panda$core$Int64 $tmp723;
    panda$core$String* $tmp725;
    panda$core$String* $tmp726;
    panda$core$String* $tmp728;
    org$pandalanguage$pandac$ClassDecl* value734 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp735;
    org$pandalanguage$pandac$ClassDecl* $tmp736;
    panda$core$Object* $tmp737;
    org$pandalanguage$pandac$Type* $tmp740;
    panda$collections$ListView* valueVTable743 = NULL;
    panda$collections$ListView* $tmp744;
    panda$collections$ListView* $tmp745;
    panda$core$Object* $tmp746;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp753;
    panda$core$String* $tmp754;
    panda$core$Object* $tmp756;
    panda$core$String* $tmp766;
    panda$core$String* $tmp767;
    panda$core$String* $tmp768;
    panda$core$String* $tmp775;
    panda$core$String* $tmp776;
    panda$core$String* $tmp777;
    panda$core$String* $tmp779;
    panda$core$String* $tmp784;
    panda$core$String* $tmp785;
    panda$core$String* $tmp786;
    int $tmp447;
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
        panda$collections$HashSet$clear(self->typeImports);
        panda$collections$HashSet$clear(self->bodyImports);
        panda$core$Bit$init$builtin_bit(&$tmp448, true);
        self->inClass = $tmp448;
        panda$io$File* $tmp453 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s452);
        $tmp451 = $tmp453;
        $tmp450 = $tmp451;
        path449 = $tmp450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
        panda$io$File* $tmp455 = panda$io$File$parent$R$panda$io$File$Q(path449);
        $tmp454 = $tmp455;
        panda$io$File$createDirectories($tmp454);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
        {
            $tmp456 = self->out;
            panda$io$IndentedOutputStream* $tmp459 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp461 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path449);
            $tmp460 = $tmp461;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp459, $tmp460);
            $tmp458 = $tmp459;
            $tmp457 = $tmp458;
            self->out = $tmp457;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
        }
        panda$io$File* $tmp466 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s465);
        $tmp464 = $tmp466;
        $tmp463 = $tmp464;
        typesPath462 = $tmp463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
        {
            $tmp467 = self->typesOut;
            panda$io$IndentedOutputStream* $tmp470 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp472 = panda$io$File$openOutputStream$R$panda$io$OutputStream(typesPath462);
            $tmp471 = $tmp472;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp470, $tmp471);
            $tmp469 = $tmp470;
            $tmp468 = $tmp469;
            self->typesOut = $tmp468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
        }
        (($fn474) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s473);
        (($fn476) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s475);
        panda$core$String* $tmp481 = panda$io$File$name$R$panda$core$String(typesPath462);
        $tmp480 = $tmp481;
        panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s479, $tmp480);
        $tmp478 = $tmp482;
        panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s483);
        $tmp477 = $tmp484;
        (($fn485) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp477);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        (($fn487) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), &$s486);
        (($fn489) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), &$s488);
        {
            $tmp490 = self->importStream;
            $tmp491 = self->typeImportStream;
            self->importStream = $tmp491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        }
        {
            $tmp492 = self->imports;
            $tmp493 = self->typeImports;
            self->imports = $tmp493;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        }
        panda$core$String* $tmp498 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp497 = $tmp498;
        panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s496, $tmp497);
        $tmp495 = $tmp499;
        panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp495, &$s500);
        $tmp494 = $tmp501;
        (($fn502) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp494);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Int64$init$builtin_int64(&$tmp503, 1);
        panda$core$Int64 $tmp504 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp503);
        self->types->level = $tmp504;
        {
            int $tmp507;
            {
                panda$core$Object* $tmp514 = (($fn513) self->compiler->$class->vtable[2])(self->compiler);
                $tmp512 = $tmp514;
                panda$collections$ListView* $tmp515 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp512), p_cl);
                $tmp511 = $tmp515;
                ITable* $tmp516 = ((panda$collections$Iterable*) $tmp511)->$class->itable;
                while ($tmp516->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp516 = $tmp516->next;
                }
                $fn518 $tmp517 = $tmp516->methods[0];
                panda$collections$Iterator* $tmp519 = $tmp517(((panda$collections$Iterable*) $tmp511));
                $tmp510 = $tmp519;
                $tmp509 = $tmp510;
                Iter$178$9508 = $tmp509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
                panda$core$Panda$unref$panda$core$Object($tmp512);
                $l520:;
                ITable* $tmp523 = Iter$178$9508->$class->itable;
                while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp523 = $tmp523->next;
                }
                $fn525 $tmp524 = $tmp523->methods[0];
                panda$core$Bit $tmp526 = $tmp524(Iter$178$9508);
                panda$core$Bit $tmp527 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp526);
                bool $tmp522 = $tmp527.value;
                if (!$tmp522) goto $l521;
                {
                    int $tmp530;
                    {
                        ITable* $tmp534 = Iter$178$9508->$class->itable;
                        while ($tmp534->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp534 = $tmp534->next;
                        }
                        $fn536 $tmp535 = $tmp534->methods[1];
                        panda$core$Object* $tmp537 = $tmp535(Iter$178$9508);
                        $tmp533 = $tmp537;
                        $tmp532 = ((org$pandalanguage$pandac$FieldDecl*) $tmp533);
                        f531 = $tmp532;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
                        panda$core$Panda$unref$panda$core$Object($tmp533);
                        panda$core$Object* $tmp540 = (($fn539) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp538 = $tmp540;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp538), f531);
                        panda$core$Panda$unref$panda$core$Object($tmp538);
                        org$pandalanguage$pandac$Type* $tmp542 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp541 = $tmp542;
                        panda$core$Bit $tmp543 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f531->type, $tmp541);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                        if ($tmp543.value) {
                        {
                            panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s548, ((org$pandalanguage$pandac$Symbol*) f531)->name);
                            $tmp547 = $tmp549;
                            panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s550);
                            $tmp546 = $tmp551;
                            panda$core$Int64 $tmp553 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp554;
                            $tmp554 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp554->value = $tmp553;
                            $tmp552 = ((panda$core$Object*) $tmp554);
                            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp546, $tmp552);
                            $tmp545 = $tmp555;
                            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s556);
                            $tmp544 = $tmp557;
                            (($fn558) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp544);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
                            panda$core$Panda$unref$panda$core$Object($tmp552);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp564 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f531->type);
                            $tmp563 = $tmp564;
                            panda$core$String* $tmp565 = panda$core$String$convert$R$panda$core$String($tmp563);
                            $tmp562 = $tmp565;
                            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s566);
                            $tmp561 = $tmp567;
                            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, ((org$pandalanguage$pandac$Symbol*) f531)->name);
                            $tmp560 = $tmp568;
                            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s569);
                            $tmp559 = $tmp570;
                            (($fn571) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp559);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                        }
                        }
                    }
                    $tmp530 = -1;
                    goto $l528;
                    $l528:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f531));
                    f531 = NULL;
                    switch ($tmp530) {
                        case -1: goto $l572;
                    }
                    $l572:;
                }
                goto $l520;
                $l521:;
            }
            $tmp507 = -1;
            goto $l505;
            $l505:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$178$9508));
            Iter$178$9508 = NULL;
            switch ($tmp507) {
                case -1: goto $l573;
            }
            $l573:;
        }
        panda$core$Bit $tmp575 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s574);
        if ($tmp575.value) {
        {
            (($fn577) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s576);
            (($fn579) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s578);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp580, 1);
        panda$core$Int64 $tmp581 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp580);
        self->types->level = $tmp581;
        panda$core$String* $tmp586 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp585 = $tmp586;
        panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s584, $tmp585);
        $tmp583 = $tmp587;
        panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s588);
        $tmp582 = $tmp589;
        (($fn590) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp582);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
        (($fn592) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s591);
        org$pandalanguage$pandac$Type* $tmp603 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp602 = $tmp603;
        panda$core$String* $tmp604 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp602);
        $tmp601 = $tmp604;
        panda$core$String* $tmp605 = panda$core$String$convert$R$panda$core$String($tmp601);
        $tmp600 = $tmp605;
        panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s606);
        $tmp599 = $tmp607;
        org$pandalanguage$pandac$Type* $tmp610 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp609 = $tmp610;
        panda$core$String* $tmp611 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp609);
        $tmp608 = $tmp611;
        panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, $tmp608);
        $tmp598 = $tmp612;
        panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s613);
        $tmp597 = $tmp614;
        panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s596, $tmp597);
        $tmp595 = $tmp615;
        panda$core$Object* $tmp623 = (($fn622) self->compiler->$class->vtable[2])(self->compiler);
        $tmp621 = $tmp623;
        panda$collections$ListView* $tmp624 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp621), p_cl);
        $tmp620 = $tmp624;
        ITable* $tmp625 = ((panda$collections$CollectionView*) $tmp620)->$class->itable;
        while ($tmp625->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp625 = $tmp625->next;
        }
        $fn627 $tmp626 = $tmp625->methods[0];
        panda$core$Int64 $tmp628 = $tmp626(((panda$collections$CollectionView*) $tmp620));
        panda$core$Int64$wrapper* $tmp629;
        $tmp629 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp629->value = $tmp628;
        $tmp619 = ((panda$core$Object*) $tmp629);
        panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s618, $tmp619);
        $tmp617 = $tmp630;
        panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s631);
        $tmp616 = $tmp632;
        panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, $tmp616);
        $tmp594 = $tmp633;
        panda$core$String* $tmp637 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp636 = $tmp637;
        panda$core$String* $tmp638 = panda$core$String$convert$R$panda$core$String($tmp636);
        $tmp635 = $tmp638;
        panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s639);
        $tmp634 = $tmp640;
        panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, $tmp634);
        $tmp593 = $tmp641;
        (($fn642) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp593);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object($tmp619);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
        panda$core$Panda$unref$panda$core$Object($tmp621);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
        panda$core$String* $tmp649 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp648 = $tmp649;
        panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s647, $tmp648);
        $tmp646 = $tmp650;
        panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s651);
        $tmp645 = $tmp652;
        panda$core$String* $tmp654 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp653 = $tmp654;
        panda$core$String* $tmp655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, $tmp653);
        $tmp644 = $tmp655;
        panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s656);
        $tmp643 = $tmp657;
        (($fn658) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp643);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
        panda$core$Object* $tmp661 = (($fn660) self->compiler->$class->vtable[2])(self->compiler);
        $tmp659 = $tmp661;
        panda$core$Bit $tmp662 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp659), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp659);
        if ($tmp662.value) {
        {
            int $tmp665;
            {
                panda$core$String* $tmp670 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp669 = $tmp670;
                panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s668, $tmp669);
                $tmp667 = $tmp671;
                panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s672);
                $tmp666 = $tmp673;
                (($fn674) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp666);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
                panda$core$Int64$init$builtin_int64(&$tmp675, 1);
                panda$core$Int64 $tmp676 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp675);
                self->types->level = $tmp676;
                (($fn678) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s677);
                (($fn680) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s679);
                org$pandalanguage$pandac$Type* $tmp685 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp684 = $tmp685;
                panda$core$String* $tmp686 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp684);
                $tmp683 = $tmp686;
                panda$core$String* $tmp687 = panda$core$String$convert$R$panda$core$String($tmp683);
                $tmp682 = $tmp687;
                panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s688);
                $tmp681 = $tmp689;
                (($fn690) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp681);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                panda$core$Int64$init$builtin_int64(&$tmp691, 1);
                panda$core$Int64 $tmp692 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp691);
                self->types->level = $tmp692;
                panda$core$String* $tmp697 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp696 = $tmp697;
                panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s695, $tmp696);
                $tmp694 = $tmp698;
                panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s699);
                $tmp693 = $tmp700;
                (($fn701) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp693);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                panda$core$String* $tmp706 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp705 = $tmp706;
                panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s704, $tmp705);
                $tmp703 = $tmp707;
                panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s708);
                $tmp702 = $tmp709;
                (($fn710) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp702);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
                panda$core$Int64$init$builtin_int64(&$tmp711, 1);
                panda$core$Int64 $tmp712 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp711);
                self->types->level = $tmp712;
                panda$core$String* $tmp716 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp715 = $tmp716;
                panda$core$String* $tmp717 = panda$core$String$convert$R$panda$core$String($tmp715);
                $tmp714 = $tmp717;
                panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s718);
                $tmp713 = $tmp719;
                (($fn720) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp713);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                (($fn722) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s721);
                panda$core$Int64$init$builtin_int64(&$tmp723, 1);
                panda$core$Int64 $tmp724 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, $tmp723);
                self->types->level = $tmp724;
                panda$core$String* $tmp729 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp728 = $tmp729;
                panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s727, $tmp728);
                $tmp726 = $tmp730;
                panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp726, &$s731);
                $tmp725 = $tmp732;
                (($fn733) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp725);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                panda$core$Object* $tmp739 = (($fn738) self->compiler->$class->vtable[2])(self->compiler);
                $tmp737 = $tmp739;
                org$pandalanguage$pandac$Type* $tmp741 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp740 = $tmp741;
                org$pandalanguage$pandac$ClassDecl* $tmp742 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp737), $tmp740);
                $tmp736 = $tmp742;
                $tmp735 = $tmp736;
                value734 = $tmp735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                panda$core$Panda$unref$panda$core$Object($tmp737);
                panda$core$Object* $tmp748 = (($fn747) self->compiler->$class->vtable[2])(self->compiler);
                $tmp746 = $tmp748;
                panda$collections$ListView* $tmp749 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp746), value734);
                $tmp745 = $tmp749;
                $tmp744 = $tmp745;
                valueVTable743 = $tmp744;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                panda$core$Panda$unref$panda$core$Object($tmp746);
                ITable* $tmp757 = ((panda$collections$CollectionView*) valueVTable743)->$class->itable;
                while ($tmp757->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp757 = $tmp757->next;
                }
                $fn759 $tmp758 = $tmp757->methods[0];
                panda$core$Int64 $tmp760 = $tmp758(((panda$collections$CollectionView*) valueVTable743));
                panda$core$Int64$wrapper* $tmp761;
                $tmp761 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp761->value = $tmp760;
                $tmp756 = ((panda$core$Object*) $tmp761);
                panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s755, $tmp756);
                $tmp754 = $tmp762;
                panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s763);
                $tmp753 = $tmp764;
                panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s752, $tmp753);
                $tmp751 = $tmp765;
                panda$core$String* $tmp769 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp768 = $tmp769;
                panda$core$String* $tmp770 = panda$core$String$convert$R$panda$core$String($tmp768);
                $tmp767 = $tmp770;
                panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, &$s771);
                $tmp766 = $tmp772;
                panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, $tmp766);
                $tmp750 = $tmp773;
                (($fn774) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp750);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                panda$core$Panda$unref$panda$core$Object($tmp756);
                panda$core$String* $tmp780 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp779 = $tmp780;
                panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s778, $tmp779);
                $tmp777 = $tmp781;
                panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s782);
                $tmp776 = $tmp783;
                panda$core$String* $tmp787 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp786 = $tmp787;
                panda$core$String* $tmp788 = panda$core$String$convert$R$panda$core$String($tmp786);
                $tmp785 = $tmp788;
                panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s789);
                $tmp784 = $tmp790;
                panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, $tmp784);
                $tmp775 = $tmp791;
                (($fn792) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp775);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
            }
            $tmp665 = -1;
            goto $l663;
            $l663:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value734));
            value734 = NULL;
            valueVTable743 = NULL;
            switch ($tmp665) {
                case -1: goto $l793;
            }
            $l793:;
        }
        }
    }
    $tmp447 = -1;
    goto $l445;
    $l445:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) typesPath462));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path449));
    path449 = NULL;
    typesPath462 = NULL;
    switch ($tmp447) {
        case -1: goto $l794;
    }
    $l794:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result798 = NULL;
    panda$core$String* $tmp799;
    panda$core$String* $tmp800;
    org$pandalanguage$pandac$Type* $tmp801;
    panda$core$Object* $tmp802;
    panda$core$Int64 $tmp808;
    panda$core$String* $returnValue815;
    panda$core$String* $tmp816;
    panda$core$String* $tmp817;
    panda$core$String* $tmp822;
    int $tmp797;
    {
        panda$core$Object* $tmp804 = (($fn803) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp802 = $tmp804;
        org$pandalanguage$pandac$Type* $tmp805 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp802));
        $tmp801 = $tmp805;
        panda$core$String* $tmp806 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp801);
        $tmp800 = $tmp806;
        $tmp799 = $tmp800;
        result798 = $tmp799;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp799));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
        panda$core$Panda$unref$panda$core$Object($tmp802);
        panda$core$Int64$init$builtin_int64(&$tmp808, 2);
        panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp808);
        bool $tmp807 = $tmp809.value;
        if (!$tmp807) goto $l810;
        panda$core$Bit $tmp812 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result798, &$s811);
        panda$core$Bit $tmp813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp812);
        $tmp807 = $tmp813.value;
        $l810:;
        panda$core$Bit $tmp814 = { $tmp807 };
        if ($tmp814.value) {
        {
            panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result798, &$s818);
            $tmp817 = $tmp819;
            $tmp816 = $tmp817;
            $returnValue815 = $tmp816;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
            $tmp797 = 0;
            goto $l795;
            $l820:;
            return $returnValue815;
        }
        }
        $tmp822 = result798;
        $returnValue815 = $tmp822;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
        $tmp797 = 1;
        goto $l795;
        $l823:;
        return $returnValue815;
    }
    $l795:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result798));
    result798 = NULL;
    switch ($tmp797) {
        case 0: goto $l820;
        case 1: goto $l823;
    }
    $l825:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue828;
    panda$core$Bit $tmp829;
    panda$core$Bit result831;
    panda$core$Object* $tmp839;
    org$pandalanguage$pandac$ClassDecl* $tmp842;
    panda$core$Object* $tmp843;
    panda$core$String* $tmp866;
    panda$core$String* $tmp867;
    panda$core$String* $tmp869;
    panda$core$Bit $tmp826 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp827 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp826);
    if ($tmp827.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp829, false);
        $returnValue828 = $tmp829;
        return $returnValue828;
    }
    }
    panda$core$Bit $tmp834 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp833 = $tmp834.value;
    if (!$tmp833) goto $l835;
    panda$core$Bit $tmp836 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp833 = $tmp836.value;
    $l835:;
    panda$core$Bit $tmp837 = { $tmp833 };
    bool $tmp832 = $tmp837.value;
    if (!$tmp832) goto $l838;
    panda$core$Object* $tmp841 = (($fn840) self->compiler->$class->vtable[2])(self->compiler);
    $tmp839 = $tmp841;
    panda$core$Object* $tmp845 = (($fn844) self->compiler->$class->vtable[2])(self->compiler);
    $tmp843 = $tmp845;
    org$pandalanguage$pandac$ClassDecl* $tmp846 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp843), p_m->returnType);
    $tmp842 = $tmp846;
    panda$core$Bit $tmp847 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp839), $tmp842);
    $tmp832 = $tmp847.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
    panda$core$Panda$unref$panda$core$Object($tmp843);
    panda$core$Panda$unref$panda$core$Object($tmp839);
    $l838:;
    panda$core$Bit $tmp848 = { $tmp832 };
    result831 = $tmp848;
    panda$core$Bit $tmp850 = panda$core$Bit$$NOT$R$panda$core$Bit(result831);
    bool $tmp849 = $tmp850.value;
    if ($tmp849) goto $l851;
    panda$core$Bit $tmp853 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp853);
    bool $tmp852 = $tmp854.value;
    if (!$tmp852) goto $l855;
    panda$core$Bit $tmp857 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp856 = $tmp857.value;
    if ($tmp856) goto $l858;
    panda$core$Bit $tmp859 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp856 = $tmp859.value;
    $l858:;
    panda$core$Bit $tmp860 = { $tmp856 };
    $tmp852 = $tmp860.value;
    $l855:;
    panda$core$Bit $tmp861 = { $tmp852 };
    $tmp849 = $tmp861.value;
    $l851:;
    panda$core$Bit $tmp862 = { $tmp849 };
    if ($tmp862.value) goto $l863; else goto $l864;
    $l864:;
    panda$core$String* $tmp870 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp869 = $tmp870;
    panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s868, $tmp869);
    $tmp867 = $tmp871;
    panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, &$s872);
    $tmp866 = $tmp873;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s865, (panda$core$Int64) { 258 }, $tmp866);
    abort();
    $l863:;
    $returnValue828 = result831;
    return $returnValue828;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp878;
    panda$io$MemoryOutputStream* $tmp879;
    panda$collections$HashSet* $tmp880;
    panda$collections$HashSet* $tmp881;
    panda$core$String* separator882 = NULL;
    panda$core$String* $tmp883;
    panda$core$String* $tmp886;
    panda$core$String* $tmp887;
    panda$core$String* $tmp888;
    panda$core$String* $tmp889;
    panda$core$String* $tmp891;
    panda$core$String* $tmp896;
    panda$core$String* $tmp902;
    panda$core$String* $tmp903;
    panda$core$String* $tmp905;
    panda$core$String* $tmp906;
    panda$core$String* $tmp907;
    panda$core$String* $tmp908;
    panda$core$String* $tmp909;
    panda$core$String* $tmp914;
    panda$core$String* $tmp922;
    panda$core$String* $tmp923;
    panda$core$String* $tmp924;
    panda$core$String* $tmp925;
    panda$core$String* $tmp929;
    panda$core$String* $tmp935;
    panda$core$String* $tmp936;
    panda$collections$Iterator* Iter$279$9941 = NULL;
    panda$collections$Iterator* $tmp942;
    panda$collections$Iterator* $tmp943;
    org$pandalanguage$pandac$MethodDecl$Parameter* p959 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp960;
    panda$core$Object* $tmp961;
    panda$core$String* name966 = NULL;
    panda$core$String* $tmp967;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$core$String* $tmp971;
    panda$core$String* $tmp976;
    panda$core$String* $tmp977;
    panda$core$String* $tmp978;
    panda$core$String* $tmp979;
    panda$core$String* $tmp983;
    panda$core$String* $tmp989;
    panda$core$String* $tmp990;
    int $tmp877;
    {
        {
            $tmp878 = self->importStream;
            $tmp879 = self->bodyImportStream;
            self->importStream = $tmp879;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
        }
        {
            $tmp880 = self->imports;
            $tmp881 = self->bodyImports;
            self->imports = $tmp881;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
        }
        $tmp883 = &$s884;
        separator882 = $tmp883;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp883));
        panda$core$Bit $tmp885 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp885.value) {
        {
            panda$core$String* $tmp892 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp891 = $tmp892;
            panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s890, $tmp891);
            $tmp889 = $tmp893;
            panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s894);
            $tmp888 = $tmp895;
            panda$core$String* $tmp897 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp896 = $tmp897;
            panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, $tmp896);
            $tmp887 = $tmp898;
            panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s899);
            $tmp886 = $tmp900;
            (($fn901) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp886);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp887));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
            {
                $tmp902 = separator882;
                $tmp903 = &$s904;
                separator882 = $tmp903;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp903));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp910 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp909 = $tmp910;
            panda$core$String* $tmp911 = panda$core$String$convert$R$panda$core$String($tmp909);
            $tmp908 = $tmp911;
            panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s912);
            $tmp907 = $tmp913;
            panda$core$String* $tmp915 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp914 = $tmp915;
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp907, $tmp914);
            $tmp906 = $tmp916;
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s917);
            $tmp905 = $tmp918;
            (($fn919) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp905);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp907));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
        }
        }
        panda$core$Bit $tmp920 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp921 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp920);
        if ($tmp921.value) {
        {
            panda$core$String* $tmp926 = panda$core$String$convert$R$panda$core$String(separator882);
            $tmp925 = $tmp926;
            panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp925, &$s927);
            $tmp924 = $tmp928;
            panda$core$String* $tmp930 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp929 = $tmp930;
            panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp924, $tmp929);
            $tmp923 = $tmp931;
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp923, &$s932);
            $tmp922 = $tmp933;
            (($fn934) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp922);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
            {
                $tmp935 = separator882;
                $tmp936 = &$s937;
                separator882 = $tmp936;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            }
        }
        }
        {
            int $tmp940;
            {
                ITable* $tmp944 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp944->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp944 = $tmp944->next;
                }
                $fn946 $tmp945 = $tmp944->methods[0];
                panda$collections$Iterator* $tmp947 = $tmp945(((panda$collections$Iterable*) p_m->parameters));
                $tmp943 = $tmp947;
                $tmp942 = $tmp943;
                Iter$279$9941 = $tmp942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp943));
                $l948:;
                ITable* $tmp951 = Iter$279$9941->$class->itable;
                while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp951 = $tmp951->next;
                }
                $fn953 $tmp952 = $tmp951->methods[0];
                panda$core$Bit $tmp954 = $tmp952(Iter$279$9941);
                panda$core$Bit $tmp955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp954);
                bool $tmp950 = $tmp955.value;
                if (!$tmp950) goto $l949;
                {
                    int $tmp958;
                    {
                        ITable* $tmp962 = Iter$279$9941->$class->itable;
                        while ($tmp962->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp962 = $tmp962->next;
                        }
                        $fn964 $tmp963 = $tmp962->methods[1];
                        panda$core$Object* $tmp965 = $tmp963(Iter$279$9941);
                        $tmp961 = $tmp965;
                        $tmp960 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp961);
                        p959 = $tmp960;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
                        panda$core$Panda$unref$panda$core$Object($tmp961);
                        panda$core$String* $tmp972 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p959->name);
                        $tmp971 = $tmp972;
                        panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s970, $tmp971);
                        $tmp969 = $tmp973;
                        panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s974);
                        $tmp968 = $tmp975;
                        $tmp967 = $tmp968;
                        name966 = $tmp967;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
                        panda$core$String* $tmp980 = panda$core$String$convert$R$panda$core$String(separator882);
                        $tmp979 = $tmp980;
                        panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s981);
                        $tmp978 = $tmp982;
                        panda$core$String* $tmp984 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p959->type, name966);
                        $tmp983 = $tmp984;
                        panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, $tmp983);
                        $tmp977 = $tmp985;
                        panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, &$s986);
                        $tmp976 = $tmp987;
                        (($fn988) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp976);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
                        {
                            $tmp989 = separator882;
                            $tmp990 = &$s991;
                            separator882 = $tmp990;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                        }
                    }
                    $tmp958 = -1;
                    goto $l956;
                    $l956:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name966));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p959));
                    p959 = NULL;
                    name966 = NULL;
                    switch ($tmp958) {
                        case -1: goto $l992;
                    }
                    $l992:;
                }
                goto $l948;
                $l949:;
            }
            $tmp940 = -1;
            goto $l938;
            $l938:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$279$9941));
            Iter$279$9941 = NULL;
            switch ($tmp940) {
                case -1: goto $l993;
            }
            $l993:;
        }
        (($fn995) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s994);
    }
    $tmp877 = -1;
    goto $l875;
    $l875:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator882));
    separator882 = NULL;
    switch ($tmp877) {
        case -1: goto $l996;
    }
    $l996:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp997;
    panda$core$String* $tmp1000;
    panda$core$String* $tmp1003;
    panda$core$String* $tmp1006;
    panda$core$String* $tmp998 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp997 = $tmp998;
    (($fn999) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), $tmp997);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp997));
    panda$core$String* $tmp1001 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp1000 = $tmp1001;
    (($fn1002) ((panda$io$OutputStream*) self->typesOut)->$class->vtable[19])(((panda$io$OutputStream*) self->typesOut), $tmp1000);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
    panda$core$String* $tmp1004 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp1003 = $tmp1004;
    (($fn1005) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1003);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
    panda$core$String* $tmp1007 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp1006 = $tmp1007;
    (($fn1008) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp1006);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp1011;
    {
    }
    $tmp1011 = -1;
    goto $l1009;
    $l1009:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1011) {
        case -1: goto $l1012;
    }
    $l1012:;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typesOut));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmCodeGen));
}

