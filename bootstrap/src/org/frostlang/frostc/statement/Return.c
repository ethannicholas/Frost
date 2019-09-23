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
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -5865721028201646545, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 1290914291935992386, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };

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
frost$core$Object*** _92;
frost$core$Object** _93;
frost$core$Int64 _94;
int64_t _95;
frost$core$Object* _96;
frost$core$Object* _97;
frost$core$Object* _100;
frost$core$Object* _101;
frost$core$Object* _103;
org$frostlang$frostc$ClassDecl* _106;
frost$core$Object* _108;
org$frostlang$frostc$ClassDecl* _110;
frost$core$Object* _111;
frost$core$Object* _114;
frost$collections$Stack** _117;
frost$collections$Stack* _118;
frost$core$Int _119;
frost$core$Int _121;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
frost$collections$Array** _130;
frost$collections$Array* _131;
frost$collections$CollectionView* _132;
$fn6 _133;
frost$core$Int _134;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$core$Int _142;
frost$collections$Array** _146;
frost$collections$Array* _147;
frost$collections$CollectionView* _148;
$fn7 _149;
frost$core$Int _150;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
frost$collections$Array** _161;
frost$collections$Array* _162;
frost$collections$Array** _163;
frost$collections$Array* _164;
frost$collections$CollectionView* _165;
$fn8 _166;
frost$core$Int _167;
frost$core$Int _168;
int64_t _169;
int64_t _170;
int64_t _171;
frost$core$Int _172;
int64_t _173;
int64_t _174;
int64_t _175;
frost$core$Int _176;
frost$core$Int _178;
int64_t _179;
int64_t _180;
bool _181;
frost$core$Bit _182;
bool _183;
frost$collections$CollectionView* _185;
$fn9 _186;
frost$core$Int _187;
int64_t _188;
int64_t _189;
bool _190;
frost$core$Bit _191;
bool _192;
frost$core$Int _194;
frost$core$Object*** _198;
frost$core$Object** _199;
frost$core$Int64 _200;
int64_t _201;
frost$core$Object* _202;
frost$core$Object* _203;
frost$core$Object* _206;
frost$core$Object* _207;
frost$core$Object* _209;
org$frostlang$frostc$MethodDecl* _212;
frost$core$Object* _214;
org$frostlang$frostc$MethodDecl* _216;
frost$core$Object* _217;
frost$core$Object* _220;
frost$core$Int _225;
frost$core$Int _226;
frost$core$Int _227;
org$frostlang$frostc$Position _228;
org$frostlang$frostc$MethodDecl* _232;
org$frostlang$frostc$Symbol* _233;
frost$core$String** _234;
frost$core$String* _235;
frost$core$Bit _236;
bool _237;
org$frostlang$frostc$MethodDecl* _239;
frost$collections$Array** _240;
frost$collections$Array* _241;
frost$collections$CollectionView* _242;
$fn10 _243;
frost$core$Int _244;
frost$core$Int _245;
int64_t _248;
int64_t _249;
bool _250;
frost$core$Bit _251;
bool _253;
org$frostlang$frostc$MethodDecl* _255;
frost$core$Weak** _256;
frost$core$Weak* _257;
frost$core$Bit* _262;
frost$core$Bit _263;
bool _265;
frost$core$Int _267;
frost$core$Object** _271;
frost$core$Object* _272;
frost$core$Object* _273;
frost$core$Object* _274;
org$frostlang$frostc$ClassDecl* _277;
frost$core$String** _278;
frost$core$String* _279;
frost$core$Equatable* _280;
frost$core$Equatable* _281;
$fn11 _282;
frost$core$Bit _283;
bool _284;
frost$core$Object* _285;
org$frostlang$frostc$ClassDecl* _289;
org$frostlang$frostc$Type** _290;
org$frostlang$frostc$Type* _291;
bool _292;
frost$core$Bit _293;
bool _294;
org$frostlang$frostc$ClassDecl* _296;
frost$core$Bit _297;
bool _300;
bool _301;
frost$core$Bit _302;
bool _304;
org$frostlang$frostc$ClassDecl* _307;
org$frostlang$frostc$Type** _308;
org$frostlang$frostc$Type* _309;
org$frostlang$frostc$ClassDecl* _310;
org$frostlang$frostc$Type** _311;
org$frostlang$frostc$Type* _312;
bool _313;
frost$core$Bit _314;
bool _315;
frost$core$Int _317;
org$frostlang$frostc$Type* _320;
org$frostlang$frostc$Type* _321;
frost$core$Object* _323;
org$frostlang$frostc$Type* _325;
frost$core$Object* _326;
frost$core$Object* _329;
org$frostlang$frostc$ASTNode* _332;
frost$core$Int _333;
org$frostlang$frostc$Position _334;
org$frostlang$frostc$ASTNode* _335;
frost$core$Int _336;
org$frostlang$frostc$Position _337;
org$frostlang$frostc$ASTNode* _338;
frost$core$Int _339;
org$frostlang$frostc$Position _340;
org$frostlang$frostc$FixedArray* _343;
frost$core$Object* _347;
frost$core$Object* _349;
frost$core$Object* _351;
frost$core$Object* _353;
org$frostlang$frostc$Type* _355;
frost$core$Object* _356;
frost$core$Bit* _361;
frost$core$Bit _362;
bool _365;
bool _366;
frost$core$Bit _367;
bool _369;
frost$core$Int _371;
frost$core$Bit _375;
frost$core$Bit* _376;
org$frostlang$frostc$MethodDecl* _379;
frost$core$Weak** _380;
frost$core$Weak* _381;
frost$core$Bit* _386;
frost$core$Bit _387;
bool _389;
frost$core$Int _391;
frost$core$Object** _395;
frost$core$Object* _396;
frost$core$Object* _397;
frost$core$Object* _398;
org$frostlang$frostc$ClassDecl* _401;
frost$collections$Array** _402;
frost$collections$Array* _403;
frost$collections$Iterable* _404;
$fn12 _405;
frost$collections$Iterator* _406;
$fn13 _408;
frost$core$Bit _409;
bool _410;
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
frost$core$Int _460;
frost$core$Int* _463;
org$frostlang$frostc$FieldDecl$Kind _465;
org$frostlang$frostc$FieldDecl$Kind _468;
frost$core$Equatable* _469;
$fn15 _470;
frost$core$Bit _471;
bool _472;
frost$core$Object* _473;
frost$core$Object* _475;
org$frostlang$frostc$FieldDecl* _478;
org$frostlang$frostc$Type** _479;
org$frostlang$frostc$Type* _480;
frost$core$Bit _483;
bool _486;
bool _487;
frost$core$Bit _488;
bool _490;
frost$core$Bit _493;
frost$core$Bit _497;
bool _500;
bool _501;
frost$core$Bit _502;
frost$core$Bit _506;
bool _507;
org$frostlang$frostc$lvalue$FieldLValue* _510;
org$frostlang$frostc$ASTNode* _511;
frost$core$Int _512;
org$frostlang$frostc$Position _513;
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
org$frostlang$frostc$Type$Kind* _639;
org$frostlang$frostc$Type$Kind _640;
frost$core$Equatable* _641;
$fn17 _642;
frost$core$Bit _643;
frost$core$Object* _644;
frost$core$Object* _646;
frost$core$Bit _652;
bool _654;
frost$core$Int _661;
frost$core$Int _662;
frost$core$Int _663;
org$frostlang$frostc$Position _664;
org$frostlang$frostc$MethodDecl* _669;
frost$core$Object* _670;
org$frostlang$frostc$ClassDecl* _673;
frost$core$Object* _674;
org$frostlang$frostc$IR* _677;
frost$core$Object* _678;
bool _683;
frost$core$Bit _684;
bool _685;
frost$core$Int _687;
org$frostlang$frostc$ASTNode* _690;
org$frostlang$frostc$Compiler$TypeContext* _691;
frost$core$Int _692;
org$frostlang$frostc$MethodDecl* _693;
org$frostlang$frostc$Type** _694;
org$frostlang$frostc$Type* _695;
frost$core$Bit _696;
org$frostlang$frostc$IR$Value* _698;
frost$core$Object* _700;
org$frostlang$frostc$IR$Value* _702;
frost$core$Object* _703;
frost$core$Object* _706;
frost$core$Object* _708;
org$frostlang$frostc$IR$Value* _711;
bool _712;
frost$core$Bit _713;
bool _714;
org$frostlang$frostc$IR$Value* _717;
frost$core$Object* _718;
org$frostlang$frostc$MethodDecl* _721;
frost$core$Object* _722;
org$frostlang$frostc$ClassDecl* _725;
frost$core$Object* _726;
org$frostlang$frostc$IR* _729;
frost$core$Object* _730;
bool _735;
org$frostlang$frostc$IR$Value* _737;
bool _738;
frost$core$Bit _739;
bool _740;
frost$core$Int _742;
org$frostlang$frostc$IR$Value* _745;
$fn18 _746;
org$frostlang$frostc$Type* _747;
frost$core$Bit _750;
bool _753;
bool _754;
frost$core$Bit _755;
bool _757;
frost$core$Bit _760;
frost$core$Bit _764;
bool _767;
bool _768;
frost$core$Bit _769;
frost$core$Bit _773;
bool _774;
frost$core$Object* _775;
org$frostlang$frostc$IR$Value* _779;
bool _780;
frost$core$Bit _781;
bool _782;
frost$core$Int _784;
org$frostlang$frostc$IR$Value* _787;
frost$collections$Stack** _793;
frost$collections$Stack* _794;
frost$collections$Iterable* _795;
$fn19 _796;
frost$collections$Iterator* _797;
$fn20 _799;
frost$core$Bit _800;
bool _801;
$fn21 _804;
frost$core$Object* _805;
org$frostlang$frostc$Compiler$EnclosingContext* _806;
frost$core$Object* _807;
org$frostlang$frostc$Compiler$EnclosingContext* _809;
frost$core$Object* _810;
org$frostlang$frostc$Compiler$EnclosingContext* _814;
frost$core$Int* _815;
frost$core$Int _816;
frost$core$Int _817;
int64_t _820;
int64_t _821;
bool _822;
frost$core$Bit _823;
bool _825;
frost$core$Object* _828;
org$frostlang$frostc$Compiler$EnclosingContext* _830;
frost$core$Object* _831;
frost$core$Object* _834;
org$frostlang$frostc$Compiler$EnclosingContext* _838;
frost$core$Object* _840;
org$frostlang$frostc$Compiler$EnclosingContext* _842;
frost$core$Object* _843;
frost$core$Object* _847;
frost$collections$Stack** _853;
frost$collections$Stack* _854;
frost$core$Int _855;
frost$core$Int _857;
int64_t _858;
int64_t _859;
bool _860;
frost$core$Bit _861;
bool _862;
frost$collections$Array** _866;
frost$collections$Array* _867;
frost$collections$CollectionView* _868;
$fn22 _869;
frost$core$Int _870;
int64_t _872;
int64_t _873;
bool _874;
frost$core$Bit _875;
bool _876;
frost$core$Int _878;
frost$collections$Array** _882;
frost$collections$Array* _883;
frost$collections$CollectionView* _884;
$fn23 _885;
frost$core$Int _886;
int64_t _887;
int64_t _888;
bool _889;
frost$core$Bit _890;
bool _891;
frost$core$Int _893;
frost$collections$Array** _897;
frost$collections$Array* _898;
frost$collections$Array** _899;
frost$collections$Array* _900;
frost$collections$CollectionView* _901;
$fn24 _902;
frost$core$Int _903;
frost$core$Int _904;
int64_t _905;
int64_t _906;
int64_t _907;
frost$core$Int _908;
int64_t _909;
int64_t _910;
int64_t _911;
frost$core$Int _912;
frost$core$Int _914;
int64_t _915;
int64_t _916;
bool _917;
frost$core$Bit _918;
bool _919;
frost$collections$CollectionView* _921;
$fn25 _922;
frost$core$Int _923;
int64_t _924;
int64_t _925;
bool _926;
frost$core$Bit _927;
bool _928;
frost$core$Int _930;
frost$core$Object*** _934;
frost$core$Object** _935;
frost$core$Int64 _936;
int64_t _937;
frost$core$Object* _938;
frost$core$Object* _939;
frost$core$Object* _942;
frost$core$Object* _943;
frost$core$Object* _945;
org$frostlang$frostc$Compiler$EnclosingContext* _948;
frost$core$Int* _949;
frost$core$Int _950;
frost$core$Int _951;
int64_t _954;
int64_t _955;
bool _956;
frost$core$Bit _957;
bool _959;
frost$collections$Stack** _962;
frost$collections$Stack* _963;
frost$core$Object* _964;
org$frostlang$frostc$Compiler$EnclosingContext* _965;
frost$core$Object* _966;
frost$core$Object* _973;
frost$core$Object* _970;
org$frostlang$frostc$Variable** _977;
org$frostlang$frostc$Variable* _978;
bool _979;
frost$core$Bit _980;
bool _981;
org$frostlang$frostc$Variable** _985;
org$frostlang$frostc$Variable* _986;
bool _987;
frost$core$Bit _988;
bool _989;
frost$core$Int _991;
org$frostlang$frostc$Variable* _994;
org$frostlang$frostc$Variable$Storage** _995;
org$frostlang$frostc$Variable$Storage* _996;
frost$core$Int* _997;
frost$core$Int _998;
frost$core$Int _999;
int64_t _1002;
int64_t _1003;
bool _1004;
frost$core$Bit _1005;
bool _1007;
frost$core$Int* _1009;
frost$core$Int _1010;
frost$core$Int _1013;
org$frostlang$frostc$IR* _1021;
org$frostlang$frostc$IR$Statement* _1022;
frost$core$Int _1023;
org$frostlang$frostc$IR$Value* _1024;
bool _1025;
frost$core$Bit _1026;
bool _1027;
frost$core$Int _1017;
frost$core$Int _1029;
org$frostlang$frostc$IR$Value* _1032;
org$frostlang$frostc$IR$Value* _1033;
frost$core$Int _1034;
frost$core$Int _1035;
org$frostlang$frostc$IR$Value* _1036;
bool _1037;
frost$core$Bit _1038;
bool _1039;
frost$core$Int _1041;
org$frostlang$frostc$IR$Value* _1044;
$fn26 _1045;
org$frostlang$frostc$Type* _1046;
$fn27 _1049;
org$frostlang$frostc$IR$Statement$ID _1050;
frost$core$Object* _1051;
frost$core$Object* _1053;
frost$core$Object* _1055;
org$frostlang$frostc$IR* _1058;
org$frostlang$frostc$IR$Statement* _1059;
frost$core$Int _1060;
org$frostlang$frostc$IR$Block$ID$nullable* _1061;
org$frostlang$frostc$IR$Block$ID$nullable _1062;
bool _1063;
frost$core$Bit _1064;
bool _1065;
frost$core$Int _1067;
org$frostlang$frostc$IR$Block$ID _1070;
$fn28 _1072;
org$frostlang$frostc$IR$Statement$ID _1073;
frost$core$Object* _1074;
frost$collections$Stack** _1081;
frost$collections$Stack* _1082;
frost$collections$Iterable* _1083;
$fn29 _1084;
frost$collections$Iterator* _1085;
$fn30 _1087;
frost$core$Bit _1088;
bool _1089;
$fn31 _1092;
frost$core$Object* _1093;
org$frostlang$frostc$Compiler$EnclosingContext* _1094;
frost$core$Object* _1095;
org$frostlang$frostc$Compiler$EnclosingContext* _1097;
frost$core$Object* _1098;
org$frostlang$frostc$Compiler$EnclosingContext* _1102;
frost$core$Int* _1103;
frost$core$Int _1104;
frost$core$Int _1105;
int64_t _1108;
int64_t _1109;
bool _1110;
frost$core$Bit _1111;
bool _1113;
org$frostlang$frostc$Compiler$EnclosingContext* _1116;
org$frostlang$frostc$Compiler$EnclosingContext* _1117;
frost$core$Object* _1118;
frost$core$Object* _1120;
org$frostlang$frostc$Compiler$EnclosingContext* _1122;
frost$core$Object* _1123;
frost$core$Object* _1126;
frost$core$Object* _1129;
frost$core$Object* _1132;
org$frostlang$frostc$Compiler$EnclosingContext* _1134;
frost$core$Object* _1135;
frost$core$Object* _1139;
frost$core$Object* _1142;
frost$core$Object* _1145;
org$frostlang$frostc$Compiler$EnclosingContext* _1148;
frost$core$Object* _1150;
org$frostlang$frostc$Compiler$EnclosingContext* _1152;
frost$core$Object* _1153;
frost$core$Object* _1156;
org$frostlang$frostc$Compiler$EnclosingContext* _1159;
bool _1160;
frost$core$Bit _1161;
bool _1162;
org$frostlang$frostc$Compiler$EnclosingContext* _1165;
bool _1166;
frost$core$Bit _1167;
bool _1168;
frost$core$Int _1170;
org$frostlang$frostc$Compiler$EnclosingContext* _1173;
frost$core$Int* _1174;
frost$core$Int _1175;
frost$core$Int _1176;
int64_t _1179;
int64_t _1180;
bool _1181;
frost$core$Bit _1182;
bool _1184;
frost$collections$ListView** _1186;
frost$collections$ListView* _1187;
frost$core$Int* _1188;
frost$core$Int _1189;
org$frostlang$frostc$Compiler$InlineReturn** _1190;
org$frostlang$frostc$Compiler$InlineReturn* _1191;
frost$core$Object* _1193;
org$frostlang$frostc$Compiler$InlineReturn* _1195;
frost$core$Object* _1196;
org$frostlang$frostc$IR$Block$ID* _1199;
org$frostlang$frostc$IR$Block$ID _1200;
org$frostlang$frostc$Compiler$InlineReturn* _1203;
org$frostlang$frostc$Variable** _1204;
org$frostlang$frostc$Variable* _1205;
bool _1206;
frost$core$Bit _1207;
bool _1208;
org$frostlang$frostc$Compiler$InlineReturn* _1212;
org$frostlang$frostc$Variable** _1213;
org$frostlang$frostc$Variable* _1214;
bool _1215;
frost$core$Bit _1216;
bool _1217;
frost$core$Int _1219;
org$frostlang$frostc$Variable* _1222;
org$frostlang$frostc$Variable$Storage** _1223;
org$frostlang$frostc$Variable$Storage* _1224;
frost$core$Int* _1225;
frost$core$Int _1226;
frost$core$Int _1227;
int64_t _1230;
int64_t _1231;
bool _1232;
frost$core$Bit _1233;
bool _1235;
frost$core$Int* _1237;
frost$core$Int _1238;
frost$core$Int _1241;
org$frostlang$frostc$IR* _1249;
org$frostlang$frostc$IR$Statement* _1250;
frost$core$Int _1251;
org$frostlang$frostc$IR$Value* _1252;
bool _1253;
frost$core$Bit _1254;
bool _1255;
frost$core$Int _1245;
frost$core$Int _1257;
org$frostlang$frostc$IR$Value* _1260;
org$frostlang$frostc$IR$Value* _1261;
frost$core$Int _1262;
frost$core$Int _1263;
org$frostlang$frostc$IR$Value* _1264;
bool _1265;
frost$core$Bit _1266;
bool _1267;
frost$core$Int _1269;
org$frostlang$frostc$IR$Value* _1272;
$fn32 _1273;
org$frostlang$frostc$Type* _1274;
$fn33 _1277;
org$frostlang$frostc$IR$Statement$ID _1278;
frost$core$Object* _1279;
frost$core$Object* _1281;
frost$core$Object* _1283;
bool _1286;
org$frostlang$frostc$IR$Value* _1288;
bool _1289;
frost$core$Bit _1290;
bool _1291;
frost$core$Int _1293;
org$frostlang$frostc$IR$Value* _1296;
$fn34 _1297;
org$frostlang$frostc$Type* _1298;
frost$core$Bit _1301;
bool _1304;
bool _1305;
frost$core$Bit _1306;
bool _1308;
frost$core$Bit _1311;
frost$core$Bit _1315;
bool _1318;
bool _1319;
frost$core$Bit _1320;
frost$core$Bit _1324;
bool _1325;
frost$core$Object* _1326;
org$frostlang$frostc$IR$Value* _1330;
bool _1331;
frost$core$Bit _1332;
bool _1333;
frost$core$Int _1335;
org$frostlang$frostc$IR$Value* _1338;
org$frostlang$frostc$Compiler$InlineReturn* _1344;
org$frostlang$frostc$IR$Value* _1345;
frost$core$Object* _1346;
org$frostlang$frostc$IR$Value** _1348;
org$frostlang$frostc$IR$Value* _1349;
frost$core$Object* _1350;
org$frostlang$frostc$IR$Value** _1352;
org$frostlang$frostc$IR* _1356;
org$frostlang$frostc$IR$Statement* _1357;
frost$core$Int _1358;
org$frostlang$frostc$IR$Block$ID _1359;
$fn35 _1361;
org$frostlang$frostc$IR$Statement$ID _1362;
frost$core$Object* _1363;
org$frostlang$frostc$Compiler$InlineReturn* _1365;
frost$core$Object* _1366;
frost$core$Int _1371;
org$frostlang$frostc$IR* _1377;
org$frostlang$frostc$IR$Statement* _1378;
frost$core$Int _1379;
org$frostlang$frostc$IR$Value* _1380;
$fn36 _1382;
org$frostlang$frostc$IR$Statement$ID _1383;
frost$core$Object* _1384;
org$frostlang$frostc$Compiler$EnclosingContext* _1387;
frost$core$Object* _1388;
org$frostlang$frostc$Compiler$EnclosingContext* _1391;
frost$core$Object* _1392;
org$frostlang$frostc$IR$Value* _1396;
frost$core$Object* _1397;
org$frostlang$frostc$MethodDecl* _1403;
org$frostlang$frostc$Type** _1404;
org$frostlang$frostc$Type* _1405;
frost$core$Equatable* _1406;
org$frostlang$frostc$Type** _1407;
org$frostlang$frostc$Type* _1408;
frost$core$Equatable* _1409;
$fn37 _1410;
frost$core$Bit _1411;
bool _1412;
org$frostlang$frostc$MethodDecl* _1415;
org$frostlang$frostc$MethodDecl$Kind* _1416;
org$frostlang$frostc$MethodDecl$Kind _1417;
frost$core$Equatable* _1418;
frost$core$Int _1419;
frost$core$Int* _1422;
org$frostlang$frostc$MethodDecl$Kind _1424;
org$frostlang$frostc$MethodDecl$Kind _1427;
frost$core$Equatable* _1428;
$fn38 _1429;
frost$core$Bit _1430;
bool _1431;
frost$core$Object* _1432;
frost$core$Object* _1434;
org$frostlang$frostc$ASTNode* _1438;
frost$core$Int _1439;
org$frostlang$frostc$Position _1440;
org$frostlang$frostc$ASTNode* _1442;
frost$core$Object* _1444;
org$frostlang$frostc$MethodDecl* _1447;
frost$core$Object* _1448;
org$frostlang$frostc$ClassDecl* _1451;
frost$core$Object* _1452;
org$frostlang$frostc$IR* _1455;
frost$core$Object* _1456;
org$frostlang$frostc$MethodDecl* _1461;
org$frostlang$frostc$Type** _1462;
org$frostlang$frostc$Type* _1463;
frost$core$Object* _1464;
$fn39 _1467;
frost$core$String* _1468;
frost$core$String* _1469;
frost$core$Object* _1470;
frost$core$Object* _1472;
frost$core$Object* _1474;
frost$core$String* _1477;
frost$core$String* _1478;
frost$core$Int _1483;
frost$core$Int _1484;
frost$core$Int _1485;
org$frostlang$frostc$Position _1486;
frost$core$Object* _1490;
frost$core$Object* _1492;
frost$core$Object* _1494;
frost$collections$Stack** _1500;
frost$collections$Stack* _1501;
frost$collections$Iterable* _1502;
$fn40 _1503;
frost$collections$Iterator* _1504;
$fn41 _1506;
frost$core$Bit _1507;
bool _1508;
$fn42 _1511;
frost$core$Object* _1512;
org$frostlang$frostc$Compiler$EnclosingContext* _1513;
frost$core$Object* _1514;
org$frostlang$frostc$Compiler$EnclosingContext* _1516;
frost$core$Object* _1517;
org$frostlang$frostc$Compiler$EnclosingContext* _1521;
frost$core$Int* _1522;
frost$core$Int _1523;
frost$core$Int _1524;
int64_t _1527;
int64_t _1528;
bool _1529;
frost$core$Bit _1530;
bool _1532;
frost$core$Object* _1535;
org$frostlang$frostc$Compiler$EnclosingContext* _1537;
frost$core$Object* _1538;
frost$core$Object* _1541;
org$frostlang$frostc$Compiler$EnclosingContext* _1545;
frost$core$Object* _1547;
org$frostlang$frostc$Compiler$EnclosingContext* _1549;
frost$core$Object* _1550;
frost$core$Object* _1554;
org$frostlang$frostc$IR$Block$ID$nullable* _1558;
org$frostlang$frostc$IR$Block$ID$nullable _1559;
bool _1560;
frost$core$Bit _1561;
bool _1562;
org$frostlang$frostc$IR* _1565;
org$frostlang$frostc$IR$Statement* _1566;
frost$core$Int _1567;
org$frostlang$frostc$IR$Block$ID$nullable* _1568;
org$frostlang$frostc$IR$Block$ID$nullable _1569;
bool _1570;
frost$core$Bit _1571;
bool _1572;
frost$core$Int _1574;
org$frostlang$frostc$IR$Block$ID _1577;
$fn43 _1579;
org$frostlang$frostc$IR$Statement$ID _1580;
frost$core$Object* _1581;
frost$collections$Stack** _1588;
frost$collections$Stack* _1589;
frost$collections$Iterable* _1590;
$fn44 _1591;
frost$collections$Iterator* _1592;
$fn45 _1594;
frost$core$Bit _1595;
bool _1596;
$fn46 _1599;
frost$core$Object* _1600;
org$frostlang$frostc$Compiler$EnclosingContext* _1601;
frost$core$Object* _1602;
org$frostlang$frostc$Compiler$EnclosingContext* _1604;
frost$core$Object* _1605;
org$frostlang$frostc$Compiler$EnclosingContext* _1609;
frost$core$Int* _1610;
frost$core$Int _1611;
frost$core$Int _1612;
int64_t _1615;
int64_t _1616;
bool _1617;
frost$core$Bit _1618;
bool _1620;
org$frostlang$frostc$Compiler$EnclosingContext* _1623;
org$frostlang$frostc$Compiler$EnclosingContext* _1624;
frost$core$Object* _1625;
frost$core$Object* _1627;
org$frostlang$frostc$Compiler$EnclosingContext* _1629;
frost$core$Object* _1630;
frost$core$Object* _1633;
frost$core$Object* _1636;
frost$core$Object* _1639;
org$frostlang$frostc$Compiler$EnclosingContext* _1641;
frost$core$Object* _1642;
frost$core$Object* _1646;
frost$core$Object* _1649;
frost$core$Object* _1652;
org$frostlang$frostc$Compiler$EnclosingContext* _1655;
frost$core$Object* _1657;
org$frostlang$frostc$Compiler$EnclosingContext* _1659;
frost$core$Object* _1660;
frost$core$Object* _1663;
org$frostlang$frostc$Compiler$EnclosingContext* _1666;
bool _1667;
frost$core$Bit _1668;
bool _1669;
org$frostlang$frostc$Compiler$EnclosingContext* _1672;
bool _1673;
frost$core$Bit _1674;
bool _1675;
frost$core$Int _1677;
org$frostlang$frostc$Compiler$EnclosingContext* _1680;
frost$core$Int* _1681;
frost$core$Int _1682;
frost$core$Int _1683;
int64_t _1686;
int64_t _1687;
bool _1688;
frost$core$Bit _1689;
bool _1691;
frost$collections$ListView** _1693;
frost$collections$ListView* _1694;
frost$core$Int* _1695;
frost$core$Int _1696;
org$frostlang$frostc$Compiler$InlineReturn** _1697;
org$frostlang$frostc$Compiler$InlineReturn* _1698;
frost$core$Object* _1700;
org$frostlang$frostc$Compiler$InlineReturn* _1702;
frost$core$Object* _1703;
org$frostlang$frostc$IR$Block$ID* _1706;
org$frostlang$frostc$IR$Block$ID _1707;
org$frostlang$frostc$IR$Block$ID _1710;
frost$core$Bit _1711;
bool _1712;
org$frostlang$frostc$IR* _1715;
org$frostlang$frostc$IR$Statement* _1716;
frost$core$Int _1717;
org$frostlang$frostc$IR$Block$ID _1718;
$fn47 _1720;
org$frostlang$frostc$IR$Statement$ID _1721;
frost$core$Object* _1722;
org$frostlang$frostc$Compiler$InlineReturn* _1725;
frost$core$Object* _1726;
org$frostlang$frostc$IR* _1733;
org$frostlang$frostc$IR$Statement* _1734;
frost$core$Int _1735;
$fn48 _1737;
org$frostlang$frostc$IR$Statement$ID _1738;
frost$core$Object* _1739;
org$frostlang$frostc$Compiler$EnclosingContext* _1742;
frost$core$Object* _1743;
org$frostlang$frostc$Compiler$EnclosingContext* _1746;
frost$core$Object* _1747;
org$frostlang$frostc$MethodDecl* _1752;
frost$core$Object* _1753;
org$frostlang$frostc$ClassDecl* _1756;
frost$core$Object* _1757;
org$frostlang$frostc$IR* _1760;
frost$core$Object* _1761;
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
_94 = frost$core$Int64$init$frost$core$Int(_70);
_95 = _94.value;
_96 = _93[_95];
_97 = _96;
frost$core$Frost$ref$frost$core$Object$Q(_97);
_100 = _96;
_101 = _100;
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_103);
_106 = ((org$frostlang$frostc$ClassDecl*) _100);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_108 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local1);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local1) = _106;
_114 = _100;
frost$core$Frost$unref$frost$core$Object$Q(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:31
_117 = &param0->currentMethod;
_118 = *_117;
_119 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:31:52
_121 = (frost$core$Int) {0u};
_122 = _119.value;
_123 = _121.value;
_124 = _122 >= _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block15; else goto block14;
block15:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_130 = &_118->contents;
_131 = *_130;
_132 = ((frost$collections$CollectionView*) _131);
ITable* $tmp58 = _132->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
_133 = $tmp58->methods[0];
_134 = _133(_132);
_136 = _119.value;
_137 = _134.value;
_138 = _136 < _137;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block13; else goto block14;
block14:;
_142 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _142, &$s60);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_146 = &_118->contents;
_147 = *_146;
_148 = ((frost$collections$CollectionView*) _147);
ITable* $tmp61 = _148->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
_149 = $tmp61->methods[0];
_150 = _149(_148);
_151 = _150.value;
_152 = _119.value;
_153 = _151 > _152;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block17; else goto block18;
block18:;
_157 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s62, _157);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_161 = &_118->contents;
_162 = *_161;
_163 = &_118->contents;
_164 = *_163;
_165 = ((frost$collections$CollectionView*) _164);
ITable* $tmp63 = _165->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
_166 = $tmp63->methods[0];
_167 = _166(_165);
_168 = (frost$core$Int) {1u};
_169 = _167.value;
_170 = _168.value;
_171 = _169 - _170;
_172 = (frost$core$Int) {_171};
_173 = _172.value;
_174 = _119.value;
_175 = _173 - _174;
_176 = (frost$core$Int) {_175};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_178 = (frost$core$Int) {0u};
_179 = _176.value;
_180 = _178.value;
_181 = _179 >= _180;
_182 = (frost$core$Bit) {_181};
_183 = _182.value;
if (_183) goto block22; else goto block21;
block22:;
_185 = ((frost$collections$CollectionView*) _162);
ITable* $tmp64 = _185->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp64 = $tmp64->next;
}
_186 = $tmp64->methods[0];
_187 = _186(_185);
_188 = _176.value;
_189 = _187.value;
_190 = _188 < _189;
_191 = (frost$core$Bit) {_190};
_192 = _191.value;
if (_192) goto block20; else goto block21;
block21:;
_194 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, _194, &$s66);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_198 = &_162->data;
_199 = *_198;
_200 = frost$core$Int64$init$frost$core$Int(_176);
_201 = _200.value;
_202 = _199[_201];
_203 = _202;
frost$core$Frost$ref$frost$core$Object$Q(_203);
_206 = _202;
_207 = _206;
frost$core$Frost$ref$frost$core$Object$Q(_207);
_209 = _202;
frost$core$Frost$unref$frost$core$Object$Q(_209);
_212 = ((org$frostlang$frostc$MethodDecl*) _206);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_214 = ((frost$core$Object*) _212);
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = *(&local2);
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
*(&local2) = _212;
_220 = _206;
frost$core$Frost$unref$frost$core$Object$Q(_220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:32
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Return.frost:32:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_225 = param1.file;
_226 = param1.line;
_227 = param1.column;
_228 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_225, _226, _227);
*(&local3) = _228;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:33
_232 = *(&local2);
_233 = ((org$frostlang$frostc$Symbol*) _232);
_234 = &_233->name;
_235 = *_234;
_236 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_235, &$s67);
_237 = _236.value;
if (_237) goto block27; else goto block25;
block27:;
_239 = *(&local2);
_240 = &_239->parameters;
_241 = *_240;
_242 = ((frost$collections$CollectionView*) _241);
ITable* $tmp68 = _242->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_243 = $tmp68->methods[0];
_244 = _243(_242);
_245 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:33:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_248 = _244.value;
_249 = _245.value;
_250 = _248 == _249;
_251 = (frost$core$Bit) {_250};
_253 = _251.value;
if (_253) goto block26; else goto block25;
block26:;
_255 = *(&local2);
_256 = &_255->owner;
_257 = *_256;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:34:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_262 = &_257->_valid;
_263 = *_262;
_265 = _263.value;
if (_265) goto block31; else goto block32;
block32:;
_267 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _267, &$s70);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_271 = &_257->value;
_272 = *_271;
_273 = _272;
_274 = _273;
frost$core$Frost$ref$frost$core$Object$Q(_274);
_277 = ((org$frostlang$frostc$ClassDecl*) _273);
_278 = &_277->name;
_279 = *_278;
_280 = ((frost$core$Equatable*) _279);
_281 = ((frost$core$Equatable*) &$s71);
ITable* $tmp72 = _280->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp72 = $tmp72->next;
}
_282 = $tmp72->methods[1];
_283 = _282(_280, _281);
_284 = _283.value;
_285 = _273;
frost$core$Frost$unref$frost$core$Object$Q(_285);
if (_284) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:36
_289 = *(&local1);
_290 = &_289->rawSuper;
_291 = *_290;
_292 = _291 != NULL;
_293 = (frost$core$Bit) {_292};
_294 = _293.value;
if (_294) goto block35; else goto block34;
block35:;
_296 = *(&local1);
_297 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, _296);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:36:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_300 = _297.value;
_301 = !_300;
_302 = (frost$core$Bit) {_301};
_304 = _302.value;
if (_304) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:37
_307 = *(&local1);
_308 = &_307->type;
_309 = *_308;
_310 = *(&local1);
_311 = &_310->rawSuper;
_312 = *_311;
_313 = _312 != NULL;
_314 = (frost$core$Bit) {_313};
_315 = _314.value;
if (_315) goto block37; else goto block38;
block38:;
_317 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, _317, &$s74);
abort(); // unreachable
block37:;
_320 = _312;
_321 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, _309, _320);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_323 = ((frost$core$Object*) _321);
frost$core$Frost$ref$frost$core$Object$Q(_323);
_325 = *(&local4);
_326 = ((frost$core$Object*) _325);
frost$core$Frost$unref$frost$core$Object$Q(_326);
*(&local4) = _321;
_329 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_329);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:38
_332 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_333 = (frost$core$Int) {9u};
_334 = *(&local3);
_335 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_336 = (frost$core$Int) {16u};
_337 = *(&local3);
_338 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_339 = (frost$core$Int) {41u};
_340 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(_338, _339, _340);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(_335, _336, _337, _338, &$s75);
_343 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_343);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_332, _333, _334, _335, _343);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _332);
_347 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_347);
_349 = ((frost$core$Object*) _338);
frost$core$Frost$unref$frost$core$Object$Q(_349);
_351 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_351);
_353 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_353);
_355 = *(&local4);
_356 = ((frost$core$Object*) _355);
frost$core$Frost$unref$frost$core$Object$Q(_356);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:42
_361 = &param0->inFieldCleanup;
_362 = *_361;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:42:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_365 = _362.value;
_366 = !_365;
_367 = (frost$core$Bit) {_366};
_369 = _367.value;
if (_369) goto block40; else goto block41;
block41:;
_371 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s76, _371);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:43
_375 = (frost$core$Bit) {true};
_376 = &param0->inFieldCleanup;
*_376 = _375;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:44
_379 = *(&local2);
_380 = &_379->owner;
_381 = *_380;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:44:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_386 = &_381->_valid;
_387 = *_386;
_389 = _387.value;
if (_389) goto block44; else goto block45;
block45:;
_391 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s77, _391, &$s78);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_395 = &_381->value;
_396 = *_395;
_397 = _396;
_398 = _397;
frost$core$Frost$ref$frost$core$Object$Q(_398);
_401 = ((org$frostlang$frostc$ClassDecl*) _397);
_402 = &_401->fields;
_403 = *_402;
_404 = ((frost$collections$Iterable*) _403);
ITable* $tmp79 = _404->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp79 = $tmp79->next;
}
_405 = $tmp79->methods[0];
_406 = _405(_404);
goto block46;
block46:;
ITable* $tmp80 = _406->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
_408 = $tmp80->methods[0];
_409 = _408(_406);
_410 = _409.value;
if (_410) goto block48; else goto block47;
block47:;
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp81 = _406->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_413 = $tmp81->methods[1];
_414 = _413(_406);
_415 = ((org$frostlang$frostc$FieldDecl*) _414);
_416 = ((frost$core$Object*) _415);
frost$core$Frost$ref$frost$core$Object$Q(_416);
_418 = *(&local5);
_419 = ((frost$core$Object*) _418);
frost$core$Frost$unref$frost$core$Object$Q(_419);
*(&local5) = _415;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:45
_423 = *(&local5);
_424 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, _423);
_425 = _424.value;
if (_425) goto block53; else goto block50;
block53:;
_427 = *(&local5);
_428 = &_427->annotations;
_429 = *_428;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Return.frost:45:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_432 = &_429->flags;
_433 = *_432;
_434 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:45:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_450 = _446.value;
_451 = !_450;
_452 = (frost$core$Bit) {_451};
_454 = _452.value;
if (_454) goto block52; else goto block50;
block52:;
_456 = *(&local5);
_457 = &_456->fieldKind;
_458 = *_457;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp82->value = _458;
_459 = ((frost$core$Equatable*) $tmp82);
_460 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Return.frost:46:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_463 = &(&local7)->$rawValue;
*_463 = _460;
_465 = *(&local7);
*(&local6) = _465;
_468 = *(&local6);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp83;
$tmp83 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp83->value = _468;
_469 = ((frost$core$Equatable*) $tmp83);
ITable* $tmp84 = _459->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp84 = $tmp84->next;
}
_470 = $tmp84->methods[1];
_471 = _470(_459, _469);
_472 = _471.value;
_473 = ((frost$core$Object*) _469);
frost$core$Frost$unref$frost$core$Object$Q(_473);
_475 = ((frost$core$Object*) _459);
frost$core$Frost$unref$frost$core$Object$Q(_475);
if (_472) goto block51; else goto block50;
block51:;
_478 = *(&local5);
_479 = &_478->type;
_480 = *_479;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:46:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_483 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_480);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_486 = _483.value;
_487 = !_486;
_488 = (frost$core$Bit) {_487};
_490 = _488.value;
if (_490) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_493 = (frost$core$Bit) {false};
*(&local8) = _493;
goto block58;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_497 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _480);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_500 = _497.value;
_501 = !_500;
_502 = (frost$core$Bit) {_501};
*(&local8) = _502;
goto block58;
block58:;
_506 = *(&local8);
_507 = _506.value;
if (_507) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:47
_510 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$lvalue$FieldLValue), (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
_511 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_512 = (frost$core$Int) {22u};
_513 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_511, _512, _513, &$s85);
_515 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_516 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_515, _516);
_518 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _511, _515);
_519 = *(&local5);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(_510, param0, param1, _518, _519);
_521 = ($fn86) _510->$class->vtable[3];
_522 = _521(_510);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_524 = ((frost$core$Object*) _522);
frost$core$Frost$ref$frost$core$Object$Q(_524);
_526 = *(&local9);
_527 = ((frost$core$Object*) _526);
frost$core$Frost$unref$frost$core$Object$Q(_527);
*(&local9) = _522;
_530 = ((frost$core$Object*) _522);
frost$core$Frost$unref$frost$core$Object$Q(_530);
_532 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_532);
_534 = ((frost$core$Object*) _515);
frost$core$Frost$unref$frost$core$Object$Q(_534);
_536 = ((frost$core$Object*) _511);
frost$core$Frost$unref$frost$core$Object$Q(_536);
_538 = ((frost$core$Object*) _510);
frost$core$Frost$unref$frost$core$Object$Q(_538);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:51
_541 = *(&local9);
_542 = _541 == NULL;
_543 = (frost$core$Bit) {_542};
_544 = _543.value;
if (_544) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:52
_547 = *(&local9);
_548 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_548);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_551 = _414;
frost$core$Frost$unref$frost$core$Object$Q(_551);
_553 = *(&local5);
_554 = ((frost$core$Object*) _553);
frost$core$Frost$unref$frost$core$Object$Q(_554);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
_557 = ((frost$core$Object*) _406);
frost$core$Frost$unref$frost$core$Object$Q(_557);
_559 = _397;
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
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:54
_575 = *(&local9);
_576 = _575 != NULL;
_577 = (frost$core$Bit) {_576};
_578 = _577.value;
if (_578) goto block65; else goto block66;
block66:;
_580 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _580, &$s88);
abort(); // unreachable
block65:;
_583 = _575;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, _583);
_585 = *(&local9);
_586 = ((frost$core$Object*) _585);
frost$core$Frost$unref$frost$core$Object$Q(_586);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block50;
block50:;
_590 = _414;
frost$core$Frost$unref$frost$core$Object$Q(_590);
_592 = *(&local5);
_593 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_593);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block46;
block48:;
_597 = ((frost$core$Object*) _406);
frost$core$Frost$unref$frost$core$Object$Q(_597);
_599 = _397;
frost$core$Frost$unref$frost$core$Object$Q(_599);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
_602 = &param0->inFieldCleanup;
_603 = *_602;
_604 = _603.value;
if (_604) goto block67; else goto block68;
block68:;
_606 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s89, _606);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:58
_610 = (frost$core$Bit) {false};
_611 = &param0->inFieldCleanup;
*_611 = _610;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:60
_615 = param2 != NULL;
_616 = (frost$core$Bit) {_615};
_617 = _616.value;
if (_617) goto block69; else goto block71;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
_620 = *(&local2);
_621 = &_620->returnType;
_622 = *_621;
_623 = &param0->VOID_TYPE;
_624 = *_623;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:61:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_627 = ((org$frostlang$frostc$Symbol*) _622);
_628 = &_627->name;
_629 = *_628;
_630 = ((org$frostlang$frostc$Symbol*) _624);
_631 = &_630->name;
_632 = *_631;
_633 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_629, _632);
_634 = _633.value;
if (_634) goto block75; else goto block76;
block75:;
_636 = &_622->typeKind;
_637 = *_636;
org$frostlang$frostc$Type$Kind$wrapper* $tmp90;
$tmp90 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp90->value = _637;
_638 = ((frost$core$Equatable*) $tmp90);
_639 = &_624->typeKind;
_640 = *_639;
org$frostlang$frostc$Type$Kind$wrapper* $tmp91;
$tmp91 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp91->value = _640;
_641 = ((frost$core$Equatable*) $tmp91);
ITable* $tmp92 = _638->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
_642 = $tmp92->methods[0];
_643 = _642(_638, _641);
_644 = ((frost$core$Object*) _641);
frost$core$Frost$unref$frost$core$Object$Q(_644);
_646 = ((frost$core$Object*) _638);
frost$core$Frost$unref$frost$core$Object$Q(_646);
*(&local10) = _643;
goto block77;
block76:;
*(&local10) = _633;
goto block77;
block77:;
_652 = *(&local10);
_654 = _652.value;
if (_654) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from Return.frost:62:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6117
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6117:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_661 = param1.file;
_662 = param1.line;
_663 = param1.column;
_664 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_661, _662, _663);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _664, &$s93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:63
_669 = *(&local2);
_670 = ((frost$core$Object*) _669);
frost$core$Frost$unref$frost$core$Object$Q(_670);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_673 = *(&local1);
_674 = ((frost$core$Object*) _673);
frost$core$Frost$unref$frost$core$Object$Q(_674);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_677 = *(&local0);
_678 = ((frost$core$Object*) _677);
frost$core$Frost$unref$frost$core$Object$Q(_678);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:65
_683 = param2 != NULL;
_684 = (frost$core$Bit) {_683};
_685 = _684.value;
if (_685) goto block80; else goto block81;
block81:;
_687 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, _687, &$s95);
abort(); // unreachable
block80:;
_690 = param2;
_691 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_692 = (frost$core$Int) {3u};
_693 = *(&local2);
_694 = &_693->returnType;
_695 = *_694;
_696 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_691, _692, _695, _696);
_698 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _690, _691);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_700 = ((frost$core$Object*) _698);
frost$core$Frost$ref$frost$core$Object$Q(_700);
_702 = *(&local11);
_703 = ((frost$core$Object*) _702);
frost$core$Frost$unref$frost$core$Object$Q(_703);
*(&local11) = _698;
_706 = ((frost$core$Object*) _698);
frost$core$Frost$unref$frost$core$Object$Q(_706);
_708 = ((frost$core$Object*) _691);
frost$core$Frost$unref$frost$core$Object$Q(_708);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
_711 = *(&local11);
_712 = _711 == NULL;
_713 = (frost$core$Bit) {_712};
_714 = _713.value;
if (_714) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:68
_717 = *(&local11);
_718 = ((frost$core$Object*) _717);
frost$core$Frost$unref$frost$core$Object$Q(_718);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_721 = *(&local2);
_722 = ((frost$core$Object*) _721);
frost$core$Frost$unref$frost$core$Object$Q(_722);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_725 = *(&local1);
_726 = ((frost$core$Object*) _725);
frost$core$Frost$unref$frost$core$Object$Q(_726);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_729 = *(&local0);
_730 = ((frost$core$Object*) _729);
frost$core$Frost$unref$frost$core$Object$Q(_730);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:70
_735 = param3.value;
if (_735) goto block86; else goto block85;
block86:;
_737 = *(&local11);
_738 = _737 != NULL;
_739 = (frost$core$Bit) {_738};
_740 = _739.value;
if (_740) goto block87; else goto block88;
block88:;
_742 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _742, &$s97);
abort(); // unreachable
block87:;
_745 = _737;
_746 = ($fn98) _745->$class->vtable[2];
_747 = _746(_745);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_750 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_747);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_753 = _750.value;
_754 = !_753;
_755 = (frost$core$Bit) {_754};
_757 = _755.value;
if (_757) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_760 = (frost$core$Bit) {false};
*(&local12) = _760;
goto block89;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_764 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _747);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_767 = _764.value;
_768 = !_767;
_769 = (frost$core$Bit) {_768};
*(&local12) = _769;
goto block89;
block89:;
_773 = *(&local12);
_774 = _773.value;
_775 = ((frost$core$Object*) _747);
frost$core$Frost$unref$frost$core$Object$Q(_775);
if (_774) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:71
_779 = *(&local11);
_780 = _779 != NULL;
_781 = (frost$core$Bit) {_780};
_782 = _781.value;
if (_782) goto block94; else goto block95;
block95:;
_784 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _784, &$s100);
abort(); // unreachable
block94:;
_787 = _779;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, _787);
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:73
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:73:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5334
_793 = &param0->enclosingContexts;
_794 = *_793;
_795 = ((frost$collections$Iterable*) _794);
ITable* $tmp101 = _795->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp101 = $tmp101->next;
}
_796 = $tmp101->methods[0];
_797 = _796(_795);
goto block97;
block97:;
ITable* $tmp102 = _797->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
_799 = $tmp102->methods[0];
_800 = _799(_797);
_801 = _800.value;
if (_801) goto block99; else goto block98;
block98:;
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp103 = _797->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp103 = $tmp103->next;
}
_804 = $tmp103->methods[1];
_805 = _804(_797);
_806 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _805);
_807 = ((frost$core$Object*) _806);
frost$core$Frost$ref$frost$core$Object$Q(_807);
_809 = *(&local13);
_810 = ((frost$core$Object*) _809);
frost$core$Frost$unref$frost$core$Object$Q(_810);
*(&local13) = _806;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5335
_814 = *(&local13);
_815 = &_814->$rawValue;
_816 = *_815;
_817 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5336:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_820 = _816.value;
_821 = _817.value;
_822 = _820 == _821;
_823 = (frost$core$Bit) {_822};
_825 = _823.value;
if (_825) goto block101; else goto block100;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5337
_828 = _805;
frost$core$Frost$unref$frost$core$Object$Q(_828);
_830 = *(&local13);
_831 = ((frost$core$Object*) _830);
frost$core$Frost$unref$frost$core$Object$Q(_831);
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_834 = ((frost$core$Object*) _797);
frost$core$Frost$unref$frost$core$Object$Q(_834);
goto block96;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5340
_838 = *(&local13);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, _838);
_840 = _805;
frost$core$Frost$unref$frost$core$Object$Q(_840);
_842 = *(&local13);
_843 = ((frost$core$Object*) _842);
frost$core$Frost$unref$frost$core$Object$Q(_843);
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block97;
block99:;
_847 = ((frost$core$Object*) _797);
frost$core$Frost$unref$frost$core$Object$Q(_847);
goto block96;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
goto block103;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:75
_853 = &param0->enclosingContexts;
_854 = *_853;
_855 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:75:49
_857 = (frost$core$Int) {0u};
_858 = _855.value;
_859 = _857.value;
_860 = _858 >= _859;
_861 = (frost$core$Bit) {_860};
_862 = _861.value;
if (_862) goto block108; else goto block107;
block108:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_866 = &_854->contents;
_867 = *_866;
_868 = ((frost$collections$CollectionView*) _867);
ITable* $tmp104 = _868->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp104 = $tmp104->next;
}
_869 = $tmp104->methods[0];
_870 = _869(_868);
_872 = _855.value;
_873 = _870.value;
_874 = _872 < _873;
_875 = (frost$core$Bit) {_874};
_876 = _875.value;
if (_876) goto block106; else goto block107;
block107:;
_878 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, _878, &$s106);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_882 = &_854->contents;
_883 = *_882;
_884 = ((frost$collections$CollectionView*) _883);
ITable* $tmp107 = _884->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
_885 = $tmp107->methods[0];
_886 = _885(_884);
_887 = _886.value;
_888 = _855.value;
_889 = _887 > _888;
_890 = (frost$core$Bit) {_889};
_891 = _890.value;
if (_891) goto block110; else goto block111;
block111:;
_893 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s108, _893);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_897 = &_854->contents;
_898 = *_897;
_899 = &_854->contents;
_900 = *_899;
_901 = ((frost$collections$CollectionView*) _900);
ITable* $tmp109 = _901->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp109 = $tmp109->next;
}
_902 = $tmp109->methods[0];
_903 = _902(_901);
_904 = (frost$core$Int) {1u};
_905 = _903.value;
_906 = _904.value;
_907 = _905 - _906;
_908 = (frost$core$Int) {_907};
_909 = _908.value;
_910 = _855.value;
_911 = _909 - _910;
_912 = (frost$core$Int) {_911};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_914 = (frost$core$Int) {0u};
_915 = _912.value;
_916 = _914.value;
_917 = _915 >= _916;
_918 = (frost$core$Bit) {_917};
_919 = _918.value;
if (_919) goto block115; else goto block114;
block115:;
_921 = ((frost$collections$CollectionView*) _898);
ITable* $tmp110 = _921->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
_922 = $tmp110->methods[0];
_923 = _922(_921);
_924 = _912.value;
_925 = _923.value;
_926 = _924 < _925;
_927 = (frost$core$Bit) {_926};
_928 = _927.value;
if (_928) goto block113; else goto block114;
block114:;
_930 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _930, &$s112);
abort(); // unreachable
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_934 = &_898->data;
_935 = *_934;
_936 = frost$core$Int64$init$frost$core$Int(_912);
_937 = _936.value;
_938 = _935[_937];
_939 = _938;
frost$core$Frost$ref$frost$core$Object$Q(_939);
_942 = _938;
_943 = _942;
frost$core$Frost$ref$frost$core$Object$Q(_943);
_945 = _938;
frost$core$Frost$unref$frost$core$Object$Q(_945);
_948 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _942);
_949 = &_948->$rawValue;
_950 = *_949;
_951 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:76:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_954 = _950.value;
_955 = _951.value;
_956 = _954 == _955;
_957 = (frost$core$Bit) {_956};
_959 = _957.value;
if (_959) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:77
_962 = &param0->enclosingContexts;
_963 = *_962;
_964 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_963);
_965 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _964);
_966 = _964;
frost$core$Frost$unref$frost$core$Object$Q(_966);
_973 = _942;
frost$core$Frost$unref$frost$core$Object$Q(_973);
goto block103;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:80
_970 = _942;
frost$core$Frost$unref$frost$core$Object$Q(_970);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:84
_977 = &param0->returnVar;
_978 = *_977;
_979 = _978 != NULL;
_980 = (frost$core$Bit) {_979};
_981 = _980.value;
if (_981) goto block120; else goto block122;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:86
_985 = &param0->returnVar;
_986 = *_985;
_987 = _986 != NULL;
_988 = (frost$core$Bit) {_987};
_989 = _988.value;
if (_989) goto block123; else goto block124;
block124:;
_991 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _991, &$s114);
abort(); // unreachable
block123:;
_994 = _986;
_995 = &_994->storage;
_996 = *_995;
_997 = &_996->$rawValue;
_998 = *_997;
_999 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:87:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1002 = _998.value;
_1003 = _999.value;
_1004 = _1002 == _1003;
_1005 = (frost$core$Bit) {_1004};
_1007 = _1005.value;
if (_1007) goto block126; else goto block127;
block126:;
_1009 = &_996->$data.$LOCAL.field0;
_1010 = *_1009;
*(&local15) = _1010;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:88
_1013 = *(&local15);
*(&local14) = _1013;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:94
_1021 = *(&local0);
_1022 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1023 = (frost$core$Int) {27u};
_1024 = *(&local11);
_1025 = _1024 != NULL;
_1026 = (frost$core$Bit) {_1025};
_1027 = _1026.value;
if (_1027) goto block129; else goto block130;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:91
_1017 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s115, _1017);
abort(); // unreachable
block130:;
_1029 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s116, _1029, &$s117);
abort(); // unreachable
block129:;
_1032 = _1024;
_1033 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_1034 = (frost$core$Int) {2u};
_1035 = *(&local14);
_1036 = *(&local11);
_1037 = _1036 != NULL;
_1038 = (frost$core$Bit) {_1037};
_1039 = _1038.value;
if (_1039) goto block131; else goto block132;
block132:;
_1041 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s118, _1041, &$s119);
abort(); // unreachable
block131:;
_1044 = _1036;
_1045 = ($fn120) _1044->$class->vtable[2];
_1046 = _1045(_1044);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_1033, _1034, _1035, _1046);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_1022, _1023, param1, _1032, _1033);
_1049 = ($fn121) _1021->$class->vtable[2];
_1050 = _1049(_1021, _1022);
_1051 = ((frost$core$Object*) _1046);
frost$core$Frost$unref$frost$core$Object$Q(_1051);
_1053 = ((frost$core$Object*) _1033);
frost$core$Frost$unref$frost$core$Object$Q(_1053);
_1055 = ((frost$core$Object*) _1022);
frost$core$Frost$unref$frost$core$Object$Q(_1055);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:96
_1058 = *(&local0);
_1059 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1060 = (frost$core$Int) {1u};
_1061 = &param0->postconditionEntryBlock;
_1062 = *_1061;
_1063 = _1062.nonnull;
_1064 = (frost$core$Bit) {_1063};
_1065 = _1064.value;
if (_1065) goto block133; else goto block134;
block134:;
_1067 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s122, _1067, &$s123);
abort(); // unreachable
block133:;
_1070 = ((org$frostlang$frostc$IR$Block$ID) _1062.value);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1059, _1060, param1, _1070);
_1072 = ($fn124) _1058->$class->vtable[2];
_1073 = _1072(_1058, _1059);
_1074 = ((frost$core$Object*) _1059);
frost$core$Frost$unref$frost$core$Object$Q(_1074);
goto block121;
block122:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:99:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5752
_1081 = &param0->enclosingContexts;
_1082 = *_1081;
_1083 = ((frost$collections$Iterable*) _1082);
ITable* $tmp125 = _1083->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp125 = $tmp125->next;
}
_1084 = $tmp125->methods[0];
_1085 = _1084(_1083);
goto block136;
block136:;
ITable* $tmp126 = _1085->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp126 = $tmp126->next;
}
_1087 = $tmp126->methods[0];
_1088 = _1087(_1085);
_1089 = _1088.value;
if (_1089) goto block138; else goto block137;
block137:;
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp127 = _1085->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
_1092 = $tmp127->methods[1];
_1093 = _1092(_1085);
_1094 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1093);
_1095 = ((frost$core$Object*) _1094);
frost$core$Frost$ref$frost$core$Object$Q(_1095);
_1097 = *(&local17);
_1098 = ((frost$core$Object*) _1097);
frost$core$Frost$unref$frost$core$Object$Q(_1098);
*(&local17) = _1094;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5753
_1102 = *(&local17);
_1103 = &_1102->$rawValue;
_1104 = *_1103;
_1105 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5754:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1108 = _1104.value;
_1109 = _1105.value;
_1110 = _1108 == _1109;
_1111 = (frost$core$Bit) {_1110};
_1113 = _1111.value;
if (_1113) goto block140; else goto block139;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5755
_1116 = *(&local17);
_1117 = _1116;
_1118 = ((frost$core$Object*) _1117);
frost$core$Frost$ref$frost$core$Object$Q(_1118);
_1120 = _1093;
frost$core$Frost$unref$frost$core$Object$Q(_1120);
_1122 = *(&local17);
_1123 = ((frost$core$Object*) _1122);
frost$core$Frost$unref$frost$core$Object$Q(_1123);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1126 = ((frost$core$Object*) _1085);
frost$core$Frost$unref$frost$core$Object$Q(_1126);
*(&local16) = _1117;
_1129 = ((frost$core$Object*) _1117);
frost$core$Frost$ref$frost$core$Object$Q(_1129);
goto block135;
block139:;
_1132 = _1093;
frost$core$Frost$unref$frost$core$Object$Q(_1132);
_1134 = *(&local17);
_1135 = ((frost$core$Object*) _1134);
frost$core$Frost$unref$frost$core$Object$Q(_1135);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block136;
block138:;
_1139 = ((frost$core$Object*) _1085);
frost$core$Frost$unref$frost$core$Object$Q(_1139);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5759
_1142 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1142);
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1145 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1145);
goto block135;
block135:;
_1148 = *(&local16);
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1150 = ((frost$core$Object*) _1148);
frost$core$Frost$ref$frost$core$Object$Q(_1150);
_1152 = *(&local18);
_1153 = ((frost$core$Object*) _1152);
frost$core$Frost$unref$frost$core$Object$Q(_1153);
*(&local18) = _1148;
_1156 = ((frost$core$Object*) _1148);
frost$core$Frost$unref$frost$core$Object$Q(_1156);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
_1159 = *(&local18);
_1160 = _1159 != NULL;
_1161 = (frost$core$Bit) {_1160};
_1162 = _1161.value;
if (_1162) goto block142; else goto block144;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:101
_1165 = *(&local18);
_1166 = _1165 != NULL;
_1167 = (frost$core$Bit) {_1166};
_1168 = _1167.value;
if (_1168) goto block145; else goto block146;
block146:;
_1170 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s128, _1170, &$s129);
abort(); // unreachable
block145:;
_1173 = _1165;
_1174 = &_1173->$rawValue;
_1175 = *_1174;
_1176 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:102:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1179 = _1175.value;
_1180 = _1176.value;
_1181 = _1179 == _1180;
_1182 = (frost$core$Bit) {_1181};
_1184 = _1182.value;
if (_1184) goto block148; else goto block149;
block148:;
_1186 = &_1165->$data.$INLINE_CONTEXT.field0;
_1187 = *_1186;
_1188 = &_1165->$data.$INLINE_CONTEXT.field1;
_1189 = *_1188;
_1190 = &_1165->$data.$INLINE_CONTEXT.field2;
_1191 = *_1190;
*(&local19) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_1193 = ((frost$core$Object*) _1191);
frost$core$Frost$ref$frost$core$Object$Q(_1193);
_1195 = *(&local19);
_1196 = ((frost$core$Object*) _1195);
frost$core$Frost$unref$frost$core$Object$Q(_1196);
*(&local19) = _1191;
_1199 = &_1165->$data.$INLINE_CONTEXT.field3;
_1200 = *_1199;
*(&local20) = _1200;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:104
_1203 = *(&local19);
_1204 = &_1203->variable;
_1205 = *_1204;
_1206 = _1205 != NULL;
_1207 = (frost$core$Bit) {_1206};
_1208 = _1207.value;
if (_1208) goto block151; else goto block153;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:106
_1212 = *(&local19);
_1213 = &_1212->variable;
_1214 = *_1213;
_1215 = _1214 != NULL;
_1216 = (frost$core$Bit) {_1215};
_1217 = _1216.value;
if (_1217) goto block154; else goto block155;
block155:;
_1219 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, _1219, &$s131);
abort(); // unreachable
block154:;
_1222 = _1214;
_1223 = &_1222->storage;
_1224 = *_1223;
_1225 = &_1224->$rawValue;
_1226 = *_1225;
_1227 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:107:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1230 = _1226.value;
_1231 = _1227.value;
_1232 = _1230 == _1231;
_1233 = (frost$core$Bit) {_1232};
_1235 = _1233.value;
if (_1235) goto block157; else goto block158;
block157:;
_1237 = &_1224->$data.$LOCAL.field0;
_1238 = *_1237;
*(&local22) = _1238;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:108
_1241 = *(&local22);
*(&local21) = _1241;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:114
_1249 = *(&local0);
_1250 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1251 = (frost$core$Int) {27u};
_1252 = *(&local11);
_1253 = _1252 != NULL;
_1254 = (frost$core$Bit) {_1253};
_1255 = _1254.value;
if (_1255) goto block160; else goto block161;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:111
_1245 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s132, _1245);
abort(); // unreachable
block161:;
_1257 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s133, _1257, &$s134);
abort(); // unreachable
block160:;
_1260 = _1252;
_1261 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_1262 = (frost$core$Int) {2u};
_1263 = *(&local21);
_1264 = *(&local11);
_1265 = _1264 != NULL;
_1266 = (frost$core$Bit) {_1265};
_1267 = _1266.value;
if (_1267) goto block162; else goto block163;
block163:;
_1269 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s135, _1269, &$s136);
abort(); // unreachable
block162:;
_1272 = _1264;
_1273 = ($fn137) _1272->$class->vtable[2];
_1274 = _1273(_1272);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_1261, _1262, _1263, _1274);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_1250, _1251, param1, _1260, _1261);
_1277 = ($fn138) _1249->$class->vtable[2];
_1278 = _1277(_1249, _1250);
_1279 = ((frost$core$Object*) _1274);
frost$core$Frost$unref$frost$core$Object$Q(_1279);
_1281 = ((frost$core$Object*) _1261);
frost$core$Frost$unref$frost$core$Object$Q(_1281);
_1283 = ((frost$core$Object*) _1250);
frost$core$Frost$unref$frost$core$Object$Q(_1283);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:116
_1286 = param3.value;
if (_1286) goto block166; else goto block165;
block166:;
_1288 = *(&local11);
_1289 = _1288 != NULL;
_1290 = (frost$core$Bit) {_1289};
_1291 = _1290.value;
if (_1291) goto block167; else goto block168;
block168:;
_1293 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, _1293, &$s140);
abort(); // unreachable
block167:;
_1296 = _1288;
_1297 = ($fn141) _1296->$class->vtable[2];
_1298 = _1297(_1296);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:116:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_1301 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_1298);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1304 = _1301.value;
_1305 = !_1304;
_1306 = (frost$core$Bit) {_1305};
_1308 = _1306.value;
if (_1308) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_1311 = (frost$core$Bit) {false};
*(&local23) = _1311;
goto block169;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_1315 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _1298);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_1318 = _1315.value;
_1319 = !_1318;
_1320 = (frost$core$Bit) {_1319};
*(&local23) = _1320;
goto block169;
block169:;
_1324 = *(&local23);
_1325 = _1324.value;
_1326 = ((frost$core$Object*) _1298);
frost$core$Frost$unref$frost$core$Object$Q(_1326);
if (_1325) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:117
_1330 = *(&local11);
_1331 = _1330 != NULL;
_1332 = (frost$core$Bit) {_1331};
_1333 = _1332.value;
if (_1333) goto block174; else goto block175;
block175:;
_1335 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _1335, &$s143);
abort(); // unreachable
block174:;
_1338 = _1330;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, _1338);
goto block165;
block165:;
goto block152;
block153:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:121
_1344 = *(&local19);
_1345 = *(&local11);
_1346 = ((frost$core$Object*) _1345);
frost$core$Frost$ref$frost$core$Object$Q(_1346);
_1348 = &_1344->value;
_1349 = *_1348;
_1350 = ((frost$core$Object*) _1349);
frost$core$Frost$unref$frost$core$Object$Q(_1350);
_1352 = &_1344->value;
*_1352 = _1345;
goto block152;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:123
_1356 = *(&local0);
_1357 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1358 = (frost$core$Int) {1u};
_1359 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1357, _1358, param1, _1359);
_1361 = ($fn144) _1356->$class->vtable[2];
_1362 = _1361(_1356, _1357);
_1363 = ((frost$core$Object*) _1357);
frost$core$Frost$unref$frost$core$Object$Q(_1363);
_1365 = *(&local19);
_1366 = ((frost$core$Object*) _1365);
frost$core$Frost$unref$frost$core$Object$Q(_1366);
*(&local19) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block143;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:126
_1371 = (frost$core$Int) {126u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s145, _1371);
abort(); // unreachable
block144:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:131
_1377 = *(&local0);
_1378 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1379 = (frost$core$Int) {25u};
_1380 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q(_1378, _1379, param1, _1380);
_1382 = ($fn146) _1377->$class->vtable[2];
_1383 = _1382(_1377, _1378);
_1384 = ((frost$core$Object*) _1378);
frost$core$Frost$unref$frost$core$Object$Q(_1384);
goto block143;
block143:;
_1387 = *(&local18);
_1388 = ((frost$core$Object*) _1387);
frost$core$Frost$unref$frost$core$Object$Q(_1388);
*(&local18) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1391 = *(&local16);
_1392 = ((frost$core$Object*) _1391);
frost$core$Frost$unref$frost$core$Object$Q(_1392);
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block121;
block121:;
_1396 = *(&local11);
_1397 = ((frost$core$Object*) _1396);
frost$core$Frost$unref$frost$core$Object$Q(_1397);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block70;
block71:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:136
_1403 = *(&local2);
_1404 = &_1403->returnType;
_1405 = *_1404;
_1406 = ((frost$core$Equatable*) _1405);
_1407 = &param0->VOID_TYPE;
_1408 = *_1407;
_1409 = ((frost$core$Equatable*) _1408);
ITable* $tmp147 = _1406->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
_1410 = $tmp147->methods[1];
_1411 = _1410(_1406, _1409);
_1412 = _1411.value;
if (_1412) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:137
_1415 = *(&local2);
_1416 = &_1415->methodKind;
_1417 = *_1416;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp148;
$tmp148 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp148->value = _1417;
_1418 = ((frost$core$Equatable*) $tmp148);
_1419 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Return.frost:137:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_1422 = &(&local25)->$rawValue;
*_1422 = _1419;
_1424 = *(&local25);
*(&local24) = _1424;
_1427 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp149;
$tmp149 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp149->value = _1427;
_1428 = ((frost$core$Equatable*) $tmp149);
ITable* $tmp150 = _1418->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp150 = $tmp150->next;
}
_1429 = $tmp150->methods[0];
_1430 = _1429(_1418, _1428);
_1431 = _1430.value;
_1432 = ((frost$core$Object*) _1428);
frost$core$Frost$unref$frost$core$Object$Q(_1432);
_1434 = ((frost$core$Object*) _1418);
frost$core$Frost$unref$frost$core$Object$Q(_1434);
if (_1431) goto block178; else goto block179;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
_1438 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_1439 = (frost$core$Int) {39u};
_1440 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position(_1438, _1439, _1440);
_1442 = _1438;
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q(param0, param1, _1442);
_1444 = ((frost$core$Object*) _1438);
frost$core$Frost$unref$frost$core$Object$Q(_1444);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:139
_1447 = *(&local2);
_1448 = ((frost$core$Object*) _1447);
frost$core$Frost$unref$frost$core$Object$Q(_1448);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1451 = *(&local1);
_1452 = ((frost$core$Object*) _1451);
frost$core$Frost$unref$frost$core$Object$Q(_1452);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1455 = *(&local0);
_1456 = ((frost$core$Object*) _1455);
frost$core$Frost$unref$frost$core$Object$Q(_1456);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block179:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:141
_1461 = *(&local2);
_1462 = &_1461->returnType;
_1463 = *_1462;
_1464 = ((frost$core$Object*) _1463);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:142:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_1467 = ($fn151) _1464->$class->vtable[0];
_1468 = _1467(_1464);
_1469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s152, _1468);
_1470 = ((frost$core$Object*) _1469);
frost$core$Frost$ref$frost$core$Object$Q(_1470);
_1472 = ((frost$core$Object*) _1469);
frost$core$Frost$unref$frost$core$Object$Q(_1472);
_1474 = ((frost$core$Object*) _1468);
frost$core$Frost$unref$frost$core$Object$Q(_1474);
_1477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1469, &$s153);
_1478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s154, _1477);
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from Return.frost:141:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6117
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6117:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_1483 = param1.file;
_1484 = param1.line;
_1485 = param1.column;
_1486 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_1483, _1484, _1485);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _1486, _1478);
_1490 = ((frost$core$Object*) _1478);
frost$core$Frost$unref$frost$core$Object$Q(_1490);
_1492 = ((frost$core$Object*) _1477);
frost$core$Frost$unref$frost$core$Object$Q(_1492);
_1494 = ((frost$core$Object*) _1469);
frost$core$Frost$unref$frost$core$Object$Q(_1494);
goto block177;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:144:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5334
_1500 = &param0->enclosingContexts;
_1501 = *_1500;
_1502 = ((frost$collections$Iterable*) _1501);
ITable* $tmp155 = _1502->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp155 = $tmp155->next;
}
_1503 = $tmp155->methods[0];
_1504 = _1503(_1502);
goto block185;
block185:;
ITable* $tmp156 = _1504->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp156 = $tmp156->next;
}
_1506 = $tmp156->methods[0];
_1507 = _1506(_1504);
_1508 = _1507.value;
if (_1508) goto block187; else goto block186;
block186:;
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp157 = _1504->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp157 = $tmp157->next;
}
_1511 = $tmp157->methods[1];
_1512 = _1511(_1504);
_1513 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1512);
_1514 = ((frost$core$Object*) _1513);
frost$core$Frost$ref$frost$core$Object$Q(_1514);
_1516 = *(&local26);
_1517 = ((frost$core$Object*) _1516);
frost$core$Frost$unref$frost$core$Object$Q(_1517);
*(&local26) = _1513;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5335
_1521 = *(&local26);
_1522 = &_1521->$rawValue;
_1523 = *_1522;
_1524 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5336:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1527 = _1523.value;
_1528 = _1524.value;
_1529 = _1527 == _1528;
_1530 = (frost$core$Bit) {_1529};
_1532 = _1530.value;
if (_1532) goto block189; else goto block188;
block189:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5337
_1535 = _1512;
frost$core$Frost$unref$frost$core$Object$Q(_1535);
_1537 = *(&local26);
_1538 = ((frost$core$Object*) _1537);
frost$core$Frost$unref$frost$core$Object$Q(_1538);
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1541 = ((frost$core$Object*) _1504);
frost$core$Frost$unref$frost$core$Object$Q(_1541);
goto block184;
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5340
_1545 = *(&local26);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, _1545);
_1547 = _1512;
frost$core$Frost$unref$frost$core$Object$Q(_1547);
_1549 = *(&local26);
_1550 = ((frost$core$Object*) _1549);
frost$core$Frost$unref$frost$core$Object$Q(_1550);
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block185;
block187:;
_1554 = ((frost$core$Object*) _1504);
frost$core$Frost$unref$frost$core$Object$Q(_1554);
goto block184;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
_1558 = &param0->postconditionEntryBlock;
_1559 = *_1558;
_1560 = _1559.nonnull;
_1561 = (frost$core$Bit) {_1560};
_1562 = _1561.value;
if (_1562) goto block191; else goto block193;
block191:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:146
_1565 = *(&local0);
_1566 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1567 = (frost$core$Int) {1u};
_1568 = &param0->postconditionEntryBlock;
_1569 = *_1568;
_1570 = _1569.nonnull;
_1571 = (frost$core$Bit) {_1570};
_1572 = _1571.value;
if (_1572) goto block194; else goto block195;
block195:;
_1574 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s158, _1574, &$s159);
abort(); // unreachable
block194:;
_1577 = ((org$frostlang$frostc$IR$Block$ID) _1569.value);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1566, _1567, param1, _1577);
_1579 = ($fn160) _1565->$class->vtable[2];
_1580 = _1579(_1565, _1566);
_1581 = ((frost$core$Object*) _1566);
frost$core$Frost$unref$frost$core$Object$Q(_1581);
goto block192;
block193:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:149:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5752
_1588 = &param0->enclosingContexts;
_1589 = *_1588;
_1590 = ((frost$collections$Iterable*) _1589);
ITable* $tmp161 = _1590->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp161 = $tmp161->next;
}
_1591 = $tmp161->methods[0];
_1592 = _1591(_1590);
goto block197;
block197:;
ITable* $tmp162 = _1592->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp162 = $tmp162->next;
}
_1594 = $tmp162->methods[0];
_1595 = _1594(_1592);
_1596 = _1595.value;
if (_1596) goto block199; else goto block198;
block198:;
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp163 = _1592->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
_1599 = $tmp163->methods[1];
_1600 = _1599(_1592);
_1601 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _1600);
_1602 = ((frost$core$Object*) _1601);
frost$core$Frost$ref$frost$core$Object$Q(_1602);
_1604 = *(&local28);
_1605 = ((frost$core$Object*) _1604);
frost$core$Frost$unref$frost$core$Object$Q(_1605);
*(&local28) = _1601;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5753
_1609 = *(&local28);
_1610 = &_1609->$rawValue;
_1611 = *_1610;
_1612 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5754:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1615 = _1611.value;
_1616 = _1612.value;
_1617 = _1615 == _1616;
_1618 = (frost$core$Bit) {_1617};
_1620 = _1618.value;
if (_1620) goto block201; else goto block200;
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5755
_1623 = *(&local28);
_1624 = _1623;
_1625 = ((frost$core$Object*) _1624);
frost$core$Frost$ref$frost$core$Object$Q(_1625);
_1627 = _1600;
frost$core$Frost$unref$frost$core$Object$Q(_1627);
_1629 = *(&local28);
_1630 = ((frost$core$Object*) _1629);
frost$core$Frost$unref$frost$core$Object$Q(_1630);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1633 = ((frost$core$Object*) _1592);
frost$core$Frost$unref$frost$core$Object$Q(_1633);
*(&local27) = _1624;
_1636 = ((frost$core$Object*) _1624);
frost$core$Frost$ref$frost$core$Object$Q(_1636);
goto block196;
block200:;
_1639 = _1600;
frost$core$Frost$unref$frost$core$Object$Q(_1639);
_1641 = *(&local28);
_1642 = ((frost$core$Object*) _1641);
frost$core$Frost$unref$frost$core$Object$Q(_1642);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block197;
block199:;
_1646 = ((frost$core$Object*) _1592);
frost$core$Frost$unref$frost$core$Object$Q(_1646);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5759
_1649 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1649);
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1652 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1652);
goto block196;
block196:;
_1655 = *(&local27);
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1657 = ((frost$core$Object*) _1655);
frost$core$Frost$ref$frost$core$Object$Q(_1657);
_1659 = *(&local29);
_1660 = ((frost$core$Object*) _1659);
frost$core$Frost$unref$frost$core$Object$Q(_1660);
*(&local29) = _1655;
_1663 = ((frost$core$Object*) _1655);
frost$core$Frost$unref$frost$core$Object$Q(_1663);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:150
_1666 = *(&local29);
_1667 = _1666 != NULL;
_1668 = (frost$core$Bit) {_1667};
_1669 = _1668.value;
if (_1669) goto block203; else goto block205;
block203:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:151
_1672 = *(&local29);
_1673 = _1672 != NULL;
_1674 = (frost$core$Bit) {_1673};
_1675 = _1674.value;
if (_1675) goto block206; else goto block207;
block207:;
_1677 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s164, _1677, &$s165);
abort(); // unreachable
block206:;
_1680 = _1672;
_1681 = &_1680->$rawValue;
_1682 = *_1681;
_1683 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:152:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1686 = _1682.value;
_1687 = _1683.value;
_1688 = _1686 == _1687;
_1689 = (frost$core$Bit) {_1688};
_1691 = _1689.value;
if (_1691) goto block209; else goto block208;
block209:;
_1693 = &_1672->$data.$INLINE_CONTEXT.field0;
_1694 = *_1693;
_1695 = &_1672->$data.$INLINE_CONTEXT.field1;
_1696 = *_1695;
_1697 = &_1672->$data.$INLINE_CONTEXT.field2;
_1698 = *_1697;
*(&local30) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_1700 = ((frost$core$Object*) _1698);
frost$core$Frost$ref$frost$core$Object$Q(_1700);
_1702 = *(&local30);
_1703 = ((frost$core$Object*) _1702);
frost$core$Frost$unref$frost$core$Object$Q(_1703);
*(&local30) = _1698;
_1706 = &_1672->$data.$INLINE_CONTEXT.field3;
_1707 = *_1706;
*(&local31) = _1707;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:154
_1710 = *(&local31);
_1711 = (frost$core$Bit) {true};
_1712 = _1711.value;
if (_1712) goto block211; else goto block212;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:155
_1715 = *(&local0);
_1716 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1717 = (frost$core$Int) {1u};
_1718 = *(&local31);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_1716, _1717, param1, _1718);
_1720 = ($fn166) _1715->$class->vtable[2];
_1721 = _1720(_1715, _1716);
_1722 = ((frost$core$Object*) _1716);
frost$core$Frost$unref$frost$core$Object$Q(_1722);
goto block212;
block212:;
_1725 = *(&local30);
_1726 = ((frost$core$Object*) _1725);
frost$core$Frost$unref$frost$core$Object$Q(_1726);
*(&local30) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block208;
block208:;
goto block204;
block205:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:161
_1733 = *(&local0);
_1734 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_1735 = (frost$core$Int) {25u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q(_1734, _1735, param1, ((org$frostlang$frostc$IR$Value*) NULL));
_1737 = ($fn167) _1733->$class->vtable[2];
_1738 = _1737(_1733, _1734);
_1739 = ((frost$core$Object*) _1734);
frost$core$Frost$unref$frost$core$Object$Q(_1739);
goto block204;
block204:;
_1742 = *(&local29);
_1743 = ((frost$core$Object*) _1742);
frost$core$Frost$unref$frost$core$Object$Q(_1743);
*(&local29) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_1746 = *(&local27);
_1747 = ((frost$core$Object*) _1746);
frost$core$Frost$unref$frost$core$Object$Q(_1747);
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block192;
block192:;
goto block70;
block70:;
_1752 = *(&local2);
_1753 = ((frost$core$Object*) _1752);
frost$core$Frost$unref$frost$core$Object$Q(_1753);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1756 = *(&local1);
_1757 = ((frost$core$Object*) _1756);
frost$core$Frost$unref$frost$core$Object$Q(_1757);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1760 = *(&local0);
_1761 = ((frost$core$Object*) _1760);
frost$core$Frost$unref$frost$core$Object$Q(_1761);
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

