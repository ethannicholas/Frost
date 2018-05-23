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
typedef void (*$fn396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn398)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn400)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn413)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn423)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn435)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn449)(panda$core$Weak*);
typedef void (*$fn468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn505)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn535)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn540)(panda$collections$CollectionView*);
typedef void (*$fn555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn571)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn573)(panda$core$Weak*);
typedef void (*$fn587)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn590)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn630)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn642)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn647)(panda$core$Weak*);
typedef panda$core$Object* (*$fn656)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn671)(panda$collections$CollectionView*);
typedef void (*$fn686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn704)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn715)(panda$core$Weak*);
typedef panda$core$Object* (*$fn750)(panda$core$Weak*);
typedef panda$core$Object* (*$fn754)(panda$core$Weak*);
typedef void (*$fn800)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn833)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn863)(panda$collections$Iterator*);
typedef void (*$fn887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn894)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn913)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

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
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    org$pandalanguage$pandac$Type* $tmp349;
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
            org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp349 = $tmp350;
            panda$core$String* $tmp351 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp349);
            $tmp348 = $tmp351;
            $tmp347 = $tmp348;
            $returnValue98 = $tmp347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
            return $returnValue98;
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
    panda$core$String* $returnValue353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    panda$core$String* $tmp356;
    panda$core$String* $tmp357;
    panda$core$String* $tmp358;
    panda$core$String* $tmp359;
    panda$core$String* $tmp360 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp359 = $tmp360;
    panda$core$String* $tmp361 = panda$core$String$convert$R$panda$core$String($tmp359);
    $tmp358 = $tmp361;
    panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s362);
    $tmp357 = $tmp363;
    panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, p_name);
    $tmp356 = $tmp364;
    panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s365);
    $tmp355 = $tmp366;
    $tmp354 = $tmp355;
    $returnValue353 = $tmp354;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
    return $returnValue353;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp368;
    panda$core$Weak* $tmp369;
    panda$core$Weak* $tmp370;
    {
        $tmp368 = self->compiler;
        panda$core$Weak* $tmp371 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp371, ((panda$core$Object*) p_compiler));
        $tmp370 = $tmp371;
        $tmp369 = $tmp370;
        self->compiler = $tmp369;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue372;
    panda$io$File* $tmp373;
    panda$io$File* $tmp374;
    panda$core$String* $tmp375;
    panda$core$String* $tmp376 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp375 = $tmp376;
    panda$io$File* $tmp377 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp375);
    $tmp374 = $tmp377;
    $tmp373 = $tmp374;
    $returnValue372 = $tmp373;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
    return $returnValue372;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path382 = NULL;
    panda$io$File* $tmp383;
    panda$io$File* $tmp384;
    panda$io$File* $tmp387;
    panda$io$IndentedOutputStream* $tmp389;
    panda$io$IndentedOutputStream* $tmp390;
    panda$io$IndentedOutputStream* $tmp391;
    panda$io$OutputStream* $tmp393;
    panda$io$MemoryOutputStream* $tmp401;
    panda$io$MemoryOutputStream* $tmp402;
    panda$collections$Set* $tmp403;
    panda$collections$Set* $tmp404;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    panda$core$String* $tmp408;
    panda$collections$Iterator* Iter$169$9418 = NULL;
    panda$collections$Iterator* $tmp419;
    panda$collections$Iterator* $tmp420;
    panda$collections$ListView* $tmp421;
    panda$core$Object* $tmp422;
    org$pandalanguage$pandac$FieldDecl* f441 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp442;
    panda$core$Object* $tmp443;
    panda$core$Object* $tmp448;
    org$pandalanguage$pandac$Type* $tmp451;
    panda$core$String* $tmp454;
    panda$core$String* $tmp455;
    panda$core$String* $tmp456;
    panda$core$String* $tmp457;
    panda$core$Object* $tmp462;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$String* $tmp471;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$String* $tmp494;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$String* $tmp508;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    org$pandalanguage$pandac$Type* $tmp515;
    panda$core$String* $tmp521;
    org$pandalanguage$pandac$Type* $tmp522;
    panda$core$String* $tmp529;
    panda$core$String* $tmp530;
    panda$core$Object* $tmp532;
    panda$collections$ListView* $tmp533;
    panda$core$Object* $tmp534;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$String* $tmp549;
    panda$core$String* $tmp556;
    panda$core$String* $tmp557;
    panda$core$String* $tmp558;
    panda$core$String* $tmp559;
    panda$core$String* $tmp561;
    panda$core$String* $tmp566;
    panda$core$Object* $tmp572;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$String* $tmp582;
    panda$core$String* $tmp593;
    panda$core$String* $tmp594;
    panda$core$String* $tmp595;
    org$pandalanguage$pandac$Type* $tmp596;
    panda$core$String* $tmp604;
    panda$core$String* $tmp605;
    panda$core$String* $tmp607;
    panda$core$String* $tmp613;
    panda$core$String* $tmp614;
    panda$core$String* $tmp616;
    panda$core$String* $tmp623;
    panda$core$String* $tmp624;
    panda$core$String* $tmp625;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp637;
    org$pandalanguage$pandac$ClassDecl* value643 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp644;
    org$pandalanguage$pandac$ClassDecl* $tmp645;
    panda$core$Object* $tmp646;
    org$pandalanguage$pandac$Type* $tmp649;
    panda$collections$ListView* valueVTable652 = NULL;
    panda$collections$ListView* $tmp653;
    panda$collections$ListView* $tmp654;
    panda$core$Object* $tmp655;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$String* $tmp665;
    panda$core$String* $tmp666;
    panda$core$Object* $tmp668;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$String* $tmp687;
    panda$core$String* $tmp688;
    panda$core$String* $tmp689;
    panda$core$String* $tmp691;
    panda$core$String* $tmp696;
    panda$core$String* $tmp697;
    panda$core$String* $tmp698;
    int $tmp381;
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
        panda$io$File* $tmp386 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s385);
        $tmp384 = $tmp386;
        $tmp383 = $tmp384;
        path382 = $tmp383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
        panda$io$File* $tmp388 = panda$io$File$parent$R$panda$io$File$Q(path382);
        $tmp387 = $tmp388;
        panda$io$File$createDirectories($tmp387);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
        {
            $tmp389 = self->out;
            panda$io$IndentedOutputStream* $tmp392 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp394 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path382);
            $tmp393 = $tmp394;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp392, $tmp393);
            $tmp391 = $tmp392;
            $tmp390 = $tmp391;
            self->out = $tmp390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
        }
        (($fn396) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s395);
        (($fn398) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s397);
        (($fn400) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s399);
        {
            $tmp401 = self->importStream;
            $tmp402 = self->typeImportStream;
            self->importStream = $tmp402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
        }
        {
            $tmp403 = self->imports;
            $tmp404 = self->typeImports;
            self->imports = $tmp404;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
        }
        panda$core$String* $tmp409 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp408 = $tmp409;
        panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s407, $tmp408);
        $tmp406 = $tmp410;
        panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s411);
        $tmp405 = $tmp412;
        (($fn413) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp405);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
        panda$core$Int64 $tmp414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp414;
        {
            int $tmp417;
            {
                panda$core$Object* $tmp424 = (($fn423) self->compiler->$class->vtable[2])(self->compiler);
                $tmp422 = $tmp424;
                panda$collections$ListView* $tmp425 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp422), p_cl);
                $tmp421 = $tmp425;
                ITable* $tmp426 = ((panda$collections$Iterable*) $tmp421)->$class->itable;
                while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp426 = $tmp426->next;
                }
                $fn428 $tmp427 = $tmp426->methods[0];
                panda$collections$Iterator* $tmp429 = $tmp427(((panda$collections$Iterable*) $tmp421));
                $tmp420 = $tmp429;
                $tmp419 = $tmp420;
                Iter$169$9418 = $tmp419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                panda$core$Panda$unref$panda$core$Object($tmp422);
                $l430:;
                ITable* $tmp433 = Iter$169$9418->$class->itable;
                while ($tmp433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp433 = $tmp433->next;
                }
                $fn435 $tmp434 = $tmp433->methods[0];
                panda$core$Bit $tmp436 = $tmp434(Iter$169$9418);
                panda$core$Bit $tmp437 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp436);
                bool $tmp432 = $tmp437.value;
                if (!$tmp432) goto $l431;
                {
                    int $tmp440;
                    {
                        ITable* $tmp444 = Iter$169$9418->$class->itable;
                        while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp444 = $tmp444->next;
                        }
                        $fn446 $tmp445 = $tmp444->methods[1];
                        panda$core$Object* $tmp447 = $tmp445(Iter$169$9418);
                        $tmp443 = $tmp447;
                        $tmp442 = ((org$pandalanguage$pandac$FieldDecl*) $tmp443);
                        f441 = $tmp442;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
                        panda$core$Panda$unref$panda$core$Object($tmp443);
                        panda$core$Object* $tmp450 = (($fn449) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp448 = $tmp450;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp448), f441);
                        panda$core$Panda$unref$panda$core$Object($tmp448);
                        org$pandalanguage$pandac$Type* $tmp452 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp451 = $tmp452;
                        panda$core$Bit $tmp453 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f441->type, $tmp451);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                        if ($tmp453.value) {
                        {
                            panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s458, ((org$pandalanguage$pandac$Symbol*) f441)->name);
                            $tmp457 = $tmp459;
                            panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s460);
                            $tmp456 = $tmp461;
                            panda$core$Int64 $tmp463 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp464;
                            $tmp464 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp464->value = $tmp463;
                            $tmp462 = ((panda$core$Object*) $tmp464);
                            panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp456, $tmp462);
                            $tmp455 = $tmp465;
                            panda$core$String* $tmp467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s466);
                            $tmp454 = $tmp467;
                            (($fn468) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp454);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                            panda$core$Panda$unref$panda$core$Object($tmp462);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp474 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f441->type);
                            $tmp473 = $tmp474;
                            panda$core$String* $tmp475 = panda$core$String$convert$R$panda$core$String($tmp473);
                            $tmp472 = $tmp475;
                            panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp472, &$s476);
                            $tmp471 = $tmp477;
                            panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp471, ((org$pandalanguage$pandac$Symbol*) f441)->name);
                            $tmp470 = $tmp478;
                            panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s479);
                            $tmp469 = $tmp480;
                            (($fn481) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp469);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                        }
                        }
                    }
                    $tmp440 = -1;
                    goto $l438;
                    $l438:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f441));
                    f441 = NULL;
                    switch ($tmp440) {
                        case -1: goto $l482;
                    }
                    $l482:;
                }
                goto $l430;
                $l431:;
            }
            $tmp417 = -1;
            goto $l415;
            $l415:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$169$9418));
            Iter$169$9418 = NULL;
            switch ($tmp417) {
                case -1: goto $l483;
            }
            $l483:;
        }
        panda$core$Bit $tmp485 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s484);
        if ($tmp485.value) {
        {
            (($fn487) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s486);
            (($fn489) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s488);
        }
        }
        panda$core$Int64 $tmp490 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp490;
        panda$core$String* $tmp495 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp494 = $tmp495;
        panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s493, $tmp494);
        $tmp492 = $tmp496;
        panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s497);
        $tmp491 = $tmp498;
        (($fn499) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp491);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
        (($fn501) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s500);
        (($fn503) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s502);
        (($fn505) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s504);
        org$pandalanguage$pandac$Type* $tmp516 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp515 = $tmp516;
        panda$core$String* $tmp517 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp515);
        $tmp514 = $tmp517;
        panda$core$String* $tmp518 = panda$core$String$convert$R$panda$core$String($tmp514);
        $tmp513 = $tmp518;
        panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s519);
        $tmp512 = $tmp520;
        org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp522 = $tmp523;
        panda$core$String* $tmp524 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp522);
        $tmp521 = $tmp524;
        panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, $tmp521);
        $tmp511 = $tmp525;
        panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s526);
        $tmp510 = $tmp527;
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s509, $tmp510);
        $tmp508 = $tmp528;
        panda$core$Object* $tmp536 = (($fn535) self->compiler->$class->vtable[2])(self->compiler);
        $tmp534 = $tmp536;
        panda$collections$ListView* $tmp537 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp534), p_cl);
        $tmp533 = $tmp537;
        ITable* $tmp538 = ((panda$collections$CollectionView*) $tmp533)->$class->itable;
        while ($tmp538->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp538 = $tmp538->next;
        }
        $fn540 $tmp539 = $tmp538->methods[0];
        panda$core$Int64 $tmp541 = $tmp539(((panda$collections$CollectionView*) $tmp533));
        panda$core$Int64$wrapper* $tmp542;
        $tmp542 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp542->value = $tmp541;
        $tmp532 = ((panda$core$Object*) $tmp542);
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s531, $tmp532);
        $tmp530 = $tmp543;
        panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s544);
        $tmp529 = $tmp545;
        panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, $tmp529);
        $tmp507 = $tmp546;
        panda$core$String* $tmp550 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp549 = $tmp550;
        panda$core$String* $tmp551 = panda$core$String$convert$R$panda$core$String($tmp549);
        $tmp548 = $tmp551;
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s552);
        $tmp547 = $tmp553;
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, $tmp547);
        $tmp506 = $tmp554;
        (($fn555) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp506);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
        panda$core$Panda$unref$panda$core$Object($tmp532);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Panda$unref$panda$core$Object($tmp534);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
        panda$core$String* $tmp562 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp561 = $tmp562;
        panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s560, $tmp561);
        $tmp559 = $tmp563;
        panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s564);
        $tmp558 = $tmp565;
        panda$core$String* $tmp567 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp566 = $tmp567;
        panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, $tmp566);
        $tmp557 = $tmp568;
        panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s569);
        $tmp556 = $tmp570;
        (($fn571) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp556);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
        panda$core$Object* $tmp574 = (($fn573) self->compiler->$class->vtable[2])(self->compiler);
        $tmp572 = $tmp574;
        panda$core$Bit $tmp575 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp572), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp572);
        if ($tmp575.value) {
        {
            int $tmp578;
            {
                panda$core$String* $tmp583 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp582 = $tmp583;
                panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s581, $tmp582);
                $tmp580 = $tmp584;
                panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s585);
                $tmp579 = $tmp586;
                (($fn587) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp579);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                panda$core$Int64 $tmp588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp588;
                (($fn590) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s589);
                (($fn592) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s591);
                org$pandalanguage$pandac$Type* $tmp597 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp596 = $tmp597;
                panda$core$String* $tmp598 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp596);
                $tmp595 = $tmp598;
                panda$core$String* $tmp599 = panda$core$String$convert$R$panda$core$String($tmp595);
                $tmp594 = $tmp599;
                panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s600);
                $tmp593 = $tmp601;
                (($fn602) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp593);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                panda$core$Int64 $tmp603 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp603;
                panda$core$String* $tmp608 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp607 = $tmp608;
                panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s606, $tmp607);
                $tmp605 = $tmp609;
                panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s610);
                $tmp604 = $tmp611;
                (($fn612) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp604);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                panda$core$String* $tmp617 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp616 = $tmp617;
                panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s615, $tmp616);
                $tmp614 = $tmp618;
                panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, &$s619);
                $tmp613 = $tmp620;
                (($fn621) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp613);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                panda$core$Int64 $tmp622 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp622;
                panda$core$String* $tmp626 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp625 = $tmp626;
                panda$core$String* $tmp627 = panda$core$String$convert$R$panda$core$String($tmp625);
                $tmp624 = $tmp627;
                panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s628);
                $tmp623 = $tmp629;
                (($fn630) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp623);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                (($fn632) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s631);
                panda$core$Int64 $tmp633 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp633;
                panda$core$String* $tmp638 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp637 = $tmp638;
                panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s636, $tmp637);
                $tmp635 = $tmp639;
                panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s640);
                $tmp634 = $tmp641;
                (($fn642) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp634);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                panda$core$Object* $tmp648 = (($fn647) self->compiler->$class->vtable[2])(self->compiler);
                $tmp646 = $tmp648;
                org$pandalanguage$pandac$Type* $tmp650 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp649 = $tmp650;
                org$pandalanguage$pandac$ClassDecl* $tmp651 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp646), $tmp649);
                $tmp645 = $tmp651;
                $tmp644 = $tmp645;
                value643 = $tmp644;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                panda$core$Panda$unref$panda$core$Object($tmp646);
                panda$core$Object* $tmp657 = (($fn656) self->compiler->$class->vtable[2])(self->compiler);
                $tmp655 = $tmp657;
                panda$collections$ListView* $tmp658 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp655), value643);
                $tmp654 = $tmp658;
                $tmp653 = $tmp654;
                valueVTable652 = $tmp653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object($tmp655);
                panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s662, &$s663);
                $tmp661 = $tmp664;
                ITable* $tmp669 = ((panda$collections$CollectionView*) valueVTable652)->$class->itable;
                while ($tmp669->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp669 = $tmp669->next;
                }
                $fn671 $tmp670 = $tmp669->methods[0];
                panda$core$Int64 $tmp672 = $tmp670(((panda$collections$CollectionView*) valueVTable652));
                panda$core$Int64$wrapper* $tmp673;
                $tmp673 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp673->value = $tmp672;
                $tmp668 = ((panda$core$Object*) $tmp673);
                panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s667, $tmp668);
                $tmp666 = $tmp674;
                panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s675);
                $tmp665 = $tmp676;
                panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, $tmp665);
                $tmp660 = $tmp677;
                panda$core$String* $tmp681 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp680 = $tmp681;
                panda$core$String* $tmp682 = panda$core$String$convert$R$panda$core$String($tmp680);
                $tmp679 = $tmp682;
                panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s683);
                $tmp678 = $tmp684;
                panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, $tmp678);
                $tmp659 = $tmp685;
                (($fn686) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp659);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
                panda$core$Panda$unref$panda$core$Object($tmp668);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                panda$core$String* $tmp692 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp691 = $tmp692;
                panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s690, $tmp691);
                $tmp689 = $tmp693;
                panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s694);
                $tmp688 = $tmp695;
                panda$core$String* $tmp699 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp698 = $tmp699;
                panda$core$String* $tmp700 = panda$core$String$convert$R$panda$core$String($tmp698);
                $tmp697 = $tmp700;
                panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, &$s701);
                $tmp696 = $tmp702;
                panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, $tmp696);
                $tmp687 = $tmp703;
                (($fn704) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp687);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
            }
            $tmp578 = -1;
            goto $l576;
            $l576:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value643));
            value643 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable652));
            valueVTable652 = NULL;
            switch ($tmp578) {
                case -1: goto $l705;
            }
            $l705:;
        }
        }
    }
    $tmp381 = -1;
    goto $l379;
    $l379:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path382));
    path382 = NULL;
    switch ($tmp381) {
        case -1: goto $l706;
    }
    $l706:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result710 = NULL;
    panda$core$String* $tmp711;
    panda$core$String* $tmp712;
    org$pandalanguage$pandac$Type* $tmp713;
    panda$core$Object* $tmp714;
    panda$core$String* $returnValue726;
    panda$core$String* $tmp727;
    panda$core$String* $tmp728;
    panda$core$String* $tmp733;
    int $tmp709;
    {
        panda$core$Object* $tmp716 = (($fn715) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp714 = $tmp716;
        org$pandalanguage$pandac$Type* $tmp717 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp714));
        $tmp713 = $tmp717;
        panda$core$String* $tmp718 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp713);
        $tmp712 = $tmp718;
        $tmp711 = $tmp712;
        result710 = $tmp711;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
        panda$core$Panda$unref$panda$core$Object($tmp714);
        panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp719 = $tmp720.value;
        if (!$tmp719) goto $l721;
        panda$core$Bit $tmp723 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result710, &$s722);
        panda$core$Bit $tmp724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp723);
        $tmp719 = $tmp724.value;
        $l721:;
        panda$core$Bit $tmp725 = { $tmp719 };
        if ($tmp725.value) {
        {
            panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result710, &$s729);
            $tmp728 = $tmp730;
            $tmp727 = $tmp728;
            $returnValue726 = $tmp727;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
            $tmp709 = 0;
            goto $l707;
            $l731:;
            return $returnValue726;
        }
        }
        $tmp733 = result710;
        $returnValue726 = $tmp733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
        $tmp709 = 1;
        goto $l707;
        $l734:;
        return $returnValue726;
    }
    $l707:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result710));
    result710 = NULL;
    switch ($tmp709) {
        case 0: goto $l731;
        case 1: goto $l734;
    }
    $l736:;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue739;
    panda$core$Bit result741;
    panda$core$Object* $tmp749;
    org$pandalanguage$pandac$ClassDecl* $tmp752;
    panda$core$Object* $tmp753;
    panda$core$Bit $tmp737 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
    if ($tmp738.value) {
    {
        $returnValue739 = ((panda$core$Bit) { false });
        return $returnValue739;
    }
    }
    panda$core$Bit $tmp744 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp743 = $tmp744.value;
    if (!$tmp743) goto $l745;
    panda$core$Bit $tmp746 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp743 = $tmp746.value;
    $l745:;
    panda$core$Bit $tmp747 = { $tmp743 };
    bool $tmp742 = $tmp747.value;
    if (!$tmp742) goto $l748;
    panda$core$Object* $tmp751 = (($fn750) self->compiler->$class->vtable[2])(self->compiler);
    $tmp749 = $tmp751;
    panda$core$Object* $tmp755 = (($fn754) self->compiler->$class->vtable[2])(self->compiler);
    $tmp753 = $tmp755;
    org$pandalanguage$pandac$ClassDecl* $tmp756 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp753), p_m->returnType);
    $tmp752 = $tmp756;
    panda$core$Bit $tmp757 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp749), $tmp752);
    $tmp742 = $tmp757.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
    panda$core$Panda$unref$panda$core$Object($tmp753);
    panda$core$Panda$unref$panda$core$Object($tmp749);
    $l748:;
    panda$core$Bit $tmp758 = { $tmp742 };
    result741 = $tmp758;
    panda$core$Bit $tmp760 = panda$core$Bit$$NOT$R$panda$core$Bit(result741);
    bool $tmp759 = $tmp760.value;
    if ($tmp759) goto $l761;
    panda$core$Bit $tmp763 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp764 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp763);
    bool $tmp762 = $tmp764.value;
    if (!$tmp762) goto $l765;
    panda$core$Bit $tmp767 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp766 = $tmp767.value;
    if ($tmp766) goto $l768;
    panda$core$Bit $tmp769 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp766 = $tmp769.value;
    $l768:;
    panda$core$Bit $tmp770 = { $tmp766 };
    $tmp762 = $tmp770.value;
    $l765:;
    panda$core$Bit $tmp771 = { $tmp762 };
    $tmp759 = $tmp771.value;
    $l761:;
    panda$core$Bit $tmp772 = { $tmp759 };
    PANDA_ASSERT($tmp772.value);
    $returnValue739 = result741;
    return $returnValue739;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp777;
    panda$io$MemoryOutputStream* $tmp778;
    panda$collections$Set* $tmp779;
    panda$collections$Set* $tmp780;
    panda$core$String* separator781 = NULL;
    panda$core$String* $tmp782;
    panda$core$String* $tmp785;
    panda$core$String* $tmp786;
    panda$core$String* $tmp787;
    panda$core$String* $tmp788;
    panda$core$String* $tmp790;
    panda$core$String* $tmp795;
    panda$core$String* $tmp801;
    panda$core$String* $tmp802;
    panda$core$String* $tmp804;
    panda$core$String* $tmp805;
    panda$core$String* $tmp806;
    panda$core$String* $tmp807;
    panda$core$String* $tmp808;
    panda$core$String* $tmp813;
    panda$core$String* $tmp821;
    panda$core$String* $tmp822;
    panda$core$String* $tmp823;
    panda$core$String* $tmp824;
    panda$core$String* $tmp828;
    panda$core$String* $tmp834;
    panda$core$String* $tmp835;
    panda$collections$Iterator* Iter$272$9840 = NULL;
    panda$collections$Iterator* $tmp841;
    panda$collections$Iterator* $tmp842;
    org$pandalanguage$pandac$MethodDecl$Parameter* p858 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp859;
    panda$core$Object* $tmp860;
    panda$core$String* name865 = NULL;
    panda$core$String* $tmp866;
    panda$core$String* $tmp867;
    panda$core$String* $tmp868;
    panda$core$String* $tmp870;
    panda$core$String* $tmp875;
    panda$core$String* $tmp876;
    panda$core$String* $tmp877;
    panda$core$String* $tmp878;
    panda$core$String* $tmp882;
    panda$core$String* $tmp888;
    panda$core$String* $tmp889;
    int $tmp776;
    {
        {
            $tmp777 = self->importStream;
            $tmp778 = self->bodyImportStream;
            self->importStream = $tmp778;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
        }
        {
            $tmp779 = self->imports;
            $tmp780 = self->bodyImports;
            self->imports = $tmp780;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
        }
        $tmp782 = &$s783;
        separator781 = $tmp782;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
        panda$core$Bit $tmp784 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp784.value) {
        {
            panda$core$String* $tmp791 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp790 = $tmp791;
            panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s789, $tmp790);
            $tmp788 = $tmp792;
            panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s793);
            $tmp787 = $tmp794;
            panda$core$String* $tmp796 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp795 = $tmp796;
            panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, $tmp795);
            $tmp786 = $tmp797;
            panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s798);
            $tmp785 = $tmp799;
            (($fn800) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp785);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
            {
                $tmp801 = separator781;
                $tmp802 = &$s803;
                separator781 = $tmp802;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp809 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp808 = $tmp809;
            panda$core$String* $tmp810 = panda$core$String$convert$R$panda$core$String($tmp808);
            $tmp807 = $tmp810;
            panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp807, &$s811);
            $tmp806 = $tmp812;
            panda$core$String* $tmp814 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp813 = $tmp814;
            panda$core$String* $tmp815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp806, $tmp813);
            $tmp805 = $tmp815;
            panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp805, &$s816);
            $tmp804 = $tmp817;
            (($fn818) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp804);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
        }
        }
        panda$core$Bit $tmp819 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp820 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp819);
        if ($tmp820.value) {
        {
            panda$core$String* $tmp825 = panda$core$String$convert$R$panda$core$String(separator781);
            $tmp824 = $tmp825;
            panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp824, &$s826);
            $tmp823 = $tmp827;
            panda$core$String* $tmp829 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp828 = $tmp829;
            panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp823, $tmp828);
            $tmp822 = $tmp830;
            panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp822, &$s831);
            $tmp821 = $tmp832;
            (($fn833) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp821);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
            {
                $tmp834 = separator781;
                $tmp835 = &$s836;
                separator781 = $tmp835;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
            }
        }
        }
        {
            int $tmp839;
            {
                ITable* $tmp843 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp843 = $tmp843->next;
                }
                $fn845 $tmp844 = $tmp843->methods[0];
                panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) p_m->parameters));
                $tmp842 = $tmp846;
                $tmp841 = $tmp842;
                Iter$272$9840 = $tmp841;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                $l847:;
                ITable* $tmp850 = Iter$272$9840->$class->itable;
                while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp850 = $tmp850->next;
                }
                $fn852 $tmp851 = $tmp850->methods[0];
                panda$core$Bit $tmp853 = $tmp851(Iter$272$9840);
                panda$core$Bit $tmp854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp853);
                bool $tmp849 = $tmp854.value;
                if (!$tmp849) goto $l848;
                {
                    int $tmp857;
                    {
                        ITable* $tmp861 = Iter$272$9840->$class->itable;
                        while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp861 = $tmp861->next;
                        }
                        $fn863 $tmp862 = $tmp861->methods[1];
                        panda$core$Object* $tmp864 = $tmp862(Iter$272$9840);
                        $tmp860 = $tmp864;
                        $tmp859 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp860);
                        p858 = $tmp859;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
                        panda$core$Panda$unref$panda$core$Object($tmp860);
                        panda$core$String* $tmp871 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p858->name);
                        $tmp870 = $tmp871;
                        panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s869, $tmp870);
                        $tmp868 = $tmp872;
                        panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s873);
                        $tmp867 = $tmp874;
                        $tmp866 = $tmp867;
                        name865 = $tmp866;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp868));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
                        panda$core$String* $tmp879 = panda$core$String$convert$R$panda$core$String(separator781);
                        $tmp878 = $tmp879;
                        panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, &$s880);
                        $tmp877 = $tmp881;
                        panda$core$String* $tmp883 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p858->type, name865);
                        $tmp882 = $tmp883;
                        panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp877, $tmp882);
                        $tmp876 = $tmp884;
                        panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s885);
                        $tmp875 = $tmp886;
                        (($fn887) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp875);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                        {
                            $tmp888 = separator781;
                            $tmp889 = &$s890;
                            separator781 = $tmp889;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp889));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                        }
                    }
                    $tmp857 = -1;
                    goto $l855;
                    $l855:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p858));
                    p858 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name865));
                    name865 = NULL;
                    switch ($tmp857) {
                        case -1: goto $l891;
                    }
                    $l891:;
                }
                goto $l847;
                $l848:;
            }
            $tmp839 = -1;
            goto $l837;
            $l837:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$9840));
            Iter$272$9840 = NULL;
            switch ($tmp839) {
                case -1: goto $l892;
            }
            $l892:;
        }
        (($fn894) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s893);
    }
    $tmp776 = -1;
    goto $l774;
    $l774:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator781));
    separator781 = NULL;
    switch ($tmp776) {
        case -1: goto $l895;
    }
    $l895:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp898;
    panda$core$String* $tmp901;
    panda$core$String* $tmp906;
    panda$core$String* $tmp909;
    (($fn897) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s896);
    panda$core$String* $tmp899 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp898 = $tmp899;
    (($fn900) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp898);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
    panda$core$String* $tmp902 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp901 = $tmp902;
    (($fn903) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp901);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
    (($fn905) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s904);
    panda$core$String* $tmp907 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp906 = $tmp907;
    (($fn908) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp906);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
    panda$core$String* $tmp910 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp909 = $tmp910;
    (($fn911) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp909);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
    (($fn913) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s912);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp916;
    {
    }
    $tmp916 = -1;
    goto $l914;
    $l914:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp916) {
        case -1: goto $l917;
    }
    $l917:;
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

