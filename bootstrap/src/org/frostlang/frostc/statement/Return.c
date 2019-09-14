#include "org/frostlang/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
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
typedef org$frostlang$frostc$IR$Value* (*$fn84)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$Type* (*$fn96)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn118)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn119)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn122)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn135)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn136)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn139)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn142)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn144)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn149)(frost$core$Object*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn158)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn164)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn165)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 4852820752230860395, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -5865721028201646545, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 1290914291935992386, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$Bit _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:24
_1 = (frost$core$Bit) {true};
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit(param0, param1, param2, _1);
return;

}
void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, frost$core$Bit param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$FieldDecl$Kind local5;
org$frostlang$frostc$FieldDecl$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
frost$core$Bit local9;
org$frostlang$frostc$IR$Value* local10 = NULL;
frost$core$Bit local11;
org$frostlang$frostc$Compiler$EnclosingContext* local12 = NULL;
frost$core$Int local13;
frost$core$Int local14;
org$frostlang$frostc$Compiler$EnclosingContext* local15 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local16 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local17 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local18 = NULL;
org$frostlang$frostc$IR$Block$ID local19;
frost$core$Int local20;
frost$core$Int local21;
frost$core$Bit local22;
org$frostlang$frostc$MethodDecl$Kind local23;
org$frostlang$frostc$MethodDecl$Kind local24;
org$frostlang$frostc$Compiler$EnclosingContext* local25 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local26 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local27 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local28 = NULL;
org$frostlang$frostc$Compiler$InlineReturn* local29 = NULL;
org$frostlang$frostc$IR$Block$ID local30;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
frost$collections$Stack** _11;
frost$collections$Stack* _12;
frost$collections$Stack* _13;
frost$core$Int _14;
frost$core$Int _16;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$collections$Array** _25;
frost$collections$Array* _26;
frost$collections$CollectionView* _27;
$fn2 _28;
frost$core$Int _29;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$collections$Array** _41;
frost$collections$Array* _42;
frost$collections$CollectionView* _43;
$fn3 _44;
frost$core$Int _45;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$collections$Array** _56;
frost$collections$Array* _57;
frost$collections$Array* _58;
frost$collections$Array** _59;
frost$collections$Array* _60;
frost$collections$CollectionView* _61;
$fn4 _62;
frost$core$Int _63;
frost$core$Int _64;
int64_t _65;
int64_t _66;
int64_t _67;
frost$core$Int _68;
int64_t _69;
int64_t _70;
int64_t _71;
frost$core$Int _72;
frost$core$Int _74;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
frost$collections$CollectionView* _81;
$fn5 _82;
frost$core$Int _83;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
frost$core$Int _90;
frost$core$Object*** _94;
frost$core$Object** _95;
frost$core$Int64 _96;
int64_t _97;
frost$core$Object* _98;
frost$core$Object* _99;
frost$core$Object* _102;
frost$core$Object* _103;
frost$core$Object* _105;
org$frostlang$frostc$ClassDecl* _108;
frost$core$Object* _110;
org$frostlang$frostc$ClassDecl* _112;
frost$core$Object* _113;
frost$core$Object* _116;
frost$collections$Stack** _119;
frost$collections$Stack* _120;
frost$collections$Stack* _121;
frost$core$Int _122;
frost$core$Int _124;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
frost$collections$Array** _133;
frost$collections$Array* _134;
frost$collections$CollectionView* _135;
$fn6 _136;
frost$core$Int _137;
int64_t _139;
int64_t _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
frost$collections$Array** _149;
frost$collections$Array* _150;
frost$collections$CollectionView* _151;
$fn7 _152;
frost$core$Int _153;
int64_t _154;
int64_t _155;
bool _156;
frost$core$Bit _157;
bool _158;
frost$core$Int _160;
frost$collections$Array** _164;
frost$collections$Array* _165;
frost$collections$Array* _166;
frost$collections$Array** _167;
frost$collections$Array* _168;
frost$collections$CollectionView* _169;
$fn8 _170;
frost$core$Int _171;
frost$core$Int _172;
int64_t _173;
int64_t _174;
int64_t _175;
frost$core$Int _176;
int64_t _177;
int64_t _178;
int64_t _179;
frost$core$Int _180;
frost$core$Int _182;
int64_t _183;
int64_t _184;
bool _185;
frost$core$Bit _186;
bool _187;
frost$collections$CollectionView* _189;
$fn9 _190;
frost$core$Int _191;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _196;
frost$core$Int _198;
frost$core$Object*** _202;
frost$core$Object** _203;
frost$core$Int64 _204;
int64_t _205;
frost$core$Object* _206;
frost$core$Object* _207;
frost$core$Object* _210;
frost$core$Object* _211;
frost$core$Object* _213;
org$frostlang$frostc$MethodDecl* _216;
frost$core$Object* _218;
org$frostlang$frostc$MethodDecl* _220;
frost$core$Object* _221;
frost$core$Object* _224;
org$frostlang$frostc$MethodDecl* _227;
org$frostlang$frostc$Symbol* _228;
frost$core$String** _229;
frost$core$String* _230;
frost$core$Bit _231;
bool _232;
org$frostlang$frostc$MethodDecl* _234;
frost$collections$Array** _235;
frost$collections$Array* _236;
frost$collections$CollectionView* _237;
$fn10 _238;
frost$core$Int _239;
frost$core$Int _240;
int64_t _243;
int64_t _244;
bool _245;
frost$core$Bit _246;
bool _248;
org$frostlang$frostc$MethodDecl* _250;
frost$core$Weak** _251;
frost$core$Weak* _252;
frost$core$Weak* _253;
frost$core$Bit* _258;
frost$core$Bit _259;
bool _261;
frost$core$Int _263;
frost$core$Object** _267;
frost$core$Object* _268;
frost$core$Object* _269;
frost$core$Object* _270;
org$frostlang$frostc$ClassDecl* _273;
frost$core$String** _274;
frost$core$String* _275;
frost$core$Equatable* _276;
frost$core$Equatable* _277;
frost$core$Equatable* _278;
$fn11 _279;
frost$core$Bit _280;
bool _281;
frost$core$Object* _282;
org$frostlang$frostc$ClassDecl* _286;
org$frostlang$frostc$Type** _287;
org$frostlang$frostc$Type* _288;
bool _289;
frost$core$Bit _290;
bool _291;
org$frostlang$frostc$ClassDecl* _293;
frost$core$Bit _294;
bool _297;
bool _298;
frost$core$Bit _299;
bool _301;
org$frostlang$frostc$ClassDecl* _304;
org$frostlang$frostc$Type** _305;
org$frostlang$frostc$Type* _306;
org$frostlang$frostc$ClassDecl* _307;
org$frostlang$frostc$Type** _308;
org$frostlang$frostc$Type* _309;
bool _310;
frost$core$Bit _311;
bool _312;
frost$core$Int _314;
org$frostlang$frostc$Type* _317;
org$frostlang$frostc$Type* _318;
frost$core$Object* _320;
org$frostlang$frostc$Type* _322;
frost$core$Object* _323;
frost$core$Object* _326;
org$frostlang$frostc$ASTNode* _329;
frost$core$Int _330;
org$frostlang$frostc$ASTNode* _331;
frost$core$Int _332;
org$frostlang$frostc$ASTNode* _333;
frost$core$Int _334;
org$frostlang$frostc$FixedArray* _337;
org$frostlang$frostc$FixedArray* _338;
frost$core$Object* _342;
frost$core$Object* _344;
frost$core$Object* _346;
frost$core$Object* _348;
org$frostlang$frostc$Type* _350;
frost$core$Object* _351;
frost$core$Bit* _356;
frost$core$Bit _357;
bool _360;
bool _361;
frost$core$Bit _362;
bool _364;
frost$core$Int _366;
frost$core$Bit _370;
frost$core$Bit* _371;
org$frostlang$frostc$MethodDecl* _374;
frost$core$Weak** _375;
frost$core$Weak* _376;
frost$core$Weak* _377;
frost$core$Bit* _382;
frost$core$Bit _383;
bool _385;
frost$core$Int _387;
frost$core$Object** _391;
frost$core$Object* _392;
frost$core$Object* _393;
frost$core$Object* _394;
org$frostlang$frostc$ClassDecl* _397;
frost$collections$Array** _398;
frost$collections$Array* _399;
frost$collections$Iterable* _400;
frost$collections$Iterable* _401;
$fn12 _402;
frost$collections$Iterator* _403;
frost$collections$Iterator* _404;
frost$collections$Iterator* _406;
$fn13 _407;
frost$core$Bit _408;
bool _409;
frost$collections$Iterator* _412;
$fn14 _413;
frost$core$Object* _414;
org$frostlang$frostc$FieldDecl* _415;
frost$core$Object* _416;
org$frostlang$frostc$FieldDecl* _418;
frost$core$Object* _419;
org$frostlang$frostc$FieldDecl* _423;
frost$core$Bit _424;
bool _425;
org$frostlang$frostc$FieldDecl* _427;
org$frostlang$frostc$Annotations** _428;
org$frostlang$frostc$Annotations* _429;
frost$core$Int* _432;
frost$core$Int _433;
frost$core$Int _434;
int64_t _437;
int64_t _438;
int64_t _439;
frost$core$Int _440;
frost$core$Int _442;
int64_t _443;
int64_t _444;
bool _445;
frost$core$Bit _446;
bool _450;
bool _451;
frost$core$Bit _452;
bool _454;
org$frostlang$frostc$FieldDecl* _456;
org$frostlang$frostc$FieldDecl$Kind* _457;
org$frostlang$frostc$FieldDecl$Kind _458;
frost$core$Equatable* _459;
frost$core$Equatable* _460;
frost$core$Int _461;
frost$core$Int* _464;
org$frostlang$frostc$FieldDecl$Kind _466;
org$frostlang$frostc$FieldDecl$Kind _469;
frost$core$Equatable* _470;
$fn15 _471;
frost$core$Bit _472;
bool _473;
frost$core$Object* _474;
frost$core$Object* _476;
org$frostlang$frostc$FieldDecl* _479;
org$frostlang$frostc$Type** _480;
org$frostlang$frostc$Type* _481;
frost$core$Bit _484;
bool _487;
bool _488;
frost$core$Bit _489;
bool _491;
frost$core$Bit _494;
frost$core$Bit _498;
bool _501;
bool _502;
frost$core$Bit _503;
frost$core$Bit _507;
bool _508;
org$frostlang$frostc$lvalue$FieldLValue* _511;
org$frostlang$frostc$ASTNode* _512;
frost$core$Int _513;
org$frostlang$frostc$Compiler$TypeContext* _515;
frost$core$Int _516;
org$frostlang$frostc$IR$Value* _518;
org$frostlang$frostc$FieldDecl* _519;
$fn16 _521;
org$frostlang$frostc$IR$Value* _522;
frost$core$Object* _524;
org$frostlang$frostc$IR$Value* _526;
frost$core$Object* _527;
frost$core$Object* _530;
frost$core$Object* _532;
frost$core$Object* _534;
frost$core$Object* _536;
frost$core$Object* _538;
org$frostlang$frostc$IR$Value* _541;
bool _542;
frost$core$Bit _543;
bool _544;
org$frostlang$frostc$IR$Value* _547;
frost$core$Object* _548;
frost$core$Object* _551;
org$frostlang$frostc$FieldDecl* _553;
frost$core$Object* _554;
frost$core$Object* _557;
frost$core$Object* _559;
org$frostlang$frostc$MethodDecl* _561;
frost$core$Object* _562;
org$frostlang$frostc$ClassDecl* _565;
frost$core$Object* _566;
org$frostlang$frostc$IR* _569;
frost$core$Object* _570;
org$frostlang$frostc$IR$Value* _575;
bool _576;
frost$core$Bit _577;
bool _578;
frost$core$Int _580;
org$frostlang$frostc$IR$Value* _583;
org$frostlang$frostc$IR$Value* _585;
frost$core$Object* _586;
frost$core$Object* _590;
org$frostlang$frostc$FieldDecl* _592;
frost$core$Object* _593;
frost$core$Object* _597;
frost$core$Object* _599;
frost$core$Bit* _602;
frost$core$Bit _603;
bool _604;
frost$core$Int _606;
frost$core$Bit _610;
frost$core$Bit* _611;
bool _615;
frost$core$Bit _616;
bool _617;
org$frostlang$frostc$MethodDecl* _620;
org$frostlang$frostc$Type** _621;
org$frostlang$frostc$Type* _622;
org$frostlang$frostc$Type** _623;
org$frostlang$frostc$Type* _624;
org$frostlang$frostc$Symbol* _627;
frost$core$String** _628;
frost$core$String* _629;
org$frostlang$frostc$Symbol* _630;
frost$core$String** _631;
frost$core$String* _632;
frost$core$Bit _633;
bool _634;
org$frostlang$frostc$Type$Kind* _636;
org$frostlang$frostc$Type$Kind _637;
frost$core$Equatable* _638;
frost$core$Equatable* _639;
org$frostlang$frostc$Type$Kind* _640;
org$frostlang$frostc$Type$Kind _641;
frost$core$Equatable* _642;
$fn17 _643;
frost$core$Bit _644;
frost$core$Object* _645;
frost$core$Object* _647;
frost$core$Bit _653;
bool _655;
org$frostlang$frostc$MethodDecl* _660;
frost$core$Object* _661;
org$frostlang$frostc$ClassDecl* _664;
frost$core$Object* _665;
org$frostlang$frostc$IR* _668;
frost$core$Object* _669;
bool _674;
frost$core$Bit _675;
bool _676;
frost$core$Int _678;
org$frostlang$frostc$ASTNode* _681;
org$frostlang$frostc$Compiler$TypeContext* _682;
frost$core$Int _683;
org$frostlang$frostc$MethodDecl* _684;
org$frostlang$frostc$Type** _685;
org$frostlang$frostc$Type* _686;
frost$core$Bit _687;
org$frostlang$frostc$IR$Value* _689;
frost$core$Object* _691;
org$frostlang$frostc$IR$Value* _693;
frost$core$Object* _694;
frost$core$Object* _697;
frost$core$Object* _699;
org$frostlang$frostc$IR$Value* _702;
bool _703;
frost$core$Bit _704;
bool _705;
org$frostlang$frostc$IR$Value* _708;
frost$core$Object* _709;
org$frostlang$frostc$MethodDecl* _712;
frost$core$Object* _713;
org$frostlang$frostc$ClassDecl* _716;
frost$core$Object* _717;
org$frostlang$frostc$IR* _720;
frost$core$Object* _721;
bool _726;
org$frostlang$frostc$IR$Value* _728;
bool _729;
frost$core$Bit _730;
bool _731;
frost$core$Int _733;
org$frostlang$frostc$IR$Value* _736;
$fn18 _737;
org$frostlang$frostc$Type* _738;
frost$core$Bit _741;
bool _744;
bool _745;
frost$core$Bit _746;
bool _748;
frost$core$Bit _751;
frost$core$Bit _755;
bool _758;
bool _759;
frost$core$Bit _760;
frost$core$Bit _764;
bool _765;
frost$core$Object* _766;
org$frostlang$frostc$IR$Value* _770;
bool _771;
frost$core$Bit _772;
bool _773;
frost$core$Int _775;
org$frostlang$frostc$IR$Value* _778;
frost$collections$Stack** _784;
frost$collections$Stack* _785;
frost$collections$Iterable* _786;
frost$collections$Iterable* _787;
$fn19 _788;
frost$collections$Iterator* _789;
frost$collections$Iterator* _790;
frost$collections$Iterator* _792;
$fn20 _793;
frost$core$Bit _794;
bool _795;
frost$collections$Iterator* _798;
$fn21 _799;
frost$core$Object* _800;
org$frostlang$frostc$Compiler$EnclosingContext* _801;
frost$core$Object* _802;
org$frostlang$frostc$Compiler$EnclosingContext* _804;
frost$core$Object* _805;
org$frostlang$frostc$Compiler$EnclosingContext* _809;
frost$core$Int* _810;
frost$core$Int _811;
frost$core$Int _812;
int64_t _815;
int64_t _816;
bool _817;
frost$core$Bit _818;
bool _820;
frost$core$Object* _823;
org$frostlang$frostc$Compiler$EnclosingContext* _825;
frost$core$Object* _826;
frost$core$Object* _829;
org$frostlang$frostc$Compiler$EnclosingContext* _833;
frost$core$Object* _835;
org$frostlang$frostc$Compiler$EnclosingContext* _837;
frost$core$Object* _838;
frost$core$Object* _842;
frost$collections$Stack** _848;
frost$collections$Stack* _849;
frost$collections$Stack* _850;
frost$core$Int _851;
frost$core$Int _853;
int64_t _854;
int64_t _855;
bool _856;
frost$core$Bit _857;
bool _858;
frost$collections$Array** _862;
frost$collections$Array* _863;
frost$collections$CollectionView* _864;
$fn22 _865;
frost$core$Int _866;
int64_t _868;
int64_t _869;
bool _870;
frost$core$Bit _871;
bool _872;
frost$core$Int _874;
frost$collections$Array** _878;
frost$collections$Array* _879;
frost$collections$CollectionView* _880;
$fn23 _881;
frost$core$Int _882;
int64_t _883;
int64_t _884;
bool _885;
frost$core$Bit _886;
bool _887;
frost$core$Int _889;
frost$collections$Array** _893;
frost$collections$Array* _894;
frost$collections$Array* _895;
frost$collections$Array** _896;
frost$collections$Array* _897;
frost$collections$CollectionView* _898;
$fn24 _899;
frost$core$Int _900;
frost$core$Int _901;
int64_t _902;
int64_t _903;
int64_t _904;
frost$core$Int _905;
int64_t _906;
int64_t _907;
int64_t _908;
frost$core$Int _909;
frost$core$Int _911;
int64_t _912;
int64_t _913;
bool _914;
frost$core$Bit _915;
bool _916;
frost$collections$CollectionView* _918;
$fn25 _919;
frost$core$Int _920;
int64_t _921;
int64_t _922;
bool _923;
frost$core$Bit _924;
bool _925;
frost$core$Int _927;
frost$core$Object*** _931;
frost$core$Object** _932;
frost$core$Int64 _933;
int64_t _934;
frost$core$Object* _935;
frost$core$Object* _936;
frost$core$Object* _939;
frost$core$Object* _940;
frost$core$Object* _942;
org$frostlang$frostc$Compiler$EnclosingContext* _945;
frost$core$Int* _946;
frost$core$Int _947;
frost$core$Int _948;
int64_t _951;
int64_t _952;
bool _953;
frost$core$Bit _954;
bool _956;
frost$collections$Stack** _959;
frost$collections$Stack* _960;
frost$collections$Stack* _961;
frost$core$Object* _962;
org$frostlang$frostc$Compiler$EnclosingContext* _963;
frost$core$Object* _964;
frost$core$Object* _971;
frost$core$Object* _968;
org$frostlang$frostc$Variable** _975;
org$frostlang$frostc$Variable* _976;
bool _977;
frost$core$Bit _978;
bool _979;
org$frostlang$frostc$Variable** _983;
org$frostlang$frostc$Variable* _984;
bool _985;
frost$core$Bit _986;
bool _987;
frost$core$Int _989;
org$frostlang$frostc$Variable* _992;
org$frostlang$frostc$Variable$Storage** _993;
org$frostlang$frostc$Variable$Storage* _994;
frost$core$Int* _995;
frost$core$Int _996;
frost$core$Int _997;
int64_t _1000;
int64_t _1001;
bool _1002;
frost$core$Bit _1003;
bool _1005;
frost$core$Int* _1007;
frost$core$Int _1008;
frost$core$Int _1011;
org$frostlang$frostc$IR* _1019;
org$frostlang$frostc$IR$Statement* _1020;
frost$core$Int _1021;
org$frostlang$frostc$IR$Value* _1022;
bool _1023;
frost$core$Bit _1024;
bool _1025;
frost$core$Int _1015;
frost$core$Int _1027;
org$frostlang$frostc$IR$Value* _1030;
org$frostlang$frostc$IR$Value* _1031;
frost$core$Int _1032;
frost$core$Int _1033;
org$frostlang$frostc$IR$Value* _1034;
bool _1035;
frost$core$Bit _1036;
bool _1037;
frost$core$Int _1039;
org$frostlang$frostc$IR$Value* _1042;
$fn26 _1043;
org$frostlang$frostc$Type* _1044;
$fn27 _1047;
org$frostlang$frostc$IR$Statement$ID _1048;
frost$core$Object* _1049;
frost$core$Object* _1051;
frost$core$Object* _1053;
org$frostlang$frostc$IR* _1056;
org$frostlang$frostc$IR$Statement* _1057;
frost$core$Int _1058;
org$frostlang$frostc$IR$Block$ID$nullable* _1059;
org$frostlang$frostc$IR$Block$ID$nullable _1060;
bool _1061;
frost$core$Bit _1062;
bool _1063;
frost$core$Int _1065;
org$frostlang$frostc$IR$Block$ID _1068;
$fn28 _1070;
org$frostlang$frostc$IR$Statement$ID _1071;
frost$core$Object* _1072;
frost$collections$Stack** _1079;
frost$collections$Stack* _1080;
frost$collections$Iterable* _1081;
frost$collections$Iterable* _1082;
$fn29 _1083;
frost$collections$Iterator* _1084;
frost$collections$Iterator* _1085;
frost$collections$Iterator* _1087;
$fn30 _1088;
frost$core$Bit _1089;
bool _1090;
frost$collections$Iterator* _1093;
$fn31 _1094;
frost$core$Object* _1095;
org$frostlang$frostc$Compiler$EnclosingContext* _1096;
frost$core$Object* _1097;
org$frostlang$frostc$Compiler$EnclosingContext* _1099;
frost$core$Object* _1100;
org$frostlang$frostc$Compiler$EnclosingContext* _1104;
frost$core$Int* _1105;
frost$core$Int _1106;
frost$core$Int _1107;
int64_t _1110;
int64_t _1111;
bool _1112;
frost$core$Bit _1113;
bool _1115;
org$frostlang$frostc$Compiler$EnclosingContext* _1118;
org$frostlang$frostc$Compiler$EnclosingContext* _1119;
frost$core$Object* _1120;
frost$core$Object* _1122;
org$frostlang$frostc$Compiler$EnclosingContext* _1124;
frost$core$Object* _1125;
frost$core$Object* _1128;
frost$core$Object* _1131;
frost$core$Object* _1134;
org$frostlang$frostc$Compiler$EnclosingContext* _1136;
frost$core$Object* _1137;
frost$core$Object* _1141;
frost$core$Object* _1144;
frost$core$Object* _1147;
org$frostlang$frostc$Compiler$EnclosingContext* _1150;
frost$core$Object* _1152;
org$frostlang$frostc$Compiler$EnclosingContext* _1154;
frost$core$Object* _1155;
frost$core$Object* _1158;
org$frostlang$frostc$Compiler$EnclosingContext* _1161;
bool _1162;
frost$core$Bit _1163;
bool _1164;
org$frostlang$frostc$Compiler$EnclosingContext* _1167;
bool _1168;
frost$core$Bit _1169;
bool _1170;
frost$core$Int _1172;
org$frostlang$frostc$Compiler$EnclosingContext* _1175;
frost$core$Int* _1176;
frost$core$Int _1177;
frost$core$Int _1178;
int64_t _1181;
int64_t _1182;
bool _1183;
frost$core$Bit _1184;
bool _1186;
frost$collections$ListView** _1188;
frost$collections$ListView* _1189;
frost$core$Int* _1190;
frost$core$Int _1191;
org$frostlang$frostc$Compiler$InlineReturn** _1192;
org$frostlang$frostc$Compiler$InlineReturn* _1193;
frost$core$Object* _1195;
org$frostlang$frostc$Compiler$InlineReturn* _1197;
frost$core$Object* _1198;
org$frostlang$frostc$IR$Block$ID* _1201;
org$frostlang$frostc$IR$Block$ID _1202;
org$frostlang$frostc$Compiler$InlineReturn* _1205;
org$frostlang$frostc$Variable** _1206;
org$frostlang$frostc$Variable* _1207;
bool _1208;
frost$core$Bit _1209;
bool _1210;
org$frostlang$frostc$Compiler$InlineReturn* _1214;
org$frostlang$frostc$Variable** _1215;
org$frostlang$frostc$Variable* _1216;
bool _1217;
frost$core$Bit _1218;
bool _1219;
frost$core$Int _1221;
org$frostlang$frostc$Variable* _1224;
org$frostlang$frostc$Variable$Storage** _1225;
org$frostlang$frostc$Variable$Storage* _1226;
frost$core$Int* _1227;
frost$core$Int _1228;
frost$core$Int _1229;
int64_t _1232;
int64_t _1233;
bool _1234;
frost$core$Bit _1235;
bool _1237;
frost$core$Int* _1239;
frost$core$Int _1240;
frost$core$Int _1243;
org$frostlang$frostc$IR* _1251;
org$frostlang$frostc$IR$Statement* _1252;
frost$core$Int _1253;
org$frostlang$frostc$IR$Value* _1254;
bool _1255;
frost$core$Bit _1256;
bool _1257;
frost$core$Int _1247;
frost$core$Int _1259;
org$frostlang$frostc$IR$Value* _1262;
org$frostlang$frostc$IR$Value* _1263;
frost$core$Int _1264;
frost$core$Int _1265;
org$frostlang$frostc$IR$Value* _1266;
bool _1267;
frost$core$Bit _1268;
bool _1269;
frost$core$Int _1271;
org$frostlang$frostc$IR$Value* _1274;
$fn32 _1275;
org$frostlang$frostc$Type* _1276;
$fn33 _1279;
org$frostlang$frostc$IR$Statement$ID _1280;
frost$core$Object* _1281;
frost$core$Object* _1283;
frost$core$Object* _1285;
bool _1288;
org$frostlang$frostc$IR$Value* _1290;
bool _1291;
frost$core$Bit _1292;
bool _1293;
frost$core$Int _1295;
org$frostlang$frostc$IR$Value* _1298;
$fn34 _1299;
org$frostlang$frostc$Type* _1300;
frost$core$Bit _1303;
bool _1306;
bool _1307;
frost$core$Bit _1308;
bool _1310;
frost$core$Bit _1313;
frost$core$Bit _1317;
bool _1320;
bool _1321;
frost$core$Bit _1322;
frost$core$Bit _1326;
bool _1327;
frost$core$Object* _1328;
org$frostlang$frostc$IR$Value* _1332;
bool _1333;
frost$core$Bit _1334;
bool _1335;
frost$core$Int _1337;
org$frostlang$frostc$IR$Value* _1340;
org$frostlang$frostc$Compiler$InlineReturn* _1346;
org$frostlang$frostc$IR$Value* _1347;
frost$core$Object* _1348;
org$frostlang$frostc$IR$Value** _1350;
org$frostlang$frostc$IR$Value* _1351;
frost$core$Object* _1352;
org$frostlang$frostc$IR$Value** _1354;
org$frostlang$frostc$IR* _1358;
org$frostlang$frostc$IR$Statement* _1359;
frost$core$Int _1360;
org$frostlang$frostc$IR$Block$ID _1361;
$fn35 _1363;
org$frostlang$frostc$IR$Statement$ID _1364;
frost$core$Object* _1365;
org$frostlang$frostc$Compiler$InlineReturn* _1367;
frost$core$Object* _1368;
frost$core$Int _1373;
org$frostlang$frostc$IR* _1379;
org$frostlang$frostc$IR$Statement* _1380;
frost$core$Int _1381;
org$frostlang$frostc$IR$Value* _1382;
$fn36 _1384;
org$frostlang$frostc$IR$Statement$ID _1385;
frost$core$Object* _1386;
org$frostlang$frostc$Compiler$EnclosingContext* _1389;
frost$core$Object* _1390;
org$frostlang$frostc$Compiler$EnclosingContext* _1393;
frost$core$Object* _1394;
org$frostlang$frostc$IR$Value* _1398;
frost$core$Object* _1399;
org$frostlang$frostc$MethodDecl* _1405;
org$frostlang$frostc$Type** _1406;
org$frostlang$frostc$Type* _1407;
frost$core$Equatable* _1408;
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
frost$core$Equatable* _1422;
frost$core$Int _1423;
frost$core$Int* _1426;
org$frostlang$frostc$MethodDecl$Kind _1428;
org$frostlang$frostc$MethodDecl$Kind _1431;
frost$core$Equatable* _1432;
$fn38 _1433;
frost$core$Bit _1434;
bool _1435;
frost$core$Object* _1436;
frost$core$Object* _1438;
org$frostlang$frostc$ASTNode* _1442;
frost$core$Int _1443;
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
frost$core$Object* _1483;
frost$core$Object* _1485;
frost$core$Object* _1487;
frost$collections$Stack** _1493;
frost$collections$Stack* _1494;
frost$collections$Iterable* _1495;
frost$collections$Iterable* _1496;
$fn40 _1497;
frost$collections$Iterator* _1498;
frost$collections$Iterator* _1499;
frost$collections$Iterator* _1501;
$fn41 _1502;
frost$core$Bit _1503;
bool _1504;
frost$collections$Iterator* _1507;
$fn42 _1508;
frost$core$Object* _1509;
org$frostlang$frostc$Compiler$EnclosingContext* _1510;
frost$core$Object* _1511;
org$frostlang$frostc$Compiler$EnclosingContext* _1513;
frost$core$Object* _1514;
org$frostlang$frostc$Compiler$EnclosingContext* _1518;
frost$core$Int* _1519;
frost$core$Int _1520;
frost$core$Int _1521;
int64_t _1524;
int64_t _1525;
bool _1526;
frost$core$Bit _1527;
bool _1529;
frost$core$Object* _1532;
org$frostlang$frostc$Compiler$EnclosingContext* _1534;
frost$core$Object* _1535;
frost$core$Object* _1538;
org$frostlang$frostc$Compiler$EnclosingContext* _1542;
frost$core$Object* _1544;
org$frostlang$frostc$Compiler$EnclosingContext* _1546;
frost$core$Object* _1547;
frost$core$Object* _1551;
org$frostlang$frostc$IR$Block$ID$nullable* _1555;
org$frostlang$frostc$IR$Block$ID$nullable _1556;
bool _1557;
frost$core$Bit _1558;
bool _1559;
org$frostlang$frostc$IR* _1562;
org$frostlang$frostc$IR$Statement* _1563;
frost$core$Int _1564;
org$frostlang$frostc$IR$Block$ID$nullable* _1565;
org$frostlang$frostc$IR$Block$ID$nullable _1566;
bool _1567;
frost$core$Bit _1568;
bool _1569;
frost$core$Int _1571;
org$frostlang$frostc$IR$Block$ID _1574;
$fn43 _1576;
org$frostlang$frostc$IR$Statement$ID _1577;
frost$core$Object* _1578;
frost$collections$Stack** _1585;
frost$collections$Stack* _1586;
frost$collections$Iterable* _1587;
frost$collections$Iterable* _1588;
$fn44 _1589;
frost$collections$Iterator* _1590;
frost$collections$Iterator* _1591;
frost$collections$Iterator* _1593;
$fn45 _1594;
frost$core$Bit _1595;
bool _1596;
frost$collections$Iterator* _1599;
$fn46 _1600;
frost$core$Object* _1601;
org$frostlang$frostc$Compiler$EnclosingContext* _1602;
frost$core$Object* _1603;
org$frostlang$frostc$Compiler$EnclosingContext* _1605;
frost$core$Object* _1606;
org$frostlang$frostc$Compiler$EnclosingContext* _1610;
frost$core$Int* _1611;
frost$core$Int _1612;
frost$core$Int _1613;
int64_t _1616;
int64_t _1617;
bool _1618;
frost$core$Bit _1619;
bool _1621;
org$frostlang$frostc$Compiler$EnclosingContext* _1624;
org$frostlang$frostc$Compiler$EnclosingContext* _1625;
frost$core$Object* _1626;
frost$core$Object* _1628;
org$frostlang$frostc$Compiler$EnclosingContext* _1630;
frost$core$Object* _1631;
frost$core$Object* _1634;
frost$core$Object* _1637;
frost$core$Object* _1640;
org$frostlang$frostc$Compiler$EnclosingContext* _1642;
frost$core$Object* _1643;
frost$core$Object* _1647;
frost$core$Object* _1650;
frost$core$Object* _1653;
org$frostlang$frostc$Compiler$EnclosingContext* _1656;
frost$core$Object* _1658;
org$frostlang$frostc$Compiler$EnclosingContext* _1660;
frost$core$Object* _1661;
frost$core$Object* _1664;
org$frostlang$frostc$Compiler$EnclosingContext* _1667;
bool _1668;
frost$core$Bit _1669;
bool _1670;
org$frostlang$frostc$Compiler$EnclosingContext* _1673;
bool _1674;
frost$core$Bit _1675;
bool _1676;
frost$core$Int _1678;
org$frostlang$frostc$Compiler$EnclosingContext* _1681;
frost$core$Int* _1682;
frost$core$Int _1683;
frost$core$Int _1684;
int64_t _1687;
int64_t _1688;
bool _1689;
frost$core$Bit _1690;
bool _1692;
frost$collections$ListView** _1694;
frost$collections$ListView* _1695;
frost$core$Int* _1696;
frost$core$Int _1697;
org$frostlang$frostc$Compiler$InlineReturn** _1698;
org$frostlang$frostc$Compiler$InlineReturn* _1699;
frost$core$Object* _1701;
org$frostlang$frostc$Compiler$InlineReturn* _1703;
frost$core$Object* _1704;
org$frostlang$frostc$IR$Block$ID* _1707;
org$frostlang$frostc$IR$Block$ID _1708;
org$frostlang$frostc$IR$Block$ID _1711;
frost$core$Bit _1712;
bool _1713;
org$frostlang$frostc$IR* _1716;
org$frostlang$frostc$IR$Statement* _1717;
frost$core$Int _1718;
org$frostlang$frostc$IR$Block$ID _1719;
$fn47 _1721;
org$frostlang$frostc$IR$Statement$ID _1722;
frost$core$Object* _1723;
org$frostlang$frostc$Compiler$InlineReturn* _1726;
frost$core$Object* _1727;
org$frostlang$frostc$IR* _1734;
org$frostlang$frostc$IR$Statement* _1735;
frost$core$Int _1736;
$fn48 _1738;
org$frostlang$frostc$IR$Statement$ID _1739;
frost$core$Object* _1740;
org$frostlang$frostc$Compiler$EnclosingContext* _1743;
frost$core$Object* _1744;
org$frostlang$frostc$Compiler$EnclosingContext* _1747;
frost$core$Object* _1748;
org$frostlang$frostc$MethodDecl* _1753;
frost$core$Object* _1754;
org$frostlang$frostc$ClassDecl* _1757;
frost$core$Object* _1758;
org$frostlang$frostc$IR* _1761;
frost$core$Object* _1762;
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
_13 = _12;
_14 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:30:50
_16 = (frost$core$Int) {0u};
_17 = _14.value;
_18 = _16.value;
_19 = _17 >= _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_25 = &_13->contents;
_26 = *_25;
_27 = ((frost$collections$CollectionView*) _26);
ITable* $tmp49 = _27->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
_28 = $tmp49->methods[0];
_29 = _28(_27);
_31 = _14.value;
_32 = _29.value;
_33 = _31 < _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block2; else goto block3;
block3:;
_37 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _37, &$s51);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_41 = &_13->contents;
_42 = *_41;
_43 = ((frost$collections$CollectionView*) _42);
ITable* $tmp52 = _43->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
_44 = $tmp52->methods[0];
_45 = _44(_43);
_46 = _45.value;
_47 = _14.value;
_48 = _46 > _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block6; else goto block7;
block7:;
_52 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _52);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_56 = &_13->contents;
_57 = *_56;
_58 = _57;
_59 = &_13->contents;
_60 = *_59;
_61 = ((frost$collections$CollectionView*) _60);
ITable* $tmp54 = _61->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
_62 = $tmp54->methods[0];
_63 = _62(_61);
_64 = (frost$core$Int) {1u};
_65 = _63.value;
_66 = _64.value;
_67 = _65 - _66;
_68 = (frost$core$Int) {_67};
_69 = _68.value;
_70 = _14.value;
_71 = _69 - _70;
_72 = (frost$core$Int) {_71};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_74 = (frost$core$Int) {0u};
_75 = _72.value;
_76 = _74.value;
_77 = _75 >= _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block11; else goto block10;
block11:;
_81 = ((frost$collections$CollectionView*) _58);
ITable* $tmp55 = _81->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp55 = $tmp55->next;
}
_82 = $tmp55->methods[0];
_83 = _82(_81);
_84 = _72.value;
_85 = _83.value;
_86 = _84 < _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block9; else goto block10;
block10:;
_90 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _90, &$s57);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_94 = &_58->data;
_95 = *_94;
_96 = frost$core$Int64$init$frost$core$Int(_72);
_97 = _96.value;
_98 = _95[_97];
_99 = _98;
frost$core$Frost$ref$frost$core$Object$Q(_99);
_102 = _98;
_103 = _102;
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = _98;
frost$core$Frost$unref$frost$core$Object$Q(_105);
_108 = ((org$frostlang$frostc$ClassDecl*) _102);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_110 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = *(&local1);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local1) = _108;
_116 = _102;
frost$core$Frost$unref$frost$core$Object$Q(_116);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:31
_119 = &param0->currentMethod;
_120 = *_119;
_121 = _120;
_122 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:31:52
_124 = (frost$core$Int) {0u};
_125 = _122.value;
_126 = _124.value;
_127 = _125 >= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block15; else goto block14;
block15:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_133 = &_121->contents;
_134 = *_133;
_135 = ((frost$collections$CollectionView*) _134);
ITable* $tmp58 = _135->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
_136 = $tmp58->methods[0];
_137 = _136(_135);
_139 = _122.value;
_140 = _137.value;
_141 = _139 < _140;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block13; else goto block14;
block14:;
_145 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _145, &$s60);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_149 = &_121->contents;
_150 = *_149;
_151 = ((frost$collections$CollectionView*) _150);
ITable* $tmp61 = _151->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
_152 = $tmp61->methods[0];
_153 = _152(_151);
_154 = _153.value;
_155 = _122.value;
_156 = _154 > _155;
_157 = (frost$core$Bit) {_156};
_158 = _157.value;
if (_158) goto block17; else goto block18;
block18:;
_160 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s62, _160);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_164 = &_121->contents;
_165 = *_164;
_166 = _165;
_167 = &_121->contents;
_168 = *_167;
_169 = ((frost$collections$CollectionView*) _168);
ITable* $tmp63 = _169->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
_170 = $tmp63->methods[0];
_171 = _170(_169);
_172 = (frost$core$Int) {1u};
_173 = _171.value;
_174 = _172.value;
_175 = _173 - _174;
_176 = (frost$core$Int) {_175};
_177 = _176.value;
_178 = _122.value;
_179 = _177 - _178;
_180 = (frost$core$Int) {_179};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_182 = (frost$core$Int) {0u};
_183 = _180.value;
_184 = _182.value;
_185 = _183 >= _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block22; else goto block21;
block22:;
_189 = ((frost$collections$CollectionView*) _166);
ITable* $tmp64 = _189->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp64 = $tmp64->next;
}
_190 = $tmp64->methods[0];
_191 = _190(_189);
_192 = _180.value;
_193 = _191.value;
_194 = _192 < _193;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block20; else goto block21;
block21:;
_198 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, _198, &$s66);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_202 = &_166->data;
_203 = *_202;
_204 = frost$core$Int64$init$frost$core$Int(_180);
_205 = _204.value;
_206 = _203[_205];
_207 = _206;
frost$core$Frost$ref$frost$core$Object$Q(_207);
_210 = _206;
_211 = _210;
frost$core$Frost$ref$frost$core$Object$Q(_211);
_213 = _206;
frost$core$Frost$unref$frost$core$Object$Q(_213);
_216 = ((org$frostlang$frostc$MethodDecl*) _210);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_218 = ((frost$core$Object*) _216);
frost$core$Frost$ref$frost$core$Object$Q(_218);
_220 = *(&local2);
_221 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_221);
*(&local2) = _216;
_224 = _210;
frost$core$Frost$unref$frost$core$Object$Q(_224);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:32
_227 = *(&local2);
_228 = ((org$frostlang$frostc$Symbol*) _227);
_229 = &_228->name;
_230 = *_229;
_231 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_230, &$s67);
_232 = _231.value;
if (_232) goto block26; else goto block24;
block26:;
_234 = *(&local2);
_235 = &_234->parameters;
_236 = *_235;
_237 = ((frost$collections$CollectionView*) _236);
ITable* $tmp68 = _237->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_238 = $tmp68->methods[0];
_239 = _238(_237);
_240 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:32:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _239.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block25; else goto block24;
block25:;
_250 = *(&local2);
_251 = &_250->owner;
_252 = *_251;
_253 = _252;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_258 = &_253->_valid;
_259 = *_258;
_261 = _259.value;
if (_261) goto block30; else goto block31;
block31:;
_263 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s69, _263);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_267 = &_253->value;
_268 = *_267;
_269 = _268;
_270 = _269;
frost$core$Frost$ref$frost$core$Object$Q(_270);
_273 = ((org$frostlang$frostc$ClassDecl*) _269);
_274 = &_273->name;
_275 = *_274;
_276 = ((frost$core$Equatable*) _275);
_277 = _276;
_278 = ((frost$core$Equatable*) &$s70);
ITable* $tmp71 = _277->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp71 = $tmp71->next;
}
_279 = $tmp71->methods[1];
_280 = _279(_277, _278);
_281 = _280.value;
_282 = _269;
frost$core$Frost$unref$frost$core$Object$Q(_282);
if (_281) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:35
_286 = *(&local1);
_287 = &_286->rawSuper;
_288 = *_287;
_289 = _288 != NULL;
_290 = (frost$core$Bit) {_289};
_291 = _290.value;
if (_291) goto block34; else goto block33;
block34:;
_293 = *(&local1);
_294 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, _293);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:35:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_297 = _294.value;
_298 = !_297;
_299 = (frost$core$Bit) {_298};
_301 = _299.value;
if (_301) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:36
_304 = *(&local1);
_305 = &_304->type;
_306 = *_305;
_307 = *(&local1);
_308 = &_307->rawSuper;
_309 = *_308;
_310 = _309 != NULL;
_311 = (frost$core$Bit) {_310};
_312 = _311.value;
if (_312) goto block36; else goto block37;
block37:;
_314 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, _314, &$s73);
abort(); // unreachable
block36:;
_317 = _309;
_318 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, _306, _317);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_320 = ((frost$core$Object*) _318);
frost$core$Frost$ref$frost$core$Object$Q(_320);
_322 = *(&local3);
_323 = ((frost$core$Object*) _322);
frost$core$Frost$unref$frost$core$Object$Q(_323);
*(&local3) = _318;
_326 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_326);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:37
_329 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_330 = (frost$core$Int) {9u};
_331 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_332 = (frost$core$Int) {16u};
_333 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_334 = (frost$core$Int) {41u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(_333, _334, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(_331, _332, param1, _333, &$s74);
_337 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
_338 = _337;
org$frostlang$frostc$FixedArray$init(_338);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_329, _330, param1, _331, _337);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _329);
_342 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_342);
_344 = ((frost$core$Object*) _333);
frost$core$Frost$unref$frost$core$Object$Q(_344);
_346 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_346);
_348 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_348);
_350 = *(&local3);
_351 = ((frost$core$Object*) _350);
frost$core$Frost$unref$frost$core$Object$Q(_351);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:41
_356 = &param0->inFieldCleanup;
_357 = *_356;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:41:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_360 = _357.value;
_361 = !_360;
_362 = (frost$core$Bit) {_361};
_364 = _362.value;
if (_364) goto block39; else goto block40;
block40:;
_366 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s75, _366);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:42
_370 = (frost$core$Bit) {true};
_371 = &param0->inFieldCleanup;
*_371 = _370;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:43
_374 = *(&local2);
_375 = &_374->owner;
_376 = *_375;
_377 = _376;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:43:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_382 = &_377->_valid;
_383 = *_382;
_385 = _383.value;
if (_385) goto block43; else goto block44;
block44:;
_387 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s76, _387);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_391 = &_377->value;
_392 = *_391;
_393 = _392;
_394 = _393;
frost$core$Frost$ref$frost$core$Object$Q(_394);
_397 = ((org$frostlang$frostc$ClassDecl*) _393);
_398 = &_397->fields;
_399 = *_398;
_400 = ((frost$collections$Iterable*) _399);
_401 = _400;
ITable* $tmp77 = _401->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp77 = $tmp77->next;
}
_402 = $tmp77->methods[0];
_403 = _402(_401);
_404 = _403;
goto block45;
block45:;
_406 = _404;
ITable* $tmp78 = _406->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp78 = $tmp78->next;
}
_407 = $tmp78->methods[0];
_408 = _407(_406);
_409 = _408.value;
if (_409) goto block47; else goto block46;
block46:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
_412 = _404;
ITable* $tmp79 = _412->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp79 = $tmp79->next;
}
_413 = $tmp79->methods[1];
_414 = _413(_412);
_415 = ((org$frostlang$frostc$FieldDecl*) _414);
_416 = ((frost$core$Object*) _415);
frost$core$Frost$ref$frost$core$Object$Q(_416);
_418 = *(&local4);
_419 = ((frost$core$Object*) _418);
frost$core$Frost$unref$frost$core$Object$Q(_419);
*(&local4) = _415;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:44
_423 = *(&local4);
_424 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, _423);
_425 = _424.value;
if (_425) goto block52; else goto block49;
block52:;
_427 = *(&local4);
_428 = &_427->annotations;
_429 = *_428;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Return.frost:44:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_432 = &_429->flags;
_433 = *_432;
_434 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_437 = _433.value;
_438 = _434.value;
_439 = _437 & _438;
_440 = (frost$core$Int) {_439};
_442 = (frost$core$Int) {0u};
_443 = _440.value;
_444 = _442.value;
_445 = _443 != _444;
_446 = (frost$core$Bit) {_445};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:44:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_450 = _446.value;
_451 = !_450;
_452 = (frost$core$Bit) {_451};
_454 = _452.value;
if (_454) goto block51; else goto block49;
block51:;
_456 = *(&local4);
_457 = &_456->fieldKind;
_458 = *_457;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp80;
$tmp80 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp80->value = _458;
_459 = ((frost$core$Equatable*) $tmp80);
_460 = _459;
_461 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Return.frost:45:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_464 = &(&local6)->$rawValue;
*_464 = _461;
_466 = *(&local6);
*(&local5) = _466;
_469 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp81->value = _469;
_470 = ((frost$core$Equatable*) $tmp81);
ITable* $tmp82 = _460->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp82 = $tmp82->next;
}
_471 = $tmp82->methods[1];
_472 = _471(_460, _470);
_473 = _472.value;
_474 = ((frost$core$Object*) _470);
frost$core$Frost$unref$frost$core$Object$Q(_474);
_476 = ((frost$core$Object*) _459);
frost$core$Frost$unref$frost$core$Object$Q(_476);
if (_473) goto block50; else goto block49;
block50:;
_479 = *(&local4);
_480 = &_479->type;
_481 = *_480;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:45:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
_484 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_481);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_487 = _484.value;
_488 = !_487;
_489 = (frost$core$Bit) {_488};
_491 = _489.value;
if (_491) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:665
_494 = (frost$core$Bit) {false};
*(&local7) = _494;
goto block57;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:667
_498 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _481);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:667:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_501 = _498.value;
_502 = !_501;
_503 = (frost$core$Bit) {_502};
*(&local7) = _503;
goto block57;
block57:;
_507 = *(&local7);
_508 = _507.value;
if (_508) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:46
_511 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$lvalue$FieldLValue), (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
_512 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_513 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_512, _513, param1, &$s83);
_515 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_516 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_515, _516);
_518 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _512, _515);
_519 = *(&local4);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(_511, param0, param1, _518, _519);
_521 = ($fn84) _511->$class->vtable[3];
_522 = _521(_511);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
_524 = ((frost$core$Object*) _522);
frost$core$Frost$ref$frost$core$Object$Q(_524);
_526 = *(&local8);
_527 = ((frost$core$Object*) _526);
frost$core$Frost$unref$frost$core$Object$Q(_527);
*(&local8) = _522;
_530 = ((frost$core$Object*) _522);
frost$core$Frost$unref$frost$core$Object$Q(_530);
_532 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_532);
_534 = ((frost$core$Object*) _515);
frost$core$Frost$unref$frost$core$Object$Q(_534);
_536 = ((frost$core$Object*) _512);
frost$core$Frost$unref$frost$core$Object$Q(_536);
_538 = ((frost$core$Object*) _511);
frost$core$Frost$unref$frost$core$Object$Q(_538);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:50
_541 = *(&local8);
_542 = _541 == NULL;
_543 = (frost$core$Bit) {_542};
_544 = _543.value;
if (_544) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:51
_547 = *(&local8);
_548 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_548);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
_551 = _414;
frost$core$Frost$unref$frost$core$Object$Q(_551);
_553 = *(&local4);
_554 = ((frost$core$Object*) _553);
frost$core$Frost$unref$frost$core$Object$Q(_554);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
_557 = ((frost$core$Object*) _403);
frost$core$Frost$unref$frost$core$Object$Q(_557);
_559 = _393;
frost$core$Frost$unref$frost$core$Object$Q(_559);
_561 = *(&local2);
_562 = ((frost$core$Object*) _561);
frost$core$Frost$unref$frost$core$Object$Q(_562);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_565 = *(&local1);
_566 = ((frost$core$Object*) _565);
frost$core$Frost$unref$frost$core$Object$Q(_566);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_569 = *(&local0);
_570 = ((frost$core$Object*) _569);
frost$core$Frost$unref$frost$core$Object$Q(_570);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:53
_575 = *(&local8);
_576 = _575 != NULL;
_577 = (frost$core$Bit) {_576};
_578 = _577.value;
if (_578) goto block64; else goto block65;
block65:;
_580 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _580, &$s86);
abort(); // unreachable
block64:;
_583 = _575;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, _583);
_585 = *(&local8);
_586 = ((frost$core$Object*) _585);
frost$core$Frost$unref$frost$core$Object$Q(_586);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block49;
block49:;
_590 = _414;
frost$core$Frost$unref$frost$core$Object$Q(_590);
_592 = *(&local4);
_593 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_593);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block45;
block47:;
_597 = ((frost$core$Object*) _403);
frost$core$Frost$unref$frost$core$Object$Q(_597);
_599 = _393;
frost$core$Frost$unref$frost$core$Object$Q(_599);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:56
_602 = &param0->inFieldCleanup;
_603 = *_602;
_604 = _603.value;
if (_604) goto block66; else goto block67;
block67:;
_606 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s87, _606);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
_610 = (frost$core$Bit) {false};
_611 = &param0->inFieldCleanup;
*_611 = _610;
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:59
_615 = param2 != NULL;
_616 = (frost$core$Bit) {_615};
_617 = _616.value;
if (_617) goto block68; else goto block70;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:60
_620 = *(&local2);
_621 = &_620->returnType;
_622 = *_621;
_623 = &param0->VOID_TYPE;
_624 = *_623;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:60:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:254
_627 = ((org$frostlang$frostc$Symbol*) _622);
_628 = &_627->name;
_629 = *_628;
_630 = ((org$frostlang$frostc$Symbol*) _624);
_631 = &_630->name;
_632 = *_631;
_633 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_629, _632);
_634 = _633.value;
if (_634) goto block74; else goto block75;
block74:;
_636 = &_622->typeKind;
_637 = *_636;
org$frostlang$frostc$Type$Kind$wrapper* $tmp88;
$tmp88 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp88->value = _637;
_638 = ((frost$core$Equatable*) $tmp88);
_639 = _638;
_640 = &_624->typeKind;
_641 = *_640;
org$frostlang$frostc$Type$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp89->value = _641;
_642 = ((frost$core$Equatable*) $tmp89);
ITable* $tmp90 = _639->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp90 = $tmp90->next;
}
_643 = $tmp90->methods[0];
_644 = _643(_639, _642);
_645 = ((frost$core$Object*) _642);
frost$core$Frost$unref$frost$core$Object$Q(_645);
_647 = ((frost$core$Object*) _638);
frost$core$Frost$unref$frost$core$Object$Q(_647);
*(&local9) = _644;
goto block76;
block75:;
*(&local9) = _633;
goto block76;
block76:;
_653 = *(&local9);
_655 = _653.value;
if (_655) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s91);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
_660 = *(&local2);
_661 = ((frost$core$Object*) _660);
frost$core$Frost$unref$frost$core$Object$Q(_661);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_664 = *(&local1);
_665 = ((frost$core$Object*) _664);
frost$core$Frost$unref$frost$core$Object$Q(_665);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_668 = *(&local0);
_669 = ((frost$core$Object*) _668);
frost$core$Frost$unref$frost$core$Object$Q(_669);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:64
_674 = param2 != NULL;
_675 = (frost$core$Bit) {_674};
_676 = _675.value;
if (_676) goto block77; else goto block78;
block78:;
_678 = (frost$core$Int) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _678, &$s93);
abort(); // unreachable
block77:;
_681 = param2;
_682 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_683 = (frost$core$Int) {3u};
_684 = *(&local2);
_685 = &_684->returnType;
_686 = *_685;
_687 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_682, _683, _686, _687);
_689 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _681, _682);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
_691 = ((frost$core$Object*) _689);
frost$core$Frost$ref$frost$core$Object$Q(_691);
_693 = *(&local10);
_694 = ((frost$core$Object*) _693);
frost$core$Frost$unref$frost$core$Object$Q(_694);
*(&local10) = _689;
_697 = ((frost$core$Object*) _689);
frost$core$Frost$unref$frost$core$Object$Q(_697);
_699 = ((frost$core$Object*) _682);
frost$core$Frost$unref$frost$core$Object$Q(_699);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:66
_702 = *(&local10);
_703 = _702 == NULL;
_704 = (frost$core$Bit) {_703};
_705 = _704.value;
if (_705) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
_708 = *(&local10);
_709 = ((frost$core$Object*) _708);
frost$core$Frost$unref$frost$core$Object$Q(_709);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
_712 = *(&local2);
_713 = ((frost$core$Object*) _712);
frost$core$Frost$unref$frost$core$Object$Q(_713);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_716 = *(&local1);
_717 = ((frost$core$Object*) _716);
frost$core$Frost$unref$frost$core$Object$Q(_717);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_720 = *(&local0);
_721 = ((frost$core$Object*) _720);
frost$core$Frost$unref$frost$core$Object$Q(_721);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:69
_726 = param3.value;
if (_726) goto block83; else goto block82;
block83:;
_728 = *(&local10);
_729 = _728 != NULL;
_730 = (frost$core$Bit) {_729};
_731 = _730.value;
if (_731) goto block84; else goto block85;
block85:;
_733 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _733, &$s95);
abort(); // unreachable
block84:;
_736 = _728;
_737 = ($fn96) _736->$class->vtable[2];
_738 = _737(_736);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:69:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
_741 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_738);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_744 = _741.value;
_745 = !_744;
_746 = (frost$core$Bit) {_745};
_748 = _746.value;
if (_748) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:665
_751 = (frost$core$Bit) {false};
*(&local11) = _751;
goto block86;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:667
_755 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _738);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:667:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_758 = _755.value;
_759 = !_758;
_760 = (frost$core$Bit) {_759};
*(&local11) = _760;
goto block86;
block86:;
_764 = *(&local11);
_765 = _764.value;
_766 = ((frost$core$Object*) _738);
frost$core$Frost$unref$frost$core$Object$Q(_766);
if (_765) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:70
_770 = *(&local10);
_771 = _770 != NULL;
_772 = (frost$core$Bit) {_771};
_773 = _772.value;
if (_773) goto block91; else goto block92;
block92:;
_775 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _775, &$s98);
abort(); // unreachable
block91:;
_778 = _770;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, _778);
goto block82;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:72
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:72:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5264
_784 = &param0->enclosingContexts;
_785 = *_784;
_786 = ((frost$collections$Iterable*) _785);
_787 = _786;
ITable* $tmp99 = _787->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp99 = $tmp99->next;
}
_788 = $tmp99->methods[0];
_789 = _788(_787);
_790 = _789;
goto block94;
block94:;
_792 = _790;
ITable* $tmp100 = _792->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
_793 = $tmp100->methods[0];
_794 = _793(_792);
_795 = _794.value;
if (_795) goto block96; else goto block95;
block95:;
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_798 = _790;
ITable* $tmp101 = _798->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp101 = $tmp101->next;
}
_799 = $tmp101->methods[1];
_800 = _799(_798);
_801 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _800);
_802 = ((frost$core$Object*) _801);
frost$core$Frost$ref$frost$core$Object$Q(_802);
_804 = *(&local12);
_805 = ((frost$core$Object*) _804);
frost$core$Frost$unref$frost$core$Object$Q(_805);
*(&local12) = _801;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5265
_809 = *(&local12);
_810 = &_809->$rawValue;
_811 = *_810;
_812 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5266:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_815 = _811.value;
_816 = _812.value;
_817 = _815 == _816;
_818 = (frost$core$Bit) {_817};
_820 = _818.value;
if (_820) goto block98; else goto block97;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5267
_823 = _800;
frost$core$Frost$unref$frost$core$Object$Q(_823);
_825 = *(&local12);
_826 = ((frost$core$Object*) _825);
frost$core$Frost$unref$frost$core$Object$Q(_826);
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_829 = ((frost$core$Object*) _789);
frost$core$Frost$unref$frost$core$Object$Q(_829);
goto block93;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5270
_833 = *(&local12);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, _833);
_835 = _800;
frost$core$Frost$unref$frost$core$Object$Q(_835);
_837 = *(&local12);
_838 = ((frost$core$Object*) _837);
frost$core$Frost$unref$frost$core$Object$Q(_838);
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block94;
block96:;
_842 = ((frost$core$Object*) _789);
frost$core$Frost$unref$frost$core$Object$Q(_842);
goto block93;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:73
goto block100;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
_848 = &param0->enclosingContexts;
_849 = *_848;
_850 = _849;
_851 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:74:49
_853 = (frost$core$Int) {0u};
_854 = _851.value;
_855 = _853.value;
_856 = _854 >= _855;
_857 = (frost$core$Bit) {_856};
_858 = _857.value;
if (_858) goto block105; else goto block104;
block105:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_862 = &_850->contents;
_863 = *_862;
_864 = ((frost$collections$CollectionView*) _863);
ITable* $tmp102 = _864->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
_865 = $tmp102->methods[0];
_866 = _865(_864);
_868 = _851.value;
_869 = _866.value;
_870 = _868 < _869;
_871 = (frost$core$Bit) {_870};
_872 = _871.value;
if (_872) goto block103; else goto block104;
block104:;
_874 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, _874, &$s104);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_878 = &_850->contents;
_879 = *_878;
_880 = ((frost$collections$CollectionView*) _879);
ITable* $tmp105 = _880->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp105 = $tmp105->next;
}
_881 = $tmp105->methods[0];
_882 = _881(_880);
_883 = _882.value;
_884 = _851.value;
_885 = _883 > _884;
_886 = (frost$core$Bit) {_885};
_887 = _886.value;
if (_887) goto block107; else goto block108;
block108:;
_889 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s106, _889);
abort(); // unreachable
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_893 = &_850->contents;
_894 = *_893;
_895 = _894;
_896 = &_850->contents;
_897 = *_896;
_898 = ((frost$collections$CollectionView*) _897);
ITable* $tmp107 = _898->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
_899 = $tmp107->methods[0];
_900 = _899(_898);
_901 = (frost$core$Int) {1u};
_902 = _900.value;
_903 = _901.value;
_904 = _902 - _903;
_905 = (frost$core$Int) {_904};
_906 = _905.value;
_907 = _851.value;
_908 = _906 - _907;
_909 = (frost$core$Int) {_908};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_911 = (frost$core$Int) {0u};
_912 = _909.value;
_913 = _911.value;
_914 = _912 >= _913;
_915 = (frost$core$Bit) {_914};
_916 = _915.value;
if (_916) goto block112; else goto block111;
block112:;
_918 = ((frost$collections$CollectionView*) _895);
ITable* $tmp108 = _918->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp108 = $tmp108->next;
}
_919 = $tmp108->methods[0];
_920 = _919(_918);
_921 = _909.value;
_922 = _920.value;
_923 = _921 < _922;
_924 = (frost$core$Bit) {_923};
_925 = _924.value;
if (_925) goto block110; else goto block111;
block111:;
_927 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s109, _927, &$s110);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_931 = &_895->data;
_932 = *_931;
_933 = frost$core$Int64$init$frost$core$Int(_909);
_934 = _933.value;
_935 = _932[_934];
_936 = _935;
frost$core$Frost$ref$frost$core$Object$Q(_936);
_939 = _935;
_940 = _939;
frost$core$Frost$ref$frost$core$Object$Q(_940);
_942 = _935;
frost$core$Frost$unref$frost$core$Object$Q(_942);
_945 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _939);
_946 = &_945->$rawValue;
_947 = *_946;
_948 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:75:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_951 = _947.value;
_952 = _948.value;
_953 = _951 == _952;
_954 = (frost$core$Bit) {_953};
_956 = _954.value;
if (_956) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:76
_959 = &param0->enclosingContexts;
_960 = *_959;
_961 = _960;
_962 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_961);
_963 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _962);
_964 = _962;
frost$core$Frost$unref$frost$core$Object$Q(_964);
_971 = _939;
frost$core$Frost$unref$frost$core$Object$Q(_971);
goto block100;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:79
_968 = _939;
frost$core$Frost$unref$frost$core$Object$Q(_968);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:83
_975 = &param0->returnVar;
_976 = *_975;
_977 = _976 != NULL;
_978 = (frost$core$Bit) {_977};
_979 = _978.value;
if (_979) goto block117; else goto block119;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
_983 = &param0->returnVar;
_984 = *_983;
_985 = _984 != NULL;
_986 = (frost$core$Bit) {_985};
_987 = _986.value;
if (_987) goto block120; else goto block121;
block121:;
_989 = (frost$core$Int) {85u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _989, &$s112);
abort(); // unreachable
block120:;
_992 = _984;
_993 = &_992->storage;
_994 = *_993;
_995 = &_994->$rawValue;
_996 = *_995;
_997 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:86:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1000 = _996.value;
_1001 = _997.value;
_1002 = _1000 == _1001;
_1003 = (frost$core$Bit) {_1002};
_1005 = _1003.value;
if (_1005) goto block123; else goto block124;
block123:;
_1007 = &_994->$data.$LOCAL.field0;
_1008 = *_1007;
*(&local14) = _1008;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:87
_1011 = *(&local14);
*(&local13) = _1011;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:93
_1019 = *(&local0);
_1020 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1021 = (frost$core$Int) {27u};
_1022 = *(&local10);
_1023 = _1022 != NULL;
_1024 = (frost$core$Bit) {_1023};
_1025 = _1024.value;
if (_1025) goto block126; else goto block127;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:90
_1015 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s113, _1015);
abort(); // unreachable
block127:;
_1027 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s114, _1027, &$s115);
abort(); // unreachable
block126:;
_1030 = _1022;
_1031 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_1032 = (frost$core$Int) {2u};
_1033 = *(&local13);
_1034 = *(&local10);
_1035 = _1034 != NULL;
_1036 = (frost$core$Bit) {_1035};
_1037 = _1036.value;
if (_1037) goto block128; else goto block129;
block129:;
_1039 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s116, _1039, &$s117);
abort(); // unreachable
block128:;
_1042 = _1034;
_1043 = ($fn118) _1042->$class->vtable[2];
_1044 = _1043(_1042);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_1031, _1032, _1033, _1044);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_1020, _1021, param1, _1030, _1031);
_1047 = ($fn119) _1019->$class->vtable[2];
_1048 = _1047(_1019, _1020);
_1049 = ((frost$core$Object*) _1044);
frost$core$Frost$unref$frost$core$Object$Q(_1049);
_1051 = ((frost$core$Object*) _1031);
frost$core$Frost$unref$frost$core$Object$Q(_1051);
_1053 = ((frost$core$Object*) _1020);
frost$core$Frost$unref$frost$core$Object$Q(_1053);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:95
_1056 = *(&local0);
_1057 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1058 = (frost$core$Int) {1u};
_1059 = &param0->postconditionEntryBlock;
_1060 = *_1059;
_1061 = _1060.nonnull;
_1062 = (frost$core$Bit) {_1061};
_1063 = _1062.value;
if (_1063) goto block130; else goto block131;
block131:;
_1065 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, _1065, &$s121);
abort(); // unreachable
block130:;
_1068 = ((org$frostlang$frostc$IR$Block$ID) _1060.value);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_1057, _1058, param1, _1068);
_1070 = ($fn122) _1056->$class->vtable[2];
_1071 = _1070(_1056, _1057);
_1072 = ((frost$core$Object*) _1057);
frost$core$Frost$unref$frost$core$Object$Q(_1072);
goto block118;
block119:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:98
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:98:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5679
_1079 = &param0->enclosingContexts;
_1080 = *_1079;
_1081 = ((frost$collections$Iterable*) _1080);
_1082 = _1081;
ITable* $tmp123 = _1082->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp123 = $tmp123->next;
}
_1083 = $tmp123->methods[0];
_1084 = _1083(_1082);
_1085 = _1084;
goto block133;
block133:;
_1087 = _1085;
ITable* $tmp124 = _1087->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
_1088 = $tmp124->methods[0];
_1089 = _1088(_1087);
_1090 = _1089.value;
if (_1090) goto block135; else goto block134;
block134:;
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1093 = _1085;
ITable* $tmp125 = _1093->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp125 = $tmp125->next;
}
_1094 = $tmp125->methods[1];
_1095 = _1094(_1093);
_1096 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1095);
_1097 = ((frost$core$Object*) _1096);
frost$core$Frost$ref$frost$core$Object$Q(_1097);
_1099 = *(&local16);
_1100 = ((frost$core$Object*) _1099);
frost$core$Frost$unref$frost$core$Object$Q(_1100);
*(&local16) = _1096;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5680
_1104 = *(&local16);
_1105 = &_1104->$rawValue;
_1106 = *_1105;
_1107 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5681:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1110 = _1106.value;
_1111 = _1107.value;
_1112 = _1110 == _1111;
_1113 = (frost$core$Bit) {_1112};
_1115 = _1113.value;
if (_1115) goto block137; else goto block136;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5682
_1118 = *(&local16);
_1119 = _1118;
_1120 = ((frost$core$Object*) _1119);
frost$core$Frost$ref$frost$core$Object$Q(_1120);
_1122 = _1095;
frost$core$Frost$unref$frost$core$Object$Q(_1122);
_1124 = *(&local16);
_1125 = ((frost$core$Object*) _1124);
frost$core$Frost$unref$frost$core$Object$Q(_1125);
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1128 = ((frost$core$Object*) _1084);
frost$core$Frost$unref$frost$core$Object$Q(_1128);
*(&local15) = _1119;
_1131 = ((frost$core$Object*) _1119);
frost$core$Frost$ref$frost$core$Object$Q(_1131);
goto block132;
block136:;
_1134 = _1095;
frost$core$Frost$unref$frost$core$Object$Q(_1134);
_1136 = *(&local16);
_1137 = ((frost$core$Object*) _1136);
frost$core$Frost$unref$frost$core$Object$Q(_1137);
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block133;
block135:;
_1141 = ((frost$core$Object*) _1084);
frost$core$Frost$unref$frost$core$Object$Q(_1141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5686
_1144 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1144);
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1147 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1147);
goto block132;
block132:;
_1150 = *(&local15);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1152 = ((frost$core$Object*) _1150);
frost$core$Frost$ref$frost$core$Object$Q(_1152);
_1154 = *(&local17);
_1155 = ((frost$core$Object*) _1154);
frost$core$Frost$unref$frost$core$Object$Q(_1155);
*(&local17) = _1150;
_1158 = ((frost$core$Object*) _1150);
frost$core$Frost$unref$frost$core$Object$Q(_1158);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
_1161 = *(&local17);
_1162 = _1161 != NULL;
_1163 = (frost$core$Bit) {_1162};
_1164 = _1163.value;
if (_1164) goto block139; else goto block141;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
_1167 = *(&local17);
_1168 = _1167 != NULL;
_1169 = (frost$core$Bit) {_1168};
_1170 = _1169.value;
if (_1170) goto block142; else goto block143;
block143:;
_1172 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s126, _1172, &$s127);
abort(); // unreachable
block142:;
_1175 = _1167;
_1176 = &_1175->$rawValue;
_1177 = *_1176;
_1178 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:101:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1181 = _1177.value;
_1182 = _1178.value;
_1183 = _1181 == _1182;
_1184 = (frost$core$Bit) {_1183};
_1186 = _1184.value;
if (_1186) goto block145; else goto block146;
block145:;
_1188 = &_1167->$data.$INLINE_CONTEXT.field0;
_1189 = *_1188;
_1190 = &_1167->$data.$INLINE_CONTEXT.field1;
_1191 = *_1190;
_1192 = &_1167->$data.$INLINE_CONTEXT.field2;
_1193 = *_1192;
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_1195 = ((frost$core$Object*) _1193);
frost$core$Frost$ref$frost$core$Object$Q(_1195);
_1197 = *(&local18);
_1198 = ((frost$core$Object*) _1197);
frost$core$Frost$unref$frost$core$Object$Q(_1198);
*(&local18) = _1193;
_1201 = &_1167->$data.$INLINE_CONTEXT.field3;
_1202 = *_1201;
*(&local19) = _1202;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:103
_1205 = *(&local18);
_1206 = &_1205->variable;
_1207 = *_1206;
_1208 = _1207 != NULL;
_1209 = (frost$core$Bit) {_1208};
_1210 = _1209.value;
if (_1210) goto block148; else goto block150;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:104
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
_1214 = *(&local18);
_1215 = &_1214->variable;
_1216 = *_1215;
_1217 = _1216 != NULL;
_1218 = (frost$core$Bit) {_1217};
_1219 = _1218.value;
if (_1219) goto block151; else goto block152;
block152:;
_1221 = (frost$core$Int) {105u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s128, _1221, &$s129);
abort(); // unreachable
block151:;
_1224 = _1216;
_1225 = &_1224->storage;
_1226 = *_1225;
_1227 = &_1226->$rawValue;
_1228 = *_1227;
_1229 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:106:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1232 = _1228.value;
_1233 = _1229.value;
_1234 = _1232 == _1233;
_1235 = (frost$core$Bit) {_1234};
_1237 = _1235.value;
if (_1237) goto block154; else goto block155;
block154:;
_1239 = &_1226->$data.$LOCAL.field0;
_1240 = *_1239;
*(&local21) = _1240;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:107
_1243 = *(&local21);
*(&local20) = _1243;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:113
_1251 = *(&local0);
_1252 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1253 = (frost$core$Int) {27u};
_1254 = *(&local10);
_1255 = _1254 != NULL;
_1256 = (frost$core$Bit) {_1255};
_1257 = _1256.value;
if (_1257) goto block157; else goto block158;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:110
_1247 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s130, _1247);
abort(); // unreachable
block158:;
_1259 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s131, _1259, &$s132);
abort(); // unreachable
block157:;
_1262 = _1254;
_1263 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_1264 = (frost$core$Int) {2u};
_1265 = *(&local20);
_1266 = *(&local10);
_1267 = _1266 != NULL;
_1268 = (frost$core$Bit) {_1267};
_1269 = _1268.value;
if (_1269) goto block159; else goto block160;
block160:;
_1271 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s133, _1271, &$s134);
abort(); // unreachable
block159:;
_1274 = _1266;
_1275 = ($fn135) _1274->$class->vtable[2];
_1276 = _1275(_1274);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_1263, _1264, _1265, _1276);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_1252, _1253, param1, _1262, _1263);
_1279 = ($fn136) _1251->$class->vtable[2];
_1280 = _1279(_1251, _1252);
_1281 = ((frost$core$Object*) _1276);
frost$core$Frost$unref$frost$core$Object$Q(_1281);
_1283 = ((frost$core$Object*) _1263);
frost$core$Frost$unref$frost$core$Object$Q(_1283);
_1285 = ((frost$core$Object*) _1252);
frost$core$Frost$unref$frost$core$Object$Q(_1285);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:115
_1288 = param3.value;
if (_1288) goto block163; else goto block162;
block163:;
_1290 = *(&local10);
_1291 = _1290 != NULL;
_1292 = (frost$core$Bit) {_1291};
_1293 = _1292.value;
if (_1293) goto block164; else goto block165;
block165:;
_1295 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s137, _1295, &$s138);
abort(); // unreachable
block164:;
_1298 = _1290;
_1299 = ($fn139) _1298->$class->vtable[2];
_1300 = _1299(_1298);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:115:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
_1303 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_1300);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1306 = _1303.value;
_1307 = !_1306;
_1308 = (frost$core$Bit) {_1307};
_1310 = _1308.value;
if (_1310) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:665
_1313 = (frost$core$Bit) {false};
*(&local22) = _1313;
goto block166;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:667
_1317 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _1300);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:667:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1320 = _1317.value;
_1321 = !_1320;
_1322 = (frost$core$Bit) {_1321};
*(&local22) = _1322;
goto block166;
block166:;
_1326 = *(&local22);
_1327 = _1326.value;
_1328 = ((frost$core$Object*) _1300);
frost$core$Frost$unref$frost$core$Object$Q(_1328);
if (_1327) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:116
_1332 = *(&local10);
_1333 = _1332 != NULL;
_1334 = (frost$core$Bit) {_1333};
_1335 = _1334.value;
if (_1335) goto block171; else goto block172;
block172:;
_1337 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s140, _1337, &$s141);
abort(); // unreachable
block171:;
_1340 = _1332;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, _1340);
goto block162;
block162:;
goto block149;
block150:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:120
_1346 = *(&local18);
_1347 = *(&local10);
_1348 = ((frost$core$Object*) _1347);
frost$core$Frost$ref$frost$core$Object$Q(_1348);
_1350 = &_1346->value;
_1351 = *_1350;
_1352 = ((frost$core$Object*) _1351);
frost$core$Frost$unref$frost$core$Object$Q(_1352);
_1354 = &_1346->value;
*_1354 = _1347;
goto block149;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:122
_1358 = *(&local0);
_1359 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1360 = (frost$core$Int) {1u};
_1361 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_1359, _1360, param1, _1361);
_1363 = ($fn142) _1358->$class->vtable[2];
_1364 = _1363(_1358, _1359);
_1365 = ((frost$core$Object*) _1359);
frost$core$Frost$unref$frost$core$Object$Q(_1365);
_1367 = *(&local18);
_1368 = ((frost$core$Object*) _1367);
frost$core$Frost$unref$frost$core$Object$Q(_1368);
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block140;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:125
_1373 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s143, _1373);
abort(); // unreachable
block141:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:130
_1379 = *(&local0);
_1380 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1381 = (frost$core$Int) {25u};
_1382 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(_1380, _1381, param1, _1382);
_1384 = ($fn144) _1379->$class->vtable[2];
_1385 = _1384(_1379, _1380);
_1386 = ((frost$core$Object*) _1380);
frost$core$Frost$unref$frost$core$Object$Q(_1386);
goto block140;
block140:;
_1389 = *(&local17);
_1390 = ((frost$core$Object*) _1389);
frost$core$Frost$unref$frost$core$Object$Q(_1390);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1393 = *(&local15);
_1394 = ((frost$core$Object*) _1393);
frost$core$Frost$unref$frost$core$Object$Q(_1394);
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block118;
block118:;
_1398 = *(&local10);
_1399 = ((frost$core$Object*) _1398);
frost$core$Frost$unref$frost$core$Object$Q(_1399);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block69;
block70:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:135
_1405 = *(&local2);
_1406 = &_1405->returnType;
_1407 = *_1406;
_1408 = ((frost$core$Equatable*) _1407);
_1409 = _1408;
_1410 = &param0->VOID_TYPE;
_1411 = *_1410;
_1412 = ((frost$core$Equatable*) _1411);
ITable* $tmp145 = _1409->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp145 = $tmp145->next;
}
_1413 = $tmp145->methods[1];
_1414 = _1413(_1409, _1412);
_1415 = _1414.value;
if (_1415) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:136
_1418 = *(&local2);
_1419 = &_1418->methodKind;
_1420 = *_1419;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp146;
$tmp146 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp146->value = _1420;
_1421 = ((frost$core$Equatable*) $tmp146);
_1422 = _1421;
_1423 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Return.frost:136:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_1426 = &(&local24)->$rawValue;
*_1426 = _1423;
_1428 = *(&local24);
*(&local23) = _1428;
_1431 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp147;
$tmp147 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp147->value = _1431;
_1432 = ((frost$core$Equatable*) $tmp147);
ITable* $tmp148 = _1422->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp148 = $tmp148->next;
}
_1433 = $tmp148->methods[0];
_1434 = _1433(_1422, _1432);
_1435 = _1434.value;
_1436 = ((frost$core$Object*) _1432);
frost$core$Frost$unref$frost$core$Object$Q(_1436);
_1438 = ((frost$core$Object*) _1421);
frost$core$Frost$unref$frost$core$Object$Q(_1438);
if (_1435) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:137
_1442 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_1443 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(_1442, _1443, param1);
_1445 = _1442;
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, _1445);
_1447 = ((frost$core$Object*) _1442);
frost$core$Frost$unref$frost$core$Object$Q(_1447);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
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
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:140
_1464 = *(&local2);
_1465 = &_1464->returnType;
_1466 = *_1465;
_1467 = ((frost$core$Object*) _1466);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:141:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_1470 = ($fn149) _1467->$class->vtable[0];
_1471 = _1470(_1467);
_1472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s150, _1471);
_1473 = ((frost$core$Object*) _1472);
frost$core$Frost$ref$frost$core$Object$Q(_1473);
_1475 = ((frost$core$Object*) _1472);
frost$core$Frost$unref$frost$core$Object$Q(_1475);
_1477 = ((frost$core$Object*) _1471);
frost$core$Frost$unref$frost$core$Object$Q(_1477);
_1480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1472, &$s151);
_1481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s152, _1480);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, _1481);
_1483 = ((frost$core$Object*) _1481);
frost$core$Frost$unref$frost$core$Object$Q(_1483);
_1485 = ((frost$core$Object*) _1480);
frost$core$Frost$unref$frost$core$Object$Q(_1485);
_1487 = ((frost$core$Object*) _1472);
frost$core$Frost$unref$frost$core$Object$Q(_1487);
goto block174;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:143
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:143:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5264
_1493 = &param0->enclosingContexts;
_1494 = *_1493;
_1495 = ((frost$collections$Iterable*) _1494);
_1496 = _1495;
ITable* $tmp153 = _1496->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp153 = $tmp153->next;
}
_1497 = $tmp153->methods[0];
_1498 = _1497(_1496);
_1499 = _1498;
goto block180;
block180:;
_1501 = _1499;
ITable* $tmp154 = _1501->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp154 = $tmp154->next;
}
_1502 = $tmp154->methods[0];
_1503 = _1502(_1501);
_1504 = _1503.value;
if (_1504) goto block182; else goto block181;
block181:;
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1507 = _1499;
ITable* $tmp155 = _1507->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
_1508 = $tmp155->methods[1];
_1509 = _1508(_1507);
_1510 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1509);
_1511 = ((frost$core$Object*) _1510);
frost$core$Frost$ref$frost$core$Object$Q(_1511);
_1513 = *(&local25);
_1514 = ((frost$core$Object*) _1513);
frost$core$Frost$unref$frost$core$Object$Q(_1514);
*(&local25) = _1510;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5265
_1518 = *(&local25);
_1519 = &_1518->$rawValue;
_1520 = *_1519;
_1521 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5266:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1524 = _1520.value;
_1525 = _1521.value;
_1526 = _1524 == _1525;
_1527 = (frost$core$Bit) {_1526};
_1529 = _1527.value;
if (_1529) goto block184; else goto block183;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5267
_1532 = _1509;
frost$core$Frost$unref$frost$core$Object$Q(_1532);
_1534 = *(&local25);
_1535 = ((frost$core$Object*) _1534);
frost$core$Frost$unref$frost$core$Object$Q(_1535);
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1538 = ((frost$core$Object*) _1498);
frost$core$Frost$unref$frost$core$Object$Q(_1538);
goto block179;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5270
_1542 = *(&local25);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, _1542);
_1544 = _1509;
frost$core$Frost$unref$frost$core$Object$Q(_1544);
_1546 = *(&local25);
_1547 = ((frost$core$Object*) _1546);
frost$core$Frost$unref$frost$core$Object$Q(_1547);
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block180;
block182:;
_1551 = ((frost$core$Object*) _1498);
frost$core$Frost$unref$frost$core$Object$Q(_1551);
goto block179;
block179:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
_1555 = &param0->postconditionEntryBlock;
_1556 = *_1555;
_1557 = _1556.nonnull;
_1558 = (frost$core$Bit) {_1557};
_1559 = _1558.value;
if (_1559) goto block186; else goto block188;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
_1562 = *(&local0);
_1563 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1564 = (frost$core$Int) {1u};
_1565 = &param0->postconditionEntryBlock;
_1566 = *_1565;
_1567 = _1566.nonnull;
_1568 = (frost$core$Bit) {_1567};
_1569 = _1568.value;
if (_1569) goto block189; else goto block190;
block190:;
_1571 = (frost$core$Int) {145u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s156, _1571, &$s157);
abort(); // unreachable
block189:;
_1574 = ((org$frostlang$frostc$IR$Block$ID) _1566.value);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_1563, _1564, param1, _1574);
_1576 = ($fn158) _1562->$class->vtable[2];
_1577 = _1576(_1562, _1563);
_1578 = ((frost$core$Object*) _1563);
frost$core$Frost$unref$frost$core$Object$Q(_1578);
goto block187;
block188:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:148
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:148:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5679
_1585 = &param0->enclosingContexts;
_1586 = *_1585;
_1587 = ((frost$collections$Iterable*) _1586);
_1588 = _1587;
ITable* $tmp159 = _1588->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp159 = $tmp159->next;
}
_1589 = $tmp159->methods[0];
_1590 = _1589(_1588);
_1591 = _1590;
goto block192;
block192:;
_1593 = _1591;
ITable* $tmp160 = _1593->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
_1594 = $tmp160->methods[0];
_1595 = _1594(_1593);
_1596 = _1595.value;
if (_1596) goto block194; else goto block193;
block193:;
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1599 = _1591;
ITable* $tmp161 = _1599->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
_1600 = $tmp161->methods[1];
_1601 = _1600(_1599);
_1602 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1601);
_1603 = ((frost$core$Object*) _1602);
frost$core$Frost$ref$frost$core$Object$Q(_1603);
_1605 = *(&local27);
_1606 = ((frost$core$Object*) _1605);
frost$core$Frost$unref$frost$core$Object$Q(_1606);
*(&local27) = _1602;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5680
_1610 = *(&local27);
_1611 = &_1610->$rawValue;
_1612 = *_1611;
_1613 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5681:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1616 = _1612.value;
_1617 = _1613.value;
_1618 = _1616 == _1617;
_1619 = (frost$core$Bit) {_1618};
_1621 = _1619.value;
if (_1621) goto block196; else goto block195;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5682
_1624 = *(&local27);
_1625 = _1624;
_1626 = ((frost$core$Object*) _1625);
frost$core$Frost$ref$frost$core$Object$Q(_1626);
_1628 = _1601;
frost$core$Frost$unref$frost$core$Object$Q(_1628);
_1630 = *(&local27);
_1631 = ((frost$core$Object*) _1630);
frost$core$Frost$unref$frost$core$Object$Q(_1631);
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1634 = ((frost$core$Object*) _1590);
frost$core$Frost$unref$frost$core$Object$Q(_1634);
*(&local26) = _1625;
_1637 = ((frost$core$Object*) _1625);
frost$core$Frost$ref$frost$core$Object$Q(_1637);
goto block191;
block195:;
_1640 = _1601;
frost$core$Frost$unref$frost$core$Object$Q(_1640);
_1642 = *(&local27);
_1643 = ((frost$core$Object*) _1642);
frost$core$Frost$unref$frost$core$Object$Q(_1643);
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block192;
block194:;
_1647 = ((frost$core$Object*) _1590);
frost$core$Frost$unref$frost$core$Object$Q(_1647);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5686
_1650 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1650);
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1653 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1653);
goto block191;
block191:;
_1656 = *(&local26);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1658 = ((frost$core$Object*) _1656);
frost$core$Frost$ref$frost$core$Object$Q(_1658);
_1660 = *(&local28);
_1661 = ((frost$core$Object*) _1660);
frost$core$Frost$unref$frost$core$Object$Q(_1661);
*(&local28) = _1656;
_1664 = ((frost$core$Object*) _1656);
frost$core$Frost$unref$frost$core$Object$Q(_1664);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
_1667 = *(&local28);
_1668 = _1667 != NULL;
_1669 = (frost$core$Bit) {_1668};
_1670 = _1669.value;
if (_1670) goto block198; else goto block200;
block198:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:150
_1673 = *(&local28);
_1674 = _1673 != NULL;
_1675 = (frost$core$Bit) {_1674};
_1676 = _1675.value;
if (_1676) goto block201; else goto block202;
block202:;
_1678 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _1678, &$s163);
abort(); // unreachable
block201:;
_1681 = _1673;
_1682 = &_1681->$rawValue;
_1683 = *_1682;
_1684 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:151:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1687 = _1683.value;
_1688 = _1684.value;
_1689 = _1687 == _1688;
_1690 = (frost$core$Bit) {_1689};
_1692 = _1690.value;
if (_1692) goto block204; else goto block203;
block204:;
_1694 = &_1673->$data.$INLINE_CONTEXT.field0;
_1695 = *_1694;
_1696 = &_1673->$data.$INLINE_CONTEXT.field1;
_1697 = *_1696;
_1698 = &_1673->$data.$INLINE_CONTEXT.field2;
_1699 = *_1698;
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_1701 = ((frost$core$Object*) _1699);
frost$core$Frost$ref$frost$core$Object$Q(_1701);
_1703 = *(&local29);
_1704 = ((frost$core$Object*) _1703);
frost$core$Frost$unref$frost$core$Object$Q(_1704);
*(&local29) = _1699;
_1707 = &_1673->$data.$INLINE_CONTEXT.field3;
_1708 = *_1707;
*(&local30) = _1708;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:153
_1711 = *(&local30);
_1712 = (frost$core$Bit) {true};
_1713 = _1712.value;
if (_1713) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:154
_1716 = *(&local0);
_1717 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1718 = (frost$core$Int) {1u};
_1719 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_1717, _1718, param1, _1719);
_1721 = ($fn164) _1716->$class->vtable[2];
_1722 = _1721(_1716, _1717);
_1723 = ((frost$core$Object*) _1717);
frost$core$Frost$unref$frost$core$Object$Q(_1723);
goto block207;
block207:;
_1726 = *(&local29);
_1727 = ((frost$core$Object*) _1726);
frost$core$Frost$unref$frost$core$Object$Q(_1727);
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block203;
block203:;
goto block199;
block200:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:160
_1734 = *(&local0);
_1735 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1736 = (frost$core$Int) {25u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(_1735, _1736, param1, ((org$frostlang$frostc$IR$Value*) NULL));
_1738 = ($fn165) _1734->$class->vtable[2];
_1739 = _1738(_1734, _1735);
_1740 = ((frost$core$Object*) _1735);
frost$core$Frost$unref$frost$core$Object$Q(_1740);
goto block199;
block199:;
_1743 = *(&local28);
_1744 = ((frost$core$Object*) _1743);
frost$core$Frost$unref$frost$core$Object$Q(_1744);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1747 = *(&local26);
_1748 = ((frost$core$Object*) _1747);
frost$core$Frost$unref$frost$core$Object$Q(_1748);
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block187;
block187:;
goto block69;
block69:;
_1753 = *(&local2);
_1754 = ((frost$core$Object*) _1753);
frost$core$Frost$unref$frost$core$Object$Q(_1754);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1757 = *(&local1);
_1758 = ((frost$core$Object*) _1757);
frost$core$Frost$unref$frost$core$Object$Q(_1758);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1761 = *(&local0);
_1762 = ((frost$core$Object*) _1761);
frost$core$Frost$unref$frost$core$Object$Q(_1762);
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

