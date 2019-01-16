#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64, org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String} };

typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn50)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn54)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn59)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn85)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn100)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn121)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn132)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn144)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn154)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn162)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn168)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn181)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn215)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn257)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn266)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn311)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn339)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn346)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn350)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn355)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn371)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn401)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn405)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn410)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn428)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 148, -877569735536682215, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 609, 1119016658470152637, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x27", 186, 195881670419938364, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -4161089433249330848, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 125, 9060177252160679126, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$Annotations* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, panda$collections$Array* param7, panda$collections$Array* param8, org$pandalanguage$pandac$Type* param9, org$pandalanguage$pandac$FixedArray* param10) {

panda$core$Bit local0;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
// line 66
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp3 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp2);
org$pandalanguage$pandac$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 68
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp6 = &param0->overrideKnown;
*$tmp6 = $tmp5;
// line 71
panda$core$Weak* $tmp7 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp7, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Weak** $tmp8 = &param0->overridden;
panda$core$Weak* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($10:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit(param7 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
*(&local0) = $tmp11;
goto block3;
block2:;
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp15 = (panda$core$Int64) {83};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block4:;
ITable* $tmp18 = ((panda$collections$CollectionView*) param7)->$class->itable;
while ($tmp18->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
panda$core$Int64 $tmp21 = $tmp19(((panda$collections$CollectionView*) param7));
panda$core$Int64 $tmp22 = (panda$core$Int64) {0};
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 > $tmp24;
panda$core$Bit $tmp26 = (panda$core$Bit) {$tmp25};
*(&local0) = $tmp26;
goto block3;
block3:;
panda$core$Bit $tmp27 = *(&local0);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp29 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block6:;
// line 88
panda$core$Int64 $tmp32 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Symbol$Kind $tmp33 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp32);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp33, param2, param6);
// line 89
panda$core$Weak* $tmp34 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp34, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Weak** $tmp35 = &param0->owner;
panda$core$Weak* $tmp36 = *$tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$Weak** $tmp37 = &param0->owner;
*$tmp37 = $tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($60:panda.core.Weak<org.pandalanguage.pandac.ClassDecl>)
// line 90
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp38 = &param0->doccomment;
panda$core$String* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$String** $tmp40 = &param0->doccomment;
*$tmp40 = param3;
// line 91
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp41 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
org$pandalanguage$pandac$Annotations** $tmp43 = &param0->annotations;
*$tmp43 = param4;
// line 92
org$pandalanguage$pandac$MethodDecl$Kind* $tmp44 = &param0->methodKind;
*$tmp44 = param5;
// line 93
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$Array** $tmp45 = &param0->genericParameters;
panda$collections$Array* $tmp46 = *$tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$collections$Array** $tmp47 = &param0->genericParameters;
*$tmp47 = param7;
// line 94
ITable* $tmp48 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
panda$collections$Iterator* $tmp51 = $tmp49(((panda$collections$Iterable*) param8));
goto block8;
block8:;
ITable* $tmp52 = $tmp51->$class->itable;
while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
panda$core$Bit $tmp55 = $tmp53($tmp51);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block10; else goto block9;
block9:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp57 = $tmp51->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[1];
panda$core$Object* $tmp60 = $tmp58($tmp51);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp60)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp61 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp60);
// line 95
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp62 = *(&local1);
panda$core$Weak* $tmp63 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp63, ((panda$core$Object*) param0));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Weak** $tmp64 = &$tmp62->owner;
panda$core$Weak* $tmp65 = *$tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Weak** $tmp66 = &$tmp62->owner;
*$tmp66 = $tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing REF($131:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
panda$core$Panda$unref$panda$core$Object$Q($tmp60);
// unreffing REF($120:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp67 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($109:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 97
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$Array** $tmp68 = &param0->parameters;
panda$collections$Array* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$collections$Array** $tmp70 = &param0->parameters;
*$tmp70 = param8;
// line 98
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$Type** $tmp71 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp72 = *$tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
org$pandalanguage$pandac$Type** $tmp73 = &param0->returnType;
*$tmp73 = param9;
// line 99
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
org$pandalanguage$pandac$FixedArray** $tmp74 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
org$pandalanguage$pandac$FixedArray** $tmp76 = &param0->body;
*$tmp76 = param10;
return;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 104
org$pandalanguage$pandac$MethodDecl$Kind* $tmp77 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp78 = *$tmp77;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp79;
$tmp79 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp79->value = $tmp78;
panda$core$Int64 $tmp80 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp81 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp80);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp82->value = $tmp81;
ITable* $tmp83 = ((panda$core$Equatable*) $tmp79)->$class->itable;
while ($tmp83->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
panda$core$Bit $tmp86 = $tmp84(((panda$core$Equatable*) $tmp79), ((panda$core$Equatable*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp82)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp79)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
return $tmp86;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 108
org$pandalanguage$pandac$Annotations** $tmp87 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp88 = *$tmp87;
panda$core$Bit $tmp89 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp88);
panda$core$Bit $tmp90 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp92 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp93 = *$tmp92;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp94;
$tmp94 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp94->value = $tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp96 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp95);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp97;
$tmp97 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp97->value = $tmp96;
ITable* $tmp98 = ((panda$core$Equatable*) $tmp94)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$core$Bit $tmp101 = $tmp99(((panda$core$Equatable*) $tmp94), ((panda$core$Equatable*) $tmp97));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp97)));
// unreffing REF($13:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp94)));
// unreffing REF($9:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local1) = $tmp101;
goto block3;
block2:;
*(&local1) = $tmp90;
goto block3;
block3:;
panda$core$Bit $tmp102 = *(&local1);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Annotations** $tmp104 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp105 = *$tmp104;
panda$core$Bit $tmp106 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp105);
panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
*(&local0) = $tmp107;
goto block6;
block5:;
*(&local0) = $tmp102;
goto block6;
block6:;
panda$core$Bit $tmp108 = *(&local0);
return $tmp108;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 112
org$pandalanguage$pandac$Annotations** $tmp109 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp110 = *$tmp109;
panda$core$Bit $tmp111 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp110);
panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
return $tmp112;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Int64 local1;
// line 116
org$pandalanguage$pandac$Compiler$Resolution* $tmp113 = &param0->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp114 = *$tmp113;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp115;
$tmp115 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp115->value = $tmp114;
panda$core$Int64 $tmp116 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp117 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp116);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp118;
$tmp118 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp118->value = $tmp117;
ITable* $tmp119 = ((panda$core$Equatable*) $tmp115)->$class->itable;
while ($tmp119->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[1];
panda$core$Bit $tmp122 = $tmp120(((panda$core$Equatable*) $tmp115), ((panda$core$Equatable*) $tmp118));
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Compiler$Resolution* $tmp124 = &param1->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp125 = *$tmp124;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp126;
$tmp126 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp126->value = $tmp125;
panda$core$Int64 $tmp127 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp128 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp127);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp129;
$tmp129 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp129->value = $tmp128;
ITable* $tmp130 = ((panda$core$Equatable*) $tmp126)->$class->itable;
while ($tmp130->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[1];
panda$core$Bit $tmp133 = $tmp131(((panda$core$Equatable*) $tmp126), ((panda$core$Equatable*) $tmp129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp129)));
// unreffing REF($18:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp126)));
// unreffing REF($14:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
*(&local0) = $tmp133;
goto block3;
block2:;
*(&local0) = $tmp122;
goto block3;
block3:;
panda$core$Bit $tmp134 = *(&local0);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp136 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, $tmp136);
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp118)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp115)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 118
panda$core$String** $tmp138 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp139 = *$tmp138;
panda$core$String** $tmp140 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp141 = *$tmp140;
ITable* $tmp142 = ((panda$core$Equatable*) $tmp139)->$class->itable;
while ($tmp142->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[1];
panda$core$Bit $tmp145 = $tmp143(((panda$core$Equatable*) $tmp139), ((panda$core$Equatable*) $tmp141));
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block6; else goto block7;
block6:;
// line 119
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit(false);
return $tmp147;
block7:;
// line 121
org$pandalanguage$pandac$Type** $tmp148 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp149 = *$tmp148;
org$pandalanguage$pandac$Type** $tmp150 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp151 = *$tmp150;
ITable* $tmp152 = ((panda$core$Equatable*) $tmp149)->$class->itable;
while ($tmp152->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[1];
panda$core$Bit $tmp155 = $tmp153(((panda$core$Equatable*) $tmp149), ((panda$core$Equatable*) $tmp151));
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block8; else goto block9;
block8:;
// line 122
panda$core$Bit $tmp157 = panda$core$Bit$init$builtin_bit(false);
return $tmp157;
block9:;
// line 124
panda$collections$Array** $tmp158 = &param0->parameters;
panda$collections$Array* $tmp159 = *$tmp158;
ITable* $tmp160 = ((panda$collections$CollectionView*) $tmp159)->$class->itable;
while ($tmp160->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
panda$core$Int64 $tmp163 = $tmp161(((panda$collections$CollectionView*) $tmp159));
panda$collections$Array** $tmp164 = &param1->parameters;
panda$collections$Array* $tmp165 = *$tmp164;
ITable* $tmp166 = ((panda$collections$CollectionView*) $tmp165)->$class->itable;
while ($tmp166->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
panda$core$Int64 $tmp169 = $tmp167(((panda$collections$CollectionView*) $tmp165));
int64_t $tmp170 = $tmp163.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 != $tmp171;
panda$core$Bit $tmp173 = (panda$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block10; else goto block11;
block10:;
// line 125
panda$core$Bit $tmp175 = panda$core$Bit$init$builtin_bit(false);
return $tmp175;
block11:;
// line 127
panda$core$Int64 $tmp176 = (panda$core$Int64) {0};
panda$collections$Array** $tmp177 = &param0->parameters;
panda$collections$Array* $tmp178 = *$tmp177;
ITable* $tmp179 = ((panda$collections$CollectionView*) $tmp178)->$class->itable;
while ($tmp179->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[0];
panda$core$Int64 $tmp182 = $tmp180(((panda$collections$CollectionView*) $tmp178));
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp184 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp176, $tmp182, $tmp183);
panda$core$Int64 $tmp185 = $tmp184.min;
*(&local1) = $tmp185;
panda$core$Int64 $tmp186 = $tmp184.max;
panda$core$Bit $tmp187 = $tmp184.inclusive;
bool $tmp188 = $tmp187.value;
panda$core$Int64 $tmp189 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp190 = panda$core$Int64$convert$R$panda$core$UInt64($tmp189);
if ($tmp188) goto block15; else goto block16;
block15:;
int64_t $tmp191 = $tmp185.value;
int64_t $tmp192 = $tmp186.value;
bool $tmp193 = $tmp191 <= $tmp192;
panda$core$Bit $tmp194 = (panda$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block12; else goto block13;
block16:;
int64_t $tmp196 = $tmp185.value;
int64_t $tmp197 = $tmp186.value;
bool $tmp198 = $tmp196 < $tmp197;
panda$core$Bit $tmp199 = (panda$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block12; else goto block13;
block12:;
// line 128
panda$collections$Array** $tmp201 = &param0->parameters;
panda$collections$Array* $tmp202 = *$tmp201;
panda$core$Int64 $tmp203 = *(&local1);
panda$core$Object* $tmp204 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp202, $tmp203);
org$pandalanguage$pandac$Type** $tmp205 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp204)->type;
org$pandalanguage$pandac$Type* $tmp206 = *$tmp205;
panda$collections$Array** $tmp207 = &param1->parameters;
panda$collections$Array* $tmp208 = *$tmp207;
panda$core$Int64 $tmp209 = *(&local1);
panda$core$Object* $tmp210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp208, $tmp209);
org$pandalanguage$pandac$Type** $tmp211 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp210)->type;
org$pandalanguage$pandac$Type* $tmp212 = *$tmp211;
ITable* $tmp213 = ((panda$core$Equatable*) $tmp206)->$class->itable;
while ($tmp213->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
panda$core$Bit $tmp216 = $tmp214(((panda$core$Equatable*) $tmp206), ((panda$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp210);
// unreffing REF($139:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp204);
// unreffing REF($129:panda.collections.Array.T)
if ($tmp217) goto block17; else goto block18;
block17:;
// line 129
panda$core$Bit $tmp218 = panda$core$Bit$init$builtin_bit(false);
return $tmp218;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp219 = *(&local1);
int64_t $tmp220 = $tmp186.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 - $tmp221;
panda$core$Int64 $tmp223 = (panda$core$Int64) {$tmp222};
panda$core$UInt64 $tmp224 = panda$core$Int64$convert$R$panda$core$UInt64($tmp223);
if ($tmp188) goto block20; else goto block21;
block20:;
uint64_t $tmp225 = $tmp224.value;
uint64_t $tmp226 = $tmp190.value;
bool $tmp227 = $tmp225 >= $tmp226;
panda$core$Bit $tmp228 = (panda$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block19; else goto block13;
block21:;
uint64_t $tmp230 = $tmp224.value;
uint64_t $tmp231 = $tmp190.value;
bool $tmp232 = $tmp230 > $tmp231;
panda$core$Bit $tmp233 = (panda$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block19; else goto block13;
block19:;
int64_t $tmp235 = $tmp219.value;
int64_t $tmp236 = $tmp189.value;
int64_t $tmp237 = $tmp235 + $tmp236;
panda$core$Int64 $tmp238 = (panda$core$Int64) {$tmp237};
*(&local1) = $tmp238;
goto block12;
block13:;
// line 132
panda$core$Bit $tmp239 = panda$core$Bit$init$builtin_bit(true);
return $tmp239;

}
panda$core$Int64 org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(org$pandalanguage$pandac$MethodDecl* param0) {

org$pandalanguage$pandac$Annotations$Expression* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$UInt64 local2;
org$pandalanguage$pandac$parser$Token$Kind local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$UInt64 local5;
// line 136
org$pandalanguage$pandac$Annotations** $tmp240 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp241 = *$tmp240;
panda$collections$Array** $tmp242 = &$tmp241->expressions;
panda$collections$Array* $tmp243 = *$tmp242;
panda$core$Bit $tmp244 = panda$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// line 137
org$pandalanguage$pandac$Annotations** $tmp246 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp247 = *$tmp246;
panda$collections$Array** $tmp248 = &$tmp247->expressions;
panda$collections$Array* $tmp249 = *$tmp248;
panda$core$Bit $tmp250 = panda$core$Bit$init$builtin_bit($tmp249 != NULL);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp252 = (panda$core$Int64) {137};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block3:;
ITable* $tmp255 = ((panda$collections$Iterable*) $tmp249)->$class->itable;
while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
panda$collections$Iterator* $tmp258 = $tmp256(((panda$collections$Iterable*) $tmp249));
goto block5;
block5:;
ITable* $tmp259 = $tmp258->$class->itable;
while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
panda$core$Bit $tmp262 = $tmp260($tmp258);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block7; else goto block6;
block6:;
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp264 = $tmp258->$class->itable;
while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[1];
panda$core$Object* $tmp267 = $tmp265($tmp258);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp267)));
org$pandalanguage$pandac$Annotations$Expression* $tmp268 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp267);
// line 138
org$pandalanguage$pandac$Annotations$Expression* $tmp269 = *(&local0);
panda$core$Int64* $tmp270 = &$tmp269->$rawValue;
panda$core$Int64 $tmp271 = *$tmp270;
panda$core$Int64 $tmp272 = (panda$core$Int64) {4};
panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp271, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block9; else goto block8;
block9:;
panda$core$String** $tmp275 = (panda$core$String**) ($tmp269->$data + 0);
panda$core$String* $tmp276 = *$tmp275;
org$pandalanguage$pandac$ASTNode** $tmp277 = (org$pandalanguage$pandac$ASTNode**) ($tmp269->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp278 = *$tmp277;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
org$pandalanguage$pandac$ASTNode* $tmp279 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local1) = $tmp278;
// line 140
org$pandalanguage$pandac$ASTNode* $tmp280 = *(&local1);
panda$core$Int64* $tmp281 = &$tmp280->$rawValue;
panda$core$Int64 $tmp282 = *$tmp281;
panda$core$Int64 $tmp283 = (panda$core$Int64) {25};
panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp282, $tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$Position* $tmp286 = (org$pandalanguage$pandac$Position*) ($tmp280->$data + 0);
org$pandalanguage$pandac$Position $tmp287 = *$tmp286;
panda$core$UInt64* $tmp288 = (panda$core$UInt64*) ($tmp280->$data + 16);
panda$core$UInt64 $tmp289 = *$tmp288;
*(&local2) = $tmp289;
// line 142
panda$core$UInt64 $tmp290 = *(&local2);
panda$core$Int64 $tmp291 = panda$core$UInt64$convert$R$panda$core$Int64($tmp290);
org$pandalanguage$pandac$ASTNode* $tmp292 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp267);
// unreffing REF($35:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp293 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($24:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp291;
block12:;
panda$core$Int64 $tmp294 = (panda$core$Int64) {35};
panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp282, $tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block13; else goto block10;
block13:;
org$pandalanguage$pandac$Position* $tmp297 = (org$pandalanguage$pandac$Position*) ($tmp280->$data + 0);
org$pandalanguage$pandac$Position $tmp298 = *$tmp297;
org$pandalanguage$pandac$parser$Token$Kind* $tmp299 = (org$pandalanguage$pandac$parser$Token$Kind*) ($tmp280->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp300 = *$tmp299;
*(&local3) = $tmp300;
org$pandalanguage$pandac$ASTNode** $tmp301 = (org$pandalanguage$pandac$ASTNode**) ($tmp280->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp302 = *$tmp301;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
org$pandalanguage$pandac$ASTNode* $tmp303 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
*(&local4) = $tmp302;
// line 145
org$pandalanguage$pandac$parser$Token$Kind $tmp304 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp305;
$tmp305 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp305->value = $tmp304;
panda$core$Int64 $tmp306 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp307 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp306);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp308;
$tmp308 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp308->value = $tmp307;
ITable* $tmp309 = ((panda$core$Equatable*) $tmp305)->$class->itable;
while ($tmp309->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
panda$core$Bit $tmp312 = $tmp310(((panda$core$Equatable*) $tmp305), ((panda$core$Equatable*) $tmp308));
bool $tmp313 = $tmp312.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp308)));
// unreffing REF($119:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp305)));
// unreffing REF($115:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp313) goto block14; else goto block15;
block14:;
// line 146
org$pandalanguage$pandac$ASTNode* $tmp314 = *(&local4);
panda$core$Int64* $tmp315 = &$tmp314->$rawValue;
panda$core$Int64 $tmp316 = *$tmp315;
panda$core$Int64 $tmp317 = (panda$core$Int64) {25};
panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp316, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block17; else goto block16;
block17:;
org$pandalanguage$pandac$Position* $tmp320 = (org$pandalanguage$pandac$Position*) ($tmp314->$data + 0);
org$pandalanguage$pandac$Position $tmp321 = *$tmp320;
panda$core$UInt64* $tmp322 = (panda$core$UInt64*) ($tmp314->$data + 16);
panda$core$UInt64 $tmp323 = *$tmp322;
*(&local5) = $tmp323;
// line 148
panda$core$UInt64 $tmp324 = *(&local5);
panda$core$Int64 $tmp325 = panda$core$UInt64$convert$R$panda$core$Int64($tmp324);
panda$core$Int64 $tmp326 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp325);
org$pandalanguage$pandac$ASTNode* $tmp327 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp328 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp267);
// unreffing REF($35:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp329 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($24:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp326;
block16:;
goto block15;
block15:;
org$pandalanguage$pandac$ASTNode* $tmp330 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block10;
block10:;
org$pandalanguage$pandac$ASTNode* $tmp331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q($tmp267);
// unreffing REF($35:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($24:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block2;
block2:;
// line 158
panda$core$Int64 $tmp333 = (panda$core$Int64) {0};
return $tmp333;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
org$pandalanguage$pandac$Type$Kind local2;
// line 162
panda$collections$Array* $tmp334 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array** $tmp335 = &param0->parameters;
panda$collections$Array* $tmp336 = *$tmp335;
ITable* $tmp337 = ((panda$collections$CollectionView*) $tmp336)->$class->itable;
while ($tmp337->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
panda$core$Int64 $tmp340 = $tmp338(((panda$collections$CollectionView*) $tmp336));
panda$collections$Array$init$panda$core$Int64($tmp334, $tmp340);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
panda$collections$Array* $tmp341 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
*(&local0) = $tmp334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 163
panda$collections$Array** $tmp342 = &param0->parameters;
panda$collections$Array* $tmp343 = *$tmp342;
ITable* $tmp344 = ((panda$collections$Iterable*) $tmp343)->$class->itable;
while ($tmp344->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
panda$collections$Iterator* $tmp347 = $tmp345(((panda$collections$Iterable*) $tmp343));
goto block1;
block1:;
ITable* $tmp348 = $tmp347->$class->itable;
while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[0];
panda$core$Bit $tmp351 = $tmp349($tmp347);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp353 = $tmp347->$class->itable;
while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp353 = $tmp353->next;
}
$fn355 $tmp354 = $tmp353->methods[1];
panda$core$Object* $tmp356 = $tmp354($tmp347);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp356)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp357 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp356);
// line 164
panda$collections$Array* $tmp358 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp359 = *(&local1);
org$pandalanguage$pandac$Type** $tmp360 = &$tmp359->type;
org$pandalanguage$pandac$Type* $tmp361 = *$tmp360;
panda$collections$Array$add$panda$collections$Array$T($tmp358, ((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q($tmp356);
// unreffing REF($36:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp362 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing REF($25:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 166
// line 167
org$pandalanguage$pandac$MethodDecl$Kind* $tmp363 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp364 = *$tmp363;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp365;
$tmp365 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp365->value = $tmp364;
panda$core$Int64 $tmp366 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp367 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp366);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp368;
$tmp368 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp368->value = $tmp367;
ITable* $tmp369 = ((panda$core$Equatable*) $tmp365)->$class->itable;
while ($tmp369->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp369 = $tmp369->next;
}
$fn371 $tmp370 = $tmp369->methods[0];
panda$core$Bit $tmp372 = $tmp370(((panda$core$Equatable*) $tmp365), ((panda$core$Equatable*) $tmp368));
bool $tmp373 = $tmp372.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp368)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp365)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp373) goto block4; else goto block6;
block4:;
// line 168
panda$core$Int64 $tmp374 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp375 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp374);
*(&local2) = $tmp375;
goto block5;
block6:;
// line 1
// line 171
panda$core$Int64 $tmp376 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp377 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp376);
*(&local2) = $tmp377;
goto block5;
block5:;
// line 173
org$pandalanguage$pandac$Position* $tmp378 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp379 = *$tmp378;
org$pandalanguage$pandac$Type$Kind $tmp380 = *(&local2);
panda$collections$Array* $tmp381 = *(&local0);
org$pandalanguage$pandac$Type** $tmp382 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp383 = *$tmp382;
panda$core$Int64 $tmp384 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(param0);
org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp379, $tmp380, ((panda$collections$ListView*) $tmp381), $tmp383, $tmp384);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($104:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp386 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing paramTypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp385;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 177
panda$core$MutableString* $tmp387 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String** $tmp388 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp389 = *$tmp388;
panda$core$String* $tmp390 = panda$core$String$convert$R$panda$core$String($tmp389);
panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s392);
panda$core$MutableString$init$panda$core$String($tmp387, $tmp391);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
panda$core$MutableString* $tmp393 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
*(&local0) = $tmp387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($1:panda.core.MutableString)
// line 178
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s394));
panda$core$String* $tmp395 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
*(&local1) = &$s396;
// line 179
panda$collections$Array** $tmp397 = &param0->parameters;
panda$collections$Array* $tmp398 = *$tmp397;
ITable* $tmp399 = ((panda$collections$Iterable*) $tmp398)->$class->itable;
while ($tmp399->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
panda$collections$Iterator* $tmp402 = $tmp400(((panda$collections$Iterable*) $tmp398));
goto block1;
block1:;
ITable* $tmp403 = $tmp402->$class->itable;
while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[0];
panda$core$Bit $tmp406 = $tmp404($tmp402);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp408 = $tmp402->$class->itable;
while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[1];
panda$core$Object* $tmp411 = $tmp409($tmp402);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp411)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp412 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp411);
// line 180
panda$core$MutableString* $tmp413 = *(&local0);
panda$core$String* $tmp414 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp413, $tmp414);
// line 181
panda$core$MutableString* $tmp415 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp416 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp415, ((panda$core$Object*) $tmp416));
// line 182
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s417));
panda$core$String* $tmp418 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
*(&local1) = &$s419;
panda$core$Panda$unref$panda$core$Object$Q($tmp411);
// unreffing REF($49:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp420 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($38:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 184
panda$core$MutableString* $tmp421 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp421, &$s422);
// line 185
org$pandalanguage$pandac$Type** $tmp423 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp424 = *$tmp423;
org$pandalanguage$pandac$Type* $tmp425 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp426 = ((panda$core$Equatable*) $tmp424)->$class->itable;
while ($tmp426->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[1];
panda$core$Bit $tmp429 = $tmp427(((panda$core$Equatable*) $tmp424), ((panda$core$Equatable*) $tmp425));
bool $tmp430 = $tmp429.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($93:org.pandalanguage.pandac.Type)
if ($tmp430) goto block4; else goto block5;
block4:;
// line 186
panda$core$MutableString* $tmp431 = *(&local0);
org$pandalanguage$pandac$Type** $tmp432 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp433 = *$tmp432;
panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s435, ((panda$core$Object*) $tmp433));
panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s437);
panda$core$MutableString$append$panda$core$String($tmp431, $tmp436);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing REF($107:panda.core.String)
goto block5;
block5:;
// line 188
panda$core$MutableString* $tmp438 = *(&local0);
panda$core$String* $tmp439 = panda$core$MutableString$finish$R$panda$core$String($tmp438);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
// unreffing REF($119:panda.core.String)
panda$core$String* $tmp440 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp441 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp439;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 192
org$pandalanguage$pandac$MethodDecl$Kind* $tmp442 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp443 = *$tmp442;
panda$core$Int64 $tmp444 = $tmp443.$rawValue;
panda$core$Int64 $tmp445 = (panda$core$Int64) {0};
panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp444, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block2; else goto block3;
block2:;
// line 194
panda$core$Weak** $tmp448 = &param0->owner;
panda$core$Weak* $tmp449 = *$tmp448;
panda$core$Object* $tmp450 = panda$core$Weak$get$R$panda$core$Weak$T($tmp449);
panda$core$String** $tmp451 = &((org$pandalanguage$pandac$ClassDecl*) $tmp450)->name;
panda$core$String* $tmp452 = *$tmp451;
panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s454, $tmp452);
panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s456);
panda$core$String* $tmp457 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, $tmp457);
panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s460);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp450);
// unreffing REF($12:panda.core.Weak.T)
return $tmp459;
block3:;
panda$core$Int64 $tmp461 = (panda$core$Int64) {1};
panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp444, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block4; else goto block5;
block4:;
// line 197
panda$core$Weak** $tmp464 = &param0->owner;
panda$core$Weak* $tmp465 = *$tmp464;
panda$core$Object* $tmp466 = panda$core$Weak$get$R$panda$core$Weak$T($tmp465);
panda$core$String** $tmp467 = &((org$pandalanguage$pandac$ClassDecl*) $tmp466)->name;
panda$core$String* $tmp468 = *$tmp467;
panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s470, $tmp468);
panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s472);
panda$core$String* $tmp473 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp471, $tmp473);
panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, &$s476);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp466);
// unreffing REF($50:panda.core.Weak.T)
return $tmp475;
block5:;
panda$core$Int64 $tmp477 = (panda$core$Int64) {2};
panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp444, $tmp477);
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block6; else goto block1;
block6:;
// line 200
panda$core$Weak** $tmp480 = &param0->owner;
panda$core$Weak* $tmp481 = *$tmp480;
panda$core$Object* $tmp482 = panda$core$Weak$get$R$panda$core$Weak$T($tmp481);
panda$core$String** $tmp483 = &((org$pandalanguage$pandac$ClassDecl*) $tmp482)->name;
panda$core$String* $tmp484 = *$tmp483;
panda$core$String* $tmp485 = panda$core$String$convert$R$panda$core$String($tmp484);
panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s487);
panda$core$String* $tmp488 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, $tmp488);
panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, &$s491);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp482);
// unreffing REF($88:panda.core.Weak.T)
return $tmp490;
block1:;
panda$core$Bit $tmp492 = panda$core$Bit$init$builtin_bit(false);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp494 = (panda$core$Int64) {191};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s495, $tmp494, &$s496);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 207
org$pandalanguage$pandac$FixedArray** $tmp497 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp498 = *$tmp497;
panda$core$Bit $tmp499 = panda$core$Bit$init$builtin_bit($tmp498 != NULL);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block1; else goto block2;
block1:;
// line 208
org$pandalanguage$pandac$Annotations** $tmp501 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp502 = *$tmp501;
panda$core$String* $tmp503 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp502);
panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s505);
panda$core$String* $tmp506 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, $tmp506);
panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s509);
org$pandalanguage$pandac$FixedArray** $tmp510 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp511 = *$tmp510;
panda$core$Bit $tmp512 = panda$core$Bit$init$builtin_bit($tmp511 != NULL);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp514 = (panda$core$Int64) {208};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s515, $tmp514, &$s516);
abort(); // unreachable
block3:;
panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp508, ((panda$core$Object*) $tmp511));
panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s519);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
// unreffing REF($10:panda.core.String)
return $tmp518;
block2:;
// line 210
panda$core$String* $tmp520 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
// unreffing REF($52:panda.core.String)
return $tmp520;

}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* param0) {

// line 6
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$core$Weak** $tmp521 = &param0->owner;
panda$core$Weak* $tmp522 = *$tmp521;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
panda$core$String** $tmp523 = &param0->doccomment;
panda$core$String* $tmp524 = *$tmp523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
org$pandalanguage$pandac$Annotations** $tmp525 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp526 = *$tmp525;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
panda$collections$Array** $tmp527 = &param0->genericParameters;
panda$collections$Array* $tmp528 = *$tmp527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
panda$collections$Array** $tmp529 = &param0->parameters;
panda$collections$Array* $tmp530 = *$tmp529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
org$pandalanguage$pandac$Type** $tmp531 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp532 = *$tmp531;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
org$pandalanguage$pandac$FixedArray** $tmp533 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp534 = *$tmp533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
panda$core$Weak** $tmp535 = &param0->overridden;
panda$core$Weak* $tmp536 = *$tmp535;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
return;

}

