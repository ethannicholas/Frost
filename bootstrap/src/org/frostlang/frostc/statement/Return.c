#include "org/frostlang/frostc/statement/Return.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Frost.h"
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


static frost$core$String $s1;
org$frostlang$frostc$statement$Return$class_type org$frostlang$frostc$statement$Return$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Return$cleanup} };

typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn47)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn66)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn95)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn109)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn124)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn143)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn170)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn253)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn257)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn262)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn298)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Value* (*$fn325)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn372)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn407)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn431)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn435)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn440)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn468)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn482)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn497)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn516)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn587)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn590)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn603)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn609)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn613)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn618)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn708)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn711)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn720)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn750)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn760)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn772)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn786)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn798)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn810)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn814)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn819)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn849)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn855)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn859)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn864)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn915)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn922)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x52\x65\x74\x75\x72\x6e", 37, 4852820752230860395, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -5865721028201646545, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 32, 1290914291935992386, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 12, 7836319186812648751, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:24
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:25
frost$collections$Stack** $tmp5 = &param0->currentClass;
frost$collections$Stack* $tmp6 = *$tmp5;
frost$core$Int $tmp7 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:25:50
frost$core$Int $tmp8 = (frost$core$Int) {0u};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp14 = &$tmp6->contents;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Int $tmp19 = $tmp17(((frost$collections$CollectionView*) $tmp15));
int64_t $tmp20 = $tmp7.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 < $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block2; else goto block3;
block3:;
frost$core$Int $tmp25 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp28 = &$tmp6->contents;
frost$collections$Array* $tmp29 = *$tmp28;
ITable* $tmp30 = ((frost$collections$CollectionView*) $tmp29)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$core$Int $tmp33 = $tmp31(((frost$collections$CollectionView*) $tmp29));
int64_t $tmp34 = $tmp33.value;
int64_t $tmp35 = $tmp7.value;
bool $tmp36 = $tmp34 > $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block7:;
frost$core$Int $tmp39 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s40, $tmp39);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp41 = &$tmp6->contents;
frost$collections$Array* $tmp42 = *$tmp41;
frost$collections$Array** $tmp43 = &$tmp6->contents;
frost$collections$Array* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$collections$CollectionView*) $tmp44)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Int $tmp48 = $tmp46(((frost$collections$CollectionView*) $tmp44));
frost$core$Int $tmp49 = (frost$core$Int) {1u};
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 - $tmp51;
frost$core$Int $tmp53 = (frost$core$Int) {$tmp52};
int64_t $tmp54 = $tmp53.value;
int64_t $tmp55 = $tmp7.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int $tmp57 = (frost$core$Int) {$tmp56};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp58 = (frost$core$Int) {0u};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 >= $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block11; else goto block10;
block11:;
ITable* $tmp64 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
frost$core$Int $tmp67 = $tmp65(((frost$collections$CollectionView*) $tmp42));
int64_t $tmp68 = $tmp57.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 < $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block9; else goto block10;
block10:;
frost$core$Int $tmp73 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, $tmp73, &$s75);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp76 = &$tmp42->data;
frost$core$Object** $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = frost$core$Int64$init$frost$core$Int($tmp57);
int64_t $tmp79 = $tmp78.value;
frost$core$Object* $tmp80 = $tmp77[$tmp79];
frost$core$Frost$ref$frost$core$Object$Q($tmp80);
frost$core$Frost$ref$frost$core$Object$Q($tmp80);
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp80)));
org$frostlang$frostc$ClassDecl* $tmp81 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp80);
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:26
frost$collections$Stack** $tmp82 = &param0->currentMethod;
frost$collections$Stack* $tmp83 = *$tmp82;
frost$core$Int $tmp84 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:26:52
frost$core$Int $tmp85 = (frost$core$Int) {0u};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 >= $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block15; else goto block14;
block15:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp91 = &$tmp83->contents;
frost$collections$Array* $tmp92 = *$tmp91;
ITable* $tmp93 = ((frost$collections$CollectionView*) $tmp92)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Int $tmp96 = $tmp94(((frost$collections$CollectionView*) $tmp92));
int64_t $tmp97 = $tmp84.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 < $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block13; else goto block14;
block14:;
frost$core$Int $tmp102 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, $tmp102, &$s104);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp105 = &$tmp83->contents;
frost$collections$Array* $tmp106 = *$tmp105;
ITable* $tmp107 = ((frost$collections$CollectionView*) $tmp106)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int $tmp110 = $tmp108(((frost$collections$CollectionView*) $tmp106));
int64_t $tmp111 = $tmp110.value;
int64_t $tmp112 = $tmp84.value;
bool $tmp113 = $tmp111 > $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block17; else goto block18;
block18:;
frost$core$Int $tmp116 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s117, $tmp116);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp118 = &$tmp83->contents;
frost$collections$Array* $tmp119 = *$tmp118;
frost$collections$Array** $tmp120 = &$tmp83->contents;
frost$collections$Array* $tmp121 = *$tmp120;
ITable* $tmp122 = ((frost$collections$CollectionView*) $tmp121)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Int $tmp125 = $tmp123(((frost$collections$CollectionView*) $tmp121));
frost$core$Int $tmp126 = (frost$core$Int) {1u};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 - $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {$tmp129};
int64_t $tmp131 = $tmp130.value;
int64_t $tmp132 = $tmp84.value;
int64_t $tmp133 = $tmp131 - $tmp132;
frost$core$Int $tmp134 = (frost$core$Int) {$tmp133};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp135 = (frost$core$Int) {0u};
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 >= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block22; else goto block21;
block22:;
ITable* $tmp141 = ((frost$collections$CollectionView*) $tmp119)->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[0];
frost$core$Int $tmp144 = $tmp142(((frost$collections$CollectionView*) $tmp119));
int64_t $tmp145 = $tmp134.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 < $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block20; else goto block21;
block21:;
frost$core$Int $tmp150 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp153 = &$tmp119->data;
frost$core$Object** $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = frost$core$Int64$init$frost$core$Int($tmp134);
int64_t $tmp156 = $tmp155.value;
frost$core$Object* $tmp157 = $tmp154[$tmp156];
frost$core$Frost$ref$frost$core$Object$Q($tmp157);
frost$core$Frost$ref$frost$core$Object$Q($tmp157);
frost$core$Frost$unref$frost$core$Object$Q($tmp157);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp157)));
org$frostlang$frostc$MethodDecl* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp157);
frost$core$Frost$unref$frost$core$Object$Q($tmp157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:27
org$frostlang$frostc$MethodDecl* $tmp159 = *(&local2);
frost$core$String** $tmp160 = &((org$frostlang$frostc$Symbol*) $tmp159)->name;
frost$core$String* $tmp161 = *$tmp160;
frost$core$Bit $tmp162 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp161, &$s163);
bool $tmp164 = $tmp162.value;
if ($tmp164) goto block26; else goto block24;
block26:;
org$frostlang$frostc$MethodDecl* $tmp165 = *(&local2);
frost$collections$Array** $tmp166 = &$tmp165->parameters;
frost$collections$Array* $tmp167 = *$tmp166;
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167));
frost$core$Int $tmp172 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:27:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 == $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block25; else goto block24;
block25:;
org$frostlang$frostc$MethodDecl* $tmp178 = *(&local2);
frost$core$Weak** $tmp179 = &$tmp178->owner;
frost$core$Weak* $tmp180 = *$tmp179;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:28:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp181 = &$tmp180->_valid;
frost$core$Bit $tmp182 = *$tmp181;
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block30; else goto block31;
block31:;
frost$core$Int $tmp184 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s185, $tmp184);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp186 = &$tmp180->value;
frost$core$Object* $tmp187 = *$tmp186;
frost$core$Frost$ref$frost$core$Object$Q($tmp187);
frost$core$String** $tmp188 = &((org$frostlang$frostc$ClassDecl*) $tmp187)->name;
frost$core$String* $tmp189 = *$tmp188;
ITable* $tmp191 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
frost$core$Bit $tmp194 = $tmp192(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) &$s190));
bool $tmp195 = $tmp194.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp187);
if ($tmp195) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:30
org$frostlang$frostc$ClassDecl* $tmp196 = *(&local1);
org$frostlang$frostc$Type** $tmp197 = &$tmp196->rawSuper;
org$frostlang$frostc$Type* $tmp198 = *$tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198 != NULL};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block34; else goto block33;
block34:;
org$frostlang$frostc$ClassDecl* $tmp201 = *(&local1);
frost$core$Bit $tmp202 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp201);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:30:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp203 = $tmp202.value;
bool $tmp204 = !$tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:31
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local1);
org$frostlang$frostc$Type** $tmp208 = &$tmp207->type;
org$frostlang$frostc$Type* $tmp209 = *$tmp208;
org$frostlang$frostc$ClassDecl* $tmp210 = *(&local1);
org$frostlang$frostc$Type** $tmp211 = &$tmp210->rawSuper;
org$frostlang$frostc$Type* $tmp212 = *$tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212 != NULL};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block36; else goto block37;
block37:;
frost$core$Int $tmp215 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, $tmp215, &$s217);
abort(); // unreachable
block36:;
org$frostlang$frostc$Type* $tmp218 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp209, $tmp212);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
org$frostlang$frostc$Type* $tmp219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local3) = $tmp218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:32
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp220 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp221 = (frost$core$Int) {9u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp222 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp223 = (frost$core$Int) {16u};
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp224 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp225 = (frost$core$Int) {41u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp224, $tmp225, param1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp222, $tmp223, param1, $tmp224, &$s226);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp227 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp227);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp220, $tmp221, param1, $tmp222, $tmp227);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
org$frostlang$frostc$Type* $tmp228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:36
frost$core$Bit* $tmp229 = &param0->inFieldCleanup;
frost$core$Bit $tmp230 = *$tmp229;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:36:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp231 = $tmp230.value;
bool $tmp232 = !$tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block39; else goto block40;
block40:;
frost$core$Int $tmp235 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s236, $tmp235);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:37
frost$core$Bit $tmp237 = (frost$core$Bit) {true};
frost$core$Bit* $tmp238 = &param0->inFieldCleanup;
*$tmp238 = $tmp237;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:38
org$frostlang$frostc$MethodDecl* $tmp239 = *(&local2);
frost$core$Weak** $tmp240 = &$tmp239->owner;
frost$core$Weak* $tmp241 = *$tmp240;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Return.frost:38:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp242 = &$tmp241->_valid;
frost$core$Bit $tmp243 = *$tmp242;
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block43; else goto block44;
block44:;
frost$core$Int $tmp245 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s246, $tmp245);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp247 = &$tmp241->value;
frost$core$Object* $tmp248 = *$tmp247;
frost$core$Frost$ref$frost$core$Object$Q($tmp248);
frost$collections$Array** $tmp249 = &((org$frostlang$frostc$ClassDecl*) $tmp248)->fields;
frost$collections$Array* $tmp250 = *$tmp249;
ITable* $tmp251 = ((frost$collections$Iterable*) $tmp250)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$collections$Iterator* $tmp254 = $tmp252(((frost$collections$Iterable*) $tmp250));
goto block45;
block45:;
ITable* $tmp255 = $tmp254->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Bit $tmp258 = $tmp256($tmp254);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block47; else goto block46;
block46:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp260 = $tmp254->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[1];
frost$core$Object* $tmp263 = $tmp261($tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp263)));
org$frostlang$frostc$FieldDecl* $tmp264 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp263);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:39
org$frostlang$frostc$FieldDecl* $tmp265 = *(&local4);
frost$core$Bit $tmp266 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block52; else goto block49;
block52:;
org$frostlang$frostc$FieldDecl* $tmp268 = *(&local4);
org$frostlang$frostc$Annotations** $tmp269 = &$tmp268->annotations;
org$frostlang$frostc$Annotations* $tmp270 = *$tmp269;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Return.frost:39:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp271 = &$tmp270->flags;
frost$core$Int $tmp272 = *$tmp271;
frost$core$Int $tmp273 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 & $tmp275;
frost$core$Int $tmp277 = (frost$core$Int) {$tmp276};
frost$core$Int $tmp278 = (frost$core$Int) {0u};
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278.value;
bool $tmp281 = $tmp279 != $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Return.frost:39:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp283 = $tmp282.value;
bool $tmp284 = !$tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block51; else goto block49;
block51:;
org$frostlang$frostc$FieldDecl* $tmp287 = *(&local4);
org$frostlang$frostc$FieldDecl$Kind* $tmp288 = &$tmp287->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp289 = *$tmp288;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp290;
$tmp290 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp290->value = $tmp289;
frost$core$Int $tmp291 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Return.frost:40:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp292 = &(&local6)->$rawValue;
*$tmp292 = $tmp291;
org$frostlang$frostc$FieldDecl$Kind $tmp293 = *(&local6);
*(&local5) = $tmp293;
org$frostlang$frostc$FieldDecl$Kind $tmp294 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp295;
$tmp295 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp295->value = $tmp294;
ITable* $tmp296 = ((frost$core$Equatable*) $tmp290)->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[1];
frost$core$Bit $tmp299 = $tmp297(((frost$core$Equatable*) $tmp290), ((frost$core$Equatable*) $tmp295));
bool $tmp300 = $tmp299.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp295)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp290)));
if ($tmp300) goto block50; else goto block49;
block50:;
org$frostlang$frostc$FieldDecl* $tmp301 = *(&local4);
org$frostlang$frostc$Type** $tmp302 = &$tmp301->type;
org$frostlang$frostc$Type* $tmp303 = *$tmp302;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:40:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:661
frost$core$Bit $tmp304 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp303);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:661:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp305 = $tmp304.value;
bool $tmp306 = !$tmp305;
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306};
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
frost$core$Bit $tmp309 = (frost$core$Bit) {false};
*(&local7) = $tmp309;
goto block57;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
frost$core$Bit $tmp310 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp303);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp311 = $tmp310.value;
bool $tmp312 = !$tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
*(&local7) = $tmp313;
goto block57;
block57:;
frost$core$Bit $tmp314 = *(&local7);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:41
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp316 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp317 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp318 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp317, $tmp318, param1, &$s319);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp320 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp321 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp320, $tmp321);
org$frostlang$frostc$IR$Value* $tmp322 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp317, $tmp320);
org$frostlang$frostc$FieldDecl* $tmp323 = *(&local4);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp316, param0, param1, $tmp322, $tmp323);
$fn325 $tmp324 = ($fn325) $tmp316->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp326 = $tmp324($tmp316);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
org$frostlang$frostc$IR$Value* $tmp327 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local8) = $tmp326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:45
org$frostlang$frostc$IR$Value* $tmp328 = *(&local8);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328 == NULL};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:46
org$frostlang$frostc$IR$Value* $tmp331 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp263);
org$frostlang$frostc$FieldDecl* $tmp332 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q($tmp248);
org$frostlang$frostc$MethodDecl* $tmp333 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp334 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp335 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:48
org$frostlang$frostc$IR$Value* $tmp336 = *(&local8);
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336 != NULL};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block64; else goto block65;
block65:;
frost$core$Int $tmp339 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, $tmp339, &$s341);
abort(); // unreachable
block64:;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp336);
org$frostlang$frostc$IR$Value* $tmp342 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block49;
block49:;
frost$core$Frost$unref$frost$core$Object$Q($tmp263);
org$frostlang$frostc$FieldDecl* $tmp343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block45;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$core$Frost$unref$frost$core$Object$Q($tmp248);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:51
frost$core$Bit* $tmp344 = &param0->inFieldCleanup;
frost$core$Bit $tmp345 = *$tmp344;
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block66; else goto block67;
block67:;
frost$core$Int $tmp347 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s348, $tmp347);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:52
frost$core$Bit $tmp349 = (frost$core$Bit) {false};
frost$core$Bit* $tmp350 = &param0->inFieldCleanup;
*$tmp350 = $tmp349;
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:54
frost$core$Bit $tmp351 = (frost$core$Bit) {param2 != NULL};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block68; else goto block70;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:55
org$frostlang$frostc$MethodDecl* $tmp353 = *(&local2);
org$frostlang$frostc$Type** $tmp354 = &$tmp353->returnType;
org$frostlang$frostc$Type* $tmp355 = *$tmp354;
org$frostlang$frostc$Type** $tmp356 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp357 = *$tmp356;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp358 = &((org$frostlang$frostc$Symbol*) $tmp355)->name;
frost$core$String* $tmp359 = *$tmp358;
frost$core$String** $tmp360 = &((org$frostlang$frostc$Symbol*) $tmp357)->name;
frost$core$String* $tmp361 = *$tmp360;
frost$core$Bit $tmp362 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp359, $tmp361);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Type$Kind* $tmp364 = &$tmp355->typeKind;
org$frostlang$frostc$Type$Kind $tmp365 = *$tmp364;
org$frostlang$frostc$Type$Kind$wrapper* $tmp366;
$tmp366 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp366->value = $tmp365;
org$frostlang$frostc$Type$Kind* $tmp367 = &$tmp357->typeKind;
org$frostlang$frostc$Type$Kind $tmp368 = *$tmp367;
org$frostlang$frostc$Type$Kind$wrapper* $tmp369;
$tmp369 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp369->value = $tmp368;
ITable* $tmp370 = ((frost$core$Equatable*) $tmp366)->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Bit $tmp373 = $tmp371(((frost$core$Equatable*) $tmp366), ((frost$core$Equatable*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp369)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp366)));
*(&local9) = $tmp373;
goto block76;
block75:;
*(&local9) = $tmp362;
goto block76;
block76:;
frost$core$Bit $tmp374 = *(&local9);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:56
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:57
org$frostlang$frostc$MethodDecl* $tmp377 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp379 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:59
frost$core$Bit $tmp380 = (frost$core$Bit) {param2 != NULL};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block77; else goto block78;
block78:;
frost$core$Int $tmp382 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s383, $tmp382, &$s384);
abort(); // unreachable
block77:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp385 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp386 = (frost$core$Int) {3u};
org$frostlang$frostc$MethodDecl* $tmp387 = *(&local2);
org$frostlang$frostc$Type** $tmp388 = &$tmp387->returnType;
org$frostlang$frostc$Type* $tmp389 = *$tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp385, $tmp386, $tmp389, $tmp390);
org$frostlang$frostc$IR$Value* $tmp391 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp385);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
org$frostlang$frostc$IR$Value* $tmp392 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local10) = $tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:61
org$frostlang$frostc$IR$Value* $tmp393 = *(&local10);
frost$core$Bit $tmp394 = (frost$core$Bit) {$tmp393 == NULL};
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:62
org$frostlang$frostc$IR$Value* $tmp396 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:64
org$frostlang$frostc$IR$Value* $tmp400 = *(&local10);
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400 != NULL};
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block83; else goto block84;
block84:;
frost$core$Int $tmp403 = (frost$core$Int) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s404, $tmp403, &$s405);
abort(); // unreachable
block83:;
$fn407 $tmp406 = ($fn407) $tmp400->$class->vtable[2];
org$frostlang$frostc$Type* $tmp408 = $tmp406($tmp400);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:64:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:661
frost$core$Bit $tmp409 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp408);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:661:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp410 = $tmp409.value;
bool $tmp411 = !$tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {$tmp411};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
frost$core$Bit $tmp414 = (frost$core$Bit) {false};
*(&local11) = $tmp414;
goto block85;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
frost$core$Bit $tmp415 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp408);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp416 = $tmp415.value;
bool $tmp417 = !$tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
*(&local11) = $tmp418;
goto block85;
block85:;
frost$core$Bit $tmp419 = *(&local11);
bool $tmp420 = $tmp419.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
if ($tmp420) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:65
org$frostlang$frostc$IR$Value* $tmp421 = *(&local10);
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421 != NULL};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block90; else goto block91;
block91:;
frost$core$Int $tmp424 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s425, $tmp424, &$s426);
abort(); // unreachable
block90:;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp421);
goto block82;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:67
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:67:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5462
frost$collections$Stack** $tmp427 = &param0->enclosingContexts;
frost$collections$Stack* $tmp428 = *$tmp427;
ITable* $tmp429 = ((frost$collections$Iterable*) $tmp428)->$class->itable;
while ($tmp429->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp429 = $tmp429->next;
}
$fn431 $tmp430 = $tmp429->methods[0];
frost$collections$Iterator* $tmp432 = $tmp430(((frost$collections$Iterable*) $tmp428));
goto block93;
block93:;
ITable* $tmp433 = $tmp432->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp433 = $tmp433->next;
}
$fn435 $tmp434 = $tmp433->methods[0];
frost$core$Bit $tmp436 = $tmp434($tmp432);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block95; else goto block94;
block94:;
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp438 = $tmp432->$class->itable;
while ($tmp438->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp438 = $tmp438->next;
}
$fn440 $tmp439 = $tmp438->methods[1];
frost$core$Object* $tmp441 = $tmp439($tmp432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp441)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp442 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp441);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5463
org$frostlang$frostc$Compiler$EnclosingContext* $tmp443 = *(&local12);
frost$core$Int* $tmp444 = &$tmp443->$rawValue;
frost$core$Int $tmp445 = *$tmp444;
frost$core$Int $tmp446 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5464:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446.value;
bool $tmp449 = $tmp447 == $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block97; else goto block96;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5465
frost$core$Frost$unref$frost$core$Object$Q($tmp441);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp452 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
goto block92;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5468
org$frostlang$frostc$Compiler$EnclosingContext* $tmp453 = *(&local12);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp453);
frost$core$Frost$unref$frost$core$Object$Q($tmp441);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp454 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
goto block92;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:68
goto block99;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:69
frost$collections$Stack** $tmp455 = &param0->enclosingContexts;
frost$collections$Stack* $tmp456 = *$tmp455;
frost$core$Int $tmp457 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Return.frost:69:49
frost$core$Int $tmp458 = (frost$core$Int) {0u};
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458.value;
bool $tmp461 = $tmp459 >= $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block104; else goto block103;
block104:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp464 = &$tmp456->contents;
frost$collections$Array* $tmp465 = *$tmp464;
ITable* $tmp466 = ((frost$collections$CollectionView*) $tmp465)->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[0];
frost$core$Int $tmp469 = $tmp467(((frost$collections$CollectionView*) $tmp465));
int64_t $tmp470 = $tmp457.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 < $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block102; else goto block103;
block103:;
frost$core$Int $tmp475 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s476, $tmp475, &$s477);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp478 = &$tmp456->contents;
frost$collections$Array* $tmp479 = *$tmp478;
ITable* $tmp480 = ((frost$collections$CollectionView*) $tmp479)->$class->itable;
while ($tmp480->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp480 = $tmp480->next;
}
$fn482 $tmp481 = $tmp480->methods[0];
frost$core$Int $tmp483 = $tmp481(((frost$collections$CollectionView*) $tmp479));
int64_t $tmp484 = $tmp483.value;
int64_t $tmp485 = $tmp457.value;
bool $tmp486 = $tmp484 > $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block106; else goto block107;
block107:;
frost$core$Int $tmp489 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s490, $tmp489);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp491 = &$tmp456->contents;
frost$collections$Array* $tmp492 = *$tmp491;
frost$collections$Array** $tmp493 = &$tmp456->contents;
frost$collections$Array* $tmp494 = *$tmp493;
ITable* $tmp495 = ((frost$collections$CollectionView*) $tmp494)->$class->itable;
while ($tmp495->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp495 = $tmp495->next;
}
$fn497 $tmp496 = $tmp495->methods[0];
frost$core$Int $tmp498 = $tmp496(((frost$collections$CollectionView*) $tmp494));
frost$core$Int $tmp499 = (frost$core$Int) {1u};
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499.value;
int64_t $tmp502 = $tmp500 - $tmp501;
frost$core$Int $tmp503 = (frost$core$Int) {$tmp502};
int64_t $tmp504 = $tmp503.value;
int64_t $tmp505 = $tmp457.value;
int64_t $tmp506 = $tmp504 - $tmp505;
frost$core$Int $tmp507 = (frost$core$Int) {$tmp506};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp508 = (frost$core$Int) {0u};
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 >= $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block111; else goto block110;
block111:;
ITable* $tmp514 = ((frost$collections$CollectionView*) $tmp492)->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[0];
frost$core$Int $tmp517 = $tmp515(((frost$collections$CollectionView*) $tmp492));
int64_t $tmp518 = $tmp507.value;
int64_t $tmp519 = $tmp517.value;
bool $tmp520 = $tmp518 < $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block109; else goto block110;
block110:;
frost$core$Int $tmp523 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s524, $tmp523, &$s525);
abort(); // unreachable
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp526 = &$tmp492->data;
frost$core$Object** $tmp527 = *$tmp526;
frost$core$Int64 $tmp528 = frost$core$Int64$init$frost$core$Int($tmp507);
int64_t $tmp529 = $tmp528.value;
frost$core$Object* $tmp530 = $tmp527[$tmp529];
frost$core$Frost$ref$frost$core$Object$Q($tmp530);
frost$core$Frost$ref$frost$core$Object$Q($tmp530);
frost$core$Frost$unref$frost$core$Object$Q($tmp530);
frost$core$Int* $tmp531 = &((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp530)->$rawValue;
frost$core$Int $tmp532 = *$tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:70:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533.value;
bool $tmp536 = $tmp534 == $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:71
frost$collections$Stack** $tmp539 = &param0->enclosingContexts;
frost$collections$Stack* $tmp540 = *$tmp539;
frost$core$Object* $tmp541 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp540);
frost$core$Frost$unref$frost$core$Object$Q($tmp541);
frost$core$Frost$unref$frost$core$Object$Q($tmp530);
goto block99;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:74
frost$core$Frost$unref$frost$core$Object$Q($tmp530);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:78
org$frostlang$frostc$Variable** $tmp542 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp543 = *$tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543 != NULL};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block116; else goto block118;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:80
org$frostlang$frostc$Variable** $tmp546 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp547 = *$tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547 != NULL};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block119; else goto block120;
block120:;
frost$core$Int $tmp550 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s551, $tmp550, &$s552);
abort(); // unreachable
block119:;
org$frostlang$frostc$Variable$Storage** $tmp553 = &$tmp547->storage;
org$frostlang$frostc$Variable$Storage* $tmp554 = *$tmp553;
frost$core$Int* $tmp555 = &$tmp554->$rawValue;
frost$core$Int $tmp556 = *$tmp555;
frost$core$Int $tmp557 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:81:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557.value;
bool $tmp560 = $tmp558 == $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block122; else goto block123;
block122:;
frost$core$Int* $tmp563 = (frost$core$Int*) ($tmp554->$data + 0);
frost$core$Int $tmp564 = *$tmp563;
*(&local14) = $tmp564;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:82
frost$core$Int $tmp565 = *(&local14);
*(&local13) = $tmp565;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:88
org$frostlang$frostc$IR* $tmp566 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp567 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp568 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp569 = *(&local10);
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569 != NULL};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block125; else goto block126;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:85
frost$core$Int $tmp572 = (frost$core$Int) {85u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s573, $tmp572);
abort(); // unreachable
block126:;
frost$core$Int $tmp574 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s575, $tmp574, &$s576);
abort(); // unreachable
block125:;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp577 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp578 = (frost$core$Int) {2u};
frost$core$Int $tmp579 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp580 = *(&local10);
frost$core$Bit $tmp581 = (frost$core$Bit) {$tmp580 != NULL};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block127; else goto block128;
block128:;
frost$core$Int $tmp583 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s584, $tmp583, &$s585);
abort(); // unreachable
block127:;
$fn587 $tmp586 = ($fn587) $tmp580->$class->vtable[2];
org$frostlang$frostc$Type* $tmp588 = $tmp586($tmp580);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp577, $tmp578, $tmp579, $tmp588);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp567, $tmp568, param1, $tmp569, $tmp577);
$fn590 $tmp589 = ($fn590) $tmp566->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp591 = $tmp589($tmp566, $tmp567);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:90
org$frostlang$frostc$IR* $tmp592 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp593 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp594 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp595 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp596 = *$tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596.nonnull};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block129; else goto block130;
block130:;
frost$core$Int $tmp599 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block129:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp593, $tmp594, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp596.value));
$fn603 $tmp602 = ($fn603) $tmp592->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp604 = $tmp602($tmp592, $tmp593);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
goto block117;
block118:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:93
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:93:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5877
frost$collections$Stack** $tmp605 = &param0->enclosingContexts;
frost$collections$Stack* $tmp606 = *$tmp605;
ITable* $tmp607 = ((frost$collections$Iterable*) $tmp606)->$class->itable;
while ($tmp607->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp607 = $tmp607->next;
}
$fn609 $tmp608 = $tmp607->methods[0];
frost$collections$Iterator* $tmp610 = $tmp608(((frost$collections$Iterable*) $tmp606));
goto block132;
block132:;
ITable* $tmp611 = $tmp610->$class->itable;
while ($tmp611->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[0];
frost$core$Bit $tmp614 = $tmp612($tmp610);
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block134; else goto block133;
block133:;
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp616 = $tmp610->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[1];
frost$core$Object* $tmp619 = $tmp617($tmp610);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp619)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp620 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp619);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5878
org$frostlang$frostc$Compiler$EnclosingContext* $tmp621 = *(&local16);
frost$core$Int* $tmp622 = &$tmp621->$rawValue;
frost$core$Int $tmp623 = *$tmp622;
frost$core$Int $tmp624 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5879:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 == $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block136; else goto block135;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5880
org$frostlang$frostc$Compiler$EnclosingContext* $tmp630 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp631 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local15) = $tmp630;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
goto block131;
block135:;
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp632 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local16) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5884
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block131;
block131:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp633 = *(&local15);
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp634 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local17) = $tmp633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:94
org$frostlang$frostc$Compiler$EnclosingContext* $tmp635 = *(&local17);
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635 != NULL};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block138; else goto block140;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:95
org$frostlang$frostc$Compiler$EnclosingContext* $tmp638 = *(&local17);
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638 != NULL};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block141; else goto block142;
block142:;
frost$core$Int $tmp641 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s642, $tmp641, &$s643);
abort(); // unreachable
block141:;
frost$core$Int* $tmp644 = &$tmp638->$rawValue;
frost$core$Int $tmp645 = *$tmp644;
frost$core$Int $tmp646 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:96:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp647 = $tmp645.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 == $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block144; else goto block145;
block144:;
frost$collections$ListView** $tmp652 = (frost$collections$ListView**) ($tmp638->$data + 0);
frost$collections$ListView* $tmp653 = *$tmp652;
frost$core$Int* $tmp654 = (frost$core$Int*) ($tmp638->$data + 8);
frost$core$Int $tmp655 = *$tmp654;
org$frostlang$frostc$Compiler$InlineReturn** $tmp656 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp638->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp657 = *$tmp656;
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
org$frostlang$frostc$Compiler$InlineReturn* $tmp658 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local18) = $tmp657;
org$frostlang$frostc$IR$Block$ID* $tmp659 = (org$frostlang$frostc$IR$Block$ID*) ($tmp638->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp660 = *$tmp659;
*(&local19) = $tmp660;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:98
org$frostlang$frostc$Compiler$InlineReturn* $tmp661 = *(&local18);
org$frostlang$frostc$Variable** $tmp662 = &$tmp661->variable;
org$frostlang$frostc$Variable* $tmp663 = *$tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663 != NULL};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block147; else goto block149;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:99
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:100
org$frostlang$frostc$Compiler$InlineReturn* $tmp666 = *(&local18);
org$frostlang$frostc$Variable** $tmp667 = &$tmp666->variable;
org$frostlang$frostc$Variable* $tmp668 = *$tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668 != NULL};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block150; else goto block151;
block151:;
frost$core$Int $tmp671 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s672, $tmp671, &$s673);
abort(); // unreachable
block150:;
org$frostlang$frostc$Variable$Storage** $tmp674 = &$tmp668->storage;
org$frostlang$frostc$Variable$Storage* $tmp675 = *$tmp674;
frost$core$Int* $tmp676 = &$tmp675->$rawValue;
frost$core$Int $tmp677 = *$tmp676;
frost$core$Int $tmp678 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:101:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678.value;
bool $tmp681 = $tmp679 == $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block153; else goto block154;
block153:;
frost$core$Int* $tmp684 = (frost$core$Int*) ($tmp675->$data + 0);
frost$core$Int $tmp685 = *$tmp684;
*(&local21) = $tmp685;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:102
frost$core$Int $tmp686 = *(&local21);
*(&local20) = $tmp686;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:108
org$frostlang$frostc$IR* $tmp687 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp688 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp689 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp690 = *(&local10);
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690 != NULL};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block156; else goto block157;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:105
frost$core$Int $tmp693 = (frost$core$Int) {105u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s694, $tmp693);
abort(); // unreachable
block157:;
frost$core$Int $tmp695 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s696, $tmp695, &$s697);
abort(); // unreachable
block156:;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp698 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp699 = (frost$core$Int) {2u};
frost$core$Int $tmp700 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp701 = *(&local10);
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701 != NULL};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block158; else goto block159;
block159:;
frost$core$Int $tmp704 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s705, $tmp704, &$s706);
abort(); // unreachable
block158:;
$fn708 $tmp707 = ($fn708) $tmp701->$class->vtable[2];
org$frostlang$frostc$Type* $tmp709 = $tmp707($tmp701);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp698, $tmp699, $tmp700, $tmp709);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp688, $tmp689, param1, $tmp690, $tmp698);
$fn711 $tmp710 = ($fn711) $tmp687->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp712 = $tmp710($tmp687, $tmp688);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:110
org$frostlang$frostc$IR$Value* $tmp713 = *(&local10);
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713 != NULL};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block162; else goto block163;
block163:;
frost$core$Int $tmp716 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s717, $tmp716, &$s718);
abort(); // unreachable
block162:;
$fn720 $tmp719 = ($fn720) $tmp713->$class->vtable[2];
org$frostlang$frostc$Type* $tmp721 = $tmp719($tmp713);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Return.frost:110:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:661
frost$core$Bit $tmp722 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp721);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:661:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp723 = $tmp722.value;
bool $tmp724 = !$tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block165; else goto block166;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
frost$core$Bit $tmp727 = (frost$core$Bit) {false};
*(&local22) = $tmp727;
goto block164;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
frost$core$Bit $tmp728 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp721);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp729 = $tmp728.value;
bool $tmp730 = !$tmp729;
frost$core$Bit $tmp731 = (frost$core$Bit) {$tmp730};
*(&local22) = $tmp731;
goto block164;
block164:;
frost$core$Bit $tmp732 = *(&local22);
bool $tmp733 = $tmp732.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
if ($tmp733) goto block160; else goto block161;
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:111
org$frostlang$frostc$IR$Value* $tmp734 = *(&local10);
frost$core$Bit $tmp735 = (frost$core$Bit) {$tmp734 != NULL};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block169; else goto block170;
block170:;
frost$core$Int $tmp737 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s738, $tmp737, &$s739);
abort(); // unreachable
block169:;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp734);
goto block161;
block161:;
goto block148;
block149:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:115
org$frostlang$frostc$Compiler$InlineReturn* $tmp740 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp741 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$IR$Value** $tmp742 = &$tmp740->value;
org$frostlang$frostc$IR$Value* $tmp743 = *$tmp742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
org$frostlang$frostc$IR$Value** $tmp744 = &$tmp740->value;
*$tmp744 = $tmp741;
goto block148;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:117
org$frostlang$frostc$IR* $tmp745 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp746 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp747 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp748 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp746, $tmp747, param1, $tmp748);
$fn750 $tmp749 = ($fn750) $tmp745->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp751 = $tmp749($tmp745, $tmp746);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
org$frostlang$frostc$Compiler$InlineReturn* $tmp752 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local18) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block139;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:120
frost$core$Int $tmp753 = (frost$core$Int) {120u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s754, $tmp753);
abort(); // unreachable
block140:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:125
org$frostlang$frostc$IR* $tmp755 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp756 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp757 = (frost$core$Int) {25u};
org$frostlang$frostc$IR$Value* $tmp758 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp756, $tmp757, param1, $tmp758);
$fn760 $tmp759 = ($fn760) $tmp755->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp761 = $tmp759($tmp755, $tmp756);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
goto block139;
block139:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp762 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local17) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp763 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local15) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block117;
block117:;
org$frostlang$frostc$IR$Value* $tmp764 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block69;
block70:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:130
org$frostlang$frostc$MethodDecl* $tmp765 = *(&local2);
org$frostlang$frostc$Type** $tmp766 = &$tmp765->returnType;
org$frostlang$frostc$Type* $tmp767 = *$tmp766;
org$frostlang$frostc$Type** $tmp768 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp769 = *$tmp768;
ITable* $tmp770 = ((frost$core$Equatable*) $tmp767)->$class->itable;
while ($tmp770->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp770 = $tmp770->next;
}
$fn772 $tmp771 = $tmp770->methods[1];
frost$core$Bit $tmp773 = $tmp771(((frost$core$Equatable*) $tmp767), ((frost$core$Equatable*) $tmp769));
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block171; else goto block172;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:131
org$frostlang$frostc$MethodDecl* $tmp775 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind* $tmp776 = &$tmp775->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp777 = *$tmp776;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp778;
$tmp778 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp778->value = $tmp777;
frost$core$Int $tmp779 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Return.frost:131:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp780 = &(&local24)->$rawValue;
*$tmp780 = $tmp779;
org$frostlang$frostc$MethodDecl$Kind $tmp781 = *(&local24);
*(&local23) = $tmp781;
org$frostlang$frostc$MethodDecl$Kind $tmp782 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp783;
$tmp783 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp783->value = $tmp782;
ITable* $tmp784 = ((frost$core$Equatable*) $tmp778)->$class->itable;
while ($tmp784->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp784 = $tmp784->next;
}
$fn786 $tmp785 = $tmp784->methods[0];
frost$core$Bit $tmp787 = $tmp785(((frost$core$Equatable*) $tmp778), ((frost$core$Equatable*) $tmp783));
bool $tmp788 = $tmp787.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp783)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp778)));
if ($tmp788) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:132
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp789 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp790 = (frost$core$Int) {39u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp789, $tmp790, param1);
org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, $tmp789);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:133
org$frostlang$frostc$MethodDecl* $tmp791 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:135
org$frostlang$frostc$MethodDecl* $tmp794 = *(&local2);
org$frostlang$frostc$Type** $tmp795 = &$tmp794->returnType;
org$frostlang$frostc$Type* $tmp796 = *$tmp795;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Return.frost:136:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn798 $tmp797 = ($fn798) ((frost$core$Object*) $tmp796)->$class->vtable[0];
frost$core$String* $tmp799 = $tmp797(((frost$core$Object*) $tmp796));
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s801, $tmp799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$String* $tmp802 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp800, &$s803);
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s805, $tmp802);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp804);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
goto block172;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:138
// begin inline call to method org.frostlang.frostc.Compiler.leaveAllScopes() from Return.frost:138:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5462
frost$collections$Stack** $tmp806 = &param0->enclosingContexts;
frost$collections$Stack* $tmp807 = *$tmp806;
ITable* $tmp808 = ((frost$collections$Iterable*) $tmp807)->$class->itable;
while ($tmp808->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[0];
frost$collections$Iterator* $tmp811 = $tmp809(((frost$collections$Iterable*) $tmp807));
goto block178;
block178:;
ITable* $tmp812 = $tmp811->$class->itable;
while ($tmp812->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp812 = $tmp812->next;
}
$fn814 $tmp813 = $tmp812->methods[0];
frost$core$Bit $tmp815 = $tmp813($tmp811);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block180; else goto block179;
block179:;
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp817 = $tmp811->$class->itable;
while ($tmp817->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp817 = $tmp817->next;
}
$fn819 $tmp818 = $tmp817->methods[1];
frost$core$Object* $tmp820 = $tmp818($tmp811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp820)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp821 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp820);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5463
org$frostlang$frostc$Compiler$EnclosingContext* $tmp822 = *(&local25);
frost$core$Int* $tmp823 = &$tmp822->$rawValue;
frost$core$Int $tmp824 = *$tmp823;
frost$core$Int $tmp825 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5464:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp826 = $tmp824.value;
int64_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 == $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block182; else goto block181;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5465
frost$core$Frost$unref$frost$core$Object$Q($tmp820);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp831 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
goto block177;
block181:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5468
org$frostlang$frostc$Compiler$EnclosingContext* $tmp832 = *(&local25);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(param0, $tmp832);
frost$core$Frost$unref$frost$core$Object$Q($tmp820);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp833 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local25) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block178;
block180:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
goto block177;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:139
org$frostlang$frostc$IR$Block$ID$nullable* $tmp834 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp835 = *$tmp834;
frost$core$Bit $tmp836 = (frost$core$Bit) {$tmp835.nonnull};
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block184; else goto block186;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:140
org$frostlang$frostc$IR* $tmp838 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp839 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp840 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID$nullable* $tmp841 = &param0->postconditionEntryBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp842 = *$tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842.nonnull};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block187; else goto block188;
block188:;
frost$core$Int $tmp845 = (frost$core$Int) {140u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s846, $tmp845, &$s847);
abort(); // unreachable
block187:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp839, $tmp840, param1, ((org$frostlang$frostc$IR$Block$ID) $tmp842.value));
$fn849 $tmp848 = ($fn849) $tmp838->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp850 = $tmp848($tmp838, $tmp839);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
goto block185;
block186:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:143
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from Return.frost:143:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5877
frost$collections$Stack** $tmp851 = &param0->enclosingContexts;
frost$collections$Stack* $tmp852 = *$tmp851;
ITable* $tmp853 = ((frost$collections$Iterable*) $tmp852)->$class->itable;
while ($tmp853->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp853 = $tmp853->next;
}
$fn855 $tmp854 = $tmp853->methods[0];
frost$collections$Iterator* $tmp856 = $tmp854(((frost$collections$Iterable*) $tmp852));
goto block190;
block190:;
ITable* $tmp857 = $tmp856->$class->itable;
while ($tmp857->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp857 = $tmp857->next;
}
$fn859 $tmp858 = $tmp857->methods[0];
frost$core$Bit $tmp860 = $tmp858($tmp856);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block192; else goto block191;
block191:;
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp862 = $tmp856->$class->itable;
while ($tmp862->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp862 = $tmp862->next;
}
$fn864 $tmp863 = $tmp862->methods[1];
frost$core$Object* $tmp865 = $tmp863($tmp856);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp865)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp866 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp865);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5878
org$frostlang$frostc$Compiler$EnclosingContext* $tmp867 = *(&local27);
frost$core$Int* $tmp868 = &$tmp867->$rawValue;
frost$core$Int $tmp869 = *$tmp868;
frost$core$Int $tmp870 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5879:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp871 = $tmp869.value;
int64_t $tmp872 = $tmp870.value;
bool $tmp873 = $tmp871 == $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block194; else goto block193;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5880
org$frostlang$frostc$Compiler$EnclosingContext* $tmp876 = *(&local27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q($tmp865);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp877 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local26) = $tmp876;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
goto block189;
block193:;
frost$core$Frost$unref$frost$core$Object$Q($tmp865);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp878 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local27) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block190;
block192:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5884
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block189;
block189:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp879 = *(&local26);
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp880 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local28) = $tmp879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:144
org$frostlang$frostc$Compiler$EnclosingContext* $tmp881 = *(&local28);
frost$core$Bit $tmp882 = (frost$core$Bit) {$tmp881 != NULL};
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block196; else goto block198;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:145
org$frostlang$frostc$Compiler$EnclosingContext* $tmp884 = *(&local28);
frost$core$Bit $tmp885 = (frost$core$Bit) {$tmp884 != NULL};
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block199; else goto block200;
block200:;
frost$core$Int $tmp887 = (frost$core$Int) {145u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s888, $tmp887, &$s889);
abort(); // unreachable
block199:;
frost$core$Int* $tmp890 = &$tmp884->$rawValue;
frost$core$Int $tmp891 = *$tmp890;
frost$core$Int $tmp892 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Return.frost:146:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp893 = $tmp891.value;
int64_t $tmp894 = $tmp892.value;
bool $tmp895 = $tmp893 == $tmp894;
frost$core$Bit $tmp896 = (frost$core$Bit) {$tmp895};
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block202; else goto block201;
block202:;
frost$collections$ListView** $tmp898 = (frost$collections$ListView**) ($tmp884->$data + 0);
frost$collections$ListView* $tmp899 = *$tmp898;
frost$core$Int* $tmp900 = (frost$core$Int*) ($tmp884->$data + 8);
frost$core$Int $tmp901 = *$tmp900;
org$frostlang$frostc$Compiler$InlineReturn** $tmp902 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp884->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp903 = *$tmp902;
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
org$frostlang$frostc$Compiler$InlineReturn* $tmp904 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local29) = $tmp903;
org$frostlang$frostc$IR$Block$ID* $tmp905 = (org$frostlang$frostc$IR$Block$ID*) ($tmp884->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp906 = *$tmp905;
*(&local30) = $tmp906;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:148
org$frostlang$frostc$IR$Block$ID $tmp907 = *(&local30);
frost$core$Bit $tmp908 = (frost$core$Bit) {true};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block204; else goto block205;
block204:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:149
org$frostlang$frostc$IR* $tmp910 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp911 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp912 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp913 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp911, $tmp912, param1, $tmp913);
$fn915 $tmp914 = ($fn915) $tmp910->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp916 = $tmp914($tmp910, $tmp911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
goto block205;
block205:;
org$frostlang$frostc$Compiler$InlineReturn* $tmp917 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local29) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
goto block201;
block201:;
goto block197;
block198:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:155
org$frostlang$frostc$IR* $tmp918 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp919 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp920 = (frost$core$Int) {25u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q($tmp919, $tmp920, param1, ((org$frostlang$frostc$IR$Value*) NULL));
$fn922 $tmp921 = ($fn922) $tmp918->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp923 = $tmp921($tmp918, $tmp919);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
goto block197;
block197:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp924 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local28) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp925 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local26) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block185;
block185:;
goto block69;
block69:;
org$frostlang$frostc$MethodDecl* $tmp926 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp927 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR* $tmp928 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Return$init(org$frostlang$frostc$statement$Return* param0) {

return;

}
void org$frostlang$frostc$statement$Return$cleanup(org$frostlang$frostc$statement$Return* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Return.frost:21
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

