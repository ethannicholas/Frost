#include "org/frostlang/frostc/expression/Unary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/String/Index.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn40)(org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn48)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn59)(frost$core$Object*);
typedef frost$core$Bit (*$fn76)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn95)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn132)(frost$core$Object*);
typedef frost$core$Bit (*$fn235)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn261)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn307)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn321)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn333)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn372)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn390)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn404)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn448)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn462)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn474)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn513)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn527)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn541)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn571)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn585)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn615)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn631)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn645)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn660)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn679)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn708)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn720)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn745)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn748)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 1065047121338683379, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 130, 6793640040443146634, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 133, -6858303649085076227, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, -7705315543961432915, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -6163429507827714296, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x6e\x6f\x6e\x2d\x6e\x75\x6c\x6c", 21, -7939137719441648491, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:42
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:42:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp2 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp3 = *$tmp2;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int $tmp5 = (frost$core$Int) {1u};
org$frostlang$frostc$Type$Kind $tmp6 = org$frostlang$frostc$Type$Kind$init$frost$core$Int($tmp5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
org$frostlang$frostc$FixedArray* $tmp13 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int $tmp14 = (frost$core$Int) {0u};
frost$core$Object* $tmp15 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp13, $tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp15)));
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp15)));
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp16 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Type* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp16;

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Unary$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$expression$Unary$Operator local0;
org$frostlang$frostc$expression$Unary$Operator local1;
frost$collections$CollectionView* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:39
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp18->value = param2;
frost$core$Int $tmp19 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:39:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp20 = &(&local1)->$rawValue;
*$tmp20 = $tmp19;
org$frostlang$frostc$expression$Unary$Operator $tmp21 = *(&local1);
*(&local0) = $tmp21;
org$frostlang$frostc$expression$Unary$Operator $tmp22 = *(&local0);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp23->value = $tmp22;
ITable* $tmp24 = ((frost$core$Equatable*) $tmp18)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$core$Bit $tmp27 = $tmp25(((frost$core$Equatable*) $tmp18), ((frost$core$Equatable*) $tmp23));
bool $tmp28 = $tmp27.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp18)));
if ($tmp28) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:40
frost$collections$CollectionView* $tmp29 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param3);
*(&local2) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$collections$CollectionView* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local2) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:41
frost$collections$CollectionView* $tmp31 = *(&local2);
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31 != NULL};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:42
frost$collections$CollectionView* $tmp34 = *(&local2);
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34 != NULL};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block6; else goto block7;
block7:;
frost$core$Int $tmp37 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, $tmp37, &$s39);
abort(); // unreachable
block6:;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp41 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Unary.frost:42:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp42 = &$tmp41->pointer;
*$tmp42 = ((frost$core$Int8*) org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp43 = &$tmp41->target;
frost$core$Immutable* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Immutable** $tmp45 = &$tmp41->target;
*$tmp45 = ((frost$core$Immutable*) NULL);
ITable* $tmp46 = $tmp34->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[9];
frost$collections$Array* $tmp49 = $tmp47($tmp34, ((frost$core$MutableMethod*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp49)));
frost$collections$CollectionView* $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local2) = ((frost$collections$CollectionView*) $tmp49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:44
frost$collections$CollectionView* $tmp51 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$CollectionView* $tmp52 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local2) = ((frost$collections$CollectionView*) NULL);
return $tmp51;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:46
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp53 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp54 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp55 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp56 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp57;
$tmp57 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp57->value = param2;
$fn59 $tmp58 = ($fn59) ((frost$core$Object*) $tmp57)->$class->vtable[0];
frost$core$String* $tmp60 = $tmp58(((frost$core$Object*) $tmp57));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp55, $tmp56, param1, param3, $tmp60);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp61 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp61);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp53, $tmp54, param1, $tmp55, $tmp61);
frost$collections$CollectionView* $tmp62 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, $tmp53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
return $tmp62;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$expression$Unary$Operator local1;
org$frostlang$frostc$expression$Unary$Operator local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:53
org$frostlang$frostc$Type* $tmp63 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$Type* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:54
org$frostlang$frostc$Type* $tmp65 = *(&local0);
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65 != NULL};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:55
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp68;
$tmp68 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp68->value = param2;
frost$core$Int $tmp69 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:55:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp70 = &(&local2)->$rawValue;
*$tmp70 = $tmp69;
org$frostlang$frostc$expression$Unary$Operator $tmp71 = *(&local2);
*(&local1) = $tmp71;
org$frostlang$frostc$expression$Unary$Operator $tmp72 = *(&local1);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp73->value = $tmp72;
ITable* $tmp74 = ((frost$core$Equatable*) $tmp68)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
frost$core$Bit $tmp77 = $tmp75(((frost$core$Equatable*) $tmp68), ((frost$core$Equatable*) $tmp73));
bool $tmp78 = $tmp77.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp73)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp68)));
if ($tmp78) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:56
org$frostlang$frostc$Type* $tmp79 = *(&local0);
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79 != NULL};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block6; else goto block7;
block7:;
frost$core$Int $tmp82 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, $tmp82, &$s84);
abort(); // unreachable
block6:;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:56:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp85 = &$tmp79->typeKind;
org$frostlang$frostc$Type$Kind $tmp86 = *$tmp85;
org$frostlang$frostc$Type$Kind$wrapper* $tmp87;
$tmp87 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp87->value = $tmp86;
frost$core$Int $tmp88 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp89 = &(&local5)->$rawValue;
*$tmp89 = $tmp88;
org$frostlang$frostc$Type$Kind $tmp90 = *(&local5);
*(&local4) = $tmp90;
org$frostlang$frostc$Type$Kind $tmp91 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp92->value = $tmp91;
ITable* $tmp93 = ((frost$core$Equatable*) $tmp87)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
frost$core$Bit $tmp96 = $tmp94(((frost$core$Equatable*) $tmp87), ((frost$core$Equatable*) $tmp92));
bool $tmp97 = $tmp96.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp92)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp87)));
if ($tmp97) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local3) = $tmp79;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp98 = &$tmp79->_subtypes;
org$frostlang$frostc$FixedArray* $tmp99 = *$tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99 != NULL};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block13; else goto block14;
block14:;
frost$core$Int $tmp102 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, $tmp102, &$s104);
abort(); // unreachable
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Int $tmp105 = (frost$core$Int) {0u};
frost$core$Object* $tmp106 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp99, $tmp105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp106)));
frost$core$Frost$unref$frost$core$Object$Q($tmp106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp106)));
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp107 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlang$frostc$Type* $tmp108 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp107;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp110 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp111 = (frost$core$Int) {7u};
frost$core$Int $tmp112 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from Unary.frost:59:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp113 = &(&local7)->value;
*$tmp113 = $tmp112;
org$frostlang$frostc$IR$Statement$ID $tmp114 = *(&local7);
*(&local6) = $tmp114;
org$frostlang$frostc$IR$Statement$ID $tmp115 = *(&local6);
org$frostlang$frostc$Type* $tmp116 = *(&local0);
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116 != NULL};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block16; else goto block17;
block17:;
frost$core$Int $tmp119 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block16:;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp110, $tmp111, $tmp115, $tmp116);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$IR$Value* $tmp122 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local8) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:60
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp123 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp124 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp125 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp126 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp127 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp128 = (frost$core$Int) {26u};
org$frostlang$frostc$IR$Value* $tmp129 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp127, $tmp128, param1, $tmp129);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp130;
$tmp130 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp130->value = param2;
$fn132 $tmp131 = ($fn132) ((frost$core$Object*) $tmp130)->$class->vtable[0];
frost$core$String* $tmp133 = $tmp131(((frost$core$Object*) $tmp130));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp125, $tmp126, param1, $tmp127, $tmp133);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp134 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp134);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp123, $tmp124, param1, $tmp125, $tmp134);
org$frostlang$frostc$Type* $tmp135 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Value* $tmp136 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp135;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$Type*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Unary$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Type* param4) {

frost$core$UInt64 local0;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:72
frost$core$Int $tmp139 = param2.$rawValue;
frost$core$Int $tmp140 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:73:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 == $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:74
frost$core$Int* $tmp146 = &param3->$rawValue;
frost$core$Int $tmp147 = *$tmp146;
frost$core$Int $tmp148 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:75:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp154 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp155 = *$tmp154;
frost$core$UInt64* $tmp156 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp157 = *$tmp156;
*(&local0) = $tmp157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:76
frost$core$UInt64 $tmp158 = *(&local0);
frost$core$UInt64 $tmp159 = (frost$core$UInt64) {128u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:76:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp160 = $tmp158.value;
uint64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 == $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:77
org$frostlang$frostc$Type** $tmp165 = &param0->BUILTIN_INT8_TYPE;
org$frostlang$frostc$Type* $tmp166 = *$tmp165;
org$frostlang$frostc$Pair* $tmp167 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp166, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
return $tmp167;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:79
frost$core$UInt64 $tmp168 = *(&local0);
frost$core$UInt64 $tmp169 = (frost$core$UInt64) {32768u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:79:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp170 = $tmp168.value;
uint64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 == $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:80
org$frostlang$frostc$Type** $tmp175 = &param0->BUILTIN_INT16_TYPE;
org$frostlang$frostc$Type* $tmp176 = *$tmp175;
org$frostlang$frostc$Pair* $tmp177 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp176, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
return $tmp177;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:82
frost$core$UInt64 $tmp178 = *(&local0);
frost$core$UInt64 $tmp179 = (frost$core$UInt64) {2147483648u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Unary.frost:82:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp180 = $tmp178.value;
uint64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 == $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:83
org$frostlang$frostc$Type** $tmp185 = &param0->BUILTIN_INT32_TYPE;
org$frostlang$frostc$Type* $tmp186 = *$tmp185;
org$frostlang$frostc$Pair* $tmp187 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp186, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
return $tmp187;
block15:;
goto block5;
block5:;
goto block1;
block3:;
frost$core$Int $tmp188 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:88:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp189 = $tmp139.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 == $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block17; else goto block1;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:89
org$frostlang$frostc$Type* $tmp194 = org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param1, param2, param3);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlang$frostc$Type* $tmp195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local1) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:90
org$frostlang$frostc$Type* $tmp196 = *(&local1);
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196 == NULL};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:93
org$frostlang$frostc$Type* $tmp200 = *(&local1);
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200 != NULL};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block21; else goto block22;
block22:;
frost$core$Int $tmp203 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block21:;
org$frostlang$frostc$Pair* $tmp206 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp200, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$Type* $tmp207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp206;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:96
org$frostlang$frostc$Type* $tmp208 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
org$frostlang$frostc$Type* $tmp209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local2) = $tmp208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:97
org$frostlang$frostc$Type* $tmp210 = *(&local2);
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210 != NULL};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block25; else goto block24;
block25:;
org$frostlang$frostc$Type* $tmp213 = *(&local2);
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213 != NULL};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block27; else goto block28;
block28:;
frost$core$Int $tmp216 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s217, $tmp216, &$s218);
abort(); // unreachable
block27:;
org$frostlang$frostc$Type** $tmp219 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp220 = *$tmp219;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:97:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp221 = &((org$frostlang$frostc$Symbol*) $tmp213)->name;
frost$core$String* $tmp222 = *$tmp221;
frost$core$String** $tmp223 = &((org$frostlang$frostc$Symbol*) $tmp220)->name;
frost$core$String* $tmp224 = *$tmp223;
frost$core$Bit $tmp225 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp222, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp227 = &$tmp213->typeKind;
org$frostlang$frostc$Type$Kind $tmp228 = *$tmp227;
org$frostlang$frostc$Type$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp229->value = $tmp228;
org$frostlang$frostc$Type$Kind* $tmp230 = &$tmp220->typeKind;
org$frostlang$frostc$Type$Kind $tmp231 = *$tmp230;
org$frostlang$frostc$Type$Kind$wrapper* $tmp232;
$tmp232 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp232->value = $tmp231;
ITable* $tmp233 = ((frost$core$Equatable*) $tmp229)->$class->itable;
while ($tmp233->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp233 = $tmp233->next;
}
$fn235 $tmp234 = $tmp233->methods[0];
frost$core$Bit $tmp236 = $tmp234(((frost$core$Equatable*) $tmp229), ((frost$core$Equatable*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp232)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp229)));
*(&local3) = $tmp236;
goto block32;
block31:;
*(&local3) = $tmp225;
goto block32;
block32:;
frost$core$Bit $tmp237 = *(&local3);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block23; else goto block26;
block26:;
org$frostlang$frostc$Type* $tmp239 = *(&local2);
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239 != NULL};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block33; else goto block34;
block34:;
frost$core$Int $tmp242 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s243, $tmp242, &$s244);
abort(); // unreachable
block33:;
frost$core$Bit $tmp245 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp239);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:99
org$frostlang$frostc$Type* $tmp247 = *(&local2);
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247 != NULL};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block35; else goto block36;
block36:;
frost$core$Int $tmp250 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s251, $tmp250, &$s252);
abort(); // unreachable
block35:;
org$frostlang$frostc$Pair* $tmp253 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp247, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$Type* $tmp254 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp253;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:101
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp255 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp256 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp257 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp258 = (frost$core$Int) {16u};
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp259;
$tmp259 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp259->value = param2;
$fn261 $tmp260 = ($fn261) ((frost$core$Object*) $tmp259)->$class->vtable[0];
frost$core$String* $tmp262 = $tmp260(((frost$core$Object*) $tmp259));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp257, $tmp258, param1, param3, $tmp262);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp263 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp263);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp255, $tmp256, param1, $tmp257, $tmp263);
org$frostlang$frostc$Pair* $tmp264 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, $tmp255, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$Type* $tmp265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp264;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type* local21 = NULL;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:110
org$frostlang$frostc$IR** $tmp266 = &param0->ir;
org$frostlang$frostc$IR* $tmp267 = *$tmp266;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$IR* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local0) = $tmp267;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:111
frost$core$Int $tmp269 = param2.$rawValue;
frost$core$Int $tmp270 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:112:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 == $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:113
frost$core$Int* $tmp276 = &param3->$rawValue;
frost$core$Int $tmp277 = *$tmp276;
frost$core$Int $tmp278 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:114:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278.value;
bool $tmp281 = $tmp279 == $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp284 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp285 = *$tmp284;
frost$core$UInt64* $tmp286 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp287 = *$tmp286;
*(&local1) = $tmp287;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:115
frost$core$UInt64 $tmp288 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp289 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp288, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$IR* $tmp290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp289;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:119
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp291 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp292 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp291, $tmp292);
org$frostlang$frostc$IR$Value* $tmp293 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp291);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
org$frostlang$frostc$IR$Value* $tmp294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local2) = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:120
org$frostlang$frostc$IR$Value* $tmp295 = *(&local2);
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295 == NULL};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp298 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:123
org$frostlang$frostc$IR$Value* $tmp300 = *(&local2);
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300 != NULL};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block12; else goto block13;
block13:;
frost$core$Int $tmp303 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block12:;
$fn307 $tmp306 = ($fn307) $tmp300->$class->vtable[2];
org$frostlang$frostc$Type* $tmp308 = $tmp306($tmp300);
frost$core$Bit $tmp309 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp308);
bool $tmp310 = $tmp309.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
if ($tmp310) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:124
org$frostlang$frostc$IR* $tmp311 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp312 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp313 = (frost$core$Int) {15u};
org$frostlang$frostc$IR$Value* $tmp314 = *(&local2);
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314 != NULL};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block14; else goto block15;
block15:;
frost$core$Int $tmp317 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s318, $tmp317, &$s319);
abort(); // unreachable
block14:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp312, $tmp313, param1, $tmp314);
$fn321 $tmp320 = ($fn321) $tmp311->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp322 = $tmp320($tmp311, $tmp312);
*(&local3) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:125
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp323 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp324 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp325 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp326 = *(&local2);
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326 != NULL};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block16; else goto block17;
block17:;
frost$core$Int $tmp329 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block16:;
$fn333 $tmp332 = ($fn333) $tmp326->$class->vtable[2];
org$frostlang$frostc$Type* $tmp334 = $tmp332($tmp326);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp323, $tmp324, $tmp325, $tmp334);
org$frostlang$frostc$IR$Value* $tmp335 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp323, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
org$frostlang$frostc$IR$Value* $tmp336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp335;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:127
org$frostlang$frostc$IR$Value* $tmp338 = *(&local2);
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338 != NULL};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block18; else goto block19;
block19:;
frost$core$Int $tmp341 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s342, $tmp341, &$s343);
abort(); // unreachable
block18:;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp344 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp345 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp344, $tmp345);
org$frostlang$frostc$IR$Value* $tmp346 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp338, &$s347, ((frost$collections$ListView*) $tmp344), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$IR$Value* $tmp348 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp346;
block3:;
frost$core$Int $tmp350 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:129:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp351 = $tmp269.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 == $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:130
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp356 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp357 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp356, $tmp357);
org$frostlang$frostc$IR$Value* $tmp358 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp356);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
org$frostlang$frostc$IR$Value* $tmp359 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local4) = $tmp358;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:131
org$frostlang$frostc$IR$Value* $tmp360 = *(&local4);
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360 == NULL};
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp364 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:134
org$frostlang$frostc$IR$Value* $tmp365 = *(&local4);
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365 != NULL};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block27; else goto block28;
block28:;
frost$core$Int $tmp368 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block27:;
$fn372 $tmp371 = ($fn372) $tmp365->$class->vtable[2];
org$frostlang$frostc$Type* $tmp373 = $tmp371($tmp365);
org$frostlang$frostc$Type** $tmp374 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp375 = *$tmp374;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Unary.frost:134:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp376 = &((org$frostlang$frostc$Symbol*) $tmp373)->name;
frost$core$String* $tmp377 = *$tmp376;
frost$core$String** $tmp378 = &((org$frostlang$frostc$Symbol*) $tmp375)->name;
frost$core$String* $tmp379 = *$tmp378;
frost$core$Bit $tmp380 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp377, $tmp379);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp382 = &$tmp373->typeKind;
org$frostlang$frostc$Type$Kind $tmp383 = *$tmp382;
org$frostlang$frostc$Type$Kind$wrapper* $tmp384;
$tmp384 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp384->value = $tmp383;
org$frostlang$frostc$Type$Kind* $tmp385 = &$tmp375->typeKind;
org$frostlang$frostc$Type$Kind $tmp386 = *$tmp385;
org$frostlang$frostc$Type$Kind$wrapper* $tmp387;
$tmp387 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp387->value = $tmp386;
ITable* $tmp388 = ((frost$core$Equatable*) $tmp384)->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[0];
frost$core$Bit $tmp391 = $tmp389(((frost$core$Equatable*) $tmp384), ((frost$core$Equatable*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp387)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp384)));
*(&local5) = $tmp391;
goto block32;
block31:;
*(&local5) = $tmp380;
goto block32;
block32:;
frost$core$Bit $tmp392 = *(&local5);
bool $tmp393 = $tmp392.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
if ($tmp393) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:135
org$frostlang$frostc$IR* $tmp394 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp395 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp396 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp397 = *(&local4);
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397 != NULL};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block33; else goto block34;
block34:;
frost$core$Int $tmp400 = (frost$core$Int) {135u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s401, $tmp400, &$s402);
abort(); // unreachable
block33:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp395, $tmp396, param1, $tmp397);
$fn404 $tmp403 = ($fn404) $tmp394->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp405 = $tmp403($tmp394, $tmp395);
*(&local6) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp406 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp407 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp408 = *(&local6);
org$frostlang$frostc$Type** $tmp409 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp410 = *$tmp409;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp406, $tmp407, $tmp408, $tmp410);
org$frostlang$frostc$IR$Value* $tmp411 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp406, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
org$frostlang$frostc$IR$Value* $tmp412 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp413 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp411;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:139
org$frostlang$frostc$IR$Value* $tmp414 = *(&local4);
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414 != NULL};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block35; else goto block36;
block36:;
frost$core$Int $tmp417 = (frost$core$Int) {139u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s418, $tmp417, &$s419);
abort(); // unreachable
block35:;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp420 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp421 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp420, $tmp421);
org$frostlang$frostc$IR$Value* $tmp422 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp414, &$s423, ((frost$collections$ListView*) $tmp420), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
org$frostlang$frostc$IR$Value* $tmp424 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp425 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp422;
block21:;
frost$core$Int $tmp426 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:141:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp427 = $tmp269.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 == $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:142
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp432 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp433 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp432, $tmp433);
org$frostlang$frostc$IR$Value* $tmp434 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp432);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
org$frostlang$frostc$IR$Value* $tmp435 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local7) = $tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:143
org$frostlang$frostc$IR$Value* $tmp436 = *(&local7);
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436 == NULL};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp439 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp440 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:146
org$frostlang$frostc$IR$Value* $tmp441 = *(&local7);
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441 != NULL};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block44; else goto block45;
block45:;
frost$core$Int $tmp444 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s445, $tmp444, &$s446);
abort(); // unreachable
block44:;
$fn448 $tmp447 = ($fn448) $tmp441->$class->vtable[2];
org$frostlang$frostc$Type* $tmp449 = $tmp447($tmp441);
frost$core$Bit $tmp450 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp449);
bool $tmp451 = $tmp450.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
if ($tmp451) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:147
org$frostlang$frostc$IR* $tmp452 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp453 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp454 = (frost$core$Int) {16u};
org$frostlang$frostc$IR$Value* $tmp455 = *(&local7);
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455 != NULL};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block46; else goto block47;
block47:;
frost$core$Int $tmp458 = (frost$core$Int) {147u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s459, $tmp458, &$s460);
abort(); // unreachable
block46:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp453, $tmp454, param1, $tmp455);
$fn462 $tmp461 = ($fn462) $tmp452->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp463 = $tmp461($tmp452, $tmp453);
*(&local8) = $tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp464 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp465 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp466 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp467 = *(&local7);
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467 != NULL};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block48; else goto block49;
block49:;
frost$core$Int $tmp470 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s471, $tmp470, &$s472);
abort(); // unreachable
block48:;
$fn474 $tmp473 = ($fn474) $tmp467->$class->vtable[2];
org$frostlang$frostc$Type* $tmp475 = $tmp473($tmp467);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp464, $tmp465, $tmp466, $tmp475);
org$frostlang$frostc$IR$Value* $tmp476 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp464, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
org$frostlang$frostc$IR$Value* $tmp477 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp478 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp476;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:150
org$frostlang$frostc$IR$Value* $tmp479 = *(&local7);
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479 != NULL};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block50; else goto block51;
block51:;
frost$core$Int $tmp482 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s483, $tmp482, &$s484);
abort(); // unreachable
block50:;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp485 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp486 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp485, $tmp486);
org$frostlang$frostc$IR$Value* $tmp487 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp479, &$s488, ((frost$collections$ListView*) $tmp485), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
org$frostlang$frostc$IR$Value* $tmp489 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp490 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp487;
block38:;
frost$core$Int $tmp491 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Unary.frost:152:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp492 = $tmp269.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block52; else goto block1;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:153
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp497 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp498 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp497, $tmp498);
org$frostlang$frostc$IR$Value* $tmp499 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp497);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
org$frostlang$frostc$IR$Value* $tmp500 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local9) = $tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:154
org$frostlang$frostc$IR$Value* $tmp501 = *(&local9);
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501 == NULL};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp504 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp505 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:157
org$frostlang$frostc$IR$Value* $tmp506 = *(&local9);
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506 != NULL};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block56; else goto block57;
block57:;
frost$core$Int $tmp509 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s510, $tmp509, &$s511);
abort(); // unreachable
block56:;
$fn513 $tmp512 = ($fn513) $tmp506->$class->vtable[2];
org$frostlang$frostc$Type* $tmp514 = $tmp512($tmp506);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
org$frostlang$frostc$Type* $tmp515 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local10) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:158
org$frostlang$frostc$Type* $tmp516 = *(&local10);
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:158:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp517 = &$tmp516->typeKind;
org$frostlang$frostc$Type$Kind $tmp518 = *$tmp517;
org$frostlang$frostc$Type$Kind$wrapper* $tmp519;
$tmp519 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp519->value = $tmp518;
frost$core$Int $tmp520 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp521 = &(&local12)->$rawValue;
*$tmp521 = $tmp520;
org$frostlang$frostc$Type$Kind $tmp522 = *(&local12);
*(&local11) = $tmp522;
org$frostlang$frostc$Type$Kind $tmp523 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp524;
$tmp524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp524->value = $tmp523;
ITable* $tmp525 = ((frost$core$Equatable*) $tmp519)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Bit $tmp528 = $tmp526(((frost$core$Equatable*) $tmp519), ((frost$core$Equatable*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp524)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp519)));
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block58; else goto block62;
block62:;
org$frostlang$frostc$Type* $tmp530 = *(&local10);
org$frostlang$frostc$Type$Kind* $tmp531 = &$tmp530->typeKind;
org$frostlang$frostc$Type$Kind $tmp532 = *$tmp531;
org$frostlang$frostc$Type$Kind$wrapper* $tmp533;
$tmp533 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp533->value = $tmp532;
frost$core$Int $tmp534 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Unary.frost:159:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp535 = &(&local14)->$rawValue;
*$tmp535 = $tmp534;
org$frostlang$frostc$Type$Kind $tmp536 = *(&local14);
*(&local13) = $tmp536;
org$frostlang$frostc$Type$Kind $tmp537 = *(&local13);
org$frostlang$frostc$Type$Kind$wrapper* $tmp538;
$tmp538 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp538->value = $tmp537;
ITable* $tmp539 = ((frost$core$Equatable*) $tmp533)->$class->itable;
while ($tmp539->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp539 = $tmp539->next;
}
$fn541 $tmp540 = $tmp539->methods[0];
frost$core$Bit $tmp542 = $tmp540(((frost$core$Equatable*) $tmp533), ((frost$core$Equatable*) $tmp538));
bool $tmp543 = $tmp542.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp538)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp533)));
if ($tmp543) goto block65; else goto block61;
block65:;
org$frostlang$frostc$Type* $tmp544 = *(&local10);
frost$core$Weak** $tmp545 = &$tmp544->genericClassParameter;
frost$core$Weak* $tmp546 = *$tmp545;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Unary.frost:160:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp547 = &$tmp546->_valid;
frost$core$Bit $tmp548 = *$tmp547;
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block69; else goto block70;
block70:;
frost$core$Int $tmp550 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s551, $tmp550);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp552 = &$tmp546->value;
frost$core$Object* $tmp553 = *$tmp552;
frost$core$Frost$ref$frost$core$Object$Q($tmp553);
frost$core$Bit $tmp554 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp553) != NULL};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block71; else goto block72;
block72:;
frost$core$Int $tmp556 = (frost$core$Int) {160u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s557, $tmp556, &$s558);
abort(); // unreachable
block71:;
org$frostlang$frostc$Type** $tmp559 = &((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp553)->bound;
org$frostlang$frostc$Type* $tmp560 = *$tmp559;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:160:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp561 = &$tmp560->typeKind;
org$frostlang$frostc$Type$Kind $tmp562 = *$tmp561;
org$frostlang$frostc$Type$Kind$wrapper* $tmp563;
$tmp563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp563->value = $tmp562;
frost$core$Int $tmp564 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp565 = &(&local16)->$rawValue;
*$tmp565 = $tmp564;
org$frostlang$frostc$Type$Kind $tmp566 = *(&local16);
*(&local15) = $tmp566;
org$frostlang$frostc$Type$Kind $tmp567 = *(&local15);
org$frostlang$frostc$Type$Kind$wrapper* $tmp568;
$tmp568 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp568->value = $tmp567;
ITable* $tmp569 = ((frost$core$Equatable*) $tmp563)->$class->itable;
while ($tmp569->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
frost$core$Bit $tmp572 = $tmp570(((frost$core$Equatable*) $tmp563), ((frost$core$Equatable*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp568)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp563)));
bool $tmp573 = $tmp572.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp553);
if ($tmp573) goto block58; else goto block61;
block61:;
org$frostlang$frostc$Type* $tmp574 = *(&local10);
org$frostlang$frostc$Type$Kind* $tmp575 = &$tmp574->typeKind;
org$frostlang$frostc$Type$Kind $tmp576 = *$tmp575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp577;
$tmp577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp577->value = $tmp576;
frost$core$Int $tmp578 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Unary.frost:161:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp579 = &(&local18)->$rawValue;
*$tmp579 = $tmp578;
org$frostlang$frostc$Type$Kind $tmp580 = *(&local18);
*(&local17) = $tmp580;
org$frostlang$frostc$Type$Kind $tmp581 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp582;
$tmp582 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp582->value = $tmp581;
ITable* $tmp583 = ((frost$core$Equatable*) $tmp577)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$core$Bit $tmp586 = $tmp584(((frost$core$Equatable*) $tmp577), ((frost$core$Equatable*) $tmp582));
bool $tmp587 = $tmp586.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp577)));
if ($tmp587) goto block75; else goto block60;
block75:;
org$frostlang$frostc$Type* $tmp588 = *(&local10);
frost$core$Weak** $tmp589 = &$tmp588->genericMethodParameter;
frost$core$Weak* $tmp590 = *$tmp589;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Unary.frost:162:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp591 = &$tmp590->_valid;
frost$core$Bit $tmp592 = *$tmp591;
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block79; else goto block80;
block80:;
frost$core$Int $tmp594 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s595, $tmp594);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp596 = &$tmp590->value;
frost$core$Object* $tmp597 = *$tmp596;
frost$core$Frost$ref$frost$core$Object$Q($tmp597);
frost$core$Bit $tmp598 = (frost$core$Bit) {((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp597) != NULL};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block81; else goto block82;
block82:;
frost$core$Int $tmp600 = (frost$core$Int) {162u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s601, $tmp600, &$s602);
abort(); // unreachable
block81:;
org$frostlang$frostc$Type** $tmp603 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp597)->bound;
org$frostlang$frostc$Type* $tmp604 = *$tmp603;
// begin inline call to function org.frostlang.frostc.Type.get_isNullable():frost.core.Bit from Unary.frost:162:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
org$frostlang$frostc$Type$Kind* $tmp605 = &$tmp604->typeKind;
org$frostlang$frostc$Type$Kind $tmp606 = *$tmp605;
org$frostlang$frostc$Type$Kind$wrapper* $tmp607;
$tmp607 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp607->value = $tmp606;
frost$core$Int $tmp608 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp609 = &(&local20)->$rawValue;
*$tmp609 = $tmp608;
org$frostlang$frostc$Type$Kind $tmp610 = *(&local20);
*(&local19) = $tmp610;
org$frostlang$frostc$Type$Kind $tmp611 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp612;
$tmp612 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp612->value = $tmp611;
ITable* $tmp613 = ((frost$core$Equatable*) $tmp607)->$class->itable;
while ($tmp613->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp613 = $tmp613->next;
}
$fn615 $tmp614 = $tmp613->methods[0];
frost$core$Bit $tmp616 = $tmp614(((frost$core$Equatable*) $tmp607), ((frost$core$Equatable*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp612)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp607)));
bool $tmp617 = $tmp616.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp597);
if ($tmp617) goto block58; else goto block60;
block60:;
frost$collections$Stack** $tmp618 = &param0->currentClass;
frost$collections$Stack* $tmp619 = *$tmp618;
frost$core$Int $tmp620 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Unary.frost:163:46
frost$core$Int $tmp621 = (frost$core$Int) {0u};
int64_t $tmp622 = $tmp620.value;
int64_t $tmp623 = $tmp621.value;
bool $tmp624 = $tmp622 >= $tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block88; else goto block87;
block88:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp627 = &$tmp619->contents;
frost$collections$Array* $tmp628 = *$tmp627;
ITable* $tmp629 = ((frost$collections$CollectionView*) $tmp628)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Int $tmp632 = $tmp630(((frost$collections$CollectionView*) $tmp628));
int64_t $tmp633 = $tmp620.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 < $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block86; else goto block87;
block87:;
frost$core$Int $tmp638 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s639, $tmp638, &$s640);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp641 = &$tmp619->contents;
frost$collections$Array* $tmp642 = *$tmp641;
ITable* $tmp643 = ((frost$collections$CollectionView*) $tmp642)->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[0];
frost$core$Int $tmp646 = $tmp644(((frost$collections$CollectionView*) $tmp642));
int64_t $tmp647 = $tmp646.value;
int64_t $tmp648 = $tmp620.value;
bool $tmp649 = $tmp647 > $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block90; else goto block91;
block91:;
frost$core$Int $tmp652 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s653, $tmp652);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp654 = &$tmp619->contents;
frost$collections$Array* $tmp655 = *$tmp654;
frost$collections$Array** $tmp656 = &$tmp619->contents;
frost$collections$Array* $tmp657 = *$tmp656;
ITable* $tmp658 = ((frost$collections$CollectionView*) $tmp657)->$class->itable;
while ($tmp658->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp658 = $tmp658->next;
}
$fn660 $tmp659 = $tmp658->methods[0];
frost$core$Int $tmp661 = $tmp659(((frost$collections$CollectionView*) $tmp657));
frost$core$Int $tmp662 = (frost$core$Int) {1u};
int64_t $tmp663 = $tmp661.value;
int64_t $tmp664 = $tmp662.value;
int64_t $tmp665 = $tmp663 - $tmp664;
frost$core$Int $tmp666 = (frost$core$Int) {$tmp665};
int64_t $tmp667 = $tmp666.value;
int64_t $tmp668 = $tmp620.value;
int64_t $tmp669 = $tmp667 - $tmp668;
frost$core$Int $tmp670 = (frost$core$Int) {$tmp669};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp671 = (frost$core$Int) {0u};
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671.value;
bool $tmp674 = $tmp672 >= $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block95; else goto block94;
block95:;
ITable* $tmp677 = ((frost$collections$CollectionView*) $tmp655)->$class->itable;
while ($tmp677->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp677 = $tmp677->next;
}
$fn679 $tmp678 = $tmp677->methods[0];
frost$core$Int $tmp680 = $tmp678(((frost$collections$CollectionView*) $tmp655));
int64_t $tmp681 = $tmp670.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 < $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block93; else goto block94;
block94:;
frost$core$Int $tmp686 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s687, $tmp686, &$s688);
abort(); // unreachable
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp689 = &$tmp655->data;
frost$core$Object** $tmp690 = *$tmp689;
frost$core$Int64 $tmp691 = frost$core$Int64$init$frost$core$Int($tmp670);
int64_t $tmp692 = $tmp691.value;
frost$core$Object* $tmp693 = $tmp690[$tmp692];
frost$core$Frost$ref$frost$core$Object$Q($tmp693);
frost$core$Frost$ref$frost$core$Object$Q($tmp693);
frost$core$Frost$unref$frost$core$Object$Q($tmp693);
// begin inline call to function org.frostlang.frostc.ClassDecl.isSpecialization():frost.core.Bit from Unary.frost:163:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp694 = &((org$frostlang$frostc$ClassDecl*) $tmp693)->name;
frost$core$String* $tmp695 = *$tmp694;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
frost$core$String$Index$nullable $tmp696 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q($tmp695, &$s697);
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp696.nonnull};
bool $tmp699 = $tmp698.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp693);
if ($tmp699) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:164
org$frostlang$frostc$IR$Value* $tmp700 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp701 = *(&local9);
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701 != NULL};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block98; else goto block99;
block99:;
frost$core$Int $tmp704 = (frost$core$Int) {164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s705, $tmp704, &$s706);
abort(); // unreachable
block98:;
$fn708 $tmp707 = ($fn708) $tmp701->$class->vtable[2];
org$frostlang$frostc$Type* $tmp709 = $tmp707($tmp701);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Unary.frost:164:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
org$frostlang$frostc$Type$Kind* $tmp710 = &$tmp709->typeKind;
org$frostlang$frostc$Type$Kind $tmp711 = *$tmp710;
org$frostlang$frostc$Type$Kind$wrapper* $tmp712;
$tmp712 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp712->value = $tmp711;
frost$core$Int $tmp713 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp714 = &(&local23)->$rawValue;
*$tmp714 = $tmp713;
org$frostlang$frostc$Type$Kind $tmp715 = *(&local23);
*(&local22) = $tmp715;
org$frostlang$frostc$Type$Kind $tmp716 = *(&local22);
org$frostlang$frostc$Type$Kind$wrapper* $tmp717;
$tmp717 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp717->value = $tmp716;
ITable* $tmp718 = ((frost$core$Equatable*) $tmp712)->$class->itable;
while ($tmp718->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp718 = $tmp718->next;
}
$fn720 $tmp719 = $tmp718->methods[1];
frost$core$Bit $tmp721 = $tmp719(((frost$core$Equatable*) $tmp712), ((frost$core$Equatable*) $tmp717));
bool $tmp722 = $tmp721.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp717)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp712)));
if ($tmp722) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local21) = $tmp709;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
goto block100;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp723 = &$tmp709->_subtypes;
org$frostlang$frostc$FixedArray* $tmp724 = *$tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724 != NULL};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block105; else goto block106;
block106:;
frost$core$Int $tmp727 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s728, $tmp727, &$s729);
abort(); // unreachable
block105:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Int $tmp730 = (frost$core$Int) {0u};
frost$core$Object* $tmp731 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp724, $tmp730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp731)));
frost$core$Frost$unref$frost$core$Object$Q($tmp731);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local21) = ((org$frostlang$frostc$Type*) $tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp731)));
goto block100;
block100:;
org$frostlang$frostc$Type* $tmp732 = *(&local21);
org$frostlang$frostc$IR$Value* $tmp733 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp700, $tmp732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
org$frostlang$frostc$Type* $tmp734 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local21) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
org$frostlang$frostc$Type* $tmp735 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp736 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp733;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:166
org$frostlang$frostc$IR$Value* $tmp738 = *(&local9);
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738 != NULL};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block107; else goto block108;
block108:;
frost$core$Int $tmp741 = (frost$core$Int) {166u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s742, $tmp741, &$s743);
abort(); // unreachable
block107:;
$fn745 $tmp744 = ($fn745) $tmp738->$class->vtable[2];
org$frostlang$frostc$Type* $tmp746 = $tmp744($tmp738);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Unary.frost:166:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn748 $tmp747 = ($fn748) ((frost$core$Object*) $tmp746)->$class->vtable[0];
frost$core$String* $tmp749 = $tmp747(((frost$core$Object*) $tmp746));
frost$core$String* $tmp750 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s751, $tmp749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$String* $tmp752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp750, &$s753);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp752);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp754 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp755 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:170
frost$core$Int $tmp757 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s758, $tmp757);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* param0) {

return;

}
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

