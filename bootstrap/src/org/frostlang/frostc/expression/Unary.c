#include "org/frostlang/frostc/expression/Unary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn35)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn47)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn93)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn107)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn119)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn155)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn170)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn210)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn224)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn236)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 3193902451946592297, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x6f\x70\x65\x72\x61\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 325, -2596278493247114951, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Statement$ID local10;
// line 46
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 47
frost$core$Int64 $tmp5 = param2.$rawValue;
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
frost$core$Bit $tmp7 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block2; else goto block3;
block2:;
// line 49
frost$core$Int64* $tmp9 = &param3->$rawValue;
frost$core$Int64 $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {25};
frost$core$Bit $tmp12 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp10, $tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp14 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp15 = *$tmp14;
frost$core$UInt64* $tmp16 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp17 = *$tmp16;
*(&local1) = $tmp17;
// line 51
frost$core$Int64* $tmp18 = &param4->$rawValue;
frost$core$Int64 $tmp19 = *$tmp18;
frost$core$Int64 $tmp20 = (frost$core$Int64) {3};
frost$core$Bit $tmp21 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp19, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Type** $tmp23 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp24 = *$tmp23;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type* $tmp25 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local2) = $tmp24;
// line 53
org$frostlang$frostc$Type* $tmp26 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp27 = &$tmp26->typeKind;
org$frostlang$frostc$Type$Kind $tmp28 = *$tmp27;
org$frostlang$frostc$Type$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp29->value = $tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp31 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp30);
org$frostlang$frostc$Type$Kind$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp32->value = $tmp31;
ITable* $tmp33 = ((frost$core$Equatable*) $tmp29)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[0];
frost$core$Bit $tmp36 = $tmp34(((frost$core$Equatable*) $tmp29), ((frost$core$Equatable*) $tmp32));
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block10; else goto block11;
block10:;
*(&local3) = $tmp36;
goto block12;
block11:;
org$frostlang$frostc$Type* $tmp38 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp39 = &$tmp38->typeKind;
org$frostlang$frostc$Type$Kind $tmp40 = *$tmp39;
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp43 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp42);
org$frostlang$frostc$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp44->value = $tmp43;
ITable* $tmp45 = ((frost$core$Equatable*) $tmp41)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Bit $tmp48 = $tmp46(((frost$core$Equatable*) $tmp41), ((frost$core$Equatable*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp44)));
// unreffing REF($66:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp41)));
// unreffing REF($62:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp48;
goto block12;
block12:;
frost$core$Bit $tmp49 = *(&local3);
bool $tmp50 = $tmp49.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp32)));
// unreffing REF($52:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp29)));
// unreffing REF($48:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp50) goto block8; else goto block9;
block8:;
// line 55
org$frostlang$frostc$IR$Value* $tmp51 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp52 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp53 = *(&local1);
frost$core$UInt64 $tmp54 = frost$core$UInt64$$SUB$R$frost$core$UInt64($tmp53);
org$frostlang$frostc$Type* $tmp55 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp51, $tmp52, $tmp54, $tmp55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($87:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp56 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp57 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp51;
block9:;
// line 57
org$frostlang$frostc$Type* $tmp58 = *(&local2);
frost$core$Bit $tmp59 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block13; else goto block14;
block13:;
// line 58
frost$collections$Array* $tmp61 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp61);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$collections$Array* $tmp62 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local4) = $tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($116:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 59
frost$collections$Array* $tmp63 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp64 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp66 = *(&local1);
frost$core$UInt64 $tmp67 = frost$core$UInt64$$SUB$R$frost$core$UInt64($tmp66);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp64, $tmp65, param1, $tmp67);
frost$collections$Array$add$frost$collections$Array$T($tmp63, ((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($132:org.frostlang.frostc.ASTNode)
// line 60
org$frostlang$frostc$IR$Value* $tmp68 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp69 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp70 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp68, $tmp69, $tmp70);
frost$collections$Array* $tmp71 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp72 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp68, ((frost$collections$ListView*) $tmp71), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($149:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($143:org.frostlang.frostc.IR.Value)
frost$collections$Array* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp74 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp72;
block14:;
org$frostlang$frostc$Type* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
goto block4;
block4:;
// line 67
org$frostlang$frostc$Compiler$TypeContext* $tmp77 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp78 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp77, $tmp78);
org$frostlang$frostc$IR$Value* $tmp79 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp77);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$IR$Value* $tmp80 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local5) = $tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($185:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($182:org.frostlang.frostc.Compiler.TypeContext)
// line 68
org$frostlang$frostc$IR$Value* $tmp81 = *(&local5);
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit($tmp81 == NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block15; else goto block16;
block15:;
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp84 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// line 71
org$frostlang$frostc$IR$Value* $tmp86 = *(&local5);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {71};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s90, $tmp89, &$s91);
abort(); // unreachable
block19:;
$fn93 $tmp92 = ($fn93) $tmp86->$class->vtable[2];
org$frostlang$frostc$Type* $tmp94 = $tmp92($tmp86);
frost$core$Bit $tmp95 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp94);
bool $tmp96 = $tmp95.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($230:org.frostlang.frostc.Type)
if ($tmp96) goto block17; else goto block18;
block17:;
// line 72
org$frostlang$frostc$IR* $tmp97 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp98 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp99 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp100 = *(&local5);
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit($tmp100 != NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s104, $tmp103, &$s105);
abort(); // unreachable
block21:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp98, $tmp99, param1, $tmp100);
$fn107 $tmp106 = ($fn107) $tmp97->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp108 = $tmp106($tmp97, $tmp98);
*(&local6) = $tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($239:org.frostlang.frostc.IR.Statement)
// line 73
org$frostlang$frostc$IR$Value* $tmp109 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp111 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp112 = *(&local5);
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s116, $tmp115, &$s117);
abort(); // unreachable
block23:;
$fn119 $tmp118 = ($fn119) $tmp112->$class->vtable[2];
org$frostlang$frostc$Type* $tmp120 = $tmp118($tmp112);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp109, $tmp110, $tmp111, $tmp120);
org$frostlang$frostc$IR$Value* $tmp121 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp109, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($274:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($271:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($258:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp122 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp121;
block18:;
// line 75
org$frostlang$frostc$IR$Value* $tmp124 = *(&local5);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124 != NULL);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp127 = (frost$core$Int64) {75};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s128, $tmp127, &$s129);
abort(); // unreachable
block25:;
frost$collections$Array* $tmp130 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp130, $tmp131);
org$frostlang$frostc$IR$Value* $tmp132 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp124, &$s133, ((frost$collections$ListView*) $tmp130), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($312:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($307:frost.collections.Array<org.frostlang.frostc.ASTNode>)
org$frostlang$frostc$IR$Value* $tmp134 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing target
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp132;
block3:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {0};
frost$core$Bit $tmp137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block27; else goto block28;
block27:;
// line 78
org$frostlang$frostc$Compiler$TypeContext* $tmp139 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp140 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp139, $tmp140);
org$frostlang$frostc$IR$Value* $tmp141 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp139);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$IR$Value* $tmp142 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local7) = $tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($340:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($337:org.frostlang.frostc.Compiler.TypeContext)
// line 79
org$frostlang$frostc$IR$Value* $tmp143 = *(&local7);
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143 == NULL);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block29; else goto block30;
block29:;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp146 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
// line 82
org$frostlang$frostc$IR$Value* $tmp148 = *(&local7);
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit($tmp148 != NULL);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp151 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s152, $tmp151, &$s153);
abort(); // unreachable
block33:;
$fn155 $tmp154 = ($fn155) $tmp148->$class->vtable[2];
org$frostlang$frostc$Type* $tmp156 = $tmp154($tmp148);
org$frostlang$frostc$Type* $tmp157 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp158 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp156, $tmp157);
bool $tmp159 = $tmp158.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($386:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($385:org.frostlang.frostc.Type)
if ($tmp159) goto block31; else goto block32;
block31:;
// line 83
org$frostlang$frostc$IR* $tmp160 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp161 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp162 = (frost$core$Int64) {15};
org$frostlang$frostc$IR$Value* $tmp163 = *(&local7);
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163 != NULL);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s167, $tmp166, &$s168);
abort(); // unreachable
block35:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp161, $tmp162, param1, $tmp163);
$fn170 $tmp169 = ($fn170) $tmp160->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp171 = $tmp169($tmp160, $tmp161);
*(&local8) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing REF($398:org.frostlang.frostc.IR.Statement)
// line 84
org$frostlang$frostc$IR$Value* $tmp172 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp173 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp174 = *(&local8);
org$frostlang$frostc$Type* $tmp175 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp172, $tmp173, $tmp174, $tmp175);
org$frostlang$frostc$IR$Value* $tmp176 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp172, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($423:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($420:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing REF($417:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp177 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp176;
block32:;
// line 86
org$frostlang$frostc$IR$Value* $tmp179 = *(&local7);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 != NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s183, $tmp182, &$s184);
abort(); // unreachable
block37:;
frost$collections$Array* $tmp185 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp185, $tmp186);
org$frostlang$frostc$IR$Value* $tmp187 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp179, &$s188, ((frost$collections$ListView*) $tmp185), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($461:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($456:frost.collections.Array<org.frostlang.frostc.ASTNode>)
org$frostlang$frostc$IR$Value* $tmp189 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp187;
block28:;
frost$core$Int64 $tmp191 = (frost$core$Int64) {1};
frost$core$Bit $tmp192 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block39; else goto block1;
block39:;
// line 89
org$frostlang$frostc$Compiler$TypeContext* $tmp194 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp195 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp194, $tmp195);
org$frostlang$frostc$IR$Value* $tmp196 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp194);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlang$frostc$IR$Value* $tmp197 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local9) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($489:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($486:org.frostlang.frostc.Compiler.TypeContext)
// line 90
org$frostlang$frostc$IR$Value* $tmp198 = *(&local9);
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198 == NULL);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block40; else goto block41;
block40:;
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp201 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing target
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block41:;
// line 93
org$frostlang$frostc$IR$Value* $tmp203 = *(&local9);
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203 != NULL);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp206 = (frost$core$Int64) {93};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s207, $tmp206, &$s208);
abort(); // unreachable
block44:;
$fn210 $tmp209 = ($fn210) $tmp203->$class->vtable[2];
org$frostlang$frostc$Type* $tmp211 = $tmp209($tmp203);
frost$core$Bit $tmp212 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp211);
bool $tmp213 = $tmp212.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($534:org.frostlang.frostc.Type)
if ($tmp213) goto block42; else goto block43;
block42:;
// line 94
org$frostlang$frostc$IR* $tmp214 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp215 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp216 = (frost$core$Int64) {15};
org$frostlang$frostc$IR$Value* $tmp217 = *(&local9);
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit($tmp217 != NULL);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s221, $tmp220, &$s222);
abort(); // unreachable
block46:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp215, $tmp216, param1, $tmp217);
$fn224 $tmp223 = ($fn224) $tmp214->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp225 = $tmp223($tmp214, $tmp215);
*(&local10) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($543:org.frostlang.frostc.IR.Statement)
// line 95
org$frostlang$frostc$IR$Value* $tmp226 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp227 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp228 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp229 = *(&local9);
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit($tmp229 != NULL);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {95};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s233, $tmp232, &$s234);
abort(); // unreachable
block48:;
$fn236 $tmp235 = ($fn236) $tmp229->$class->vtable[2];
org$frostlang$frostc$Type* $tmp237 = $tmp235($tmp229);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp226, $tmp227, $tmp228, $tmp237);
org$frostlang$frostc$IR$Value* $tmp238 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp226, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($578:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($575:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($562:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp239 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing target
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp238;
block43:;
// line 97
org$frostlang$frostc$IR$Value* $tmp241 = *(&local9);
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit($tmp241 != NULL);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s245, $tmp244, &$s246);
abort(); // unreachable
block50:;
frost$collections$Array* $tmp247 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp247, $tmp248);
org$frostlang$frostc$IR$Value* $tmp249 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp241, &$s250, ((frost$collections$ListView*) $tmp247), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($616:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($611:frost.collections.Array<org.frostlang.frostc.ASTNode>)
org$frostlang$frostc$IR$Value* $tmp251 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing target
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp249;
block1:;
// line 100
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit(false);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s256, $tmp255);
abort(); // unreachable
block52:;
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit(false);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp259 = (frost$core$Int64) {44};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s260, $tmp259, &$s261);
abort(); // unreachable
block54:;
abort(); // unreachable

}
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* param0) {

return;

}
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

