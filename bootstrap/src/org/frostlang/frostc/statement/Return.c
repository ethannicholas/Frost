#include "org/frostlang/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Weak.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn11)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn12)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn13)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn14)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn15)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn16)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn17)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn18)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn19)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn20)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn21)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn24)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn25)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn26)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn27)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn29)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn30)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn31)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn32)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn33)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn34)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn35)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn36)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn38)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn40)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn41)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn42)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn43)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn44)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn46)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn47)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn48)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Value* (*$fn86)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$Type* (*$fn98)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn120)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn121)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn124)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn137)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn138)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn141)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn144)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn146)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn160)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn166)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn167)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 4852820752230860395, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -5865721028201646545, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 1290914291935992386, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$Bit _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:24
_1 = (frost$core$Bit) {true};
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q$frost$core$Bit(param0, param1, param2, _1);
return;

}
void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2, frost$core$Bit param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$Position local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$FieldDecl* local5 = NULL;
org$frostlang$frostc$FieldDecl$Kind local6;
org$frostlang$frostc$FieldDecl$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
frost$core$Bit local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
frost$core$Bit local12;
org$frostlang$frostc$Compiler$EnclosingContext* local13 = NULL;
frost$core$Int local14;
frost$core$Int local15;
org$frostlang$frostc$Compiler$EnclosingContext* local16 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local17 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local18 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local19 = NULL;
org$frostlang$frostc$IR$Block$ID local20;
frost$core$Int local21;
frost$core$Int local22;
frost$core$Bit local23;
org$frostlang$frostc$MethodDecl$Kind local24;
org$frostlang$frostc$MethodDecl$Kind local25;
org$frostlang$frostc$Compiler$EnclosingContext* local26 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local27 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local28 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local29 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local30 = NULL;
org$frostlang$frostc$IR$Block$ID local31;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
frost$collections$Stack** _11;
frost$collections$Stack* _12;
frost$core$Int _13;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$collections$Array** _24;
frost$collections$Array* _25;
frost$collections$CollectionView* _26;
$fn2 _27;
frost$core$Int _28;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _36;
frost$collections$Array** _40;
frost$collections$Array* _41;
frost$collections$CollectionView* _42;
$fn3 _43;
frost$core$Int _44;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
frost$collections$Array** _55;
frost$collections$Array* _56;
frost$collections$Array** _57;
frost$collections$Array* _58;
frost$collections$CollectionView* _59;
$fn4 _60;
frost$core$Int _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
int64_t _65;
frost$core$Int _66;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
frost$core$Int _72;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$collections$CollectionView* _79;
$fn5 _80;
frost$core$Int _81;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _88;
frost$unsafe$Pointer* _92;
frost$unsafe$Pointer _93;
int64_t _94;
frost$core$Int64 _95;
int64_t _96;
frost$core$Object* _97;
frost$core$Object* _98;
frost$core$Object* _101;
frost$core$Object* _102;
frost$core$Object* _104;
org$frostlang$frostc$ClassDecl* _107;
frost$core$Object* _109;
org$frostlang$frostc$ClassDecl* _111;
frost$core$Object* _112;
frost$core$Object* _115;
frost$collections$Stack** _118;
frost$collections$Stack* _119;
frost$core$Int _120;
frost$core$Int _122;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
frost$collections$Array** _131;
frost$collections$Array* _132;
frost$collections$CollectionView* _133;
$fn6 _134;
frost$core$Int _135;
int64_t _137;
int64_t _138;
bool _139;
frost$core$Bit _140;
bool _141;
frost$core$Int _143;
frost$collections$Array** _147;
frost$collections$Array* _148;
frost$collections$CollectionView* _149;
$fn7 _150;
frost$core$Int _151;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _156;
frost$core$Int _158;
frost$collections$Array** _162;
frost$collections$Array* _163;
frost$collections$Array** _164;
frost$collections$Array* _165;
frost$collections$CollectionView* _166;
$fn8 _167;
frost$core$Int _168;
frost$core$Int _169;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
int64_t _174;
int64_t _175;
int64_t _176;
frost$core$Int _177;
frost$core$Int _179;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _184;
frost$collections$CollectionView* _186;
$fn9 _187;
frost$core$Int _188;
int64_t _189;
int64_t _190;
bool _191;
frost$core$Bit _192;
bool _193;
frost$core$Int _195;
frost$unsafe$Pointer* _199;
frost$unsafe$Pointer _200;
int64_t _201;
frost$core$Int64 _202;
int64_t _203;
frost$core$Object* _204;
frost$core$Object* _205;
frost$core$Object* _208;
frost$core$Object* _209;
frost$core$Object* _211;
org$frostlang$frostc$MethodDecl* _214;
frost$core$Object* _216;
org$frostlang$frostc$MethodDecl* _218;
frost$core$Object* _219;
frost$core$Object* _222;
frost$core$Int _227;
frost$core$Int _228;
frost$core$Int _229;
org$frostlang$frostc$Position _230;
org$frostlang$frostc$MethodDecl* _234;
org$frostlang$frostc$Symbol* _235;
frost$core$String** _236;
frost$core$String* _237;
frost$core$Bit _238;
bool _239;
org$frostlang$frostc$MethodDecl* _241;
frost$collections$Array** _242;
frost$collections$Array* _243;
frost$collections$CollectionView* _244;
$fn10 _245;
frost$core$Int _246;
frost$core$Int _247;
int64_t _250;
int64_t _251;
bool _252;
frost$core$Bit _253;
bool _255;
org$frostlang$frostc$MethodDecl* _257;
frost$core$Weak** _258;
frost$core$Weak* _259;
frost$core$Bit* _264;
frost$core$Bit _265;
bool _267;
frost$core$Int _269;
frost$core$Object** _273;
frost$core$Object* _274;
frost$core$Object* _275;
frost$core$Object* _276;
org$frostlang$frostc$ClassDecl* _279;
frost$core$String** _280;
frost$core$String* _281;
frost$core$Equatable* _282;
frost$core$Equatable* _283;
$fn11 _284;
frost$core$Bit _285;
bool _286;
frost$core$Object* _287;
org$frostlang$frostc$ClassDecl* _291;
org$frostlang$frostc$Type** _292;
org$frostlang$frostc$Type* _293;
bool _294;
frost$core$Bit _295;
bool _296;
org$frostlang$frostc$ClassDecl* _298;
frost$core$Bit _299;
bool _302;
bool _303;
frost$core$Bit _304;
bool _306;
org$frostlang$frostc$ClassDecl* _309;
org$frostlang$frostc$Type** _310;
org$frostlang$frostc$Type* _311;
org$frostlang$frostc$ClassDecl* _312;
org$frostlang$frostc$Type** _313;
org$frostlang$frostc$Type* _314;
bool _315;
frost$core$Bit _316;
bool _317;
frost$core$Int _319;
org$frostlang$frostc$Type* _322;
org$frostlang$frostc$Type* _323;
frost$core$Object* _325;
org$frostlang$frostc$Type* _327;
frost$core$Object* _328;
frost$core$Object* _331;
org$frostlang$frostc$ASTNode* _334;
frost$core$Int _335;
org$frostlang$frostc$Position _336;
org$frostlang$frostc$ASTNode* _337;
frost$core$Int _338;
org$frostlang$frostc$Position _339;
org$frostlang$frostc$ASTNode* _340;
frost$core$Int _341;
org$frostlang$frostc$Position _342;
org$frostlang$frostc$FixedArray* _345;
frost$core$Object* _349;
frost$core$Object* _351;
frost$core$Object* _353;
frost$core$Object* _355;
org$frostlang$frostc$Type* _357;
frost$core$Object* _358;
frost$core$Bit* _363;
frost$core$Bit _364;
bool _367;
bool _368;
frost$core$Bit _369;
bool _371;
frost$core$Int _373;
frost$core$Bit _377;
frost$core$Bit* _378;
org$frostlang$frostc$MethodDecl* _381;
frost$core$Weak** _382;
frost$core$Weak* _383;
frost$core$Bit* _388;
frost$core$Bit _389;
bool _391;
frost$core$Int _393;
frost$core$Object** _397;
frost$core$Object* _398;
frost$core$Object* _399;
frost$core$Object* _400;
org$frostlang$frostc$ClassDecl* _403;
frost$collections$Array** _404;
frost$collections$Array* _405;
frost$collections$Iterable* _406;
$fn12 _407;
frost$collections$Iterator* _408;
$fn13 _410;
frost$core$Bit _411;
bool _412;
$fn14 _415;
frost$core$Object* _416;
org$frostlang$frostc$FieldDecl* _417;
frost$core$Object* _418;
org$frostlang$frostc$FieldDecl* _420;
frost$core$Object* _421;
org$frostlang$frostc$FieldDecl* _425;
frost$core$Bit _426;
bool _427;
org$frostlang$frostc$FieldDecl* _429;
org$frostlang$frostc$Annotations** _430;
org$frostlang$frostc$Annotations* _431;
frost$core$Int* _434;
frost$core$Int _435;
frost$core$Int _436;
int64_t _439;
int64_t _440;
int64_t _441;
frost$core$Int _442;
frost$core$Int _444;
int64_t _445;
int64_t _446;
bool _447;
frost$core$Bit _448;
bool _452;
bool _453;
frost$core$Bit _454;
bool _456;
org$frostlang$frostc$FieldDecl* _458;
org$frostlang$frostc$FieldDecl$Kind* _459;
org$frostlang$frostc$FieldDecl$Kind _460;
frost$core$Equatable* _461;
frost$core$Int _462;
frost$core$Int* _465;
org$frostlang$frostc$FieldDecl$Kind _467;
org$frostlang$frostc$FieldDecl$Kind _470;
frost$core$Equatable* _471;
$fn15 _472;
frost$core$Bit _473;
bool _474;
frost$core$Object* _475;
frost$core$Object* _477;
org$frostlang$frostc$FieldDecl* _480;
org$frostlang$frostc$Type** _481;
org$frostlang$frostc$Type* _482;
frost$core$Bit _485;
bool _488;
bool _489;
frost$core$Bit _490;
bool _492;
frost$core$Bit _495;
frost$core$Bit _499;
bool _502;
bool _503;
frost$core$Bit _504;
frost$core$Bit _508;
bool _509;
org$frostlang$frostc$lvalue$FieldLValue* _512;
org$frostlang$frostc$ASTNode* _513;
frost$core$Int _514;
org$frostlang$frostc$Position _515;
org$frostlang$frostc$Compiler$TypeContext* _517;
frost$core$Int _518;
org$frostlang$frostc$IR$Value* _520;
org$frostlang$frostc$FieldDecl* _521;
$fn16 _523;
org$frostlang$frostc$IR$Value* _524;
frost$core$Object* _526;
org$frostlang$frostc$IR$Value* _528;
frost$core$Object* _529;
frost$core$Object* _532;
frost$core$Object* _534;
frost$core$Object* _536;
frost$core$Object* _538;
frost$core$Object* _540;
org$frostlang$frostc$IR$Value* _543;
bool _544;
frost$core$Bit _545;
bool _546;
org$frostlang$frostc$IR$Value* _549;
frost$core$Object* _550;
frost$core$Object* _553;
org$frostlang$frostc$FieldDecl* _555;
frost$core$Object* _556;
frost$core$Object* _559;
frost$core$Object* _561;
org$frostlang$frostc$MethodDecl* _563;
frost$core$Object* _564;
org$frostlang$frostc$ClassDecl* _567;
frost$core$Object* _568;
org$frostlang$frostc$IR* _571;
frost$core$Object* _572;
org$frostlang$frostc$IR$Value* _577;
bool _578;
frost$core$Bit _579;
bool _580;
frost$core$Int _582;
org$frostlang$frostc$IR$Value* _585;
org$frostlang$frostc$IR$Value* _587;
frost$core$Object* _588;
frost$core$Object* _592;
org$frostlang$frostc$FieldDecl* _594;
frost$core$Object* _595;
frost$core$Object* _599;
frost$core$Object* _601;
frost$core$Bit* _604;
frost$core$Bit _605;
bool _606;
frost$core$Int _608;
frost$core$Bit _612;
frost$core$Bit* _613;
bool _617;
frost$core$Bit _618;
bool _619;
org$frostlang$frostc$MethodDecl* _622;
org$frostlang$frostc$Type** _623;
org$frostlang$frostc$Type* _624;
org$frostlang$frostc$Type** _625;
org$frostlang$frostc$Type* _626;
org$frostlang$frostc$Symbol* _629;
frost$core$String** _630;
frost$core$String* _631;
org$frostlang$frostc$Symbol* _632;
frost$core$String** _633;
frost$core$String* _634;
frost$core$Bit _635;
bool _636;
org$frostlang$frostc$Type$Kind* _638;
org$frostlang$frostc$Type$Kind _639;
frost$core$Equatable* _640;
org$frostlang$frostc$Type$Kind* _641;
org$frostlang$frostc$Type$Kind _642;
frost$core$Equatable* _643;
$fn17 _644;
frost$core$Bit _645;
frost$core$Object* _646;
frost$core$Object* _648;
frost$core$Bit _654;
bool _656;
frost$core$Int _663;
frost$core$Int _664;
frost$core$Int _665;
org$frostlang$frostc$Position _666;
org$frostlang$frostc$MethodDecl* _671;
frost$core$Object* _672;
org$frostlang$frostc$ClassDecl* _675;
frost$core$Object* _676;
org$frostlang$frostc$IR* _679;
frost$core$Object* _680;
bool _685;
frost$core$Bit _686;
bool _687;
frost$core$Int _689;
org$frostlang$frostc$ASTNode* _692;
org$frostlang$frostc$Compiler$TypeContext* _693;
frost$core$Int _694;
org$frostlang$frostc$MethodDecl* _695;
org$frostlang$frostc$Type** _696;
org$frostlang$frostc$Type* _697;
frost$core$Bit _698;
org$frostlang$frostc$IR$Value* _700;
frost$core$Object* _702;
org$frostlang$frostc$IR$Value* _704;
frost$core$Object* _705;
frost$core$Object* _708;
frost$core$Object* _710;
org$frostlang$frostc$IR$Value* _713;
bool _714;
frost$core$Bit _715;
bool _716;
org$frostlang$frostc$IR$Value* _719;
frost$core$Object* _720;
org$frostlang$frostc$MethodDecl* _723;
frost$core$Object* _724;
org$frostlang$frostc$ClassDecl* _727;
frost$core$Object* _728;
org$frostlang$frostc$IR* _731;
frost$core$Object* _732;
bool _737;
org$frostlang$frostc$IR$Value* _739;
bool _740;
frost$core$Bit _741;
bool _742;
frost$core$Int _744;
org$frostlang$frostc$IR$Value* _747;
$fn18 _748;
org$frostlang$frostc$Type* _749;
frost$core$Bit _752;
bool _755;
bool _756;
frost$core$Bit _757;
bool _759;
frost$core$Bit _762;
frost$core$Bit _766;
bool _769;
bool _770;
frost$core$Bit _771;
frost$core$Bit _775;
bool _776;
frost$core$Object* _777;
org$frostlang$frostc$IR$Value* _781;
bool _782;
frost$core$Bit _783;
bool _784;
frost$core$Int _786;
org$frostlang$frostc$IR$Value* _789;
frost$collections$Stack** _795;
frost$collections$Stack* _796;
frost$collections$Iterable* _797;
$fn19 _798;
frost$collections$Iterator* _799;
$fn20 _801;
frost$core$Bit _802;
bool _803;
$fn21 _806;
frost$core$Object* _807;
org$frostlang$frostc$Compiler$EnclosingContext* _808;
frost$core$Object* _809;
org$frostlang$frostc$Compiler$EnclosingContext* _811;
frost$core$Object* _812;
org$frostlang$frostc$Compiler$EnclosingContext* _816;
frost$core$Int* _817;
frost$core$Int _818;
frost$core$Int _819;
int64_t _822;
int64_t _823;
bool _824;
frost$core$Bit _825;
bool _827;
frost$core$Object* _830;
org$frostlang$frostc$Compiler$EnclosingContext* _832;
frost$core$Object* _833;
frost$core$Object* _836;
org$frostlang$frostc$Compiler$EnclosingContext* _840;
frost$core$Object* _842;
org$frostlang$frostc$Compiler$EnclosingContext* _844;
frost$core$Object* _845;
frost$core$Object* _849;
frost$collections$Stack** _855;
frost$collections$Stack* _856;
frost$core$Int _857;
frost$core$Int _859;
int64_t _860;
int64_t _861;
bool _862;
frost$core$Bit _863;
bool _864;
frost$collections$Array** _868;
frost$collections$Array* _869;
frost$collections$CollectionView* _870;
$fn22 _871;
frost$core$Int _872;
int64_t _874;
int64_t _875;
bool _876;
frost$core$Bit _877;
bool _878;
frost$core$Int _880;
frost$collections$Array** _884;
frost$collections$Array* _885;
frost$collections$CollectionView* _886;
$fn23 _887;
frost$core$Int _888;
int64_t _889;
int64_t _890;
bool _891;
frost$core$Bit _892;
bool _893;
frost$core$Int _895;
frost$collections$Array** _899;
frost$collections$Array* _900;
frost$collections$Array** _901;
frost$collections$Array* _902;
frost$collections$CollectionView* _903;
$fn24 _904;
frost$core$Int _905;
frost$core$Int _906;
int64_t _907;
int64_t _908;
int64_t _909;
frost$core$Int _910;
int64_t _911;
int64_t _912;
int64_t _913;
frost$core$Int _914;
frost$core$Int _916;
int64_t _917;
int64_t _918;
bool _919;
frost$core$Bit _920;
bool _921;
frost$collections$CollectionView* _923;
$fn25 _924;
frost$core$Int _925;
int64_t _926;
int64_t _927;
bool _928;
frost$core$Bit _929;
bool _930;
frost$core$Int _932;
frost$unsafe$Pointer* _936;
frost$unsafe$Pointer _937;
int64_t _938;
frost$core$Int64 _939;
int64_t _940;
frost$core$Object* _941;
frost$core$Object* _942;
frost$core$Object* _945;
frost$core$Object* _946;
frost$core$Object* _948;
org$frostlang$frostc$Compiler$EnclosingContext* _951;
frost$core$Int* _952;
frost$core$Int _953;
frost$core$Int _954;
int64_t _957;
int64_t _958;
bool _959;
frost$core$Bit _960;
bool _962;
frost$collections$Stack** _965;
frost$collections$Stack* _966;
frost$core$Object* _967;
org$frostlang$frostc$Compiler$EnclosingContext* _968;
frost$core$Object* _969;
frost$core$Object* _976;
frost$core$Object* _973;
org$frostlang$frostc$Variable** _980;
org$frostlang$frostc$Variable* _981;
bool _982;
frost$core$Bit _983;
bool _984;
org$frostlang$frostc$Variable** _988;
org$frostlang$frostc$Variable* _989;
bool _990;
frost$core$Bit _991;
bool _992;
frost$core$Int _994;
org$frostlang$frostc$Variable* _997;
org$frostlang$frostc$Variable$Storage** _998;
org$frostlang$frostc$Variable$Storage* _999;
frost$core$Int* _1000;
frost$core$Int _1001;
frost$core$Int _1002;
int64_t _1005;
int64_t _1006;
bool _1007;
frost$core$Bit _1008;
bool _1010;
frost$core$Int* _1012;
frost$core$Int _1013;
frost$core$Int _1016;
org$frostlang$frostc$IR* _1024;
org$frostlang$frostc$IR$Statement* _1025;
frost$core$Int _1026;
org$frostlang$frostc$IR$Value* _1027;
bool _1028;
frost$core$Bit _1029;
bool _1030;
frost$core$Int _1020;
frost$core$Int _1032;
org$frostlang$frostc$IR$Value* _1035;
org$frostlang$frostc$IR$Value* _1036;
frost$core$Int _1037;
frost$core$Int _1038;
org$frostlang$frostc$IR$Value* _1039;
bool _1040;
frost$core$Bit _1041;
bool _1042;
frost$core$Int _1044;
org$frostlang$frostc$IR$Value* _1047;
$fn26 _1048;
org$frostlang$frostc$Type* _1049;
$fn27 _1052;
org$frostlang$frostc$IR$Statement$ID _1053;
frost$core$Object* _1054;
frost$core$Object* _1056;
frost$core$Object* _1058;
org$frostlang$frostc$IR* _1061;
org$frostlang$frostc$IR$Statement* _1062;
frost$core$Int _1063;
org$frostlang$frostc$IR$Block$ID$nullable* _1064;
org$frostlang$frostc$IR$Block$ID$nullable _1065;
bool _1066;
frost$core$Bit _1067;
bool _1068;
frost$core$Int _1070;
org$frostlang$frostc$IR$Block$ID _1073;
$fn28 _1075;
org$frostlang$frostc$IR$Statement$ID _1076;
frost$core$Object* _1077;
frost$collections$Stack** _1084;
frost$collections$Stack* _1085;
frost$collections$Iterable* _1086;
$fn29 _1087;
frost$collections$Iterator* _1088;
$fn30 _1090;
frost$core$Bit _1091;
bool _1092;
$fn31 _1095;
frost$core$Object* _1096;
org$frostlang$frostc$Compiler$EnclosingContext* _1097;
frost$core$Object* _1098;
org$frostlang$frostc$Compiler$EnclosingContext* _1100;
frost$core$Object* _1101;
org$frostlang$frostc$Compiler$EnclosingContext* _1105;
frost$core$Int* _1106;
frost$core$Int _1107;
frost$core$Int _1108;
int64_t _1111;
int64_t _1112;
bool _1113;
frost$core$Bit _1114;
bool _1116;
org$frostlang$frostc$Compiler$EnclosingContext* _1119;
org$frostlang$frostc$Compiler$EnclosingContext* _1120;
frost$core$Object* _1121;
frost$core$Object* _1123;
org$frostlang$frostc$Compiler$EnclosingContext* _1125;
frost$core$Object* _1126;
frost$core$Object* _1129;
frost$core$Object* _1132;
frost$core$Object* _1135;
org$frostlang$frostc$Compiler$EnclosingContext* _1137;
frost$core$Object* _1138;
frost$core$Object* _1142;
frost$core$Object* _1145;
frost$core$Object* _1148;
org$frostlang$frostc$Compiler$EnclosingContext* _1151;
frost$core$Object* _1153;
org$frostlang$frostc$Compiler$EnclosingContext* _1155;
frost$core$Object* _1156;
frost$core$Object* _1159;
org$frostlang$frostc$Compiler$EnclosingContext* _1162;
bool _1163;
frost$core$Bit _1164;
bool _1165;
org$frostlang$frostc$Compiler$EnclosingContext* _1168;
bool _1169;
frost$core$Bit _1170;
bool _1171;
frost$core$Int _1173;
org$frostlang$frostc$Compiler$EnclosingContext* _1176;
frost$core$Int* _1177;
frost$core$Int _1178;
frost$core$Int _1179;
int64_t _1182;
int64_t _1183;
bool _1184;
frost$core$Bit _1185;
bool _1187;
frost$collections$ListView** _1189;
frost$collections$ListView* _1190;
frost$core$Int* _1191;
frost$core$Int _1192;
org$frostlang$frostc$Compiler$InlineReturn** _1193;
org$frostlang$frostc$Compiler$InlineReturn* _1194;
frost$core$Object* _1196;
org$frostlang$frostc$Compiler$InlineReturn* _1198;
frost$core$Object* _1199;
org$frostlang$frostc$IR$Block$ID* _1202;
org$frostlang$frostc$IR$Block$ID _1203;
org$frostlang$frostc$Compiler$InlineReturn* _1206;
org$frostlang$frostc$Variable** _1207;
org$frostlang$frostc$Variable* _1208;
bool _1209;
frost$core$Bit _1210;
bool _1211;
org$frostlang$frostc$Compiler$InlineReturn* _1215;
org$frostlang$frostc$Variable** _1216;
org$frostlang$frostc$Variable* _1217;
bool _1218;
frost$core$Bit _1219;
bool _1220;
frost$core$Int _1222;
org$frostlang$frostc$Variable* _1225;
org$frostlang$frostc$Variable$Storage** _1226;
org$frostlang$frostc$Variable$Storage* _1227;
frost$core$Int* _1228;
frost$core$Int _1229;
frost$core$Int _1230;
int64_t _1233;
int64_t _1234;
bool _1235;
frost$core$Bit _1236;
bool _1238;
frost$core$Int* _1240;
frost$core$Int _1241;
frost$core$Int _1244;
org$frostlang$frostc$IR* _1252;
org$frostlang$frostc$IR$Statement* _1253;
frost$core$Int _1254;
org$frostlang$frostc$IR$Value* _1255;
bool _1256;
frost$core$Bit _1257;
bool _1258;
frost$core$Int _1248;
frost$core$Int _1260;
org$frostlang$frostc$IR$Value* _1263;
org$frostlang$frostc$IR$Value* _1264;
frost$core$Int _1265;
frost$core$Int _1266;
org$frostlang$frostc$IR$Value* _1267;
bool _1268;
frost$core$Bit _1269;
bool _1270;
frost$core$Int _1272;
org$frostlang$frostc$IR$Value* _1275;
$fn32 _1276;
org$frostlang$frostc$Type* _1277;
$fn33 _1280;
org$frostlang$frostc$IR$Statement$ID _1281;
frost$core$Object* _1282;
frost$core$Object* _1284;
frost$core$Object* _1286;
bool _1289;
org$frostlang$frostc$IR$Value* _1291;
bool _1292;
frost$core$Bit _1293;
bool _1294;
frost$core$Int _1296;
org$frostlang$frostc$IR$Value* _1299;
$fn34 _1300;
org$frostlang$frostc$Type* _1301;
frost$core$Bit _1304;
bool _1307;
bool _1308;
frost$core$Bit _1309;
bool _1311;
frost$core$Bit _1314;
frost$core$Bit _1318;
bool _1321;
bool _1322;
frost$core$Bit _1323;
frost$core$Bit _1327;
bool _1328;
frost$core$Object* _1329;
org$frostlang$frostc$IR$Value* _1333;
bool _1334;
frost$core$Bit _1335;
bool _1336;
frost$core$Int _1338;
org$frostlang$frostc$IR$Value* _1341;
org$frostlang$frostc$Compiler$InlineReturn* _1347;
org$frostlang$frostc$IR$Value* _1348;
frost$core$Object* _1349;
org$frostlang$frostc$IR$Value** _1351;
org$frostlang$frostc$IR$Value* _1352;
frost$core$Object* _1353;
org$frostlang$frostc$IR$Value** _1355;
org$frostlang$frostc$IR* _1359;
org$frostlang$frostc$IR$Statement* _1360;
frost$core$Int _1361;
org$frostlang$frostc$IR$Block$ID _1362;
$fn35 _1364;
org$frostlang$frostc$IR$Statement$ID _1365;
frost$core$Object* _1366;
org$frostlang$frostc$Compiler$InlineReturn* _1368;
frost$core$Object* _1369;
frost$core$Int _1374;
org$frostlang$frostc$IR* _1380;
org$frostlang$frostc$IR$Statement* _1381;
frost$core$Int _1382;
org$frostlang$frostc$IR$Value* _1383;
$fn36 _1385;
org$frostlang$frostc$IR$Statement$ID _1386;
frost$core$Object* _1387;
org$frostlang$frostc$Compiler$EnclosingContext* _1390;
frost$core$Object* _1391;
org$frostlang$frostc$Compiler$EnclosingContext* _1394;
frost$core$Object* _1395;
org$frostlang$frostc$IR$Value* _1399;
frost$core$Object* _1400;
org$frostlang$frostc$MethodDecl* _1406;
org$frostlang$frostc$Type** _1407;
org$frostlang$frostc$Type* _1408;
frost$core$Equatable* _1409;
org$frostlang$frostc$Type** _1410;
org$frostlang$frostc$Type* _1411;
frost$core$Equatable* _1412;
$fn37 _1413;
frost$core$Bit _1414;
bool _1415;
org$frostlang$frostc$MethodDecl* _1418;
org$frostlang$frostc$MethodDecl$Kind* _1419;
org$frostlang$frostc$MethodDecl$Kind _1420;
frost$core$Equatable* _1421;
frost$core$Int _1422;
frost$core$Int* _1425;
org$frostlang$frostc$MethodDecl$Kind _1427;
org$frostlang$frostc$MethodDecl$Kind _1430;
frost$core$Equatable* _1431;
$fn38 _1432;
frost$core$Bit _1433;
bool _1434;
frost$core$Object* _1435;
frost$core$Object* _1437;
org$frostlang$frostc$ASTNode* _1441;
frost$core$Int _1442;
org$frostlang$frostc$Position _1443;
org$frostlang$frostc$ASTNode* _1445;
frost$core$Object* _1447;
org$frostlang$frostc$MethodDecl* _1450;
frost$core$Object* _1451;
org$frostlang$frostc$ClassDecl* _1454;
frost$core$Object* _1455;
org$frostlang$frostc$IR* _1458;
frost$core$Object* _1459;
org$frostlang$frostc$MethodDecl* _1464;
org$frostlang$frostc$Type** _1465;
org$frostlang$frostc$Type* _1466;
frost$core$Object* _1467;
$fn39 _1470;
frost$core$String* _1471;
frost$core$String* _1472;
frost$core$Object* _1473;
frost$core$Object* _1475;
frost$core$Object* _1477;
frost$core$String* _1480;
frost$core$String* _1481;
frost$core$Int _1486;
frost$core$Int _1487;
frost$core$Int _1488;
org$frostlang$frostc$Position _1489;
frost$core$Object* _1493;
frost$core$Object* _1495;
frost$core$Object* _1497;
frost$collections$Stack** _1503;
frost$collections$Stack* _1504;
frost$collections$Iterable* _1505;
$fn40 _1506;
frost$collections$Iterator* _1507;
$fn41 _1509;
frost$core$Bit _1510;
bool _1511;
$fn42 _1514;
frost$core$Object* _1515;
org$frostlang$frostc$Compiler$EnclosingContext* _1516;
frost$core$Object* _1517;
org$frostlang$frostc$Compiler$EnclosingContext* _1519;
frost$core$Object* _1520;
org$frostlang$frostc$Compiler$EnclosingContext* _1524;
frost$core$Int* _1525;
frost$core$Int _1526;
frost$core$Int _1527;
int64_t _1530;
int64_t _1531;
bool _1532;
frost$core$Bit _1533;
bool _1535;
frost$core$Object* _1538;
org$frostlang$frostc$Compiler$EnclosingContext* _1540;
frost$core$Object* _1541;
frost$core$Object* _1544;
org$frostlang$frostc$Compiler$EnclosingContext* _1548;
frost$core$Object* _1550;
org$frostlang$frostc$Compiler$EnclosingContext* _1552;
frost$core$Object* _1553;
frost$core$Object* _1557;
org$frostlang$frostc$IR$Block$ID$nullable* _1561;
org$frostlang$frostc$IR$Block$ID$nullable _1562;
bool _1563;
frost$core$Bit _1564;
bool _1565;
org$frostlang$frostc$IR* _1568;
org$frostlang$frostc$IR$Statement* _1569;
frost$core$Int _1570;
org$frostlang$frostc$IR$Block$ID$nullable* _1571;
org$frostlang$frostc$IR$Block$ID$nullable _1572;
bool _1573;
frost$core$Bit _1574;
bool _1575;
frost$core$Int _1577;
org$frostlang$frostc$IR$Block$ID _1580;
$fn43 _1582;
org$frostlang$frostc$IR$Statement$ID _1583;
frost$core$Object* _1584;
frost$collections$Stack** _1591;
frost$collections$Stack* _1592;
frost$collections$Iterable* _1593;
$fn44 _1594;
frost$collections$Iterator* _1595;
$fn45 _1597;
frost$core$Bit _1598;
bool _1599;
$fn46 _1602;
frost$core$Object* _1603;
org$frostlang$frostc$Compiler$EnclosingContext* _1604;
frost$core$Object* _1605;
org$frostlang$frostc$Compiler$EnclosingContext* _1607;
frost$core$Object* _1608;
org$frostlang$frostc$Compiler$EnclosingContext* _1612;
frost$core$Int* _1613;
frost$core$Int _1614;
frost$core$Int _1615;
int64_t _1618;
int64_t _1619;
bool _1620;
frost$core$Bit _1621;
bool _1623;
org$frostlang$frostc$Compiler$EnclosingContext* _1626;
org$frostlang$frostc$Compiler$EnclosingContext* _1627;
frost$core$Object* _1628;
frost$core$Object* _1630;
org$frostlang$frostc$Compiler$EnclosingContext* _1632;
frost$core$Object* _1633;
frost$core$Object* _1636;
frost$core$Object* _1639;
frost$core$Object* _1642;
org$frostlang$frostc$Compiler$EnclosingContext* _1644;
frost$core$Object* _1645;
frost$core$Object* _1649;
frost$core$Object* _1652;
frost$core$Object* _1655;
org$frostlang$frostc$Compiler$EnclosingContext* _1658;
frost$core$Object* _1660;
org$frostlang$frostc$Compiler$EnclosingContext* _1662;
frost$core$Object* _1663;
frost$core$Object* _1666;
org$frostlang$frostc$Compiler$EnclosingContext* _1669;
bool _1670;
frost$core$Bit _1671;
bool _1672;
org$frostlang$frostc$Compiler$EnclosingContext* _1675;
bool _1676;
frost$core$Bit _1677;
bool _1678;
frost$core$Int _1680;
org$frostlang$frostc$Compiler$EnclosingContext* _1683;
frost$core$Int* _1684;
frost$core$Int _1685;
frost$core$Int _1686;
int64_t _1689;
int64_t _1690;
bool _1691;
frost$core$Bit _1692;
bool _1694;
frost$collections$ListView** _1696;
frost$collections$ListView* _1697;
frost$core$Int* _1698;
frost$core$Int _1699;
org$frostlang$frostc$Compiler$InlineReturn** _1700;
org$frostlang$frostc$Compiler$InlineReturn* _1701;
frost$core$Object* _1703;
org$frostlang$frostc$Compiler$InlineReturn* _1705;
frost$core$Object* _1706;
org$frostlang$frostc$IR$Block$ID* _1709;
org$frostlang$frostc$IR$Block$ID _1710;
org$frostlang$frostc$IR$Block$ID _1713;
frost$core$Bit _1714;
bool _1715;
org$frostlang$frostc$IR* _1718;
org$frostlang$frostc$IR$Statement* _1719;
frost$core$Int _1720;
org$frostlang$frostc$IR$Block$ID _1721;
$fn47 _1723;
org$frostlang$frostc$IR$Statement$ID _1724;
frost$core$Object* _1725;
org$frostlang$frostc$Compiler$InlineReturn* _1728;
frost$core$Object* _1729;
org$frostlang$frostc$IR* _1736;
org$frostlang$frostc$IR$Statement* _1737;
frost$core$Int _1738;
$fn48 _1740;
org$frostlang$frostc$IR$Statement$ID _1741;
frost$core$Object* _1742;
org$frostlang$frostc$Compiler$EnclosingContext* _1745;
frost$core$Object* _1746;
org$frostlang$frostc$Compiler$EnclosingContext* _1749;
frost$core$Object* _1750;
org$frostlang$frostc$MethodDecl* _1755;
frost$core$Object* _1756;
org$frostlang$frostc$ClassDecl* _1759;
frost$core$Object* _1760;
org$frostlang$frostc$IR* _1763;
frost$core$Object* _1764;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:29
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:30
_11 = &param0->currentClass;
_12 = *_11;
_13 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:30:50
_15 = (frost$core$Int) {0u};
_16 = _13.value;
_17 = _15.value;
_18 = _16 >= _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_24 = &_12->contents;
_25 = *_24;
_26 = ((frost$collections$CollectionView*) _25);
ITable* $tmp49 = _26->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
_27 = $tmp49->methods[0];
_28 = _27(_26);
_30 = _13.value;
_31 = _28.value;
_32 = _30 < _31;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block2; else goto block3;
block3:;
_36 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _36, &$s51);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_40 = &_12->contents;
_41 = *_40;
_42 = ((frost$collections$CollectionView*) _41);
ITable* $tmp52 = _42->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
_43 = $tmp52->methods[0];
_44 = _43(_42);
_45 = _44.value;
_46 = _13.value;
_47 = _45 > _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block6; else goto block7;
block7:;
_51 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _51);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_55 = &_12->contents;
_56 = *_55;
_57 = &_12->contents;
_58 = *_57;
_59 = ((frost$collections$CollectionView*) _58);
ITable* $tmp54 = _59->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
_60 = $tmp54->methods[0];
_61 = _60(_59);
_62 = (frost$core$Int) {1u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 - _64;
_66 = (frost$core$Int) {_65};
_67 = _66.value;
_68 = _13.value;
_69 = _67 - _68;
_70 = (frost$core$Int) {_69};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_72 = (frost$core$Int) {0u};
_73 = _70.value;
_74 = _72.value;
_75 = _73 >= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block11; else goto block10;
block11:;
_79 = ((frost$collections$CollectionView*) _56);
ITable* $tmp55 = _79->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp55 = $tmp55->next;
}
_80 = $tmp55->methods[0];
_81 = _80(_79);
_82 = _70.value;
_83 = _81.value;
_84 = _82 < _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block9; else goto block10;
block10:;
_88 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _88, &$s57);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_92 = &_56->data;
_93 = *_92;
_94 = _93.value;
_95 = frost$core$Int64$init$frost$core$Int(_70);
_96 = _95.value;
_97 = ((frost$core$Object**)_94)[_96];
_98 = _97;
frost$core$Frost$ref$frost$core$Object$Q(_98);
_101 = _97;
_102 = _101;
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = _97;
frost$core$Frost$unref$frost$core$Object$Q(_104);
_107 = ((org$frostlang$frostc$ClassDecl*) _101);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_109 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = *(&local1);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local1) = _107;
_115 = _101;
frost$core$Frost$unref$frost$core$Object$Q(_115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:31
_118 = &param0->currentMethod;
_119 = *_118;
_120 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:31:52
_122 = (frost$core$Int) {0u};
_123 = _120.value;
_124 = _122.value;
_125 = _123 >= _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block15; else goto block14;
block15:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_131 = &_119->contents;
_132 = *_131;
_133 = ((frost$collections$CollectionView*) _132);
ITable* $tmp58 = _133->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
_134 = $tmp58->methods[0];
_135 = _134(_133);
_137 = _120.value;
_138 = _135.value;
_139 = _137 < _138;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block13; else goto block14;
block14:;
_143 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _143, &$s60);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_147 = &_119->contents;
_148 = *_147;
_149 = ((frost$collections$CollectionView*) _148);
ITable* $tmp61 = _149->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
_150 = $tmp61->methods[0];
_151 = _150(_149);
_152 = _151.value;
_153 = _120.value;
_154 = _152 > _153;
_155 = (frost$core$Bit) {_154};
_156 = _155.value;
if (_156) goto block17; else goto block18;
block18:;
_158 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s62, _158);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_162 = &_119->contents;
_163 = *_162;
_164 = &_119->contents;
_165 = *_164;
_166 = ((frost$collections$CollectionView*) _165);
ITable* $tmp63 = _166->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
_167 = $tmp63->methods[0];
_168 = _167(_166);
_169 = (frost$core$Int) {1u};
_170 = _168.value;
_171 = _169.value;
_172 = _170 - _171;
_173 = (frost$core$Int) {_172};
_174 = _173.value;
_175 = _120.value;
_176 = _174 - _175;
_177 = (frost$core$Int) {_176};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_179 = (frost$core$Int) {0u};
_180 = _177.value;
_181 = _179.value;
_182 = _180 >= _181;
_183 = (frost$core$Bit) {_182};
_184 = _183.value;
if (_184) goto block22; else goto block21;
block22:;
_186 = ((frost$collections$CollectionView*) _163);
ITable* $tmp64 = _186->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp64 = $tmp64->next;
}
_187 = $tmp64->methods[0];
_188 = _187(_186);
_189 = _177.value;
_190 = _188.value;
_191 = _189 < _190;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block20; else goto block21;
block21:;
_195 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, _195, &$s66);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_199 = &_163->data;
_200 = *_199;
_201 = _200.value;
_202 = frost$core$Int64$init$frost$core$Int(_177);
_203 = _202.value;
_204 = ((frost$core$Object**)_201)[_203];
_205 = _204;
frost$core$Frost$ref$frost$core$Object$Q(_205);
_208 = _204;
_209 = _208;
frost$core$Frost$ref$frost$core$Object$Q(_209);
_211 = _204;
frost$core$Frost$unref$frost$core$Object$Q(_211);
_214 = ((org$frostlang$frostc$MethodDecl*) _208);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_216 = ((frost$core$Object*) _214);
frost$core$Frost$ref$frost$core$Object$Q(_216);
_218 = *(&local2);
_219 = ((frost$core$Object*) _218);
frost$core$Frost$unref$frost$core$Object$Q(_219);
*(&local2) = _214;
_222 = _208;
frost$core$Frost$unref$frost$core$Object$Q(_222);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:32
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Return.frost:32:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_227 = param1.file;
_228 = param1.line;
_229 = param1.column;
_230 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_227, _228, _229);
*(&local3) = _230;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:33
_234 = *(&local2);
_235 = ((org$frostlang$frostc$Symbol*) _234);
_236 = &_235->name;
_237 = *_236;
_238 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_237, &$s67);
_239 = _238.value;
if (_239) goto block27; else goto block25;
block27:;
_241 = *(&local2);
_242 = &_241->parameters;
_243 = *_242;
_244 = ((frost$collections$CollectionView*) _243);
ITable* $tmp68 = _244->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_245 = $tmp68->methods[0];
_246 = _245(_244);
_247 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:33:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_250 = _246.value;
_251 = _247.value;
_252 = _250 == _251;
_253 = (frost$core$Bit) {_252};
_255 = _253.value;
if (_255) goto block26; else goto block25;
block26:;
_257 = *(&local2);
_258 = &_257->owner;
_259 = *_258;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:34:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_264 = &_259->_valid;
_265 = *_264;
_267 = _265.value;
if (_267) goto block31; else goto block32;
block32:;
_269 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _269, &$s70);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_273 = &_259->value;
_274 = *_273;
_275 = _274;
_276 = _275;
frost$core$Frost$ref$frost$core$Object$Q(_276);
_279 = ((org$frostlang$frostc$ClassDecl*) _275);
_280 = &_279->name;
_281 = *_280;
_282 = ((frost$core$Equatable*) _281);
_283 = ((frost$core$Equatable*) &$s71);
ITable* $tmp72 = _282->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp72 = $tmp72->next;
}
_284 = $tmp72->methods[1];
_285 = _284(_282, _283);
_286 = _285.value;
_287 = _275;
frost$core$Frost$unref$frost$core$Object$Q(_287);
if (_286) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:36
_291 = *(&local1);
_292 = &_291->rawSuper;
_293 = *_292;
_294 = _293 != NULL;
_295 = (frost$core$Bit) {_294};
_296 = _295.value;
if (_296) goto block35; else goto block34;
block35:;
_298 = *(&local1);
_299 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, _298);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:36:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_302 = _299.value;
_303 = !_302;
_304 = (frost$core$Bit) {_303};
_306 = _304.value;
if (_306) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:37
_309 = *(&local1);
_310 = &_309->type;
_311 = *_310;
_312 = *(&local1);
_313 = &_312->rawSuper;
_314 = *_313;
_315 = _314 != NULL;
_316 = (frost$core$Bit) {_315};
_317 = _316.value;
if (_317) goto block37; else goto block38;
block38:;
_319 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, _319, &$s74);
abort(); // unreachable
block37:;
_322 = _314;
_323 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, _311, _322);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_325 = ((frost$core$Object*) _323);
frost$core$Frost$ref$frost$core$Object$Q(_325);
_327 = *(&local4);
_328 = ((frost$core$Object*) _327);
frost$core$Frost$unref$frost$core$Object$Q(_328);
*(&local4) = _323;
_331 = ((frost$core$Object*) _323);
frost$core$Frost$unref$frost$core$Object$Q(_331);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:38
_334 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_335 = (frost$core$Int) {9u};
_336 = *(&local3);
_337 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_338 = (frost$core$Int) {16u};
_339 = *(&local3);
_340 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_341 = (frost$core$Int) {41u};
_342 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(_340, _341, _342);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(_337, _338, _339, _340, &$s75);
_345 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_345);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_334, _335, _336, _337, _345);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _334);
_349 = ((frost$core$Object*) _345);
frost$core$Frost$unref$frost$core$Object$Q(_349);
_351 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_351);
_353 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_353);
_355 = ((frost$core$Object*) _334);
frost$core$Frost$unref$frost$core$Object$Q(_355);
_357 = *(&local4);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_358);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:42
_363 = &param0->inFieldCleanup;
_364 = *_363;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:42:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_367 = _364.value;
_368 = !_367;
_369 = (frost$core$Bit) {_368};
_371 = _369.value;
if (_371) goto block40; else goto block41;
block41:;
_373 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s76, _373);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:43
_377 = (frost$core$Bit) {true};
_378 = &param0->inFieldCleanup;
*_378 = _377;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:44
_381 = *(&local2);
_382 = &_381->owner;
_383 = *_382;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:44:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_388 = &_383->_valid;
_389 = *_388;
_391 = _389.value;
if (_391) goto block44; else goto block45;
block45:;
_393 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s77, _393, &$s78);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_397 = &_383->value;
_398 = *_397;
_399 = _398;
_400 = _399;
frost$core$Frost$ref$frost$core$Object$Q(_400);
_403 = ((org$frostlang$frostc$ClassDecl*) _399);
_404 = &_403->fields;
_405 = *_404;
_406 = ((frost$collections$Iterable*) _405);
ITable* $tmp79 = _406->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp79 = $tmp79->next;
}
_407 = $tmp79->methods[0];
_408 = _407(_406);
goto block46;
block46:;
ITable* $tmp80 = _408->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
_410 = $tmp80->methods[0];
_411 = _410(_408);
_412 = _411.value;
if (_412) goto block48; else goto block47;
block47:;
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp81 = _408->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_415 = $tmp81->methods[1];
_416 = _415(_408);
_417 = ((org$frostlang$frostc$FieldDecl*) _416);
_418 = ((frost$core$Object*) _417);
frost$core$Frost$ref$frost$core$Object$Q(_418);
_420 = *(&local5);
_421 = ((frost$core$Object*) _420);
frost$core$Frost$unref$frost$core$Object$Q(_421);
*(&local5) = _417;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:45
_425 = *(&local5);
_426 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, _425);
_427 = _426.value;
if (_427) goto block53; else goto block50;
block53:;
_429 = *(&local5);
_430 = &_429->annotations;
_431 = *_430;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Return.frost:45:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_434 = &_431->flags;
_435 = *_434;
_436 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_439 = _435.value;
_440 = _436.value;
_441 = _439 & _440;
_442 = (frost$core$Int) {_441};
_444 = (frost$core$Int) {0u};
_445 = _442.value;
_446 = _444.value;
_447 = _445 != _446;
_448 = (frost$core$Bit) {_447};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:45:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_452 = _448.value;
_453 = !_452;
_454 = (frost$core$Bit) {_453};
_456 = _454.value;
if (_456) goto block52; else goto block50;
block52:;
_458 = *(&local5);
_459 = &_458->fieldKind;
_460 = *_459;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp82->value = _460;
_461 = ((frost$core$Equatable*) $tmp82);
_462 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Return.frost:46:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_465 = &(&local7)->$rawValue;
*_465 = _462;
_467 = *(&local7);
*(&local6) = _467;
_470 = *(&local6);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp83;
$tmp83 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp83->value = _470;
_471 = ((frost$core$Equatable*) $tmp83);
ITable* $tmp84 = _461->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp84 = $tmp84->next;
}
_472 = $tmp84->methods[1];
_473 = _472(_461, _471);
_474 = _473.value;
_475 = ((frost$core$Object*) _471);
frost$core$Frost$unref$frost$core$Object$Q(_475);
_477 = ((frost$core$Object*) _461);
frost$core$Frost$unref$frost$core$Object$Q(_477);
if (_474) goto block51; else goto block50;
block51:;
_480 = *(&local5);
_481 = &_480->type;
_482 = *_481;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:46:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_485 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_482);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_488 = _485.value;
_489 = !_488;
_490 = (frost$core$Bit) {_489};
_492 = _490.value;
if (_492) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_495 = (frost$core$Bit) {false};
*(&local8) = _495;
goto block58;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_499 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _482);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_502 = _499.value;
_503 = !_502;
_504 = (frost$core$Bit) {_503};
*(&local8) = _504;
goto block58;
block58:;
_508 = *(&local8);
_509 = _508.value;
if (_509) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:47
_512 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$lvalue$FieldLValue), (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
_513 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_514 = (frost$core$Int) {22u};
_515 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_513, _514, _515, &$s85);
_517 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_518 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_517, _518);
_520 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _513, _517);
_521 = *(&local5);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(_512, param0, param1, _520, _521);
_523 = ($fn86) _512->$class->vtable[3];
_524 = _523(_512);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_526 = ((frost$core$Object*) _524);
frost$core$Frost$ref$frost$core$Object$Q(_526);
_528 = *(&local9);
_529 = ((frost$core$Object*) _528);
frost$core$Frost$unref$frost$core$Object$Q(_529);
*(&local9) = _524;
_532 = ((frost$core$Object*) _524);
frost$core$Frost$unref$frost$core$Object$Q(_532);
_534 = ((frost$core$Object*) _520);
frost$core$Frost$unref$frost$core$Object$Q(_534);
_536 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_536);
_538 = ((frost$core$Object*) _513);
frost$core$Frost$unref$frost$core$Object$Q(_538);
_540 = ((frost$core$Object*) _512);
frost$core$Frost$unref$frost$core$Object$Q(_540);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:51
_543 = *(&local9);
_544 = _543 == NULL;
_545 = (frost$core$Bit) {_544};
_546 = _545.value;
if (_546) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:52
_549 = *(&local9);
_550 = ((frost$core$Object*) _549);
frost$core$Frost$unref$frost$core$Object$Q(_550);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_553 = _416;
frost$core$Frost$unref$frost$core$Object$Q(_553);
_555 = *(&local5);
_556 = ((frost$core$Object*) _555);
frost$core$Frost$unref$frost$core$Object$Q(_556);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
_559 = ((frost$core$Object*) _408);
frost$core$Frost$unref$frost$core$Object$Q(_559);
_561 = _399;
frost$core$Frost$unref$frost$core$Object$Q(_561);
_563 = *(&local2);
_564 = ((frost$core$Object*) _563);
frost$core$Frost$unref$frost$core$Object$Q(_564);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_567 = *(&local1);
_568 = ((frost$core$Object*) _567);
frost$core$Frost$unref$frost$core$Object$Q(_568);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_571 = *(&local0);
_572 = ((frost$core$Object*) _571);
frost$core$Frost$unref$frost$core$Object$Q(_572);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:54
_577 = *(&local9);
_578 = _577 != NULL;
_579 = (frost$core$Bit) {_578};
_580 = _579.value;
if (_580) goto block65; else goto block66;
block66:;
_582 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _582, &$s88);
abort(); // unreachable
block65:;
_585 = _577;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, _585);
_587 = *(&local9);
_588 = ((frost$core$Object*) _587);
frost$core$Frost$unref$frost$core$Object$Q(_588);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block50;
block50:;
_592 = _416;
frost$core$Frost$unref$frost$core$Object$Q(_592);
_594 = *(&local5);
_595 = ((frost$core$Object*) _594);
frost$core$Frost$unref$frost$core$Object$Q(_595);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block46;
block48:;
_599 = ((frost$core$Object*) _408);
frost$core$Frost$unref$frost$core$Object$Q(_599);
_601 = _399;
frost$core$Frost$unref$frost$core$Object$Q(_601);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
_604 = &param0->inFieldCleanup;
_605 = *_604;
_606 = _605.value;
if (_606) goto block67; else goto block68;
block68:;
_608 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s89, _608);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:58
_612 = (frost$core$Bit) {false};
_613 = &param0->inFieldCleanup;
*_613 = _612;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:60
_617 = param2 != NULL;
_618 = (frost$core$Bit) {_617};
_619 = _618.value;
if (_619) goto block69; else goto block71;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
_622 = *(&local2);
_623 = &_622->returnType;
_624 = *_623;
_625 = &param0->VOID_TYPE;
_626 = *_625;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:61:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_629 = ((org$frostlang$frostc$Symbol*) _624);
_630 = &_629->name;
_631 = *_630;
_632 = ((org$frostlang$frostc$Symbol*) _626);
_633 = &_632->name;
_634 = *_633;
_635 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_631, _634);
_636 = _635.value;
if (_636) goto block75; else goto block76;
block75:;
_638 = &_624->typeKind;
_639 = *_638;
org$frostlang$frostc$Type$Kind$wrapper* $tmp90;
$tmp90 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp90->value = _639;
_640 = ((frost$core$Equatable*) $tmp90);
_641 = &_626->typeKind;
_642 = *_641;
org$frostlang$frostc$Type$Kind$wrapper* $tmp91;
$tmp91 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp91->value = _642;
_643 = ((frost$core$Equatable*) $tmp91);
ITable* $tmp92 = _640->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
_644 = $tmp92->methods[0];
_645 = _644(_640, _643);
_646 = ((frost$core$Object*) _643);
frost$core$Frost$unref$frost$core$Object$Q(_646);
_648 = ((frost$core$Object*) _640);
frost$core$Frost$unref$frost$core$Object$Q(_648);
*(&local10) = _645;
goto block77;
block76:;
*(&local10) = _635;
goto block77;
block77:;
_654 = *(&local10);
_656 = _654.value;
if (_656) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from Return.frost:62:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6108
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6108:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_663 = param1.file;
_664 = param1.line;
_665 = param1.column;
_666 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_663, _664, _665);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _666, &$s93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:63
_671 = *(&local2);
_672 = ((frost$core$Object*) _671);
frost$core$Frost$unref$frost$core$Object$Q(_672);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_675 = *(&local1);
_676 = ((frost$core$Object*) _675);
frost$core$Frost$unref$frost$core$Object$Q(_676);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_679 = *(&local0);
_680 = ((frost$core$Object*) _679);
frost$core$Frost$unref$frost$core$Object$Q(_680);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:65
_685 = param2 != NULL;
_686 = (frost$core$Bit) {_685};
_687 = _686.value;
if (_687) goto block80; else goto block81;
block81:;
_689 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _689, &$s95);
abort(); // unreachable
block80:;
_692 = param2;
_693 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_694 = (frost$core$Int) {3u};
_695 = *(&local2);
_696 = &_695->returnType;
_697 = *_696;
_698 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_693, _694, _697, _698);
_700 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _692, _693);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_702 = ((frost$core$Object*) _700);
frost$core$Frost$ref$frost$core$Object$Q(_702);
_704 = *(&local11);
_705 = ((frost$core$Object*) _704);
frost$core$Frost$unref$frost$core$Object$Q(_705);
*(&local11) = _700;
_708 = ((frost$core$Object*) _700);
frost$core$Frost$unref$frost$core$Object$Q(_708);
_710 = ((frost$core$Object*) _693);
frost$core$Frost$unref$frost$core$Object$Q(_710);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
_713 = *(&local11);
_714 = _713 == NULL;
_715 = (frost$core$Bit) {_714};
_716 = _715.value;
if (_716) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:68
_719 = *(&local11);
_720 = ((frost$core$Object*) _719);
frost$core$Frost$unref$frost$core$Object$Q(_720);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_723 = *(&local2);
_724 = ((frost$core$Object*) _723);
frost$core$Frost$unref$frost$core$Object$Q(_724);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_727 = *(&local1);
_728 = ((frost$core$Object*) _727);
frost$core$Frost$unref$frost$core$Object$Q(_728);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_731 = *(&local0);
_732 = ((frost$core$Object*) _731);
frost$core$Frost$unref$frost$core$Object$Q(_732);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:70
_737 = param3.value;
if (_737) goto block86; else goto block85;
block86:;
_739 = *(&local11);
_740 = _739 != NULL;
_741 = (frost$core$Bit) {_740};
_742 = _741.value;
if (_742) goto block87; else goto block88;
block88:;
_744 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _744, &$s97);
abort(); // unreachable
block87:;
_747 = _739;
_748 = ($fn98) _747->$class->vtable[2];
_749 = _748(_747);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_752 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_749);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_755 = _752.value;
_756 = !_755;
_757 = (frost$core$Bit) {_756};
_759 = _757.value;
if (_759) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_762 = (frost$core$Bit) {false};
*(&local12) = _762;
goto block89;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_766 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _749);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_769 = _766.value;
_770 = !_769;
_771 = (frost$core$Bit) {_770};
*(&local12) = _771;
goto block89;
block89:;
_775 = *(&local12);
_776 = _775.value;
_777 = ((frost$core$Object*) _749);
frost$core$Frost$unref$frost$core$Object$Q(_777);
if (_776) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:71
_781 = *(&local11);
_782 = _781 != NULL;
_783 = (frost$core$Bit) {_782};
_784 = _783.value;
if (_784) goto block94; else goto block95;
block95:;
_786 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _786, &$s100);
abort(); // unreachable
block94:;
_789 = _781;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, _789);
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:73
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:73:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5325
_795 = &param0->enclosingContexts;
_796 = *_795;
_797 = ((frost$collections$Iterable*) _796);
ITable* $tmp101 = _797->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp101 = $tmp101->next;
}
_798 = $tmp101->methods[0];
_799 = _798(_797);
goto block97;
block97:;
ITable* $tmp102 = _799->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
_801 = $tmp102->methods[0];
_802 = _801(_799);
_803 = _802.value;
if (_803) goto block99; else goto block98;
block98:;
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp103 = _799->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp103 = $tmp103->next;
}
_806 = $tmp103->methods[1];
_807 = _806(_799);
_808 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _807);
_809 = ((frost$core$Object*) _808);
frost$core$Frost$ref$frost$core$Object$Q(_809);
_811 = *(&local13);
_812 = ((frost$core$Object*) _811);
frost$core$Frost$unref$frost$core$Object$Q(_812);
*(&local13) = _808;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5326
_816 = *(&local13);
_817 = &_816->$rawValue;
_818 = *_817;
_819 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5327:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_822 = _818.value;
_823 = _819.value;
_824 = _822 == _823;
_825 = (frost$core$Bit) {_824};
_827 = _825.value;
if (_827) goto block101; else goto block100;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5328
_830 = _807;
frost$core$Frost$unref$frost$core$Object$Q(_830);
_832 = *(&local13);
_833 = ((frost$core$Object*) _832);
frost$core$Frost$unref$frost$core$Object$Q(_833);
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_836 = ((frost$core$Object*) _799);
frost$core$Frost$unref$frost$core$Object$Q(_836);
goto block96;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5331
_840 = *(&local13);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, _840);
_842 = _807;
frost$core$Frost$unref$frost$core$Object$Q(_842);
_844 = *(&local13);
_845 = ((frost$core$Object*) _844);
frost$core$Frost$unref$frost$core$Object$Q(_845);
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block97;
block99:;
_849 = ((frost$core$Object*) _799);
frost$core$Frost$unref$frost$core$Object$Q(_849);
goto block96;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
goto block103;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:75
_855 = &param0->enclosingContexts;
_856 = *_855;
_857 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:75:49
_859 = (frost$core$Int) {0u};
_860 = _857.value;
_861 = _859.value;
_862 = _860 >= _861;
_863 = (frost$core$Bit) {_862};
_864 = _863.value;
if (_864) goto block108; else goto block107;
block108:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_868 = &_856->contents;
_869 = *_868;
_870 = ((frost$collections$CollectionView*) _869);
ITable* $tmp104 = _870->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp104 = $tmp104->next;
}
_871 = $tmp104->methods[0];
_872 = _871(_870);
_874 = _857.value;
_875 = _872.value;
_876 = _874 < _875;
_877 = (frost$core$Bit) {_876};
_878 = _877.value;
if (_878) goto block106; else goto block107;
block107:;
_880 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, _880, &$s106);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_884 = &_856->contents;
_885 = *_884;
_886 = ((frost$collections$CollectionView*) _885);
ITable* $tmp107 = _886->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
_887 = $tmp107->methods[0];
_888 = _887(_886);
_889 = _888.value;
_890 = _857.value;
_891 = _889 > _890;
_892 = (frost$core$Bit) {_891};
_893 = _892.value;
if (_893) goto block110; else goto block111;
block111:;
_895 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s108, _895);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_899 = &_856->contents;
_900 = *_899;
_901 = &_856->contents;
_902 = *_901;
_903 = ((frost$collections$CollectionView*) _902);
ITable* $tmp109 = _903->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp109 = $tmp109->next;
}
_904 = $tmp109->methods[0];
_905 = _904(_903);
_906 = (frost$core$Int) {1u};
_907 = _905.value;
_908 = _906.value;
_909 = _907 - _908;
_910 = (frost$core$Int) {_909};
_911 = _910.value;
_912 = _857.value;
_913 = _911 - _912;
_914 = (frost$core$Int) {_913};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_916 = (frost$core$Int) {0u};
_917 = _914.value;
_918 = _916.value;
_919 = _917 >= _918;
_920 = (frost$core$Bit) {_919};
_921 = _920.value;
if (_921) goto block115; else goto block114;
block115:;
_923 = ((frost$collections$CollectionView*) _900);
ITable* $tmp110 = _923->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
_924 = $tmp110->methods[0];
_925 = _924(_923);
_926 = _914.value;
_927 = _925.value;
_928 = _926 < _927;
_929 = (frost$core$Bit) {_928};
_930 = _929.value;
if (_930) goto block113; else goto block114;
block114:;
_932 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _932, &$s112);
abort(); // unreachable
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_936 = &_900->data;
_937 = *_936;
_938 = _937.value;
_939 = frost$core$Int64$init$frost$core$Int(_914);
_940 = _939.value;
_941 = ((frost$core$Object**)_938)[_940];
_942 = _941;
frost$core$Frost$ref$frost$core$Object$Q(_942);
_945 = _941;
_946 = _945;
frost$core$Frost$ref$frost$core$Object$Q(_946);
_948 = _941;
frost$core$Frost$unref$frost$core$Object$Q(_948);
_951 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _945);
_952 = &_951->$rawValue;
_953 = *_952;
_954 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:76:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_957 = _953.value;
_958 = _954.value;
_959 = _957 == _958;
_960 = (frost$core$Bit) {_959};
_962 = _960.value;
if (_962) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:77
_965 = &param0->enclosingContexts;
_966 = *_965;
_967 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_966);
_968 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _967);
_969 = _967;
frost$core$Frost$unref$frost$core$Object$Q(_969);
_976 = _945;
frost$core$Frost$unref$frost$core$Object$Q(_976);
goto block103;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:80
_973 = _945;
frost$core$Frost$unref$frost$core$Object$Q(_973);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:84
_980 = &param0->returnVar;
_981 = *_980;
_982 = _981 != NULL;
_983 = (frost$core$Bit) {_982};
_984 = _983.value;
if (_984) goto block120; else goto block122;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:86
_988 = &param0->returnVar;
_989 = *_988;
_990 = _989 != NULL;
_991 = (frost$core$Bit) {_990};
_992 = _991.value;
if (_992) goto block123; else goto block124;
block124:;
_994 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _994, &$s114);
abort(); // unreachable
block123:;
_997 = _989;
_998 = &_997->storage;
_999 = *_998;
_1000 = &_999->$rawValue;
_1001 = *_1000;
_1002 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:87:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1005 = _1001.value;
_1006 = _1002.value;
_1007 = _1005 == _1006;
_1008 = (frost$core$Bit) {_1007};
_1010 = _1008.value;
if (_1010) goto block126; else goto block127;
block126:;
_1012 = &_999->$data.$LOCAL.field0;
_1013 = *_1012;
*(&local15) = _1013;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:88
_1016 = *(&local15);
*(&local14) = _1016;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:94
_1024 = *(&local0);
_1025 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1026 = (frost$core$Int) {23u};
_1027 = *(&local11);
_1028 = _1027 != NULL;
_1029 = (frost$core$Bit) {_1028};
_1030 = _1029.value;
if (_1030) goto block129; else goto block130;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:91
_1020 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s115, _1020);
abort(); // unreachable
block130:;
_1032 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s116, _1032, &$s117);
abort(); // unreachable
block129:;
_1035 = _1027;
_1036 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_1037 = (frost$core$Int) {2u};
_1038 = *(&local14);
_1039 = *(&local11);
_1040 = _1039 != NULL;
_1041 = (frost$core$Bit) {_1040};
_1042 = _1041.value;
if (_1042) goto block131; else goto block132;
block132:;
_1044 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s118, _1044, &$s119);
abort(); // unreachable
block131:;
_1047 = _1039;
_1048 = ($fn120) _1047->$class->vtable[2];
_1049 = _1048(_1047);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_1036, _1037, _1038, _1049);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_1025, _1026, param1, _1035, _1036);
_1052 = ($fn121) _1024->$class->vtable[2];
_1053 = _1052(_1024, _1025);
_1054 = ((frost$core$Object*) _1049);
frost$core$Frost$unref$frost$core$Object$Q(_1054);
_1056 = ((frost$core$Object*) _1036);
frost$core$Frost$unref$frost$core$Object$Q(_1056);
_1058 = ((frost$core$Object*) _1025);
frost$core$Frost$unref$frost$core$Object$Q(_1058);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:96
_1061 = *(&local0);
_1062 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1063 = (frost$core$Int) {1u};
_1064 = &param0->postconditionEntryBlock;
_1065 = *_1064;
_1066 = _1065.nonnull;
_1067 = (frost$core$Bit) {_1066};
_1068 = _1067.value;
if (_1068) goto block133; else goto block134;
block134:;
_1070 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s122, _1070, &$s123);
abort(); // unreachable
block133:;
_1073 = ((org$frostlang$frostc$IR$Block$ID) _1065.value);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1062, _1063, param1, _1073);
_1075 = ($fn124) _1061->$class->vtable[2];
_1076 = _1075(_1061, _1062);
_1077 = ((frost$core$Object*) _1062);
frost$core$Frost$unref$frost$core$Object$Q(_1077);
goto block121;
block122:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:99:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5743
_1084 = &param0->enclosingContexts;
_1085 = *_1084;
_1086 = ((frost$collections$Iterable*) _1085);
ITable* $tmp125 = _1086->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp125 = $tmp125->next;
}
_1087 = $tmp125->methods[0];
_1088 = _1087(_1086);
goto block136;
block136:;
ITable* $tmp126 = _1088->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp126 = $tmp126->next;
}
_1090 = $tmp126->methods[0];
_1091 = _1090(_1088);
_1092 = _1091.value;
if (_1092) goto block138; else goto block137;
block137:;
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp127 = _1088->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
_1095 = $tmp127->methods[1];
_1096 = _1095(_1088);
_1097 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1096);
_1098 = ((frost$core$Object*) _1097);
frost$core$Frost$ref$frost$core$Object$Q(_1098);
_1100 = *(&local17);
_1101 = ((frost$core$Object*) _1100);
frost$core$Frost$unref$frost$core$Object$Q(_1101);
*(&local17) = _1097;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5744
_1105 = *(&local17);
_1106 = &_1105->$rawValue;
_1107 = *_1106;
_1108 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5745:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1111 = _1107.value;
_1112 = _1108.value;
_1113 = _1111 == _1112;
_1114 = (frost$core$Bit) {_1113};
_1116 = _1114.value;
if (_1116) goto block140; else goto block139;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5746
_1119 = *(&local17);
_1120 = _1119;
_1121 = ((frost$core$Object*) _1120);
frost$core$Frost$ref$frost$core$Object$Q(_1121);
_1123 = _1096;
frost$core$Frost$unref$frost$core$Object$Q(_1123);
_1125 = *(&local17);
_1126 = ((frost$core$Object*) _1125);
frost$core$Frost$unref$frost$core$Object$Q(_1126);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1129 = ((frost$core$Object*) _1088);
frost$core$Frost$unref$frost$core$Object$Q(_1129);
*(&local16) = _1120;
_1132 = ((frost$core$Object*) _1120);
frost$core$Frost$ref$frost$core$Object$Q(_1132);
goto block135;
block139:;
_1135 = _1096;
frost$core$Frost$unref$frost$core$Object$Q(_1135);
_1137 = *(&local17);
_1138 = ((frost$core$Object*) _1137);
frost$core$Frost$unref$frost$core$Object$Q(_1138);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block136;
block138:;
_1142 = ((frost$core$Object*) _1088);
frost$core$Frost$unref$frost$core$Object$Q(_1142);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5750
_1145 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1145);
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1148 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1148);
goto block135;
block135:;
_1151 = *(&local16);
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1153 = ((frost$core$Object*) _1151);
frost$core$Frost$ref$frost$core$Object$Q(_1153);
_1155 = *(&local18);
_1156 = ((frost$core$Object*) _1155);
frost$core$Frost$unref$frost$core$Object$Q(_1156);
*(&local18) = _1151;
_1159 = ((frost$core$Object*) _1151);
frost$core$Frost$unref$frost$core$Object$Q(_1159);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
_1162 = *(&local18);
_1163 = _1162 != NULL;
_1164 = (frost$core$Bit) {_1163};
_1165 = _1164.value;
if (_1165) goto block142; else goto block144;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:101
_1168 = *(&local18);
_1169 = _1168 != NULL;
_1170 = (frost$core$Bit) {_1169};
_1171 = _1170.value;
if (_1171) goto block145; else goto block146;
block146:;
_1173 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s128, _1173, &$s129);
abort(); // unreachable
block145:;
_1176 = _1168;
_1177 = &_1176->$rawValue;
_1178 = *_1177;
_1179 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:102:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1182 = _1178.value;
_1183 = _1179.value;
_1184 = _1182 == _1183;
_1185 = (frost$core$Bit) {_1184};
_1187 = _1185.value;
if (_1187) goto block148; else goto block149;
block148:;
_1189 = &_1168->$data.$INLINE_CONTEXT.field0;
_1190 = *_1189;
_1191 = &_1168->$data.$INLINE_CONTEXT.field1;
_1192 = *_1191;
_1193 = &_1168->$data.$INLINE_CONTEXT.field2;
_1194 = *_1193;
*(&local19) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_1196 = ((frost$core$Object*) _1194);
frost$core$Frost$ref$frost$core$Object$Q(_1196);
_1198 = *(&local19);
_1199 = ((frost$core$Object*) _1198);
frost$core$Frost$unref$frost$core$Object$Q(_1199);
*(&local19) = _1194;
_1202 = &_1168->$data.$INLINE_CONTEXT.field3;
_1203 = *_1202;
*(&local20) = _1203;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:104
_1206 = *(&local19);
_1207 = &_1206->variable;
_1208 = *_1207;
_1209 = _1208 != NULL;
_1210 = (frost$core$Bit) {_1209};
_1211 = _1210.value;
if (_1211) goto block151; else goto block153;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:106
_1215 = *(&local19);
_1216 = &_1215->variable;
_1217 = *_1216;
_1218 = _1217 != NULL;
_1219 = (frost$core$Bit) {_1218};
_1220 = _1219.value;
if (_1220) goto block154; else goto block155;
block155:;
_1222 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, _1222, &$s131);
abort(); // unreachable
block154:;
_1225 = _1217;
_1226 = &_1225->storage;
_1227 = *_1226;
_1228 = &_1227->$rawValue;
_1229 = *_1228;
_1230 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:107:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1233 = _1229.value;
_1234 = _1230.value;
_1235 = _1233 == _1234;
_1236 = (frost$core$Bit) {_1235};
_1238 = _1236.value;
if (_1238) goto block157; else goto block158;
block157:;
_1240 = &_1227->$data.$LOCAL.field0;
_1241 = *_1240;
*(&local22) = _1241;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:108
_1244 = *(&local22);
*(&local21) = _1244;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:114
_1252 = *(&local0);
_1253 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1254 = (frost$core$Int) {23u};
_1255 = *(&local11);
_1256 = _1255 != NULL;
_1257 = (frost$core$Bit) {_1256};
_1258 = _1257.value;
if (_1258) goto block160; else goto block161;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:111
_1248 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s132, _1248);
abort(); // unreachable
block161:;
_1260 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s133, _1260, &$s134);
abort(); // unreachable
block160:;
_1263 = _1255;
_1264 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_1265 = (frost$core$Int) {2u};
_1266 = *(&local21);
_1267 = *(&local11);
_1268 = _1267 != NULL;
_1269 = (frost$core$Bit) {_1268};
_1270 = _1269.value;
if (_1270) goto block162; else goto block163;
block163:;
_1272 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s135, _1272, &$s136);
abort(); // unreachable
block162:;
_1275 = _1267;
_1276 = ($fn137) _1275->$class->vtable[2];
_1277 = _1276(_1275);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_1264, _1265, _1266, _1277);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_1253, _1254, param1, _1263, _1264);
_1280 = ($fn138) _1252->$class->vtable[2];
_1281 = _1280(_1252, _1253);
_1282 = ((frost$core$Object*) _1277);
frost$core$Frost$unref$frost$core$Object$Q(_1282);
_1284 = ((frost$core$Object*) _1264);
frost$core$Frost$unref$frost$core$Object$Q(_1284);
_1286 = ((frost$core$Object*) _1253);
frost$core$Frost$unref$frost$core$Object$Q(_1286);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:116
_1289 = param3.value;
if (_1289) goto block166; else goto block165;
block166:;
_1291 = *(&local11);
_1292 = _1291 != NULL;
_1293 = (frost$core$Bit) {_1292};
_1294 = _1293.value;
if (_1294) goto block167; else goto block168;
block168:;
_1296 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, _1296, &$s140);
abort(); // unreachable
block167:;
_1299 = _1291;
_1300 = ($fn141) _1299->$class->vtable[2];
_1301 = _1300(_1299);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:116:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_1304 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_1301);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1307 = _1304.value;
_1308 = !_1307;
_1309 = (frost$core$Bit) {_1308};
_1311 = _1309.value;
if (_1311) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_1314 = (frost$core$Bit) {false};
*(&local23) = _1314;
goto block169;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_1318 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _1301);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1321 = _1318.value;
_1322 = !_1321;
_1323 = (frost$core$Bit) {_1322};
*(&local23) = _1323;
goto block169;
block169:;
_1327 = *(&local23);
_1328 = _1327.value;
_1329 = ((frost$core$Object*) _1301);
frost$core$Frost$unref$frost$core$Object$Q(_1329);
if (_1328) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:117
_1333 = *(&local11);
_1334 = _1333 != NULL;
_1335 = (frost$core$Bit) {_1334};
_1336 = _1335.value;
if (_1336) goto block174; else goto block175;
block175:;
_1338 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _1338, &$s143);
abort(); // unreachable
block174:;
_1341 = _1333;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, _1341);
goto block165;
block165:;
goto block152;
block153:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:121
_1347 = *(&local19);
_1348 = *(&local11);
_1349 = ((frost$core$Object*) _1348);
frost$core$Frost$ref$frost$core$Object$Q(_1349);
_1351 = &_1347->value;
_1352 = *_1351;
_1353 = ((frost$core$Object*) _1352);
frost$core$Frost$unref$frost$core$Object$Q(_1353);
_1355 = &_1347->value;
*_1355 = _1348;
goto block152;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:123
_1359 = *(&local0);
_1360 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1361 = (frost$core$Int) {1u};
_1362 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1360, _1361, param1, _1362);
_1364 = ($fn144) _1359->$class->vtable[2];
_1365 = _1364(_1359, _1360);
_1366 = ((frost$core$Object*) _1360);
frost$core$Frost$unref$frost$core$Object$Q(_1366);
_1368 = *(&local19);
_1369 = ((frost$core$Object*) _1368);
frost$core$Frost$unref$frost$core$Object$Q(_1369);
*(&local19) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block143;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:126
_1374 = (frost$core$Int) {126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s145, _1374);
abort(); // unreachable
block144:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:131
_1380 = *(&local0);
_1381 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1382 = (frost$core$Int) {21u};
_1383 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q(_1381, _1382, param1, _1383);
_1385 = ($fn146) _1380->$class->vtable[2];
_1386 = _1385(_1380, _1381);
_1387 = ((frost$core$Object*) _1381);
frost$core$Frost$unref$frost$core$Object$Q(_1387);
goto block143;
block143:;
_1390 = *(&local18);
_1391 = ((frost$core$Object*) _1390);
frost$core$Frost$unref$frost$core$Object$Q(_1391);
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1394 = *(&local16);
_1395 = ((frost$core$Object*) _1394);
frost$core$Frost$unref$frost$core$Object$Q(_1395);
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block121;
block121:;
_1399 = *(&local11);
_1400 = ((frost$core$Object*) _1399);
frost$core$Frost$unref$frost$core$Object$Q(_1400);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block70;
block71:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:136
_1406 = *(&local2);
_1407 = &_1406->returnType;
_1408 = *_1407;
_1409 = ((frost$core$Equatable*) _1408);
_1410 = &param0->VOID_TYPE;
_1411 = *_1410;
_1412 = ((frost$core$Equatable*) _1411);
ITable* $tmp147 = _1409->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
_1413 = $tmp147->methods[1];
_1414 = _1413(_1409, _1412);
_1415 = _1414.value;
if (_1415) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:137
_1418 = *(&local2);
_1419 = &_1418->methodKind;
_1420 = *_1419;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp148;
$tmp148 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp148->value = _1420;
_1421 = ((frost$core$Equatable*) $tmp148);
_1422 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Return.frost:137:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_1425 = &(&local25)->$rawValue;
*_1425 = _1422;
_1427 = *(&local25);
*(&local24) = _1427;
_1430 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp149;
$tmp149 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp149->value = _1430;
_1431 = ((frost$core$Equatable*) $tmp149);
ITable* $tmp150 = _1421->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp150 = $tmp150->next;
}
_1432 = $tmp150->methods[0];
_1433 = _1432(_1421, _1431);
_1434 = _1433.value;
_1435 = ((frost$core$Object*) _1431);
frost$core$Frost$unref$frost$core$Object$Q(_1435);
_1437 = ((frost$core$Object*) _1421);
frost$core$Frost$unref$frost$core$Object$Q(_1437);
if (_1434) goto block178; else goto block179;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
_1441 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_1442 = (frost$core$Int) {39u};
_1443 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(_1441, _1442, _1443);
_1445 = _1441;
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q(param0, param1, _1445);
_1447 = ((frost$core$Object*) _1441);
frost$core$Frost$unref$frost$core$Object$Q(_1447);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:139
_1450 = *(&local2);
_1451 = ((frost$core$Object*) _1450);
frost$core$Frost$unref$frost$core$Object$Q(_1451);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1454 = *(&local1);
_1455 = ((frost$core$Object*) _1454);
frost$core$Frost$unref$frost$core$Object$Q(_1455);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1458 = *(&local0);
_1459 = ((frost$core$Object*) _1458);
frost$core$Frost$unref$frost$core$Object$Q(_1459);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block179:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:141
_1464 = *(&local2);
_1465 = &_1464->returnType;
_1466 = *_1465;
_1467 = ((frost$core$Object*) _1466);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:142:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_1470 = ($fn151) _1467->$class->vtable[0];
_1471 = _1470(_1467);
_1472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s152, _1471);
_1473 = ((frost$core$Object*) _1472);
frost$core$Frost$ref$frost$core$Object$Q(_1473);
_1475 = ((frost$core$Object*) _1472);
frost$core$Frost$unref$frost$core$Object$Q(_1475);
_1477 = ((frost$core$Object*) _1471);
frost$core$Frost$unref$frost$core$Object$Q(_1477);
_1480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1472, &$s153);
_1481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s154, _1480);
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from Return.frost:141:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6108
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6108:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_1486 = param1.file;
_1487 = param1.line;
_1488 = param1.column;
_1489 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_1486, _1487, _1488);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _1489, _1481);
_1493 = ((frost$core$Object*) _1481);
frost$core$Frost$unref$frost$core$Object$Q(_1493);
_1495 = ((frost$core$Object*) _1480);
frost$core$Frost$unref$frost$core$Object$Q(_1495);
_1497 = ((frost$core$Object*) _1472);
frost$core$Frost$unref$frost$core$Object$Q(_1497);
goto block177;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:144:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5325
_1503 = &param0->enclosingContexts;
_1504 = *_1503;
_1505 = ((frost$collections$Iterable*) _1504);
ITable* $tmp155 = _1505->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp155 = $tmp155->next;
}
_1506 = $tmp155->methods[0];
_1507 = _1506(_1505);
goto block185;
block185:;
ITable* $tmp156 = _1507->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp156 = $tmp156->next;
}
_1509 = $tmp156->methods[0];
_1510 = _1509(_1507);
_1511 = _1510.value;
if (_1511) goto block187; else goto block186;
block186:;
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp157 = _1507->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp157 = $tmp157->next;
}
_1514 = $tmp157->methods[1];
_1515 = _1514(_1507);
_1516 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1515);
_1517 = ((frost$core$Object*) _1516);
frost$core$Frost$ref$frost$core$Object$Q(_1517);
_1519 = *(&local26);
_1520 = ((frost$core$Object*) _1519);
frost$core$Frost$unref$frost$core$Object$Q(_1520);
*(&local26) = _1516;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5326
_1524 = *(&local26);
_1525 = &_1524->$rawValue;
_1526 = *_1525;
_1527 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5327:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1530 = _1526.value;
_1531 = _1527.value;
_1532 = _1530 == _1531;
_1533 = (frost$core$Bit) {_1532};
_1535 = _1533.value;
if (_1535) goto block189; else goto block188;
block189:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5328
_1538 = _1515;
frost$core$Frost$unref$frost$core$Object$Q(_1538);
_1540 = *(&local26);
_1541 = ((frost$core$Object*) _1540);
frost$core$Frost$unref$frost$core$Object$Q(_1541);
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1544 = ((frost$core$Object*) _1507);
frost$core$Frost$unref$frost$core$Object$Q(_1544);
goto block184;
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5331
_1548 = *(&local26);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, _1548);
_1550 = _1515;
frost$core$Frost$unref$frost$core$Object$Q(_1550);
_1552 = *(&local26);
_1553 = ((frost$core$Object*) _1552);
frost$core$Frost$unref$frost$core$Object$Q(_1553);
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block185;
block187:;
_1557 = ((frost$core$Object*) _1507);
frost$core$Frost$unref$frost$core$Object$Q(_1557);
goto block184;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
_1561 = &param0->postconditionEntryBlock;
_1562 = *_1561;
_1563 = _1562.nonnull;
_1564 = (frost$core$Bit) {_1563};
_1565 = _1564.value;
if (_1565) goto block191; else goto block193;
block191:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:146
_1568 = *(&local0);
_1569 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1570 = (frost$core$Int) {1u};
_1571 = &param0->postconditionEntryBlock;
_1572 = *_1571;
_1573 = _1572.nonnull;
_1574 = (frost$core$Bit) {_1573};
_1575 = _1574.value;
if (_1575) goto block194; else goto block195;
block195:;
_1577 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s158, _1577, &$s159);
abort(); // unreachable
block194:;
_1580 = ((org$frostlang$frostc$IR$Block$ID) _1572.value);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1569, _1570, param1, _1580);
_1582 = ($fn160) _1568->$class->vtable[2];
_1583 = _1582(_1568, _1569);
_1584 = ((frost$core$Object*) _1569);
frost$core$Frost$unref$frost$core$Object$Q(_1584);
goto block192;
block193:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:149:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5743
_1591 = &param0->enclosingContexts;
_1592 = *_1591;
_1593 = ((frost$collections$Iterable*) _1592);
ITable* $tmp161 = _1593->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp161 = $tmp161->next;
}
_1594 = $tmp161->methods[0];
_1595 = _1594(_1593);
goto block197;
block197:;
ITable* $tmp162 = _1595->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp162 = $tmp162->next;
}
_1597 = $tmp162->methods[0];
_1598 = _1597(_1595);
_1599 = _1598.value;
if (_1599) goto block199; else goto block198;
block198:;
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp163 = _1595->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
_1602 = $tmp163->methods[1];
_1603 = _1602(_1595);
_1604 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1603);
_1605 = ((frost$core$Object*) _1604);
frost$core$Frost$ref$frost$core$Object$Q(_1605);
_1607 = *(&local28);
_1608 = ((frost$core$Object*) _1607);
frost$core$Frost$unref$frost$core$Object$Q(_1608);
*(&local28) = _1604;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5744
_1612 = *(&local28);
_1613 = &_1612->$rawValue;
_1614 = *_1613;
_1615 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5745:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1618 = _1614.value;
_1619 = _1615.value;
_1620 = _1618 == _1619;
_1621 = (frost$core$Bit) {_1620};
_1623 = _1621.value;
if (_1623) goto block201; else goto block200;
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5746
_1626 = *(&local28);
_1627 = _1626;
_1628 = ((frost$core$Object*) _1627);
frost$core$Frost$ref$frost$core$Object$Q(_1628);
_1630 = _1603;
frost$core$Frost$unref$frost$core$Object$Q(_1630);
_1632 = *(&local28);
_1633 = ((frost$core$Object*) _1632);
frost$core$Frost$unref$frost$core$Object$Q(_1633);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1636 = ((frost$core$Object*) _1595);
frost$core$Frost$unref$frost$core$Object$Q(_1636);
*(&local27) = _1627;
_1639 = ((frost$core$Object*) _1627);
frost$core$Frost$ref$frost$core$Object$Q(_1639);
goto block196;
block200:;
_1642 = _1603;
frost$core$Frost$unref$frost$core$Object$Q(_1642);
_1644 = *(&local28);
_1645 = ((frost$core$Object*) _1644);
frost$core$Frost$unref$frost$core$Object$Q(_1645);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block197;
block199:;
_1649 = ((frost$core$Object*) _1595);
frost$core$Frost$unref$frost$core$Object$Q(_1649);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5750
_1652 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1652);
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1655 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1655);
goto block196;
block196:;
_1658 = *(&local27);
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1660 = ((frost$core$Object*) _1658);
frost$core$Frost$ref$frost$core$Object$Q(_1660);
_1662 = *(&local29);
_1663 = ((frost$core$Object*) _1662);
frost$core$Frost$unref$frost$core$Object$Q(_1663);
*(&local29) = _1658;
_1666 = ((frost$core$Object*) _1658);
frost$core$Frost$unref$frost$core$Object$Q(_1666);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:150
_1669 = *(&local29);
_1670 = _1669 != NULL;
_1671 = (frost$core$Bit) {_1670};
_1672 = _1671.value;
if (_1672) goto block203; else goto block205;
block203:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:151
_1675 = *(&local29);
_1676 = _1675 != NULL;
_1677 = (frost$core$Bit) {_1676};
_1678 = _1677.value;
if (_1678) goto block206; else goto block207;
block207:;
_1680 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s164, _1680, &$s165);
abort(); // unreachable
block206:;
_1683 = _1675;
_1684 = &_1683->$rawValue;
_1685 = *_1684;
_1686 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:152:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1689 = _1685.value;
_1690 = _1686.value;
_1691 = _1689 == _1690;
_1692 = (frost$core$Bit) {_1691};
_1694 = _1692.value;
if (_1694) goto block209; else goto block208;
block209:;
_1696 = &_1675->$data.$INLINE_CONTEXT.field0;
_1697 = *_1696;
_1698 = &_1675->$data.$INLINE_CONTEXT.field1;
_1699 = *_1698;
_1700 = &_1675->$data.$INLINE_CONTEXT.field2;
_1701 = *_1700;
*(&local30) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_1703 = ((frost$core$Object*) _1701);
frost$core$Frost$ref$frost$core$Object$Q(_1703);
_1705 = *(&local30);
_1706 = ((frost$core$Object*) _1705);
frost$core$Frost$unref$frost$core$Object$Q(_1706);
*(&local30) = _1701;
_1709 = &_1675->$data.$INLINE_CONTEXT.field3;
_1710 = *_1709;
*(&local31) = _1710;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:154
_1713 = *(&local31);
_1714 = (frost$core$Bit) {true};
_1715 = _1714.value;
if (_1715) goto block211; else goto block212;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:155
_1718 = *(&local0);
_1719 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1720 = (frost$core$Int) {1u};
_1721 = *(&local31);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1719, _1720, param1, _1721);
_1723 = ($fn166) _1718->$class->vtable[2];
_1724 = _1723(_1718, _1719);
_1725 = ((frost$core$Object*) _1719);
frost$core$Frost$unref$frost$core$Object$Q(_1725);
goto block212;
block212:;
_1728 = *(&local30);
_1729 = ((frost$core$Object*) _1728);
frost$core$Frost$unref$frost$core$Object$Q(_1729);
*(&local30) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block208;
block208:;
goto block204;
block205:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:161
_1736 = *(&local0);
_1737 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1738 = (frost$core$Int) {21u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q(_1737, _1738, param1, ((org$frostlang$frostc$IR$Value*) NULL));
_1740 = ($fn167) _1736->$class->vtable[2];
_1741 = _1740(_1736, _1737);
_1742 = ((frost$core$Object*) _1737);
frost$core$Frost$unref$frost$core$Object$Q(_1742);
goto block204;
block204:;
_1745 = *(&local29);
_1746 = ((frost$core$Object*) _1745);
frost$core$Frost$unref$frost$core$Object$Q(_1746);
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1749 = *(&local27);
_1750 = ((frost$core$Object*) _1749);
frost$core$Frost$unref$frost$core$Object$Q(_1750);
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block192;
block192:;
goto block70;
block70:;
_1755 = *(&local2);
_1756 = ((frost$core$Object*) _1755);
frost$core$Frost$unref$frost$core$Object$Q(_1756);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1759 = *(&local1);
_1760 = ((frost$core$Object*) _1759);
frost$core$Frost$unref$frost$core$Object$Q(_1760);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1763 = *(&local0);
_1764 = ((frost$core$Object*) _1763);
frost$core$Frost$unref$frost$core$Object$Q(_1764);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Return$init(void* rawSelf) {
org$frostlang$frostc$statement$Return* param0 = (org$frostlang$frostc$statement$Return*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Return$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Return* param0 = (org$frostlang$frostc$statement$Return*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:21
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

