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
typedef void (*$fn407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn424)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn434)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn460)(panda$core$Weak*);
typedef void (*$fn479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn516)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn546)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn551)(panda$collections$CollectionView*);
typedef void (*$fn566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn582)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn584)(panda$core$Weak*);
typedef void (*$fn598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn653)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn658)(panda$core$Weak*);
typedef panda$core$Object* (*$fn667)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn682)(panda$collections$CollectionView*);
typedef void (*$fn697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn715)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn726)(panda$core$Weak*);
typedef panda$core$Object* (*$fn761)(panda$core$Weak*);
typedef panda$core$Object* (*$fn765)(panda$core$Weak*);
typedef void (*$fn811)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn829)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn844)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn856)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn863)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn874)(panda$collections$Iterator*);
typedef void (*$fn898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn924)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x70\x72\x61\x67\x6d\x61\x20\x6f\x6e\x63\x65", 12, -471855557594929475, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x5f\x63\x2e\x68\x22", 20, -8246654709467439596, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x38\x5f\x74\x20", 7, 219841391763131, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b", 15, -8241052240123179492, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b\x5d\x3b", 15, -9098552628456137650, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x64\x65\x66\x69\x6e\x65\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 6222240263676423265, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22\x70\x61\x6e\x64\x61\x2f\x63\x6f\x72\x65\x2f\x43\x6c\x61\x73\x73\x2e\x68\x22", 29, 757872090851925795, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6e\x61\x6d\x65\x3b\x20", 7, 142348498283041, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 24, 4185496991876386810, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 12, -7792097500760480153, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 12, -7792097500760480180, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x7b", 10, 3561855747138321733, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b", 21, -6601947243355683084, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b", 17, -4679513013374136619, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x3b", 9, 1496394141948660765, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20", 15, 113453312276216771, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x7b", 11, -550213747663851793, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x76\x61\x6c\x75\x65\x3b", 7, 142432578224233, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20\x6e\x6f\x6e\x6e\x75\x6c\x6c\x3b", 13, -7076984795403153902, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20", 2, 22858, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3b", 10, 3464731917354630015, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20\x73\x74\x72\x75\x63\x74\x20\x7b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x63\x6c\x3b\x20\x69\x6e\x74\x33\x32\x5f\x74\x20\x72\x65\x66\x43\x6f\x75\x6e\x74\x3b\x20", 57, 4250775795789279397, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x2a\x20\x6e\x61\x6d\x65\x3b\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x20\x73\x75\x70\x65\x72\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 66, -4265715440342242119, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x76\x74\x61\x62\x6c\x65\x5b", 13, 6717043003744978738, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x3b", 19, -2708419327357398444, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x74\x65\x72\x6e\x20", 7, 215700458722495, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x5f\x74\x79\x70\x65\x20", 19, -2708419327357398471, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64\x20", 5, 22904672467, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x20\x72\x65\x73\x75\x6c\x74", 8, 15366712961196246, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x75\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 22, -3178926799020419844, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x69\x66\x6e\x64\x65\x66\x20\x50\x41\x4e\x44\x41\x5f\x54\x59\x50\x45\x53\x4f\x4e\x4c\x59", 23, 5799031469611308186, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23\x65\x6e\x64\x69\x66", 6, 1439998132554, NULL };

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
    panda$core$String* $tmp358;
    panda$core$String* $tmp359;
    org$pandalanguage$pandac$Type* $tmp360;
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
            org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
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
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 16 }));
        bool $tmp353 = $tmp354.value;
        if ($tmp353) goto $l355;
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$61_996.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp353 = $tmp356.value;
        $l355:;
        panda$core$Bit $tmp357 = { $tmp353 };
        if ($tmp357.value) {
        {
            org$pandalanguage$pandac$Type* $tmp361 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
            $tmp360 = $tmp361;
            panda$core$String* $tmp362 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp360);
            $tmp359 = $tmp362;
            $tmp358 = $tmp359;
            $returnValue98 = $tmp358;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
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
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_name) {
    panda$core$String* $returnValue364;
    panda$core$String* $tmp365;
    panda$core$String* $tmp366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
    panda$core$String* $tmp369;
    panda$core$String* $tmp370;
    panda$core$String* $tmp371 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    $tmp370 = $tmp371;
    panda$core$String* $tmp372 = panda$core$String$convert$R$panda$core$String($tmp370);
    $tmp369 = $tmp372;
    panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s373);
    $tmp368 = $tmp374;
    panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, p_name);
    $tmp367 = $tmp375;
    panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, &$s376);
    $tmp366 = $tmp377;
    $tmp365 = $tmp366;
    $returnValue364 = $tmp365;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
    return $returnValue364;
}
void org$pandalanguage$pandac$HCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp379;
    panda$core$Weak* $tmp380;
    panda$core$Weak* $tmp381;
    {
        $tmp379 = self->compiler;
        panda$core$Weak* $tmp382 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp382, ((panda$core$Object*) p_compiler));
        $tmp381 = $tmp382;
        $tmp380 = $tmp381;
        self->compiler = $tmp380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(self->llvmCodeGen, p_compiler);
}
panda$io$File* org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue383;
    panda$io$File* $tmp384;
    panda$io$File* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp387 = org$pandalanguage$pandac$HCodeGenerator$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(self, p_cl, p_extension);
    $tmp386 = $tmp387;
    panda$io$File* $tmp388 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp386);
    $tmp385 = $tmp388;
    $tmp384 = $tmp385;
    $returnValue383 = $tmp384;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
    return $returnValue383;
}
void org$pandalanguage$pandac$HCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path393 = NULL;
    panda$io$File* $tmp394;
    panda$io$File* $tmp395;
    panda$io$File* $tmp398;
    panda$io$IndentedOutputStream* $tmp400;
    panda$io$IndentedOutputStream* $tmp401;
    panda$io$IndentedOutputStream* $tmp402;
    panda$io$OutputStream* $tmp404;
    panda$io$MemoryOutputStream* $tmp412;
    panda$io$MemoryOutputStream* $tmp413;
    panda$collections$Set* $tmp414;
    panda$collections$Set* $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp419;
    panda$collections$Iterator* Iter$171$9429 = NULL;
    panda$collections$Iterator* $tmp430;
    panda$collections$Iterator* $tmp431;
    panda$collections$ListView* $tmp432;
    panda$core$Object* $tmp433;
    org$pandalanguage$pandac$FieldDecl* f452 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp453;
    panda$core$Object* $tmp454;
    panda$core$Object* $tmp459;
    org$pandalanguage$pandac$Type* $tmp462;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466;
    panda$core$String* $tmp467;
    panda$core$String* $tmp468;
    panda$core$Object* $tmp473;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp484;
    panda$core$String* $tmp502;
    panda$core$String* $tmp503;
    panda$core$String* $tmp505;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    panda$core$String* $tmp519;
    panda$core$String* $tmp521;
    panda$core$String* $tmp522;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$core$String* $tmp525;
    org$pandalanguage$pandac$Type* $tmp526;
    panda$core$String* $tmp532;
    org$pandalanguage$pandac$Type* $tmp533;
    panda$core$String* $tmp540;
    panda$core$String* $tmp541;
    panda$core$Object* $tmp543;
    panda$collections$ListView* $tmp544;
    panda$core$Object* $tmp545;
    panda$core$String* $tmp558;
    panda$core$String* $tmp559;
    panda$core$String* $tmp560;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    panda$core$String* $tmp570;
    panda$core$String* $tmp572;
    panda$core$String* $tmp577;
    panda$core$Object* $tmp583;
    panda$core$String* $tmp590;
    panda$core$String* $tmp591;
    panda$core$String* $tmp593;
    panda$core$String* $tmp604;
    panda$core$String* $tmp605;
    panda$core$String* $tmp606;
    org$pandalanguage$pandac$Type* $tmp607;
    panda$core$String* $tmp615;
    panda$core$String* $tmp616;
    panda$core$String* $tmp618;
    panda$core$String* $tmp624;
    panda$core$String* $tmp625;
    panda$core$String* $tmp627;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp645;
    panda$core$String* $tmp646;
    panda$core$String* $tmp648;
    org$pandalanguage$pandac$ClassDecl* value654 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp655;
    org$pandalanguage$pandac$ClassDecl* $tmp656;
    panda$core$Object* $tmp657;
    org$pandalanguage$pandac$Type* $tmp660;
    panda$collections$ListView* valueVTable663 = NULL;
    panda$collections$ListView* $tmp664;
    panda$collections$ListView* $tmp665;
    panda$core$Object* $tmp666;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    panda$core$String* $tmp672;
    panda$core$String* $tmp676;
    panda$core$String* $tmp677;
    panda$core$Object* $tmp679;
    panda$core$String* $tmp689;
    panda$core$String* $tmp690;
    panda$core$String* $tmp691;
    panda$core$String* $tmp698;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    panda$core$String* $tmp702;
    panda$core$String* $tmp707;
    panda$core$String* $tmp708;
    panda$core$String* $tmp709;
    int $tmp392;
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
        panda$io$File* $tmp397 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self, p_cl, &$s396);
        $tmp395 = $tmp397;
        $tmp394 = $tmp395;
        path393 = $tmp394;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
        panda$io$File* $tmp399 = panda$io$File$parent$R$panda$io$File$Q(path393);
        $tmp398 = $tmp399;
        panda$io$File$createDirectories($tmp398);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
        {
            $tmp400 = self->out;
            panda$io$IndentedOutputStream* $tmp403 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(56, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
            panda$io$OutputStream* $tmp405 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path393);
            $tmp404 = $tmp405;
            panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp403, $tmp404);
            $tmp402 = $tmp403;
            $tmp401 = $tmp402;
            self->out = $tmp401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
        }
        (($fn407) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s406);
        (($fn409) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s408);
        (($fn411) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s410);
        {
            $tmp412 = self->importStream;
            $tmp413 = self->typeImportStream;
            self->importStream = $tmp413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
        }
        {
            $tmp414 = self->imports;
            $tmp415 = self->typeImports;
            self->imports = $tmp415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
        }
        panda$core$String* $tmp420 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp419 = $tmp420;
        panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, $tmp419);
        $tmp417 = $tmp421;
        panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s422);
        $tmp416 = $tmp423;
        (($fn424) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp416);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
        panda$core$Int64 $tmp425 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp425;
        {
            int $tmp428;
            {
                panda$core$Object* $tmp435 = (($fn434) self->compiler->$class->vtable[2])(self->compiler);
                $tmp433 = $tmp435;
                panda$collections$ListView* $tmp436 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp433), p_cl);
                $tmp432 = $tmp436;
                ITable* $tmp437 = ((panda$collections$Iterable*) $tmp432)->$class->itable;
                while ($tmp437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp437 = $tmp437->next;
                }
                $fn439 $tmp438 = $tmp437->methods[0];
                panda$collections$Iterator* $tmp440 = $tmp438(((panda$collections$Iterable*) $tmp432));
                $tmp431 = $tmp440;
                $tmp430 = $tmp431;
                Iter$171$9429 = $tmp430;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                panda$core$Panda$unref$panda$core$Object($tmp433);
                $l441:;
                ITable* $tmp444 = Iter$171$9429->$class->itable;
                while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp444 = $tmp444->next;
                }
                $fn446 $tmp445 = $tmp444->methods[0];
                panda$core$Bit $tmp447 = $tmp445(Iter$171$9429);
                panda$core$Bit $tmp448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp447);
                bool $tmp443 = $tmp448.value;
                if (!$tmp443) goto $l442;
                {
                    int $tmp451;
                    {
                        ITable* $tmp455 = Iter$171$9429->$class->itable;
                        while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp455 = $tmp455->next;
                        }
                        $fn457 $tmp456 = $tmp455->methods[1];
                        panda$core$Object* $tmp458 = $tmp456(Iter$171$9429);
                        $tmp454 = $tmp458;
                        $tmp453 = ((org$pandalanguage$pandac$FieldDecl*) $tmp454);
                        f452 = $tmp453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
                        panda$core$Panda$unref$panda$core$Object($tmp454);
                        panda$core$Object* $tmp461 = (($fn460) self->compiler->$class->vtable[2])(self->compiler);
                        $tmp459 = $tmp461;
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp459), f452);
                        panda$core$Panda$unref$panda$core$Object($tmp459);
                        org$pandalanguage$pandac$Type* $tmp463 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                        $tmp462 = $tmp463;
                        panda$core$Bit $tmp464 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f452->type, $tmp462);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
                        if ($tmp464.value) {
                        {
                            panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s469, ((org$pandalanguage$pandac$Symbol*) f452)->name);
                            $tmp468 = $tmp470;
                            panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s471);
                            $tmp467 = $tmp472;
                            panda$core$Int64 $tmp474 = org$pandalanguage$pandac$LLVMCodeGenerator$getChoiceDataSize$org$pandalanguage$pandac$ClassDecl$R$panda$core$Int64(self->llvmCodeGen, p_cl);
                            panda$core$Int64$wrapper* $tmp475;
                            $tmp475 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                            $tmp475->value = $tmp474;
                            $tmp473 = ((panda$core$Object*) $tmp475);
                            panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp467, $tmp473);
                            $tmp466 = $tmp476;
                            panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s477);
                            $tmp465 = $tmp478;
                            (($fn479) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp465);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
                            panda$core$Panda$unref$panda$core$Object($tmp473);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp485 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f452->type);
                            $tmp484 = $tmp485;
                            panda$core$String* $tmp486 = panda$core$String$convert$R$panda$core$String($tmp484);
                            $tmp483 = $tmp486;
                            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s487);
                            $tmp482 = $tmp488;
                            panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, ((org$pandalanguage$pandac$Symbol*) f452)->name);
                            $tmp481 = $tmp489;
                            panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s490);
                            $tmp480 = $tmp491;
                            (($fn492) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp480);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
                        }
                        }
                    }
                    $tmp451 = -1;
                    goto $l449;
                    $l449:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f452));
                    f452 = NULL;
                    switch ($tmp451) {
                        case -1: goto $l493;
                    }
                    $l493:;
                }
                goto $l441;
                $l442:;
            }
            $tmp428 = -1;
            goto $l426;
            $l426:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$9429));
            Iter$171$9429 = NULL;
            switch ($tmp428) {
                case -1: goto $l494;
            }
            $l494:;
        }
        panda$core$Bit $tmp496 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_cl->name, &$s495);
        if ($tmp496.value) {
        {
            (($fn498) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s497);
            (($fn500) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s499);
        }
        }
        panda$core$Int64 $tmp501 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
        self->types->level = $tmp501;
        panda$core$String* $tmp506 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp505 = $tmp506;
        panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s504, $tmp505);
        $tmp503 = $tmp507;
        panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s508);
        $tmp502 = $tmp509;
        (($fn510) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp502);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
        (($fn512) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s511);
        (($fn514) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s513);
        (($fn516) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s515);
        org$pandalanguage$pandac$Type* $tmp527 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        $tmp526 = $tmp527;
        panda$core$String* $tmp528 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp526);
        $tmp525 = $tmp528;
        panda$core$String* $tmp529 = panda$core$String$convert$R$panda$core$String($tmp525);
        $tmp524 = $tmp529;
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s530);
        $tmp523 = $tmp531;
        org$pandalanguage$pandac$Type* $tmp534 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        $tmp533 = $tmp534;
        panda$core$String* $tmp535 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp533);
        $tmp532 = $tmp535;
        panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, $tmp532);
        $tmp522 = $tmp536;
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s537);
        $tmp521 = $tmp538;
        panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s520, $tmp521);
        $tmp519 = $tmp539;
        panda$core$Object* $tmp547 = (($fn546) self->compiler->$class->vtable[2])(self->compiler);
        $tmp545 = $tmp547;
        panda$collections$ListView* $tmp548 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp545), p_cl);
        $tmp544 = $tmp548;
        ITable* $tmp549 = ((panda$collections$CollectionView*) $tmp544)->$class->itable;
        while ($tmp549->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp549 = $tmp549->next;
        }
        $fn551 $tmp550 = $tmp549->methods[0];
        panda$core$Int64 $tmp552 = $tmp550(((panda$collections$CollectionView*) $tmp544));
        panda$core$Int64$wrapper* $tmp553;
        $tmp553 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp553->value = $tmp552;
        $tmp543 = ((panda$core$Object*) $tmp553);
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s542, $tmp543);
        $tmp541 = $tmp554;
        panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s555);
        $tmp540 = $tmp556;
        panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, $tmp540);
        $tmp518 = $tmp557;
        panda$core$String* $tmp561 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp560 = $tmp561;
        panda$core$String* $tmp562 = panda$core$String$convert$R$panda$core$String($tmp560);
        $tmp559 = $tmp562;
        panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s563);
        $tmp558 = $tmp564;
        panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, $tmp558);
        $tmp517 = $tmp565;
        (($fn566) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp517);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
        panda$core$Panda$unref$panda$core$Object($tmp543);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object($tmp545);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
        panda$core$String* $tmp573 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp572 = $tmp573;
        panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s571, $tmp572);
        $tmp570 = $tmp574;
        panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, &$s575);
        $tmp569 = $tmp576;
        panda$core$String* $tmp578 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
        $tmp577 = $tmp578;
        panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, $tmp577);
        $tmp568 = $tmp579;
        panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s580);
        $tmp567 = $tmp581;
        (($fn582) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp567);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
        panda$core$Object* $tmp585 = (($fn584) self->compiler->$class->vtable[2])(self->compiler);
        $tmp583 = $tmp585;
        panda$core$Bit $tmp586 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp583), p_cl);
        panda$core$Panda$unref$panda$core$Object($tmp583);
        if ($tmp586.value) {
        {
            int $tmp589;
            {
                panda$core$String* $tmp594 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp593 = $tmp594;
                panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s592, $tmp593);
                $tmp591 = $tmp595;
                panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s596);
                $tmp590 = $tmp597;
                (($fn598) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp590);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                panda$core$Int64 $tmp599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp599;
                (($fn601) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s600);
                (($fn603) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s602);
                org$pandalanguage$pandac$Type* $tmp608 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
                $tmp607 = $tmp608;
                panda$core$String* $tmp609 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp607);
                $tmp606 = $tmp609;
                panda$core$String* $tmp610 = panda$core$String$convert$R$panda$core$String($tmp606);
                $tmp605 = $tmp610;
                panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s611);
                $tmp604 = $tmp612;
                (($fn613) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp604);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                panda$core$Int64 $tmp614 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp614;
                panda$core$String* $tmp619 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp618 = $tmp619;
                panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s617, $tmp618);
                $tmp616 = $tmp620;
                panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s621);
                $tmp615 = $tmp622;
                (($fn623) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp615);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                panda$core$String* $tmp628 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp627 = $tmp628;
                panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s626, $tmp627);
                $tmp625 = $tmp629;
                panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s630);
                $tmp624 = $tmp631;
                (($fn632) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp624);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                panda$core$Int64 $tmp633 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp633;
                panda$core$String* $tmp637 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp636 = $tmp637;
                panda$core$String* $tmp638 = panda$core$String$convert$R$panda$core$String($tmp636);
                $tmp635 = $tmp638;
                panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s639);
                $tmp634 = $tmp640;
                (($fn641) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp634);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                (($fn643) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), &$s642);
                panda$core$Int64 $tmp644 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->types->level, ((panda$core$Int64) { 1 }));
                self->types->level = $tmp644;
                panda$core$String* $tmp649 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp648 = $tmp649;
                panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s647, $tmp648);
                $tmp646 = $tmp650;
                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s651);
                $tmp645 = $tmp652;
                (($fn653) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp645);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                panda$core$Object* $tmp659 = (($fn658) self->compiler->$class->vtable[2])(self->compiler);
                $tmp657 = $tmp659;
                org$pandalanguage$pandac$Type* $tmp661 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                $tmp660 = $tmp661;
                org$pandalanguage$pandac$ClassDecl* $tmp662 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp657), $tmp660);
                $tmp656 = $tmp662;
                $tmp655 = $tmp656;
                value654 = $tmp655;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                panda$core$Panda$unref$panda$core$Object($tmp657);
                panda$core$Object* $tmp668 = (($fn667) self->compiler->$class->vtable[2])(self->compiler);
                $tmp666 = $tmp668;
                panda$collections$ListView* $tmp669 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(((org$pandalanguage$pandac$Compiler*) $tmp666), value654);
                $tmp665 = $tmp669;
                $tmp664 = $tmp665;
                valueVTable663 = $tmp664;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                panda$core$Panda$unref$panda$core$Object($tmp666);
                panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s673, &$s674);
                $tmp672 = $tmp675;
                ITable* $tmp680 = ((panda$collections$CollectionView*) valueVTable663)->$class->itable;
                while ($tmp680->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp680 = $tmp680->next;
                }
                $fn682 $tmp681 = $tmp680->methods[0];
                panda$core$Int64 $tmp683 = $tmp681(((panda$collections$CollectionView*) valueVTable663));
                panda$core$Int64$wrapper* $tmp684;
                $tmp684 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                $tmp684->value = $tmp683;
                $tmp679 = ((panda$core$Object*) $tmp684);
                panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s678, $tmp679);
                $tmp677 = $tmp685;
                panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s686);
                $tmp676 = $tmp687;
                panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp672, $tmp676);
                $tmp671 = $tmp688;
                panda$core$String* $tmp692 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp691 = $tmp692;
                panda$core$String* $tmp693 = panda$core$String$convert$R$panda$core$String($tmp691);
                $tmp690 = $tmp693;
                panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s694);
                $tmp689 = $tmp695;
                panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, $tmp689);
                $tmp670 = $tmp696;
                (($fn697) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp670);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                panda$core$Panda$unref$panda$core$Object($tmp679);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$String* $tmp703 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp702 = $tmp703;
                panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s701, $tmp702);
                $tmp700 = $tmp704;
                panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s705);
                $tmp699 = $tmp706;
                panda$core$String* $tmp710 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p_cl->name);
                $tmp709 = $tmp710;
                panda$core$String* $tmp711 = panda$core$String$convert$R$panda$core$String($tmp709);
                $tmp708 = $tmp711;
                panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp708, &$s712);
                $tmp707 = $tmp713;
                panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, $tmp707);
                $tmp698 = $tmp714;
                (($fn715) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp698);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
            }
            $tmp589 = -1;
            goto $l587;
            $l587:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value654));
            value654 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) valueVTable663));
            valueVTable663 = NULL;
            switch ($tmp589) {
                case -1: goto $l716;
            }
            $l716:;
        }
        }
    }
    $tmp392 = -1;
    goto $l390;
    $l390:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path393));
    path393 = NULL;
    switch ($tmp392) {
        case -1: goto $l717;
    }
    $l717:;
}
panda$core$String* org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result721 = NULL;
    panda$core$String* $tmp722;
    panda$core$String* $tmp723;
    org$pandalanguage$pandac$Type* $tmp724;
    panda$core$Object* $tmp725;
    panda$core$String* $returnValue737;
    panda$core$String* $tmp738;
    panda$core$String* $tmp739;
    panda$core$String* $tmp744;
    int $tmp720;
    {
        panda$core$Object* $tmp727 = (($fn726) p_m->owner->$class->vtable[2])(p_m->owner);
        $tmp725 = $tmp727;
        org$pandalanguage$pandac$Type* $tmp728 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp725));
        $tmp724 = $tmp728;
        panda$core$String* $tmp729 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp724);
        $tmp723 = $tmp729;
        $tmp722 = $tmp723;
        result721 = $tmp722;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
        panda$core$Panda$unref$panda$core$Object($tmp725);
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp730 = $tmp731.value;
        if (!$tmp730) goto $l732;
        panda$core$Bit $tmp734 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result721, &$s733);
        panda$core$Bit $tmp735 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp734);
        $tmp730 = $tmp735.value;
        $l732:;
        panda$core$Bit $tmp736 = { $tmp730 };
        if ($tmp736.value) {
        {
            panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result721, &$s740);
            $tmp739 = $tmp741;
            $tmp738 = $tmp739;
            $returnValue737 = $tmp738;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
            $tmp720 = 0;
            goto $l718;
            $l742:;
            return $returnValue737;
        }
        }
        $tmp744 = result721;
        $returnValue737 = $tmp744;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
        $tmp720 = 1;
        goto $l718;
        $l745:;
        return $returnValue737;
    }
    $l718:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result721));
    result721 = NULL;
    switch ($tmp720) {
        case 0: goto $l742;
        case 1: goto $l745;
    }
    $l747:;
}
panda$core$Bit org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue750;
    panda$core$Bit result752;
    panda$core$Object* $tmp760;
    org$pandalanguage$pandac$ClassDecl* $tmp763;
    panda$core$Object* $tmp764;
    panda$core$Bit $tmp748 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp749 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp748);
    if ($tmp749.value) {
    {
        $returnValue750 = ((panda$core$Bit) { false });
        return $returnValue750;
    }
    }
    panda$core$Bit $tmp755 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp754 = $tmp755.value;
    if (!$tmp754) goto $l756;
    panda$core$Bit $tmp757 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp754 = $tmp757.value;
    $l756:;
    panda$core$Bit $tmp758 = { $tmp754 };
    bool $tmp753 = $tmp758.value;
    if (!$tmp753) goto $l759;
    panda$core$Object* $tmp762 = (($fn761) self->compiler->$class->vtable[2])(self->compiler);
    $tmp760 = $tmp762;
    panda$core$Object* $tmp766 = (($fn765) self->compiler->$class->vtable[2])(self->compiler);
    $tmp764 = $tmp766;
    org$pandalanguage$pandac$ClassDecl* $tmp767 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp764), p_m->returnType);
    $tmp763 = $tmp767;
    panda$core$Bit $tmp768 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp760), $tmp763);
    $tmp753 = $tmp768.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
    panda$core$Panda$unref$panda$core$Object($tmp764);
    panda$core$Panda$unref$panda$core$Object($tmp760);
    $l759:;
    panda$core$Bit $tmp769 = { $tmp753 };
    result752 = $tmp769;
    panda$core$Bit $tmp771 = panda$core$Bit$$NOT$R$panda$core$Bit(result752);
    bool $tmp770 = $tmp771.value;
    if ($tmp770) goto $l772;
    panda$core$Bit $tmp774 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp774);
    bool $tmp773 = $tmp775.value;
    if (!$tmp773) goto $l776;
    panda$core$Bit $tmp778 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp777 = $tmp778.value;
    if ($tmp777) goto $l779;
    panda$core$Bit $tmp780 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp777 = $tmp780.value;
    $l779:;
    panda$core$Bit $tmp781 = { $tmp777 };
    $tmp773 = $tmp781.value;
    $l776:;
    panda$core$Bit $tmp782 = { $tmp773 };
    $tmp770 = $tmp782.value;
    $l772:;
    panda$core$Bit $tmp783 = { $tmp770 };
    PANDA_ASSERT($tmp783.value);
    $returnValue750 = result752;
    return $returnValue750;
}
void org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$io$MemoryOutputStream* $tmp788;
    panda$io$MemoryOutputStream* $tmp789;
    panda$collections$Set* $tmp790;
    panda$collections$Set* $tmp791;
    panda$core$String* separator792 = NULL;
    panda$core$String* $tmp793;
    panda$core$String* $tmp796;
    panda$core$String* $tmp797;
    panda$core$String* $tmp798;
    panda$core$String* $tmp799;
    panda$core$String* $tmp801;
    panda$core$String* $tmp806;
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    panda$core$String* $tmp815;
    panda$core$String* $tmp816;
    panda$core$String* $tmp817;
    panda$core$String* $tmp818;
    panda$core$String* $tmp819;
    panda$core$String* $tmp824;
    panda$core$String* $tmp832;
    panda$core$String* $tmp833;
    panda$core$String* $tmp834;
    panda$core$String* $tmp835;
    panda$core$String* $tmp839;
    panda$core$String* $tmp845;
    panda$core$String* $tmp846;
    panda$collections$Iterator* Iter$274$9851 = NULL;
    panda$collections$Iterator* $tmp852;
    panda$collections$Iterator* $tmp853;
    org$pandalanguage$pandac$MethodDecl$Parameter* p869 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp870;
    panda$core$Object* $tmp871;
    panda$core$String* name876 = NULL;
    panda$core$String* $tmp877;
    panda$core$String* $tmp878;
    panda$core$String* $tmp879;
    panda$core$String* $tmp881;
    panda$core$String* $tmp886;
    panda$core$String* $tmp887;
    panda$core$String* $tmp888;
    panda$core$String* $tmp889;
    panda$core$String* $tmp893;
    panda$core$String* $tmp899;
    panda$core$String* $tmp900;
    int $tmp787;
    {
        {
            $tmp788 = self->importStream;
            $tmp789 = self->bodyImportStream;
            self->importStream = $tmp789;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
        }
        {
            $tmp790 = self->imports;
            $tmp791 = self->bodyImports;
            self->imports = $tmp791;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
        }
        $tmp793 = &$s794;
        separator792 = $tmp793;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
        panda$core$Bit $tmp795 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
        if ($tmp795.value) {
        {
            panda$core$String* $tmp802 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp801 = $tmp802;
            panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s800, $tmp801);
            $tmp799 = $tmp803;
            panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp799, &$s804);
            $tmp798 = $tmp805;
            panda$core$String* $tmp807 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp806 = $tmp807;
            panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, $tmp806);
            $tmp797 = $tmp808;
            panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s809);
            $tmp796 = $tmp810;
            (($fn811) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp796);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
            {
                $tmp812 = separator792;
                $tmp813 = &$s814;
                separator792 = $tmp813;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp813));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
            }
        }
        }
        else {
        {
            panda$core$String* $tmp820 = org$pandalanguage$pandac$HCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
            $tmp819 = $tmp820;
            panda$core$String* $tmp821 = panda$core$String$convert$R$panda$core$String($tmp819);
            $tmp818 = $tmp821;
            panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s822);
            $tmp817 = $tmp823;
            panda$core$String* $tmp825 = org$pandalanguage$pandac$HCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp824 = $tmp825;
            panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp817, $tmp824);
            $tmp816 = $tmp826;
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp816, &$s827);
            $tmp815 = $tmp828;
            (($fn829) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp815);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
        }
        }
        panda$core$Bit $tmp830 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp831 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp830);
        if ($tmp831.value) {
        {
            panda$core$String* $tmp836 = panda$core$String$convert$R$panda$core$String(separator792);
            $tmp835 = $tmp836;
            panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s837);
            $tmp834 = $tmp838;
            panda$core$String* $tmp840 = org$pandalanguage$pandac$HCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
            $tmp839 = $tmp840;
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, $tmp839);
            $tmp833 = $tmp841;
            panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp833, &$s842);
            $tmp832 = $tmp843;
            (($fn844) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp832);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
            {
                $tmp845 = separator792;
                $tmp846 = &$s847;
                separator792 = $tmp846;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
            }
        }
        }
        {
            int $tmp850;
            {
                ITable* $tmp854 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp854->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp854 = $tmp854->next;
                }
                $fn856 $tmp855 = $tmp854->methods[0];
                panda$collections$Iterator* $tmp857 = $tmp855(((panda$collections$Iterable*) p_m->parameters));
                $tmp853 = $tmp857;
                $tmp852 = $tmp853;
                Iter$274$9851 = $tmp852;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                $l858:;
                ITable* $tmp861 = Iter$274$9851->$class->itable;
                while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp861 = $tmp861->next;
                }
                $fn863 $tmp862 = $tmp861->methods[0];
                panda$core$Bit $tmp864 = $tmp862(Iter$274$9851);
                panda$core$Bit $tmp865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp864);
                bool $tmp860 = $tmp865.value;
                if (!$tmp860) goto $l859;
                {
                    int $tmp868;
                    {
                        ITable* $tmp872 = Iter$274$9851->$class->itable;
                        while ($tmp872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp872 = $tmp872->next;
                        }
                        $fn874 $tmp873 = $tmp872->methods[1];
                        panda$core$Object* $tmp875 = $tmp873(Iter$274$9851);
                        $tmp871 = $tmp875;
                        $tmp870 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp871);
                        p869 = $tmp870;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
                        panda$core$Panda$unref$panda$core$Object($tmp871);
                        panda$core$String* $tmp882 = org$pandalanguage$pandac$HCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p869->name);
                        $tmp881 = $tmp882;
                        panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s880, $tmp881);
                        $tmp879 = $tmp883;
                        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp879, &$s884);
                        $tmp878 = $tmp885;
                        $tmp877 = $tmp878;
                        name876 = $tmp877;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                        panda$core$String* $tmp890 = panda$core$String$convert$R$panda$core$String(separator792);
                        $tmp889 = $tmp890;
                        panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s891);
                        $tmp888 = $tmp892;
                        panda$core$String* $tmp894 = org$pandalanguage$pandac$HCodeGenerator$declaration$org$pandalanguage$pandac$Type$panda$core$String$R$panda$core$String(self, p869->type, name876);
                        $tmp893 = $tmp894;
                        panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, $tmp893);
                        $tmp887 = $tmp895;
                        panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s896);
                        $tmp886 = $tmp897;
                        (($fn898) ((panda$io$OutputStream*) self->body)->$class->vtable[16])(((panda$io$OutputStream*) self->body), $tmp886);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp887));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
                        {
                            $tmp899 = separator792;
                            $tmp900 = &$s901;
                            separator792 = $tmp900;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp900));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
                        }
                    }
                    $tmp868 = -1;
                    goto $l866;
                    $l866:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p869));
                    p869 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name876));
                    name876 = NULL;
                    switch ($tmp868) {
                        case -1: goto $l902;
                    }
                    $l902:;
                }
                goto $l858;
                $l859:;
            }
            $tmp850 = -1;
            goto $l848;
            $l848:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$9851));
            Iter$274$9851 = NULL;
            switch ($tmp850) {
                case -1: goto $l903;
            }
            $l903:;
        }
        (($fn905) ((panda$io$OutputStream*) self->body)->$class->vtable[19])(((panda$io$OutputStream*) self->body), &$s904);
    }
    $tmp787 = -1;
    goto $l785;
    $l785:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator792));
    separator792 = NULL;
    switch ($tmp787) {
        case -1: goto $l906;
    }
    $l906:;
}
void org$pandalanguage$pandac$HCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
    org$pandalanguage$pandac$HCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
}
void org$pandalanguage$pandac$HCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$HCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp909;
    panda$core$String* $tmp912;
    panda$core$String* $tmp917;
    panda$core$String* $tmp920;
    (($fn908) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s907);
    panda$core$String* $tmp910 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typeImportStream);
    $tmp909 = $tmp910;
    (($fn911) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp909);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
    panda$core$String* $tmp913 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->typesBuffer);
    $tmp912 = $tmp913;
    (($fn914) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp912);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
    (($fn916) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s915);
    panda$core$String* $tmp918 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyImportStream);
    $tmp917 = $tmp918;
    (($fn919) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp917);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
    panda$core$String* $tmp921 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->bodyBuffer);
    $tmp920 = $tmp921;
    (($fn922) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp920);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
    (($fn924) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s923);
}
void org$pandalanguage$pandac$HCodeGenerator$finish(org$pandalanguage$pandac$HCodeGenerator* self) {
}
void org$pandalanguage$pandac$HCodeGenerator$cleanup(org$pandalanguage$pandac$HCodeGenerator* self) {
    int $tmp927;
    {
    }
    $tmp927 = -1;
    goto $l925;
    $l925:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp927) {
        case -1: goto $l928;
    }
    $l928:;
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

