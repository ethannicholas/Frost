#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/expression/Call.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$IndexLValue$class_type org$frostlang$frostc$lvalue$IndexLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$IndexLValue$cleanup, org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn4)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn13)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn15)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$Type* (*$fn16)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn17)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn27)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn30)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn31)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn33)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn34)(frost$core$Object*);
typedef frost$core$Int (*$fn35)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn36)(frost$collections$ListView*, frost$core$Int);
typedef org$frostlang$frostc$Type* (*$fn37)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn38)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn42)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn43)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn46)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn47)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn62)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, 2733503844731485070, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 130, 6793640040443146634, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 124, 4366960778587913413, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, 5442801271376830411, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20", 3, -6214412130393370758, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ASTNode* param4) {
org$frostlang$frostc$lvalue$IndexLValue* param0 = (org$frostlang$frostc$lvalue$IndexLValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
org$frostlang$frostc$Position* _10;
frost$core$Object* _13;
org$frostlang$frostc$IR$Value** _15;
org$frostlang$frostc$IR$Value* _16;
frost$core$Object* _17;
org$frostlang$frostc$IR$Value** _19;
frost$core$Object* _22;
org$frostlang$frostc$ASTNode** _24;
org$frostlang$frostc$ASTNode* _25;
frost$core$Object* _26;
org$frostlang$frostc$ASTNode** _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:30
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:31
_10 = &param0->position;
*_10 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:32
_13 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->target;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->target;
*_19 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:33
_22 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &param0->rawIndex;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &param0->rawIndex;
*_28 = param4;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$lvalue$IndexLValue* param0 = (org$frostlang$frostc$lvalue$IndexLValue*) rawSelf;

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
frost$collections$CollectionView* local2 = NULL;
org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
org$frostlang$frostc$ASTNode* _3;
frost$core$Int _4;
org$frostlang$frostc$Position* _5;
org$frostlang$frostc$Position _6;
org$frostlang$frostc$ASTNode* _7;
frost$core$Int _8;
org$frostlang$frostc$Position* _9;
org$frostlang$frostc$Position _10;
org$frostlang$frostc$IR$Value** _11;
org$frostlang$frostc$IR$Value* _12;
frost$core$Int _14;
frost$core$Int* _17;
org$frostlang$frostc$expression$Binary$Operator _19;
org$frostlang$frostc$expression$Binary$Operator _22;
org$frostlang$frostc$ASTNode** _23;
org$frostlang$frostc$ASTNode* _24;
frost$collections$CollectionView* _26;
frost$core$Object* _28;
frost$collections$CollectionView* _30;
frost$core$Object* _31;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$collections$CollectionView* _41;
bool _42;
frost$core$Bit _43;
bool _44;
org$frostlang$frostc$Compiler** _47;
org$frostlang$frostc$Compiler* _48;
org$frostlang$frostc$Type** _49;
org$frostlang$frostc$Type* _50;
frost$core$Object* _51;
frost$collections$CollectionView* _53;
frost$core$Object* _54;
frost$collections$CollectionView* _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
frost$collections$CollectionView* _67;
$fn2 _68;
frost$core$Int _69;
frost$core$Int _70;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _78;
frost$core$Int _80;
frost$collections$CollectionView* _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$core$Int _89;
frost$collections$Iterable* _92;
$fn3 _93;
frost$collections$Iterator* _94;
frost$collections$Iterator* _95;
frost$collections$Iterator* _96;
$fn4 _97;
frost$core$Object* _98;
org$frostlang$frostc$Type* _99;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _104;
frost$collections$CollectionView* _106;
frost$core$Object* _107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:38
_1 = &param0->compiler;
_2 = *_1;
_3 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_4 = (frost$core$Int) {5u};
_5 = &param0->position;
_6 = *_5;
_7 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_8 = (frost$core$Int) {26u};
_9 = &param0->position;
_10 = *_9;
_11 = &param0->target;
_12 = *_11;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_7, _8, _10, _12);
_14 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:39:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_17 = &(&local1)->$rawValue;
*_17 = _14;
_19 = *(&local1);
*(&local0) = _19;
_22 = *(&local0);
_23 = &param0->rawIndex;
_24 = *_23;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(_3, _4, _6, _7, _22, _24);
_26 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(_2, _3);
*(&local2) = ((frost$collections$CollectionView*) NULL);
_28 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local2);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local2) = _26;
_34 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:40
_41 = *(&local2);
_42 = _41 == NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:41
_47 = &param0->compiler;
_48 = *_47;
_49 = &_48->ANY_TYPE;
_50 = *_49;
_51 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local2);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local2) = ((frost$collections$CollectionView*) NULL);
return _50;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:43
_59 = *(&local2);
_60 = _59 != NULL;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block4; else goto block5;
block5:;
_64 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _64, &$s6);
abort(); // unreachable
block4:;
_67 = _59;
ITable* $tmp7 = _67->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_68 = $tmp7->methods[0];
_69 = _68(_67);
_70 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:43:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_73 = _69.value;
_74 = _70.value;
_75 = _73 == _74;
_76 = (frost$core$Bit) {_75};
_78 = _76.value;
if (_78) goto block7; else goto block8;
block8:;
_80 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s8, _80);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:44
_84 = *(&local2);
_85 = _84 != NULL;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block9; else goto block10;
block10:;
_89 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _89, &$s10);
abort(); // unreachable
block9:;
_92 = ((frost$collections$Iterable*) _84);
ITable* $tmp11 = _92->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
_93 = $tmp11->methods[0];
_94 = _93(_92);
_95 = _94;
_96 = _95;
ITable* $tmp12 = _96->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_97 = $tmp12->methods[1];
_98 = _97(_96);
_99 = ((org$frostlang$frostc$Type*) _98);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = _98;
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = *(&local2);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local2) = ((frost$collections$CollectionView*) NULL);
return _99;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf) {
org$frostlang$frostc$lvalue$IndexLValue* param0 = (org$frostlang$frostc$lvalue$IndexLValue*) rawSelf;

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$expression$Binary$Operator local6;
org$frostlang$frostc$IR$Value** _1;
org$frostlang$frostc$IR$Value* _2;
bool _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Compiler** _8;
org$frostlang$frostc$Compiler* _9;
org$frostlang$frostc$IR$Value** _10;
org$frostlang$frostc$IR$Value* _11;
$fn13 _12;
org$frostlang$frostc$Type* _13;
frost$core$Int _14;
frost$core$Int* _17;
org$frostlang$frostc$expression$Binary$Operator _19;
org$frostlang$frostc$expression$Binary$Operator _22;
org$frostlang$frostc$ASTNode** _23;
org$frostlang$frostc$ASTNode* _24;
org$frostlang$frostc$Compiler$TypeContext* _25;
frost$core$Int _26;
org$frostlang$frostc$Pair* _28;
frost$core$Object* _30;
org$frostlang$frostc$Pair* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
org$frostlang$frostc$Pair* _43;
bool _44;
frost$core$Bit _45;
bool _46;
org$frostlang$frostc$Pair* _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
org$frostlang$frostc$Pair* _57;
frost$core$Object** _58;
frost$core$Object* _59;
frost$collections$ListView* _60;
frost$collections$CollectionView* _61;
$fn14 _62;
frost$core$Int _63;
frost$core$Int _64;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _72;
frost$core$Int _74;
org$frostlang$frostc$Compiler** _78;
org$frostlang$frostc$Compiler* _79;
org$frostlang$frostc$ASTNode** _80;
org$frostlang$frostc$ASTNode* _81;
org$frostlang$frostc$Compiler$TypeContext* _82;
frost$core$Int _83;
org$frostlang$frostc$Pair* _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$core$Int _89;
org$frostlang$frostc$Pair* _92;
frost$core$Object** _93;
frost$core$Object* _94;
frost$collections$ListView* _95;
frost$collections$ListView* _96;
frost$core$Int _97;
$fn15 _98;
frost$core$Object* _99;
org$frostlang$frostc$MethodRef* _100;
frost$core$Int _101;
org$frostlang$frostc$Type** _104;
org$frostlang$frostc$Type* _105;
org$frostlang$frostc$FixedArray** _108;
org$frostlang$frostc$FixedArray* _109;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int _114;
org$frostlang$frostc$FixedArray* _117;
frost$core$Object* _118;
org$frostlang$frostc$FixedArray* _121;
frost$core$Object* _122;
org$frostlang$frostc$Type* _123;
frost$core$Object* _124;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$Bit _131;
org$frostlang$frostc$IR$Value* _133;
frost$core$Object* _134;
org$frostlang$frostc$IR$Value** _136;
org$frostlang$frostc$IR$Value* _137;
frost$core$Object* _138;
org$frostlang$frostc$IR$Value** _140;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Object* _148;
org$frostlang$frostc$Pair* _151;
frost$core$Object* _152;
org$frostlang$frostc$IR$Value** _157;
org$frostlang$frostc$IR$Value* _158;
bool _159;
frost$core$Bit _160;
bool _161;
org$frostlang$frostc$IR$Value* _164;
frost$core$Int _165;
frost$core$Int _166;
frost$core$Int* _169;
org$frostlang$frostc$IR$Statement$ID _171;
org$frostlang$frostc$IR$Statement$ID _174;
$fn16 _175;
org$frostlang$frostc$Type* _176;
org$frostlang$frostc$IR$Value* _178;
frost$core$Object* _179;
org$frostlang$frostc$IR$Value** _181;
org$frostlang$frostc$IR$Value* _182;
frost$core$Object* _183;
org$frostlang$frostc$IR$Value** _185;
frost$core$Object* _187;
frost$core$Object* _189;
frost$core$Object* _192;
org$frostlang$frostc$Compiler** _196;
org$frostlang$frostc$Compiler* _197;
org$frostlang$frostc$Position* _198;
org$frostlang$frostc$Position _199;
org$frostlang$frostc$ASTNode* _200;
frost$core$Int _201;
org$frostlang$frostc$Position* _202;
org$frostlang$frostc$Position _203;
org$frostlang$frostc$IR$Value** _204;
org$frostlang$frostc$IR$Value* _205;
frost$core$Int _207;
frost$core$Int* _210;
org$frostlang$frostc$expression$Binary$Operator _212;
org$frostlang$frostc$expression$Binary$Operator _215;
org$frostlang$frostc$ASTNode* _216;
frost$core$Int _217;
org$frostlang$frostc$Position* _218;
org$frostlang$frostc$Position _219;
org$frostlang$frostc$IR$Value** _220;
org$frostlang$frostc$IR$Value* _221;
bool _222;
frost$core$Bit _223;
bool _224;
frost$core$Int _226;
org$frostlang$frostc$IR$Value* _229;
org$frostlang$frostc$Compiler$TypeContext* _231;
frost$core$Int _232;
org$frostlang$frostc$IR$Value* _234;
frost$core$Object* _235;
frost$core$Object* _237;
frost$core$Object* _239;
frost$core$Object* _241;
frost$core$Object* _243;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:49
_1 = &param0->index;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:50
_8 = &param0->compiler;
_9 = *_8;
_10 = &param0->target;
_11 = *_10;
_12 = ($fn17) _11->$class->vtable[2];
_13 = _12(_11);
_14 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:50:92
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_17 = &(&local1)->$rawValue;
*_17 = _14;
_19 = *(&local1);
*(&local0) = _19;
_22 = *(&local0);
_23 = &param0->rawIndex;
_24 = *_23;
_25 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_26 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_25, _26);
_28 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(_9, _13, _22, _24, _25);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
_30 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local2);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local2) = _28;
_36 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:52
_43 = *(&local2);
_44 = _43 != NULL;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:53
_49 = *(&local2);
_50 = _49 != NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block6; else goto block7;
block7:;
_54 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _54, &$s19);
abort(); // unreachable
block6:;
_57 = _49;
_58 = &_57->first;
_59 = *_58;
_60 = ((frost$collections$ListView*) _59);
_61 = ((frost$collections$CollectionView*) _60);
ITable* $tmp20 = _61->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_62 = $tmp20->methods[0];
_63 = _62(_61);
_64 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:53:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_67 = _63.value;
_68 = _64.value;
_69 = _67 == _68;
_70 = (frost$core$Bit) {_69};
_72 = _70.value;
if (_72) goto block9; else goto block10;
block10:;
_74 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s21, _74);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:54
_78 = &param0->compiler;
_79 = *_78;
_80 = &param0->rawIndex;
_81 = *_80;
_82 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_83 = (frost$core$Int) {3u};
_84 = *(&local2);
_85 = _84 != NULL;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block11; else goto block12;
block12:;
_89 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _89, &$s23);
abort(); // unreachable
block11:;
_92 = _84;
_93 = &_92->first;
_94 = *_93;
_95 = ((frost$collections$ListView*) _94);
_96 = _95;
_97 = (frost$core$Int) {0u};
ITable* $tmp24 = _96->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp24 = $tmp24->next;
}
_98 = $tmp24->methods[0];
_99 = _98(_96, _97);
_100 = ((org$frostlang$frostc$MethodRef*) _99);
_101 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:55:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
_104 = &_100->effectiveType;
_105 = *_104;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:244
_108 = &_105->_subtypes;
_109 = *_108;
_110 = _109 != NULL;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block15; else goto block16;
block16:;
_114 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _114, &$s26);
abort(); // unreachable
block15:;
_117 = _109;
_118 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_121 = _117;
_122 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_121, _101);
_123 = ((org$frostlang$frostc$Type*) _122);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_128);
_131 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_82, _83, _123, _131);
_133 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_79, _81, _82);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = &param0->index;
_137 = *_136;
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = &param0->index;
*_140 = _133;
_142 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = _99;
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_148);
goto block5;
block5:;
_151 = *(&local2);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_152);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:58
_157 = &param0->index;
_158 = *_157;
_159 = _158 == NULL;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:59
_164 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_165 = (frost$core$Int) {7u};
_166 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:59:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
_169 = &(&local4)->value;
*_169 = _166;
_171 = *(&local4);
*(&local3) = _171;
_174 = *(&local3);
_175 = ($fn27) param0->$class->vtable[2];
_176 = _175(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_164, _165, _174, _176);
_178 = _164;
_179 = ((frost$core$Object*) _178);
frost$core$Frost$ref$frost$core$Object$Q(_179);
_181 = &param0->index;
_182 = *_181;
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
_185 = &param0->index;
*_185 = _178;
_187 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_189);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:60
_192 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_192);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:62
_196 = &param0->compiler;
_197 = *_196;
_198 = &param0->position;
_199 = *_198;
_200 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_201 = (frost$core$Int) {26u};
_202 = &param0->position;
_203 = *_202;
_204 = &param0->target;
_205 = *_204;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_200, _201, _203, _205);
_207 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_210 = &(&local6)->$rawValue;
*_210 = _207;
_212 = *(&local6);
*(&local5) = _212;
_215 = *(&local5);
_216 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_217 = (frost$core$Int) {26u};
_218 = &param0->position;
_219 = *_218;
_220 = &param0->index;
_221 = *_220;
_222 = _221 != NULL;
_223 = (frost$core$Bit) {_222};
_224 = _223.value;
if (_224) goto block21; else goto block22;
block22:;
_226 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _226, &$s29);
abort(); // unreachable
block21:;
_229 = _221;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_216, _217, _219, _229);
_231 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_232 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_231, _232);
_234 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_197, _199, _200, _215, _216, _231);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$ref$frost$core$Object$Q(_235);
_237 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_239);
_241 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_241);
_243 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_243);
return _234;

}
void org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* param1) {
org$frostlang$frostc$lvalue$IndexLValue* param0 = (org$frostlang$frostc$lvalue$IndexLValue*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Statement$ID local6;
frost$collections$Array* local7 = NULL;
org$frostlang$frostc$IR$Value** _1;
org$frostlang$frostc$IR$Value* _2;
bool _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Compiler** _8;
org$frostlang$frostc$Compiler* _9;
org$frostlang$frostc$IR$Value** _10;
org$frostlang$frostc$IR$Value* _11;
$fn30 _12;
org$frostlang$frostc$Type* _13;
org$frostlang$frostc$ClassDecl* _14;
frost$core$Object* _16;
org$frostlang$frostc$ClassDecl* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$core$Object* _24;
org$frostlang$frostc$ClassDecl* _27;
bool _28;
frost$core$Bit _29;
bool _30;
org$frostlang$frostc$ClassDecl* _33;
frost$core$Object* _34;
org$frostlang$frostc$Compiler** _39;
org$frostlang$frostc$Compiler* _40;
org$frostlang$frostc$ClassDecl* _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
org$frostlang$frostc$ClassDecl* _49;
org$frostlang$frostc$SymbolTable* _50;
org$frostlang$frostc$Symbol* _51;
frost$core$Object* _53;
org$frostlang$frostc$Symbol* _55;
frost$core$Object* _56;
frost$core$Object* _59;
frost$core$Object* _61;
org$frostlang$frostc$Symbol* _64;
bool _65;
frost$core$Bit _66;
bool _67;
org$frostlang$frostc$Compiler** _70;
org$frostlang$frostc$Compiler* _71;
org$frostlang$frostc$Position* _72;
org$frostlang$frostc$Position _73;
org$frostlang$frostc$IR$Value** _74;
org$frostlang$frostc$IR$Value* _75;
$fn31 _76;
org$frostlang$frostc$Type* _77;
frost$core$Object* _78;
$fn32 _81;
frost$core$String* _82;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$String* _91;
$fn33 _92;
org$frostlang$frostc$Type* _93;
frost$core$Object* _94;
$fn34 _97;
frost$core$String* _98;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$String* _107;
frost$core$String* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
org$frostlang$frostc$Symbol* _125;
frost$core$Object* _126;
org$frostlang$frostc$ClassDecl* _129;
frost$core$Object* _130;
org$frostlang$frostc$Symbol* _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$core$Int _142;
org$frostlang$frostc$Symbol* _145;
org$frostlang$frostc$Symbol$Kind* _146;
org$frostlang$frostc$Symbol$Kind _147;
frost$core$Int _148;
frost$core$Int _149;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _157;
frost$collections$Array* _160;
frost$collections$Array* _161;
frost$collections$ListView* _163;
frost$core$Object* _164;
frost$collections$ListView* _166;
frost$core$Object* _167;
frost$core$Object* _170;
frost$collections$ListView* _173;
frost$collections$Array* _174;
frost$collections$Array* _175;
org$frostlang$frostc$Symbol* _176;
org$frostlang$frostc$MethodDecl* _177;
frost$core$Object* _178;
frost$core$Int _181;
int64_t _184;
int64_t _185;
bool _186;
frost$core$Bit _187;
bool _189;
org$frostlang$frostc$Symbol* _192;
org$frostlang$frostc$Methods* _193;
org$frostlang$frostc$FixedArray** _194;
org$frostlang$frostc$FixedArray* _195;
frost$collections$ListView* _196;
frost$core$Object* _197;
frost$collections$ListView* _199;
frost$core$Object* _200;
frost$core$Int _205;
frost$collections$Array* _209;
frost$collections$Array* _210;
frost$core$Object* _213;
frost$collections$Array* _215;
frost$core$Object* _216;
frost$core$Object* _219;
frost$collections$Array* _222;
frost$collections$Array* _223;
org$frostlang$frostc$ASTNode** _224;
org$frostlang$frostc$ASTNode* _225;
frost$core$Object* _226;
frost$collections$Array* _229;
frost$collections$Array* _230;
org$frostlang$frostc$ASTNode* _231;
frost$core$Int _232;
org$frostlang$frostc$Position* _233;
org$frostlang$frostc$Position _234;
frost$core$Object* _236;
frost$core$Object* _238;
org$frostlang$frostc$Compiler** _241;
org$frostlang$frostc$Compiler* _242;
org$frostlang$frostc$Position* _243;
org$frostlang$frostc$Position _244;
org$frostlang$frostc$IR$Value** _245;
org$frostlang$frostc$IR$Value* _246;
org$frostlang$frostc$IR$Value* _247;
frost$collections$ListView* _248;
frost$collections$Array* _249;
frost$collections$ListView* _250;
org$frostlang$frostc$Compiler$TypeContext* _251;
frost$core$Int _252;
org$frostlang$frostc$Pair* _254;
frost$core$Object* _256;
org$frostlang$frostc$Pair* _258;
frost$core$Object* _259;
frost$core$Object* _262;
frost$core$Object* _264;
org$frostlang$frostc$Pair* _267;
bool _268;
frost$core$Bit _269;
bool _270;
org$frostlang$frostc$Pair* _273;
bool _274;
frost$core$Bit _275;
bool _276;
frost$core$Int _278;
org$frostlang$frostc$Pair* _281;
frost$core$Object** _282;
frost$core$Object* _283;
frost$collections$ListView* _284;
frost$collections$CollectionView* _285;
$fn35 _286;
frost$core$Int _287;
frost$core$Int _288;
int64_t _291;
int64_t _292;
bool _293;
frost$core$Bit _294;
bool _296;
frost$core$Int _298;
org$frostlang$frostc$Compiler** _302;
org$frostlang$frostc$Compiler* _303;
org$frostlang$frostc$ASTNode** _304;
org$frostlang$frostc$ASTNode* _305;
org$frostlang$frostc$Compiler$TypeContext* _306;
frost$core$Int _307;
org$frostlang$frostc$Pair* _308;
bool _309;
frost$core$Bit _310;
bool _311;
frost$core$Int _313;
org$frostlang$frostc$Pair* _316;
frost$core$Object** _317;
frost$core$Object* _318;
frost$collections$ListView* _319;
frost$collections$ListView* _320;
frost$core$Int _321;
$fn36 _322;
frost$core$Object* _323;
org$frostlang$frostc$MethodRef* _324;
frost$core$Int _325;
org$frostlang$frostc$Type** _328;
org$frostlang$frostc$Type* _329;
org$frostlang$frostc$FixedArray** _332;
org$frostlang$frostc$FixedArray* _333;
bool _334;
frost$core$Bit _335;
bool _336;
frost$core$Int _338;
org$frostlang$frostc$FixedArray* _341;
frost$core$Object* _342;
org$frostlang$frostc$FixedArray* _345;
frost$core$Object* _346;
org$frostlang$frostc$Type* _347;
frost$core$Object* _348;
frost$core$Object* _350;
frost$core$Object* _352;
frost$core$Bit _355;
org$frostlang$frostc$IR$Value* _357;
frost$core$Object* _358;
org$frostlang$frostc$IR$Value** _360;
org$frostlang$frostc$IR$Value* _361;
frost$core$Object* _362;
org$frostlang$frostc$IR$Value** _364;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Object* _370;
frost$core$Object* _372;
org$frostlang$frostc$IR$Value** _376;
org$frostlang$frostc$IR$Value* _377;
bool _378;
frost$core$Bit _379;
bool _380;
org$frostlang$frostc$IR$Value* _383;
frost$core$Int _384;
frost$core$Int _385;
frost$core$Int* _388;
org$frostlang$frostc$IR$Statement$ID _390;
org$frostlang$frostc$IR$Statement$ID _393;
$fn37 _394;
org$frostlang$frostc$Type* _395;
org$frostlang$frostc$IR$Value* _397;
frost$core$Object* _398;
org$frostlang$frostc$IR$Value** _400;
org$frostlang$frostc$IR$Value* _401;
frost$core$Object* _402;
org$frostlang$frostc$IR$Value** _404;
frost$core$Object* _406;
frost$core$Object* _408;
org$frostlang$frostc$Pair* _411;
frost$core$Object* _412;
frost$collections$Array* _415;
frost$core$Object* _416;
frost$collections$ListView* _419;
frost$core$Object* _420;
org$frostlang$frostc$Symbol* _423;
frost$core$Object* _424;
org$frostlang$frostc$ClassDecl* _427;
frost$core$Object* _428;
frost$collections$Array* _433;
frost$collections$Array* _434;
frost$core$Object* _437;
frost$collections$Array* _439;
frost$core$Object* _440;
frost$core$Object* _443;
frost$collections$Array* _446;
frost$collections$Array* _447;
org$frostlang$frostc$ASTNode* _448;
frost$core$Int _449;
org$frostlang$frostc$Position* _450;
org$frostlang$frostc$Position _451;
org$frostlang$frostc$IR$Value** _452;
org$frostlang$frostc$IR$Value* _453;
bool _454;
frost$core$Bit _455;
bool _456;
frost$core$Int _458;
org$frostlang$frostc$IR$Value* _461;
frost$core$Object* _463;
frost$core$Object* _465;
frost$collections$Array* _468;
frost$collections$Array* _469;
org$frostlang$frostc$ASTNode* _470;
frost$core$Int _471;
org$frostlang$frostc$Position* _472;
org$frostlang$frostc$Position _473;
frost$core$Object* _475;
frost$core$Object* _477;
org$frostlang$frostc$Compiler** _480;
org$frostlang$frostc$Compiler* _481;
org$frostlang$frostc$Position* _482;
org$frostlang$frostc$Position _483;
org$frostlang$frostc$IR$Value** _484;
org$frostlang$frostc$IR$Value* _485;
frost$collections$Array* _486;
frost$collections$ListView* _487;
org$frostlang$frostc$Compiler$TypeContext* _488;
frost$core$Int _489;
org$frostlang$frostc$IR$Value* _491;
frost$core$Object* _492;
frost$core$Object* _494;
frost$collections$Array* _496;
frost$core$Object* _497;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:69
_1 = &param0->index;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:70
_8 = &param0->compiler;
_9 = *_8;
_10 = &param0->target;
_11 = *_10;
_12 = ($fn38) _11->$class->vtable[2];
_13 = _12(_11);
_14 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_9, _13);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:71
_27 = *(&local0);
_28 = _27 == NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:72
_33 = *(&local0);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:74
_39 = &param0->compiler;
_40 = *_39;
_41 = *(&local0);
_42 = _41 != NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block5; else goto block6;
block6:;
_46 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _46, &$s40);
abort(); // unreachable
block5:;
_49 = _41;
_50 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(_40, _49);
_51 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_50, &$s41);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_53 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = _51;
_59 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:75
_64 = *(&local1);
_65 = _64 == NULL;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:76
_70 = &param0->compiler;
_71 = *_70;
_72 = &param0->position;
_73 = *_72;
_74 = &param0->target;
_75 = *_74;
_76 = ($fn42) _75->$class->vtable[2];
_77 = _76(_75);
_78 = ((frost$core$Object*) _77);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_81 = ($fn43) _78->$class->vtable[0];
_82 = _81(_78);
_83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s44, _82);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_83, &$s45);
_92 = ($fn46) param1->$class->vtable[2];
_93 = _92(param1);
_94 = ((frost$core$Object*) _93);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:77:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_97 = ($fn47) _94->$class->vtable[0];
_98 = _97(_94);
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s48, _98);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s49);
_108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_91, _107);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(_71, _73, _108);
_110 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:78
_125 = *(&local1);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_129 = *(&local0);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:80
*(&local2) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:81
_137 = *(&local1);
_138 = _137 != NULL;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block11; else goto block12;
block12:;
_142 = (frost$core$Int) {81u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _142, &$s51);
abort(); // unreachable
block11:;
_145 = _137;
_146 = &_145->kind;
_147 = *_146;
_148 = _147.$rawValue;
_149 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:82:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_152 = _148.value;
_153 = _149.value;
_154 = _152 == _153;
_155 = (frost$core$Bit) {_154};
_157 = _155.value;
if (_157) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:83
_160 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_161 = _160;
frost$collections$Array$init(_161);
_163 = ((frost$collections$ListView*) _160);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = *(&local2);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local2) = _163;
_170 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_170);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:84
_173 = *(&local2);
_174 = ((frost$collections$Array*) _173);
_175 = _174;
_176 = *(&local1);
_177 = ((org$frostlang$frostc$MethodDecl*) _176);
_178 = ((frost$core$Object*) _177);
frost$collections$Array$add$frost$collections$Array$T(_175, _178);
goto block13;
block15:;
_181 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:86:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_184 = _148.value;
_185 = _181.value;
_186 = _184 == _185;
_187 = (frost$core$Bit) {_186};
_189 = _187.value;
if (_189) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:87
_192 = *(&local1);
_193 = ((org$frostlang$frostc$Methods*) _192);
_194 = &_193->methods;
_195 = *_194;
_196 = ((frost$collections$ListView*) _195);
_197 = ((frost$core$Object*) _196);
frost$core$Frost$ref$frost$core$Object$Q(_197);
_199 = *(&local2);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local2) = _196;
goto block13;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:90
_205 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _205);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:93
_209 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_210 = _209;
frost$collections$Array$init(_210);
*(&local3) = ((frost$collections$Array*) NULL);
_213 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = *(&local3);
_216 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_216);
*(&local3) = _209;
_219 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_219);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:94
_222 = *(&local3);
_223 = _222;
_224 = &param0->rawIndex;
_225 = *_224;
_226 = ((frost$core$Object*) _225);
frost$collections$Array$add$frost$collections$Array$T(_223, _226);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:95
_229 = *(&local3);
_230 = _229;
_231 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_232 = (frost$core$Int) {26u};
_233 = &param0->position;
_234 = *_233;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_231, _232, _234, param1);
_236 = ((frost$core$Object*) _231);
frost$collections$Array$add$frost$collections$Array$T(_230, _236);
_238 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_238);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:96
_241 = &param0->compiler;
_242 = *_241;
_243 = &param0->position;
_244 = *_243;
_245 = &param0->target;
_246 = *_245;
_247 = _246;
_248 = *(&local2);
_249 = *(&local3);
_250 = ((frost$collections$ListView*) _249);
_251 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_252 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_251, _252);
_254 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(_242, _244, _247, _248, _250, _251);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_256 = ((frost$core$Object*) _254);
frost$core$Frost$ref$frost$core$Object$Q(_256);
_258 = *(&local4);
_259 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_259);
*(&local4) = _254;
_262 = ((frost$core$Object*) _254);
frost$core$Frost$unref$frost$core$Object$Q(_262);
_264 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_264);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:98
_267 = *(&local4);
_268 = _267 != NULL;
_269 = (frost$core$Bit) {_268};
_270 = _269.value;
if (_270) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:99
_273 = *(&local4);
_274 = _273 != NULL;
_275 = (frost$core$Bit) {_274};
_276 = _275.value;
if (_276) goto block22; else goto block23;
block23:;
_278 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _278, &$s54);
abort(); // unreachable
block22:;
_281 = _273;
_282 = &_281->first;
_283 = *_282;
_284 = ((frost$collections$ListView*) _283);
_285 = ((frost$collections$CollectionView*) _284);
ITable* $tmp55 = _285->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp55 = $tmp55->next;
}
_286 = $tmp55->methods[0];
_287 = _286(_285);
_288 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:99:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_291 = _287.value;
_292 = _288.value;
_293 = _291 == _292;
_294 = (frost$core$Bit) {_293};
_296 = _294.value;
if (_296) goto block25; else goto block26;
block26:;
_298 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s56, _298);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:100
_302 = &param0->compiler;
_303 = *_302;
_304 = &param0->rawIndex;
_305 = *_304;
_306 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_307 = (frost$core$Int) {3u};
_308 = *(&local4);
_309 = _308 != NULL;
_310 = (frost$core$Bit) {_309};
_311 = _310.value;
if (_311) goto block27; else goto block28;
block28:;
_313 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _313, &$s58);
abort(); // unreachable
block27:;
_316 = _308;
_317 = &_316->first;
_318 = *_317;
_319 = ((frost$collections$ListView*) _318);
_320 = _319;
_321 = (frost$core$Int) {0u};
ITable* $tmp59 = _320->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp59 = $tmp59->next;
}
_322 = $tmp59->methods[0];
_323 = _322(_320, _321);
_324 = ((org$frostlang$frostc$MethodRef*) _323);
_325 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:101:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
_328 = &_324->effectiveType;
_329 = *_328;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:244
_332 = &_329->_subtypes;
_333 = *_332;
_334 = _333 != NULL;
_335 = (frost$core$Bit) {_334};
_336 = _335.value;
if (_336) goto block31; else goto block32;
block32:;
_338 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _338, &$s61);
abort(); // unreachable
block31:;
_341 = _333;
_342 = ((frost$core$Object*) _341);
frost$core$Frost$ref$frost$core$Object$Q(_342);
_345 = _341;
_346 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_345, _325);
_347 = ((org$frostlang$frostc$Type*) _346);
_348 = ((frost$core$Object*) _347);
frost$core$Frost$ref$frost$core$Object$Q(_348);
_350 = _346;
frost$core$Frost$unref$frost$core$Object$Q(_350);
_352 = ((frost$core$Object*) _341);
frost$core$Frost$unref$frost$core$Object$Q(_352);
_355 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_306, _307, _347, _355);
_357 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_303, _305, _306);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$ref$frost$core$Object$Q(_358);
_360 = &param0->index;
_361 = *_360;
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = &param0->index;
*_364 = _357;
_366 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = _323;
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = ((frost$core$Object*) _306);
frost$core$Frost$unref$frost$core$Object$Q(_372);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:103
_376 = &param0->index;
_377 = *_376;
_378 = _377 == NULL;
_379 = (frost$core$Bit) {_378};
_380 = _379.value;
if (_380) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:105
_383 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_384 = (frost$core$Int) {7u};
_385 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:105:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
_388 = &(&local6)->value;
*_388 = _385;
_390 = *(&local6);
*(&local5) = _390;
_393 = *(&local5);
_394 = ($fn62) param0->$class->vtable[2];
_395 = _394(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_383, _384, _393, _395);
_397 = _383;
_398 = ((frost$core$Object*) _397);
frost$core$Frost$ref$frost$core$Object$Q(_398);
_400 = &param0->index;
_401 = *_400;
_402 = ((frost$core$Object*) _401);
frost$core$Frost$unref$frost$core$Object$Q(_402);
_404 = &param0->index;
*_404 = _397;
_406 = ((frost$core$Object*) _395);
frost$core$Frost$unref$frost$core$Object$Q(_406);
_408 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_408);
goto block34;
block34:;
_411 = *(&local4);
_412 = ((frost$core$Object*) _411);
frost$core$Frost$unref$frost$core$Object$Q(_412);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_415 = *(&local3);
_416 = ((frost$core$Object*) _415);
frost$core$Frost$unref$frost$core$Object$Q(_416);
*(&local3) = ((frost$collections$Array*) NULL);
_419 = *(&local2);
_420 = ((frost$core$Object*) _419);
frost$core$Frost$unref$frost$core$Object$Q(_420);
*(&local2) = ((frost$collections$ListView*) NULL);
_423 = *(&local1);
_424 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_424);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_427 = *(&local0);
_428 = ((frost$core$Object*) _427);
frost$core$Frost$unref$frost$core$Object$Q(_428);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:108
_433 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_434 = _433;
frost$collections$Array$init(_434);
*(&local7) = ((frost$collections$Array*) NULL);
_437 = ((frost$core$Object*) _433);
frost$core$Frost$ref$frost$core$Object$Q(_437);
_439 = *(&local7);
_440 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_440);
*(&local7) = _433;
_443 = ((frost$core$Object*) _433);
frost$core$Frost$unref$frost$core$Object$Q(_443);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:109
_446 = *(&local7);
_447 = _446;
_448 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_449 = (frost$core$Int) {26u};
_450 = &param0->position;
_451 = *_450;
_452 = &param0->index;
_453 = *_452;
_454 = _453 != NULL;
_455 = (frost$core$Bit) {_454};
_456 = _455.value;
if (_456) goto block36; else goto block37;
block37:;
_458 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s63, _458, &$s64);
abort(); // unreachable
block36:;
_461 = _453;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_448, _449, _451, _461);
_463 = ((frost$core$Object*) _448);
frost$collections$Array$add$frost$collections$Array$T(_447, _463);
_465 = ((frost$core$Object*) _448);
frost$core$Frost$unref$frost$core$Object$Q(_465);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:110
_468 = *(&local7);
_469 = _468;
_470 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_471 = (frost$core$Int) {26u};
_472 = &param0->position;
_473 = *_472;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_470, _471, _473, param1);
_475 = ((frost$core$Object*) _470);
frost$collections$Array$add$frost$collections$Array$T(_469, _475);
_477 = ((frost$core$Object*) _470);
frost$core$Frost$unref$frost$core$Object$Q(_477);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:111
_480 = &param0->compiler;
_481 = *_480;
_482 = &param0->position;
_483 = *_482;
_484 = &param0->target;
_485 = *_484;
_486 = *(&local7);
_487 = ((frost$collections$ListView*) _486);
_488 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_489 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_488, _489);
_491 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_481, _483, _485, &$s65, _487, _488);
_492 = ((frost$core$Object*) _491);
frost$core$Frost$unref$frost$core$Object$Q(_492);
_494 = ((frost$core$Object*) _488);
frost$core$Frost$unref$frost$core$Object$Q(_494);
_496 = *(&local7);
_497 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_497);
*(&local7) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(void* rawSelf) {
org$frostlang$frostc$lvalue$IndexLValue* param0 = (org$frostlang$frostc$lvalue$IndexLValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$IR$Value** _7;
org$frostlang$frostc$IR$Value* _8;
frost$core$Object* _9;
org$frostlang$frostc$ASTNode** _11;
org$frostlang$frostc$ASTNode* _12;
frost$core$Object* _13;
org$frostlang$frostc$IR$Value** _15;
org$frostlang$frostc$IR$Value* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:16
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->target;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->rawIndex;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->index;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}

