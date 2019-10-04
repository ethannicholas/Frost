#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, 2733503844731485070, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 130, 6793640040443146634, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 124, 4366960778587913413, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, 5442801271376830411, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x2c\x20", 3, -6214412130393370758, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1888088130202908234, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodPosition param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ASTNode* param4) {
org$frostlang$frostc$lvalue$IndexLValue* param0 = (org$frostlang$frostc$lvalue$IndexLValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
org$frostlang$frostc$MethodPosition* _10;
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
org$frostlang$frostc$MethodPosition* _5;
org$frostlang$frostc$MethodPosition _6;
frost$core$Int _9;
frost$core$Int _10;
frost$core$Int _11;
org$frostlang$frostc$Position _12;
org$frostlang$frostc$ASTNode* _14;
frost$core$Int _15;
org$frostlang$frostc$MethodPosition* _16;
org$frostlang$frostc$MethodPosition _17;
frost$core$Int _20;
frost$core$Int _21;
frost$core$Int _22;
org$frostlang$frostc$Position _23;
org$frostlang$frostc$IR$Value** _25;
org$frostlang$frostc$IR$Value* _26;
frost$core$Int _28;
frost$core$Int* _31;
org$frostlang$frostc$expression$Binary$Operator _33;
org$frostlang$frostc$expression$Binary$Operator _36;
org$frostlang$frostc$ASTNode** _37;
org$frostlang$frostc$ASTNode* _38;
frost$collections$CollectionView* _40;
frost$core$Object* _42;
frost$collections$CollectionView* _44;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$collections$CollectionView* _55;
bool _56;
frost$core$Bit _57;
bool _58;
org$frostlang$frostc$Compiler** _61;
org$frostlang$frostc$Compiler* _62;
org$frostlang$frostc$Type** _63;
org$frostlang$frostc$Type* _64;
frost$core$Object* _65;
frost$collections$CollectionView* _67;
frost$core$Object* _68;
frost$collections$CollectionView* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$collections$CollectionView* _81;
$fn2 _82;
frost$core$Int _83;
frost$core$Int _84;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$Int _94;
frost$collections$CollectionView* _98;
bool _99;
frost$core$Bit _100;
bool _101;
frost$core$Int _103;
frost$collections$Iterable* _106;
$fn3 _107;
frost$collections$Iterator* _108;
$fn4 _109;
frost$core$Object* _110;
org$frostlang$frostc$Type* _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$collections$CollectionView* _118;
frost$core$Object* _119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:38
_1 = &param0->compiler;
_2 = *_1;
_3 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_4 = (frost$core$Int) {5u};
_5 = &param0->position;
_6 = *_5;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:38:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_9 = _6.file;
_10 = _6.line;
_11 = _6.column;
_12 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_9, _10, _11);
_14 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_15 = (frost$core$Int) {26u};
_16 = &param0->position;
_17 = *_16;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:39:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_20 = _17.file;
_21 = _17.line;
_22 = _17.column;
_23 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_20, _21, _22);
_25 = &param0->target;
_26 = *_25;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_14, _15, _23, _26);
_28 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:39:81
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:18
_31 = &(&local1)->$rawValue;
*_31 = _28;
_33 = *(&local1);
*(&local0) = _33;
_36 = *(&local0);
_37 = &param0->rawIndex;
_38 = *_37;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(_3, _4, _12, _14, _36, _38);
_40 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(_2, _3);
*(&local2) = ((frost$collections$CollectionView*) NULL);
_42 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = *(&local2);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local2) = _40;
_48 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_52);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:40
_55 = *(&local2);
_56 = _55 == NULL;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:41
_61 = &param0->compiler;
_62 = *_61;
_63 = &_62->ANY_TYPE;
_64 = *_63;
_65 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local2);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local2) = ((frost$collections$CollectionView*) NULL);
return _64;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:43
_73 = *(&local2);
_74 = _73 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block6; else goto block7;
block7:;
_78 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _78, &$s6);
abort(); // unreachable
block6:;
_81 = _73;
ITable* $tmp7 = _81->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_82 = $tmp7->methods[0];
_83 = _82(_81);
_84 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:43:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _83.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block9; else goto block10;
block10:;
_94 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s8, _94);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:44
_98 = *(&local2);
_99 = _98 != NULL;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block11; else goto block12;
block12:;
_103 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _103, &$s10);
abort(); // unreachable
block11:;
_106 = ((frost$collections$Iterable*) _98);
ITable* $tmp11 = _106->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
_107 = $tmp11->methods[0];
_108 = _107(_106);
ITable* $tmp12 = _108->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_109 = $tmp12->methods[1];
_110 = _109(_108);
_111 = ((org$frostlang$frostc$Type*) _110);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = _110;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = *(&local2);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local2) = ((frost$collections$CollectionView*) NULL);
return _111;

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
frost$core$Int _96;
$fn15 _97;
frost$core$Object* _98;
org$frostlang$frostc$MethodRef* _99;
frost$core$Int _100;
org$frostlang$frostc$Type** _103;
org$frostlang$frostc$Type* _104;
org$frostlang$frostc$FixedArray** _107;
org$frostlang$frostc$FixedArray* _108;
bool _109;
frost$core$Bit _110;
bool _111;
frost$core$Int _113;
org$frostlang$frostc$FixedArray* _116;
frost$core$Object* _117;
frost$core$Object* _120;
org$frostlang$frostc$Type* _121;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Object* _126;
frost$core$Bit _129;
org$frostlang$frostc$IR$Value* _131;
frost$core$Object* _132;
org$frostlang$frostc$IR$Value** _134;
org$frostlang$frostc$IR$Value* _135;
frost$core$Object* _136;
org$frostlang$frostc$IR$Value** _138;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _146;
org$frostlang$frostc$Pair* _149;
frost$core$Object* _150;
org$frostlang$frostc$IR$Value** _155;
org$frostlang$frostc$IR$Value* _156;
bool _157;
frost$core$Bit _158;
bool _159;
org$frostlang$frostc$IR$Value* _162;
frost$core$Int _163;
frost$core$Int _164;
frost$core$Int* _167;
org$frostlang$frostc$IR$Statement$ID _169;
org$frostlang$frostc$IR$Statement$ID _172;
$fn16 _173;
org$frostlang$frostc$Type* _174;
org$frostlang$frostc$IR$Value* _176;
frost$core$Object* _177;
org$frostlang$frostc$IR$Value** _179;
org$frostlang$frostc$IR$Value* _180;
frost$core$Object* _181;
org$frostlang$frostc$IR$Value** _183;
frost$core$Object* _185;
frost$core$Object* _187;
frost$core$Object* _190;
org$frostlang$frostc$Compiler** _194;
org$frostlang$frostc$Compiler* _195;
org$frostlang$frostc$MethodPosition* _196;
org$frostlang$frostc$MethodPosition _197;
org$frostlang$frostc$ASTNode* _198;
frost$core$Int _199;
org$frostlang$frostc$MethodPosition* _200;
org$frostlang$frostc$MethodPosition _201;
frost$core$Int _204;
frost$core$Int _205;
frost$core$Int _206;
org$frostlang$frostc$Position _207;
org$frostlang$frostc$IR$Value** _209;
org$frostlang$frostc$IR$Value* _210;
frost$core$Int _212;
frost$core$Int* _215;
org$frostlang$frostc$expression$Binary$Operator _217;
org$frostlang$frostc$expression$Binary$Operator _220;
org$frostlang$frostc$ASTNode* _221;
frost$core$Int _222;
org$frostlang$frostc$MethodPosition* _223;
org$frostlang$frostc$MethodPosition _224;
frost$core$Int _227;
frost$core$Int _228;
frost$core$Int _229;
org$frostlang$frostc$Position _230;
org$frostlang$frostc$IR$Value** _232;
org$frostlang$frostc$IR$Value* _233;
bool _234;
frost$core$Bit _235;
bool _236;
frost$core$Int _238;
org$frostlang$frostc$IR$Value* _241;
org$frostlang$frostc$Compiler$TypeContext* _243;
frost$core$Int _244;
org$frostlang$frostc$IR$Value* _246;
frost$core$Object* _247;
frost$core$Object* _249;
frost$core$Object* _251;
frost$core$Object* _253;
frost$core$Object* _255;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:18
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
_96 = (frost$core$Int) {0u};
ITable* $tmp24 = _95->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp24 = $tmp24->next;
}
_97 = $tmp24->methods[0];
_98 = _97(_95, _96);
_99 = ((org$frostlang$frostc$MethodRef*) _98);
_100 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:55:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
_103 = &_99->effectiveType;
_104 = *_103;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_107 = &_104->_subtypes;
_108 = *_107;
_109 = _108 != NULL;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block15; else goto block16;
block16:;
_113 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _113, &$s26);
abort(); // unreachable
block15:;
_116 = _108;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_120 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_116, _100);
_121 = ((org$frostlang$frostc$Type*) _120);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = _120;
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_129 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_82, _83, _121, _129);
_131 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_79, _81, _82);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_132);
_134 = &param0->index;
_135 = *_134;
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = &param0->index;
*_138 = _131;
_140 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = _98;
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_146);
goto block5;
block5:;
_149 = *(&local2);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:58
_155 = &param0->index;
_156 = *_155;
_157 = _156 == NULL;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:59
_162 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_163 = (frost$core$Int) {7u};
_164 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:59:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:145
_167 = &(&local4)->value;
*_167 = _164;
_169 = *(&local4);
*(&local3) = _169;
_172 = *(&local3);
_173 = ($fn27) param0->$class->vtable[2];
_174 = _173(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_162, _163, _172, _174);
_176 = _162;
_177 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_177);
_179 = &param0->index;
_180 = *_179;
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
_183 = &param0->index;
*_183 = _176;
_185 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_185);
_187 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_187);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:60
_190 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_190);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:62
_194 = &param0->compiler;
_195 = *_194;
_196 = &param0->position;
_197 = *_196;
_198 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_199 = (frost$core$Int) {26u};
_200 = &param0->position;
_201 = *_200;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:62:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_204 = _201.file;
_205 = _201.line;
_206 = _201.column;
_207 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_204, _205, _206);
_209 = &param0->target;
_210 = *_209;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_198, _199, _207, _210);
_212 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:18
_215 = &(&local6)->$rawValue;
*_215 = _212;
_217 = *(&local6);
*(&local5) = _217;
_220 = *(&local5);
_221 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_222 = (frost$core$Int) {26u};
_223 = &param0->position;
_224 = *_223;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:63:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_227 = _224.file;
_228 = _224.line;
_229 = _224.column;
_230 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_227, _228, _229);
_232 = &param0->index;
_233 = *_232;
_234 = _233 != NULL;
_235 = (frost$core$Bit) {_234};
_236 = _235.value;
if (_236) goto block23; else goto block24;
block24:;
_238 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _238, &$s29);
abort(); // unreachable
block23:;
_241 = _233;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_221, _222, _230, _241);
_243 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_244 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_243, _244);
_246 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_195, _197, _198, _220, _221, _243);
_247 = ((frost$core$Object*) _246);
frost$core$Frost$ref$frost$core$Object$Q(_247);
_249 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = ((frost$core$Object*) _243);
frost$core$Frost$unref$frost$core$Object$Q(_251);
_253 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_253);
_255 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_255);
return _246;

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
org$frostlang$frostc$MethodPosition* _72;
org$frostlang$frostc$MethodPosition _73;
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
frost$core$Int _113;
frost$core$Int _114;
frost$core$Int _115;
org$frostlang$frostc$Position _116;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$Object* _132;
org$frostlang$frostc$Symbol* _135;
frost$core$Object* _136;
org$frostlang$frostc$ClassDecl* _139;
frost$core$Object* _140;
org$frostlang$frostc$Symbol* _147;
bool _148;
frost$core$Bit _149;
bool _150;
frost$core$Int _152;
org$frostlang$frostc$Symbol* _155;
org$frostlang$frostc$Symbol$Kind* _156;
org$frostlang$frostc$Symbol$Kind _157;
frost$core$Int _158;
frost$core$Int _159;
int64_t _162;
int64_t _163;
bool _164;
frost$core$Bit _165;
bool _167;
frost$collections$Array* _170;
frost$collections$ListView* _172;
frost$core$Object* _173;
frost$collections$ListView* _175;
frost$core$Object* _176;
frost$core$Object* _179;
frost$collections$ListView* _182;
frost$collections$Array* _183;
org$frostlang$frostc$Symbol* _184;
org$frostlang$frostc$MethodDecl* _185;
frost$core$Object* _186;
frost$core$Int _189;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _197;
org$frostlang$frostc$Symbol* _200;
org$frostlang$frostc$Methods* _201;
org$frostlang$frostc$FixedArray** _202;
org$frostlang$frostc$FixedArray* _203;
frost$collections$ListView* _204;
frost$core$Object* _205;
frost$collections$ListView* _207;
frost$core$Object* _208;
frost$core$Int _213;
frost$collections$Array* _217;
frost$core$Object* _220;
frost$collections$Array* _222;
frost$core$Object* _223;
frost$core$Object* _226;
frost$collections$Array* _229;
org$frostlang$frostc$ASTNode** _230;
org$frostlang$frostc$ASTNode* _231;
frost$core$Object* _232;
frost$collections$Array* _235;
org$frostlang$frostc$ASTNode* _236;
frost$core$Int _237;
org$frostlang$frostc$MethodPosition* _238;
org$frostlang$frostc$MethodPosition _239;
frost$core$Int _242;
frost$core$Int _243;
frost$core$Int _244;
org$frostlang$frostc$Position _245;
frost$core$Object* _248;
frost$core$Object* _250;
org$frostlang$frostc$Compiler** _253;
org$frostlang$frostc$Compiler* _254;
org$frostlang$frostc$MethodPosition* _255;
org$frostlang$frostc$MethodPosition _256;
org$frostlang$frostc$IR$Value** _257;
org$frostlang$frostc$IR$Value* _258;
org$frostlang$frostc$IR$Value* _259;
frost$collections$ListView* _260;
frost$collections$Array* _261;
frost$collections$ListView* _262;
org$frostlang$frostc$Compiler$TypeContext* _263;
frost$core$Int _264;
org$frostlang$frostc$Pair* _266;
frost$core$Object* _268;
org$frostlang$frostc$Pair* _270;
frost$core$Object* _271;
frost$core$Object* _274;
frost$core$Object* _276;
org$frostlang$frostc$Pair* _279;
bool _280;
frost$core$Bit _281;
bool _282;
org$frostlang$frostc$Pair* _285;
bool _286;
frost$core$Bit _287;
bool _288;
frost$core$Int _290;
org$frostlang$frostc$Pair* _293;
frost$core$Object** _294;
frost$core$Object* _295;
frost$collections$ListView* _296;
frost$collections$CollectionView* _297;
$fn35 _298;
frost$core$Int _299;
frost$core$Int _300;
int64_t _303;
int64_t _304;
bool _305;
frost$core$Bit _306;
bool _308;
frost$core$Int _310;
org$frostlang$frostc$Compiler** _314;
org$frostlang$frostc$Compiler* _315;
org$frostlang$frostc$ASTNode** _316;
org$frostlang$frostc$ASTNode* _317;
org$frostlang$frostc$Compiler$TypeContext* _318;
frost$core$Int _319;
org$frostlang$frostc$Pair* _320;
bool _321;
frost$core$Bit _322;
bool _323;
frost$core$Int _325;
org$frostlang$frostc$Pair* _328;
frost$core$Object** _329;
frost$core$Object* _330;
frost$collections$ListView* _331;
frost$core$Int _332;
$fn36 _333;
frost$core$Object* _334;
org$frostlang$frostc$MethodRef* _335;
frost$core$Int _336;
org$frostlang$frostc$Type** _339;
org$frostlang$frostc$Type* _340;
org$frostlang$frostc$FixedArray** _343;
org$frostlang$frostc$FixedArray* _344;
bool _345;
frost$core$Bit _346;
bool _347;
frost$core$Int _349;
org$frostlang$frostc$FixedArray* _352;
frost$core$Object* _353;
frost$core$Object* _356;
org$frostlang$frostc$Type* _357;
frost$core$Object* _358;
frost$core$Object* _360;
frost$core$Object* _362;
frost$core$Bit _365;
org$frostlang$frostc$IR$Value* _367;
frost$core$Object* _368;
org$frostlang$frostc$IR$Value** _370;
org$frostlang$frostc$IR$Value* _371;
frost$core$Object* _372;
org$frostlang$frostc$IR$Value** _374;
frost$core$Object* _376;
frost$core$Object* _378;
frost$core$Object* _380;
frost$core$Object* _382;
org$frostlang$frostc$IR$Value** _386;
org$frostlang$frostc$IR$Value* _387;
bool _388;
frost$core$Bit _389;
bool _390;
org$frostlang$frostc$IR$Value* _393;
frost$core$Int _394;
frost$core$Int _395;
frost$core$Int* _398;
org$frostlang$frostc$IR$Statement$ID _400;
org$frostlang$frostc$IR$Statement$ID _403;
$fn37 _404;
org$frostlang$frostc$Type* _405;
org$frostlang$frostc$IR$Value* _407;
frost$core$Object* _408;
org$frostlang$frostc$IR$Value** _410;
org$frostlang$frostc$IR$Value* _411;
frost$core$Object* _412;
org$frostlang$frostc$IR$Value** _414;
frost$core$Object* _416;
frost$core$Object* _418;
org$frostlang$frostc$Pair* _421;
frost$core$Object* _422;
frost$collections$Array* _425;
frost$core$Object* _426;
frost$collections$ListView* _429;
frost$core$Object* _430;
org$frostlang$frostc$Symbol* _433;
frost$core$Object* _434;
org$frostlang$frostc$ClassDecl* _437;
frost$core$Object* _438;
frost$collections$Array* _443;
frost$core$Object* _446;
frost$collections$Array* _448;
frost$core$Object* _449;
frost$core$Object* _452;
frost$collections$Array* _455;
org$frostlang$frostc$ASTNode* _456;
frost$core$Int _457;
org$frostlang$frostc$MethodPosition* _458;
org$frostlang$frostc$MethodPosition _459;
frost$core$Int _462;
frost$core$Int _463;
frost$core$Int _464;
org$frostlang$frostc$Position _465;
org$frostlang$frostc$IR$Value** _467;
org$frostlang$frostc$IR$Value* _468;
bool _469;
frost$core$Bit _470;
bool _471;
frost$core$Int _473;
org$frostlang$frostc$IR$Value* _476;
frost$core$Object* _478;
frost$core$Object* _480;
frost$collections$Array* _483;
org$frostlang$frostc$ASTNode* _484;
frost$core$Int _485;
org$frostlang$frostc$MethodPosition* _486;
org$frostlang$frostc$MethodPosition _487;
frost$core$Int _490;
frost$core$Int _491;
frost$core$Int _492;
org$frostlang$frostc$Position _493;
frost$core$Object* _496;
frost$core$Object* _498;
org$frostlang$frostc$Compiler** _501;
org$frostlang$frostc$Compiler* _502;
org$frostlang$frostc$MethodPosition* _503;
org$frostlang$frostc$MethodPosition _504;
org$frostlang$frostc$IR$Value** _505;
org$frostlang$frostc$IR$Value* _506;
frost$collections$Array* _507;
frost$collections$ListView* _508;
org$frostlang$frostc$Compiler$TypeContext* _509;
frost$core$Int _510;
org$frostlang$frostc$IR$Value* _512;
frost$core$Object* _513;
frost$core$Object* _515;
frost$collections$Array* _517;
frost$core$Object* _518;
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
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from IndexLValue.frost:76:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6109
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6109:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_113 = _73.file;
_114 = _73.line;
_115 = _73.column;
_116 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_113, _114, _115);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(_71, _116, _108);
_120 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_128);
_130 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_132);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:78
_135 = *(&local1);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_139 = *(&local0);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:80
*(&local2) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:81
_147 = *(&local1);
_148 = _147 != NULL;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block13; else goto block14;
block14:;
_152 = (frost$core$Int) {81u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _152, &$s51);
abort(); // unreachable
block13:;
_155 = _147;
_156 = &_155->kind;
_157 = *_156;
_158 = _157.$rawValue;
_159 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:82:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_162 = _158.value;
_163 = _159.value;
_164 = _162 == _163;
_165 = (frost$core$Bit) {_164};
_167 = _165.value;
if (_167) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:83
_170 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_170);
_172 = ((frost$collections$ListView*) _170);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$ref$frost$core$Object$Q(_173);
_175 = *(&local2);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local2) = _172;
_179 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:84
_182 = *(&local2);
_183 = ((frost$collections$Array*) _182);
_184 = *(&local1);
_185 = ((org$frostlang$frostc$MethodDecl*) _184);
_186 = ((frost$core$Object*) _185);
frost$collections$Array$add$frost$collections$Array$T(_183, _186);
goto block15;
block17:;
_189 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:86:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_192 = _158.value;
_193 = _189.value;
_194 = _192 == _193;
_195 = (frost$core$Bit) {_194};
_197 = _195.value;
if (_197) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:87
_200 = *(&local1);
_201 = ((org$frostlang$frostc$Methods*) _200);
_202 = &_201->methods;
_203 = *_202;
_204 = ((frost$collections$ListView*) _203);
_205 = ((frost$core$Object*) _204);
frost$core$Frost$ref$frost$core$Object$Q(_205);
_207 = *(&local2);
_208 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_208);
*(&local2) = _204;
goto block15;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:90
_213 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _213);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:93
_217 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_217);
*(&local3) = ((frost$collections$Array*) NULL);
_220 = ((frost$core$Object*) _217);
frost$core$Frost$ref$frost$core$Object$Q(_220);
_222 = *(&local3);
_223 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_223);
*(&local3) = _217;
_226 = ((frost$core$Object*) _217);
frost$core$Frost$unref$frost$core$Object$Q(_226);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:94
_229 = *(&local3);
_230 = &param0->rawIndex;
_231 = *_230;
_232 = ((frost$core$Object*) _231);
frost$collections$Array$add$frost$collections$Array$T(_229, _232);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:95
_235 = *(&local3);
_236 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_237 = (frost$core$Int) {26u};
_238 = &param0->position;
_239 = *_238;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:95:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_242 = _239.file;
_243 = _239.line;
_244 = _239.column;
_245 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_242, _243, _244);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_236, _237, _245, param1);
_248 = ((frost$core$Object*) _236);
frost$collections$Array$add$frost$collections$Array$T(_235, _248);
_250 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_250);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:96
_253 = &param0->compiler;
_254 = *_253;
_255 = &param0->position;
_256 = *_255;
_257 = &param0->target;
_258 = *_257;
_259 = _258;
_260 = *(&local2);
_261 = *(&local3);
_262 = ((frost$collections$ListView*) _261);
_263 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_264 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_263, _264);
_266 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(_254, _256, _259, _260, _262, _263);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_268 = ((frost$core$Object*) _266);
frost$core$Frost$ref$frost$core$Object$Q(_268);
_270 = *(&local4);
_271 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_271);
*(&local4) = _266;
_274 = ((frost$core$Object*) _266);
frost$core$Frost$unref$frost$core$Object$Q(_274);
_276 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_276);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:98
_279 = *(&local4);
_280 = _279 != NULL;
_281 = (frost$core$Bit) {_280};
_282 = _281.value;
if (_282) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:99
_285 = *(&local4);
_286 = _285 != NULL;
_287 = (frost$core$Bit) {_286};
_288 = _287.value;
if (_288) goto block25; else goto block26;
block26:;
_290 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _290, &$s54);
abort(); // unreachable
block25:;
_293 = _285;
_294 = &_293->first;
_295 = *_294;
_296 = ((frost$collections$ListView*) _295);
_297 = ((frost$collections$CollectionView*) _296);
ITable* $tmp55 = _297->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp55 = $tmp55->next;
}
_298 = $tmp55->methods[0];
_299 = _298(_297);
_300 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IndexLValue.frost:99:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_303 = _299.value;
_304 = _300.value;
_305 = _303 == _304;
_306 = (frost$core$Bit) {_305};
_308 = _306.value;
if (_308) goto block28; else goto block29;
block29:;
_310 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s56, _310);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:100
_314 = &param0->compiler;
_315 = *_314;
_316 = &param0->rawIndex;
_317 = *_316;
_318 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_319 = (frost$core$Int) {3u};
_320 = *(&local4);
_321 = _320 != NULL;
_322 = (frost$core$Bit) {_321};
_323 = _322.value;
if (_323) goto block30; else goto block31;
block31:;
_325 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _325, &$s58);
abort(); // unreachable
block30:;
_328 = _320;
_329 = &_328->first;
_330 = *_329;
_331 = ((frost$collections$ListView*) _330);
_332 = (frost$core$Int) {0u};
ITable* $tmp59 = _331->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp59 = $tmp59->next;
}
_333 = $tmp59->methods[0];
_334 = _333(_331, _332);
_335 = ((org$frostlang$frostc$MethodRef*) _334);
_336 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int):org.frostlang.frostc.Type from IndexLValue.frost:101:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
_339 = &_335->effectiveType;
_340 = *_339;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_343 = &_340->_subtypes;
_344 = *_343;
_345 = _344 != NULL;
_346 = (frost$core$Bit) {_345};
_347 = _346.value;
if (_347) goto block34; else goto block35;
block35:;
_349 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _349, &$s61);
abort(); // unreachable
block34:;
_352 = _344;
_353 = ((frost$core$Object*) _352);
frost$core$Frost$ref$frost$core$Object$Q(_353);
_356 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_352, _336);
_357 = ((org$frostlang$frostc$Type*) _356);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$ref$frost$core$Object$Q(_358);
_360 = _356;
frost$core$Frost$unref$frost$core$Object$Q(_360);
_362 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_365 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_318, _319, _357, _365);
_367 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_315, _317, _318);
_368 = ((frost$core$Object*) _367);
frost$core$Frost$ref$frost$core$Object$Q(_368);
_370 = &param0->index;
_371 = *_370;
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
_374 = &param0->index;
*_374 = _367;
_376 = ((frost$core$Object*) _367);
frost$core$Frost$unref$frost$core$Object$Q(_376);
_378 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_378);
_380 = _334;
frost$core$Frost$unref$frost$core$Object$Q(_380);
_382 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_382);
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:103
_386 = &param0->index;
_387 = *_386;
_388 = _387 == NULL;
_389 = (frost$core$Bit) {_388};
_390 = _389.value;
if (_390) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:105
_393 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_394 = (frost$core$Int) {7u};
_395 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:105:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:145
_398 = &(&local6)->value;
*_398 = _395;
_400 = *(&local6);
*(&local5) = _400;
_403 = *(&local5);
_404 = ($fn62) param0->$class->vtable[2];
_405 = _404(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_393, _394, _403, _405);
_407 = _393;
_408 = ((frost$core$Object*) _407);
frost$core$Frost$ref$frost$core$Object$Q(_408);
_410 = &param0->index;
_411 = *_410;
_412 = ((frost$core$Object*) _411);
frost$core$Frost$unref$frost$core$Object$Q(_412);
_414 = &param0->index;
*_414 = _407;
_416 = ((frost$core$Object*) _405);
frost$core$Frost$unref$frost$core$Object$Q(_416);
_418 = ((frost$core$Object*) _393);
frost$core$Frost$unref$frost$core$Object$Q(_418);
goto block37;
block37:;
_421 = *(&local4);
_422 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_422);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
_425 = *(&local3);
_426 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_426);
*(&local3) = ((frost$collections$Array*) NULL);
_429 = *(&local2);
_430 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_430);
*(&local2) = ((frost$collections$ListView*) NULL);
_433 = *(&local1);
_434 = ((frost$core$Object*) _433);
frost$core$Frost$unref$frost$core$Object$Q(_434);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_437 = *(&local0);
_438 = ((frost$core$Object*) _437);
frost$core$Frost$unref$frost$core$Object$Q(_438);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:108
_443 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_443);
*(&local7) = ((frost$collections$Array*) NULL);
_446 = ((frost$core$Object*) _443);
frost$core$Frost$ref$frost$core$Object$Q(_446);
_448 = *(&local7);
_449 = ((frost$core$Object*) _448);
frost$core$Frost$unref$frost$core$Object$Q(_449);
*(&local7) = _443;
_452 = ((frost$core$Object*) _443);
frost$core$Frost$unref$frost$core$Object$Q(_452);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:109
_455 = *(&local7);
_456 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_457 = (frost$core$Int) {26u};
_458 = &param0->position;
_459 = *_458;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:109:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_462 = _459.file;
_463 = _459.line;
_464 = _459.column;
_465 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_462, _463, _464);
_467 = &param0->index;
_468 = *_467;
_469 = _468 != NULL;
_470 = (frost$core$Bit) {_469};
_471 = _470.value;
if (_471) goto block40; else goto block41;
block41:;
_473 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s63, _473, &$s64);
abort(); // unreachable
block40:;
_476 = _468;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_456, _457, _465, _476);
_478 = ((frost$core$Object*) _456);
frost$collections$Array$add$frost$collections$Array$T(_455, _478);
_480 = ((frost$core$Object*) _456);
frost$core$Frost$unref$frost$core$Object$Q(_480);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:110
_483 = *(&local7);
_484 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_485 = (frost$core$Int) {26u};
_486 = &param0->position;
_487 = *_486;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IndexLValue.frost:110:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_490 = _487.file;
_491 = _487.line;
_492 = _487.column;
_493 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_490, _491, _492);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_484, _485, _493, param1);
_496 = ((frost$core$Object*) _484);
frost$collections$Array$add$frost$collections$Array$T(_483, _496);
_498 = ((frost$core$Object*) _484);
frost$core$Frost$unref$frost$core$Object$Q(_498);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:111
_501 = &param0->compiler;
_502 = *_501;
_503 = &param0->position;
_504 = *_503;
_505 = &param0->target;
_506 = *_505;
_507 = *(&local7);
_508 = ((frost$collections$ListView*) _507);
_509 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_510 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_509, _510);
_512 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_502, _504, _506, &$s65, _508, _509);
_513 = ((frost$core$Object*) _512);
frost$core$Frost$unref$frost$core$Object$Q(_513);
_515 = ((frost$core$Object*) _509);
frost$core$Frost$unref$frost$core$Object$Q(_515);
_517 = *(&local7);
_518 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_518);
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

