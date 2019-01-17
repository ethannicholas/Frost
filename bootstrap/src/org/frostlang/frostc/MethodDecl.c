#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$convert$R$frost$core$String, org$frostlang$frostc$MethodDecl$cleanup, org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64, org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn50)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn54)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn59)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn100)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn121)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn132)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn144)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn154)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn162)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn181)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn215)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn257)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn261)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn266)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn311)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn339)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn346)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn350)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn355)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn401)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn405)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn410)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn428)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 31, -4625542026981951671, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, -3407239944236024271, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 569, -6722446447606640415, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 178, 8134445939478300866, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 101, -5019077769017442612, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 3362627311464111926, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlang$frostc$Type* param9, org$frostlang$frostc$FixedArray* param10) {

frost$core$Bit local0;
org$frostlang$frostc$MethodDecl$Parameter* local1 = NULL;
// line 66
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp3 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp2);
org$frostlang$frostc$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 68
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp6 = &param0->overrideKnown;
*$tmp6 = $tmp5;
// line 71
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp7, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->overridden;
frost$core$Weak* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($10:frost.core.Weak<org.frostlang.frostc.MethodDecl?>)
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(param7 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
*(&local0) = $tmp11;
goto block3;
block2:;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block4:;
ITable* $tmp18 = ((frost$collections$CollectionView*) param7)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Int64 $tmp21 = $tmp19(((frost$collections$CollectionView*) param7));
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 > $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
*(&local0) = $tmp26;
goto block3;
block3:;
frost$core$Bit $tmp27 = *(&local0);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block6:;
// line 88
frost$core$Int64 $tmp32 = (frost$core$Int64) {5};
org$frostlang$frostc$Symbol$Kind $tmp33 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp32);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp33, param2, param6);
// line 89
frost$core$Weak* $tmp34 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp34, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Weak** $tmp35 = &param0->owner;
frost$core$Weak* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Weak** $tmp37 = &param0->owner;
*$tmp37 = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($60:frost.core.Weak<org.frostlang.frostc.ClassDecl>)
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp38 = &param0->doccomment;
frost$core$String* $tmp39 = *$tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String** $tmp40 = &param0->doccomment;
*$tmp40 = param3;
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp41 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Annotations** $tmp43 = &param0->annotations;
*$tmp43 = param4;
// line 92
org$frostlang$frostc$MethodDecl$Kind* $tmp44 = &param0->methodKind;
*$tmp44 = param5;
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
frost$collections$Array** $tmp45 = &param0->genericParameters;
frost$collections$Array* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$collections$Array** $tmp47 = &param0->genericParameters;
*$tmp47 = param7;
// line 94
ITable* $tmp48 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
frost$collections$Iterator* $tmp51 = $tmp49(((frost$collections$Iterable*) param8));
goto block8;
block8:;
ITable* $tmp52 = $tmp51->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Bit $tmp55 = $tmp53($tmp51);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block10; else goto block9;
block9:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp57 = $tmp51->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[1];
frost$core$Object* $tmp60 = $tmp58($tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp60)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp60);
// line 95
org$frostlang$frostc$MethodDecl$Parameter* $tmp62 = *(&local1);
frost$core$Weak* $tmp63 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp63, ((frost$core$Object*) param0));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Weak** $tmp64 = &$tmp62->owner;
frost$core$Weak* $tmp65 = *$tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Weak** $tmp66 = &$tmp62->owner;
*$tmp66 = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing REF($131:frost.core.Weak<org.frostlang.frostc.MethodDecl?>)
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
// unreffing REF($120:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing p
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($109:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$collections$Array** $tmp68 = &param0->parameters;
frost$collections$Array* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$collections$Array** $tmp70 = &param0->parameters;
*$tmp70 = param8;
// line 98
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$Type** $tmp71 = &param0->returnType;
org$frostlang$frostc$Type* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type** $tmp73 = &param0->returnType;
*$tmp73 = param9;
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp74 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
org$frostlang$frostc$FixedArray** $tmp76 = &param0->body;
*$tmp76 = param10;
return;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 104
org$frostlang$frostc$MethodDecl$Kind* $tmp77 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp78 = *$tmp77;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp79->value = $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp81 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp80);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp82->value = $tmp81;
ITable* $tmp83 = ((frost$core$Equatable*) $tmp79)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp79), ((frost$core$Equatable*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp82)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp79)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
return $tmp86;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 108
org$frostlang$frostc$Annotations** $tmp87 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp88 = *$tmp87;
frost$core$Bit $tmp89 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp88);
frost$core$Bit $tmp90 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block2;
block1:;
org$frostlang$frostc$MethodDecl$Kind* $tmp92 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp93 = *$tmp92;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp94;
$tmp94 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp94->value = $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp96 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp95);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp97;
$tmp97 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp97->value = $tmp96;
ITable* $tmp98 = ((frost$core$Equatable*) $tmp94)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
frost$core$Bit $tmp101 = $tmp99(((frost$core$Equatable*) $tmp94), ((frost$core$Equatable*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp97)));
// unreffing REF($13:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp94)));
// unreffing REF($9:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local1) = $tmp101;
goto block3;
block2:;
*(&local1) = $tmp90;
goto block3;
block3:;
frost$core$Bit $tmp102 = *(&local1);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Annotations** $tmp104 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp105 = *$tmp104;
frost$core$Bit $tmp106 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp105);
frost$core$Bit $tmp107 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp106);
*(&local0) = $tmp107;
goto block6;
block5:;
*(&local0) = $tmp102;
goto block6;
block6:;
frost$core$Bit $tmp108 = *(&local0);
return $tmp108;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 112
org$frostlang$frostc$Annotations** $tmp109 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp110 = *$tmp109;
frost$core$Bit $tmp111 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp110);
frost$core$Bit $tmp112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp111);
return $tmp112;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Int64 local1;
// line 116
org$frostlang$frostc$Compiler$Resolution* $tmp113 = &param0->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp114 = *$tmp113;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp115;
$tmp115 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp115->value = $tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp117 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp116);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp118;
$tmp118 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp118->value = $tmp117;
ITable* $tmp119 = ((frost$core$Equatable*) $tmp115)->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[1];
frost$core$Bit $tmp122 = $tmp120(((frost$core$Equatable*) $tmp115), ((frost$core$Equatable*) $tmp118));
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Compiler$Resolution* $tmp124 = &param1->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp125 = *$tmp124;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp126;
$tmp126 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp126->value = $tmp125;
frost$core$Int64 $tmp127 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp128 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp127);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp129;
$tmp129 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp129->value = $tmp128;
ITable* $tmp130 = ((frost$core$Equatable*) $tmp126)->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[1];
frost$core$Bit $tmp133 = $tmp131(((frost$core$Equatable*) $tmp126), ((frost$core$Equatable*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp129)));
// unreffing REF($18:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp126)));
// unreffing REF($14:frost.core.Equatable<org.frostlang.frostc.Compiler.Resolution>)
*(&local0) = $tmp133;
goto block3;
block2:;
*(&local0) = $tmp122;
goto block3;
block3:;
frost$core$Bit $tmp134 = *(&local0);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s137, $tmp136);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp118)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp115)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Compiler.Resolution>)
// line 118
frost$core$String** $tmp138 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp139 = *$tmp138;
frost$core$String** $tmp140 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp141 = *$tmp140;
ITable* $tmp142 = ((frost$core$Equatable*) $tmp139)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[1];
frost$core$Bit $tmp145 = $tmp143(((frost$core$Equatable*) $tmp139), ((frost$core$Equatable*) $tmp141));
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block6; else goto block7;
block6:;
// line 119
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit(false);
return $tmp147;
block7:;
// line 121
org$frostlang$frostc$Type** $tmp148 = &param0->returnType;
org$frostlang$frostc$Type* $tmp149 = *$tmp148;
org$frostlang$frostc$Type** $tmp150 = &param1->returnType;
org$frostlang$frostc$Type* $tmp151 = *$tmp150;
ITable* $tmp152 = ((frost$core$Equatable*) $tmp149)->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[1];
frost$core$Bit $tmp155 = $tmp153(((frost$core$Equatable*) $tmp149), ((frost$core$Equatable*) $tmp151));
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block8; else goto block9;
block8:;
// line 122
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(false);
return $tmp157;
block9:;
// line 124
frost$collections$Array** $tmp158 = &param0->parameters;
frost$collections$Array* $tmp159 = *$tmp158;
ITable* $tmp160 = ((frost$collections$CollectionView*) $tmp159)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Int64 $tmp163 = $tmp161(((frost$collections$CollectionView*) $tmp159));
frost$collections$Array** $tmp164 = &param1->parameters;
frost$collections$Array* $tmp165 = *$tmp164;
ITable* $tmp166 = ((frost$collections$CollectionView*) $tmp165)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int64 $tmp169 = $tmp167(((frost$collections$CollectionView*) $tmp165));
int64_t $tmp170 = $tmp163.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 != $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block10; else goto block11;
block10:;
// line 125
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit(false);
return $tmp175;
block11:;
// line 127
frost$core$Int64 $tmp176 = (frost$core$Int64) {0};
frost$collections$Array** $tmp177 = &param0->parameters;
frost$collections$Array* $tmp178 = *$tmp177;
ITable* $tmp179 = ((frost$collections$CollectionView*) $tmp178)->$class->itable;
while ($tmp179->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[0];
frost$core$Int64 $tmp182 = $tmp180(((frost$collections$CollectionView*) $tmp178));
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp184 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp176, $tmp182, $tmp183);
frost$core$Int64 $tmp185 = $tmp184.min;
*(&local1) = $tmp185;
frost$core$Int64 $tmp186 = $tmp184.max;
frost$core$Bit $tmp187 = $tmp184.inclusive;
bool $tmp188 = $tmp187.value;
frost$core$Int64 $tmp189 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp190 = frost$core$Int64$convert$R$frost$core$UInt64($tmp189);
if ($tmp188) goto block15; else goto block16;
block15:;
int64_t $tmp191 = $tmp185.value;
int64_t $tmp192 = $tmp186.value;
bool $tmp193 = $tmp191 <= $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block12; else goto block13;
block16:;
int64_t $tmp196 = $tmp185.value;
int64_t $tmp197 = $tmp186.value;
bool $tmp198 = $tmp196 < $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block12; else goto block13;
block12:;
// line 128
frost$collections$Array** $tmp201 = &param0->parameters;
frost$collections$Array* $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = *(&local1);
frost$core$Object* $tmp204 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp202, $tmp203);
org$frostlang$frostc$Type** $tmp205 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp204)->type;
org$frostlang$frostc$Type* $tmp206 = *$tmp205;
frost$collections$Array** $tmp207 = &param1->parameters;
frost$collections$Array* $tmp208 = *$tmp207;
frost$core$Int64 $tmp209 = *(&local1);
frost$core$Object* $tmp210 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp208, $tmp209);
org$frostlang$frostc$Type** $tmp211 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp210)->type;
org$frostlang$frostc$Type* $tmp212 = *$tmp211;
ITable* $tmp213 = ((frost$core$Equatable*) $tmp206)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
frost$core$Bit $tmp216 = $tmp214(((frost$core$Equatable*) $tmp206), ((frost$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp210);
// unreffing REF($139:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
// unreffing REF($129:frost.collections.Array.T)
if ($tmp217) goto block17; else goto block18;
block17:;
// line 129
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit(false);
return $tmp218;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp219 = *(&local1);
int64_t $tmp220 = $tmp186.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 - $tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {$tmp222};
frost$core$UInt64 $tmp224 = frost$core$Int64$convert$R$frost$core$UInt64($tmp223);
if ($tmp188) goto block20; else goto block21;
block20:;
uint64_t $tmp225 = $tmp224.value;
uint64_t $tmp226 = $tmp190.value;
bool $tmp227 = $tmp225 >= $tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block19; else goto block13;
block21:;
uint64_t $tmp230 = $tmp224.value;
uint64_t $tmp231 = $tmp190.value;
bool $tmp232 = $tmp230 > $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block19; else goto block13;
block19:;
int64_t $tmp235 = $tmp219.value;
int64_t $tmp236 = $tmp189.value;
int64_t $tmp237 = $tmp235 + $tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {$tmp237};
*(&local1) = $tmp238;
goto block12;
block13:;
// line 132
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit(true);
return $tmp239;

}
frost$core$Int64 org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$Annotations$Expression* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$parser$Token$Kind local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$UInt64 local5;
// line 136
org$frostlang$frostc$Annotations** $tmp240 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp241 = *$tmp240;
frost$collections$Array** $tmp242 = &$tmp241->expressions;
frost$collections$Array* $tmp243 = *$tmp242;
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block1; else goto block2;
block1:;
// line 137
org$frostlang$frostc$Annotations** $tmp246 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp247 = *$tmp246;
frost$collections$Array** $tmp248 = &$tmp247->expressions;
frost$collections$Array* $tmp249 = *$tmp248;
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit($tmp249 != NULL);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {137};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block3:;
ITable* $tmp255 = ((frost$collections$Iterable*) $tmp249)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$collections$Iterator* $tmp258 = $tmp256(((frost$collections$Iterable*) $tmp249));
goto block5;
block5:;
ITable* $tmp259 = $tmp258->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Bit $tmp262 = $tmp260($tmp258);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block7; else goto block6;
block6:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp264 = $tmp258->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[1];
frost$core$Object* $tmp267 = $tmp265($tmp258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp267)));
org$frostlang$frostc$Annotations$Expression* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) $tmp267);
// line 138
org$frostlang$frostc$Annotations$Expression* $tmp269 = *(&local0);
frost$core$Int64* $tmp270 = &$tmp269->$rawValue;
frost$core$Int64 $tmp271 = *$tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {4};
frost$core$Bit $tmp273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp271, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block9; else goto block8;
block9:;
frost$core$String** $tmp275 = (frost$core$String**) ($tmp269->$data + 0);
frost$core$String* $tmp276 = *$tmp275;
org$frostlang$frostc$ASTNode** $tmp277 = (org$frostlang$frostc$ASTNode**) ($tmp269->$data + 8);
org$frostlang$frostc$ASTNode* $tmp278 = *$tmp277;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$ASTNode* $tmp279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local1) = $tmp278;
// line 140
org$frostlang$frostc$ASTNode* $tmp280 = *(&local1);
frost$core$Int64* $tmp281 = &$tmp280->$rawValue;
frost$core$Int64 $tmp282 = *$tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {25};
frost$core$Bit $tmp284 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp282, $tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp286 = (org$frostlang$frostc$Position*) ($tmp280->$data + 0);
org$frostlang$frostc$Position $tmp287 = *$tmp286;
frost$core$UInt64* $tmp288 = (frost$core$UInt64*) ($tmp280->$data + 16);
frost$core$UInt64 $tmp289 = *$tmp288;
*(&local2) = $tmp289;
// line 142
frost$core$UInt64 $tmp290 = *(&local2);
frost$core$Int64 $tmp291 = frost$core$UInt64$convert$R$frost$core$Int64($tmp290);
org$frostlang$frostc$ASTNode* $tmp292 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
// unreffing REF($35:frost.collections.Iterator.T)
org$frostlang$frostc$Annotations$Expression* $tmp293 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing a
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($24:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp291;
block12:;
frost$core$Int64 $tmp294 = (frost$core$Int64) {35};
frost$core$Bit $tmp295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp282, $tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block13; else goto block10;
block13:;
org$frostlang$frostc$Position* $tmp297 = (org$frostlang$frostc$Position*) ($tmp280->$data + 0);
org$frostlang$frostc$Position $tmp298 = *$tmp297;
org$frostlang$frostc$parser$Token$Kind* $tmp299 = (org$frostlang$frostc$parser$Token$Kind*) ($tmp280->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp300 = *$tmp299;
*(&local3) = $tmp300;
org$frostlang$frostc$ASTNode** $tmp301 = (org$frostlang$frostc$ASTNode**) ($tmp280->$data + 24);
org$frostlang$frostc$ASTNode* $tmp302 = *$tmp301;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$ASTNode* $tmp303 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local4) = $tmp302;
// line 145
org$frostlang$frostc$parser$Token$Kind $tmp304 = *(&local3);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp305;
$tmp305 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp305->value = $tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {56};
org$frostlang$frostc$parser$Token$Kind $tmp307 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp306);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp308;
$tmp308 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp308->value = $tmp307;
ITable* $tmp309 = ((frost$core$Equatable*) $tmp305)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Bit $tmp312 = $tmp310(((frost$core$Equatable*) $tmp305), ((frost$core$Equatable*) $tmp308));
bool $tmp313 = $tmp312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp308)));
// unreffing REF($119:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp305)));
// unreffing REF($115:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp313) goto block14; else goto block15;
block14:;
// line 146
org$frostlang$frostc$ASTNode* $tmp314 = *(&local4);
frost$core$Int64* $tmp315 = &$tmp314->$rawValue;
frost$core$Int64 $tmp316 = *$tmp315;
frost$core$Int64 $tmp317 = (frost$core$Int64) {25};
frost$core$Bit $tmp318 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp316, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block17; else goto block16;
block17:;
org$frostlang$frostc$Position* $tmp320 = (org$frostlang$frostc$Position*) ($tmp314->$data + 0);
org$frostlang$frostc$Position $tmp321 = *$tmp320;
frost$core$UInt64* $tmp322 = (frost$core$UInt64*) ($tmp314->$data + 16);
frost$core$UInt64 $tmp323 = *$tmp322;
*(&local5) = $tmp323;
// line 148
frost$core$UInt64 $tmp324 = *(&local5);
frost$core$Int64 $tmp325 = frost$core$UInt64$convert$R$frost$core$Int64($tmp324);
frost$core$Int64 $tmp326 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp325);
org$frostlang$frostc$ASTNode* $tmp327 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing base
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
// unreffing REF($35:frost.collections.Iterator.T)
org$frostlang$frostc$Annotations$Expression* $tmp329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing a
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($24:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp326;
block16:;
goto block15;
block15:;
org$frostlang$frostc$ASTNode* $tmp330 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing base
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block10;
block10:;
org$frostlang$frostc$ASTNode* $tmp331 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
// unreffing REF($35:frost.collections.Iterator.T)
org$frostlang$frostc$Annotations$Expression* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing a
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($24:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block2:;
// line 158
frost$core$Int64 $tmp333 = (frost$core$Int64) {0};
return $tmp333;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
// line 162
frost$collections$Array* $tmp334 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp335 = &param0->parameters;
frost$collections$Array* $tmp336 = *$tmp335;
ITable* $tmp337 = ((frost$collections$CollectionView*) $tmp336)->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
frost$core$Int64 $tmp340 = $tmp338(((frost$collections$CollectionView*) $tmp336));
frost$collections$Array$init$frost$core$Int64($tmp334, $tmp340);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$collections$Array* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = $tmp334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 163
frost$collections$Array** $tmp342 = &param0->parameters;
frost$collections$Array* $tmp343 = *$tmp342;
ITable* $tmp344 = ((frost$collections$Iterable*) $tmp343)->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
frost$collections$Iterator* $tmp347 = $tmp345(((frost$collections$Iterable*) $tmp343));
goto block1;
block1:;
ITable* $tmp348 = $tmp347->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[0];
frost$core$Bit $tmp351 = $tmp349($tmp347);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp353 = $tmp347->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp353 = $tmp353->next;
}
$fn355 $tmp354 = $tmp353->methods[1];
frost$core$Object* $tmp356 = $tmp354($tmp347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp356)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp356);
// line 164
frost$collections$Array* $tmp358 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp359 = *(&local1);
org$frostlang$frostc$Type** $tmp360 = &$tmp359->type;
org$frostlang$frostc$Type* $tmp361 = *$tmp360;
frost$collections$Array$add$frost$collections$Array$T($tmp358, ((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q($tmp356);
// unreffing REF($36:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing p
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($25:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 166
// line 167
org$frostlang$frostc$MethodDecl$Kind* $tmp363 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp364 = *$tmp363;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp365;
$tmp365 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp365->value = $tmp364;
frost$core$Int64 $tmp366 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp367 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp366);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp368;
$tmp368 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp368->value = $tmp367;
ITable* $tmp369 = ((frost$core$Equatable*) $tmp365)->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp369 = $tmp369->next;
}
$fn371 $tmp370 = $tmp369->methods[0];
frost$core$Bit $tmp372 = $tmp370(((frost$core$Equatable*) $tmp365), ((frost$core$Equatable*) $tmp368));
bool $tmp373 = $tmp372.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp368)));
// unreffing REF($72:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp365)));
// unreffing REF($68:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp373) goto block4; else goto block6;
block4:;
// line 168
frost$core$Int64 $tmp374 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp375 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp374);
*(&local2) = $tmp375;
goto block5;
block6:;
// line 1
// line 171
frost$core$Int64 $tmp376 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp377 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp376);
*(&local2) = $tmp377;
goto block5;
block5:;
// line 173
org$frostlang$frostc$Position* $tmp378 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp379 = *$tmp378;
org$frostlang$frostc$Type$Kind $tmp380 = *(&local2);
frost$collections$Array* $tmp381 = *(&local0);
org$frostlang$frostc$Type** $tmp382 = &param0->returnType;
org$frostlang$frostc$Type* $tmp383 = *$tmp382;
frost$core$Int64 $tmp384 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(param0);
org$frostlang$frostc$Type* $tmp385 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp379, $tmp380, ((frost$collections$ListView*) $tmp381), $tmp383, $tmp384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($104:org.frostlang.frostc.Type)
frost$collections$Array* $tmp386 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing paramTypes
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp385;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 177
frost$core$MutableString* $tmp387 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String** $tmp388 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp389 = *$tmp388;
frost$core$String* $tmp390 = frost$core$String$convert$R$frost$core$String($tmp389);
frost$core$String* $tmp391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp390, &$s392);
frost$core$MutableString$init$frost$core$String($tmp387, $tmp391);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$MutableString* $tmp393 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local0) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($1:frost.core.MutableString)
// line 178
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s394));
frost$core$String* $tmp395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local1) = &$s396;
// line 179
frost$collections$Array** $tmp397 = &param0->parameters;
frost$collections$Array* $tmp398 = *$tmp397;
ITable* $tmp399 = ((frost$collections$Iterable*) $tmp398)->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
frost$collections$Iterator* $tmp402 = $tmp400(((frost$collections$Iterable*) $tmp398));
goto block1;
block1:;
ITable* $tmp403 = $tmp402->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[0];
frost$core$Bit $tmp406 = $tmp404($tmp402);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp408 = $tmp402->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[1];
frost$core$Object* $tmp411 = $tmp409($tmp402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp411)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp412 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp411);
// line 180
frost$core$MutableString* $tmp413 = *(&local0);
frost$core$String* $tmp414 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp413, $tmp414);
// line 181
frost$core$MutableString* $tmp415 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp416 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp415, ((frost$core$Object*) $tmp416));
// line 182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s417));
frost$core$String* $tmp418 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local1) = &$s419;
frost$core$Frost$unref$frost$core$Object$Q($tmp411);
// unreffing REF($49:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl$Parameter* $tmp420 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// unreffing p
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing REF($38:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 184
frost$core$MutableString* $tmp421 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp421, &$s422);
// line 185
org$frostlang$frostc$Type** $tmp423 = &param0->returnType;
org$frostlang$frostc$Type* $tmp424 = *$tmp423;
org$frostlang$frostc$Type* $tmp425 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp426 = ((frost$core$Equatable*) $tmp424)->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[1];
frost$core$Bit $tmp429 = $tmp427(((frost$core$Equatable*) $tmp424), ((frost$core$Equatable*) $tmp425));
bool $tmp430 = $tmp429.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing REF($93:org.frostlang.frostc.Type)
if ($tmp430) goto block4; else goto block5;
block4:;
// line 186
frost$core$MutableString* $tmp431 = *(&local0);
org$frostlang$frostc$Type** $tmp432 = &param0->returnType;
org$frostlang$frostc$Type* $tmp433 = *$tmp432;
frost$core$String* $tmp434 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s435, ((frost$core$Object*) $tmp433));
frost$core$String* $tmp436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp434, &$s437);
frost$core$MutableString$append$frost$core$String($tmp431, $tmp436);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// unreffing REF($108:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing REF($107:frost.core.String)
goto block5;
block5:;
// line 188
frost$core$MutableString* $tmp438 = *(&local0);
frost$core$String* $tmp439 = frost$core$MutableString$finish$R$frost$core$String($tmp438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// unreffing REF($119:frost.core.String)
frost$core$String* $tmp440 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp441 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp439;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// line 192
org$frostlang$frostc$MethodDecl$Kind* $tmp442 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp443 = *$tmp442;
frost$core$Int64 $tmp444 = $tmp443.$rawValue;
frost$core$Int64 $tmp445 = (frost$core$Int64) {0};
frost$core$Bit $tmp446 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp444, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block2; else goto block3;
block2:;
// line 194
frost$core$Weak** $tmp448 = &param0->owner;
frost$core$Weak* $tmp449 = *$tmp448;
frost$core$Object* $tmp450 = frost$core$Weak$get$R$frost$core$Weak$T($tmp449);
frost$core$String** $tmp451 = &((org$frostlang$frostc$ClassDecl*) $tmp450)->name;
frost$core$String* $tmp452 = *$tmp451;
frost$core$String* $tmp453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s454, $tmp452);
frost$core$String* $tmp455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp453, &$s456);
frost$core$String* $tmp457 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp455, $tmp457);
frost$core$String* $tmp459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp458, &$s460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing REF($20:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// unreffing REF($16:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp450);
// unreffing REF($12:frost.core.Weak.T)
return $tmp459;
block3:;
frost$core$Int64 $tmp461 = (frost$core$Int64) {1};
frost$core$Bit $tmp462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp444, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block4; else goto block5;
block4:;
// line 197
frost$core$Weak** $tmp464 = &param0->owner;
frost$core$Weak* $tmp465 = *$tmp464;
frost$core$Object* $tmp466 = frost$core$Weak$get$R$frost$core$Weak$T($tmp465);
frost$core$String** $tmp467 = &((org$frostlang$frostc$ClassDecl*) $tmp466)->name;
frost$core$String* $tmp468 = *$tmp467;
frost$core$String* $tmp469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s470, $tmp468);
frost$core$String* $tmp471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp469, &$s472);
frost$core$String* $tmp473 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp471, $tmp473);
frost$core$String* $tmp475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp474, &$s476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($58:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing REF($54:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
// unreffing REF($50:frost.core.Weak.T)
return $tmp475;
block5:;
frost$core$Int64 $tmp477 = (frost$core$Int64) {2};
frost$core$Bit $tmp478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp444, $tmp477);
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block6; else goto block1;
block6:;
// line 200
frost$core$Weak** $tmp480 = &param0->owner;
frost$core$Weak* $tmp481 = *$tmp480;
frost$core$Object* $tmp482 = frost$core$Weak$get$R$frost$core$Weak$T($tmp481);
frost$core$String** $tmp483 = &((org$frostlang$frostc$ClassDecl*) $tmp482)->name;
frost$core$String* $tmp484 = *$tmp483;
frost$core$String* $tmp485 = frost$core$String$convert$R$frost$core$String($tmp484);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp485, &$s487);
frost$core$String* $tmp488 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp489 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, $tmp488);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp489, &$s491);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing REF($93:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp482);
// unreffing REF($88:frost.core.Weak.T)
return $tmp490;
block1:;
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit(false);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp494 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s495, $tmp494, &$s496);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$MethodDecl$convert$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// line 207
org$frostlang$frostc$FixedArray** $tmp497 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp498 = *$tmp497;
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit($tmp498 != NULL);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block1; else goto block2;
block1:;
// line 208
org$frostlang$frostc$Annotations** $tmp501 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp502 = *$tmp501;
frost$core$String* $tmp503 = org$frostlang$frostc$Annotations$convert$R$frost$core$String($tmp502);
frost$core$String* $tmp504 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp503, &$s505);
frost$core$String* $tmp506 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp504, $tmp506);
frost$core$String* $tmp508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp507, &$s509);
org$frostlang$frostc$FixedArray** $tmp510 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp511 = *$tmp510;
frost$core$Bit $tmp512 = frost$core$Bit$init$builtin_bit($tmp511 != NULL);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp514 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s515, $tmp514, &$s516);
abort(); // unreachable
block3:;
frost$core$String* $tmp517 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp508, ((frost$core$Object*) $tmp511));
frost$core$String* $tmp518 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp517, &$s519);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($10:frost.core.String)
return $tmp518;
block2:;
// line 210
frost$core$String* $tmp520 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// unreffing REF($52:frost.core.String)
return $tmp520;

}
void org$frostlang$frostc$MethodDecl$cleanup(org$frostlang$frostc$MethodDecl* param0) {

// line 6
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp521 = &param0->owner;
frost$core$Weak* $tmp522 = *$tmp521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$String** $tmp523 = &param0->doccomment;
frost$core$String* $tmp524 = *$tmp523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$Annotations** $tmp525 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp526 = *$tmp525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$collections$Array** $tmp527 = &param0->genericParameters;
frost$collections$Array* $tmp528 = *$tmp527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$collections$Array** $tmp529 = &param0->parameters;
frost$collections$Array* $tmp530 = *$tmp529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
org$frostlang$frostc$Type** $tmp531 = &param0->returnType;
org$frostlang$frostc$Type* $tmp532 = *$tmp531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
org$frostlang$frostc$FixedArray** $tmp533 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp534 = *$tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Weak** $tmp535 = &param0->overridden;
frost$core$Weak* $tmp536 = *$tmp535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
return;

}

