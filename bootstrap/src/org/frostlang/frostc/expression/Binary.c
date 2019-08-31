#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Scanner.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/expression/And.h"
#include "org/frostlang/frostc/expression/Or.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$class_type org$frostlang$frostc$expression$Binary$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$cleanup} };

typedef frost$core$String* (*$fn40)(frost$core$Object*);
typedef frost$core$Bit (*$fn94)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn146)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn154)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn221)(frost$core$Object*);
typedef frost$core$Bit (*$fn304)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn312)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn351)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn355)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn360)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn371)(frost$core$Object*);
typedef frost$core$String* (*$fn379)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn385)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn389)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn485)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn489)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn494)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn507)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn511)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn516)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn613)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn633)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn653)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn670)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn684)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn701)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn715)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn727)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn744)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn761)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn778)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn795)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn812)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn837)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn857)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn877)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn897)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn917)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn921)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn925)(frost$core$Object*);
typedef frost$core$Bit (*$fn941)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1053)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1084)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn1097)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1159)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1173)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1213)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1237)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1311)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1315)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1320)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1394)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1404)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1416)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1440)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1454)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1481)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1500)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1518)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1529)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1563)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1583)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1596)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1599)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1612)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1615)(frost$core$Object*);
typedef frost$core$String* (*$fn1622)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 7016920421845289241, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 151, -217400592141881560, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, 2403110168575220660, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 3365872483370042718, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, 8004068995672102850, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -3764202169548220239, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 165, -3410035956686510358, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65", 16, -4954590249221528654, NULL };
static frost$core$String $s1118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65", 19, -3755527176520939069, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65", 25, -4446748280071778646, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 157, 8541481983937948789, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -8926283552790936043, NULL };
static frost$core$String $s1588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 5247209226559449009, NULL };
static frost$core$String $s1593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 8856786456156887815, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:256
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:256:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp4 = &$tmp3->flags;
frost$core$Int $tmp5 = *$tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {16u};
frost$core$Int $tmp7 = frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int($tmp5, $tmp6);
frost$core$Int $tmp8 = (frost$core$Int) {0u};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 != $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
return $tmp12;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$Symbol* local4 = NULL;
frost$collections$Array* local5 = NULL;
frost$core$Bit local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
frost$collections$Array* local9 = NULL;
org$frostlang$frostc$Pair* local10 = NULL;
org$frostlang$frostc$Pair* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$ClassDecl* local13 = NULL;
frost$collections$Array* local14 = NULL;
frost$collections$Array* local15 = NULL;
org$frostlang$frostc$Pair* local16 = NULL;
org$frostlang$frostc$Pair* local17 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:188
frost$core$Bit $tmp13 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:188:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp14 = $tmp13.value;
bool $tmp15 = !$tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
return ((org$frostlang$frostc$Pair*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:191
org$frostlang$frostc$ClassDecl* $tmp18 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$ClassDecl* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local0) = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:192
org$frostlang$frostc$ClassDecl* $tmp20 = *(&local0);
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20 == NULL};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:193
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:195
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp24 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp25 = (frost$core$Int) {7u};
frost$core$Int $tmp26 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from Binary.frost:195:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp27 = &(&local2)->value;
*$tmp27 = $tmp26;
org$frostlang$frostc$IR$Statement$ID $tmp28 = *(&local2);
*(&local1) = $tmp28;
org$frostlang$frostc$IR$Statement$ID $tmp29 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp24, $tmp25, $tmp29, param1);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$IR$Value* $tmp30 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local3) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:196
org$frostlang$frostc$ClassDecl* $tmp31 = *(&local0);
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31 != NULL};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block7; else goto block8;
block8:;
frost$core$Int $tmp34 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, $tmp34, &$s36);
abort(); // unreachable
block7:;
org$frostlang$frostc$SymbolTable* $tmp37 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp31);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp38->value = param2;
$fn40 $tmp39 = ($fn40) ((frost$core$Object*) $tmp38)->$class->vtable[0];
frost$core$String* $tmp41 = $tmp39(((frost$core$Object*) $tmp38));
org$frostlang$frostc$Symbol* $tmp42 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp37, $tmp41);
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Symbol* $tmp43 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local4) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:197
org$frostlang$frostc$Symbol* $tmp44 = *(&local4);
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44 != NULL};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:198
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp47 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp48 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp47, $tmp48);
frost$collections$Array$add$frost$collections$Array$T($tmp47, ((frost$core$Object*) param3));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$collections$Array* $tmp49 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local5) = $tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:200
org$frostlang$frostc$Symbol* $tmp50 = *(&local4);
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50 != NULL};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block11; else goto block12;
block12:;
frost$core$Int $tmp53 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block11:;
org$frostlang$frostc$Symbol$Kind* $tmp56 = &$tmp50->kind;
org$frostlang$frostc$Symbol$Kind $tmp57 = *$tmp56;
frost$core$Int $tmp58 = $tmp57.$rawValue;
frost$core$Int $tmp59 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:201:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 == $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:202
org$frostlang$frostc$Symbol* $tmp65 = *(&local4);
org$frostlang$frostc$Annotations** $tmp66 = &((org$frostlang$frostc$MethodDecl*) $tmp65)->annotations;
org$frostlang$frostc$Annotations* $tmp67 = *$tmp66;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:202:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp68 = &$tmp67->flags;
frost$core$Int $tmp69 = *$tmp68;
frost$core$Int $tmp70 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71 & $tmp72;
frost$core$Int $tmp74 = (frost$core$Int) {$tmp73};
frost$core$Int $tmp75 = (frost$core$Int) {0u};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:202:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp80 = $tmp79.value;
bool $tmp81 = !$tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block17; else goto block19;
block19:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from Binary.frost:202:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp84 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp85 = *$tmp84;
org$frostlang$frostc$Type$Kind$wrapper* $tmp86;
$tmp86 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp86->value = $tmp85;
frost$core$Int $tmp87 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp88 = &(&local8)->$rawValue;
*$tmp88 = $tmp87;
org$frostlang$frostc$Type$Kind $tmp89 = *(&local8);
*(&local7) = $tmp89;
org$frostlang$frostc$Type$Kind $tmp90 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp91;
$tmp91 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp91->value = $tmp90;
ITable* $tmp92 = ((frost$core$Equatable*) $tmp86)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Bit $tmp95 = $tmp93(((frost$core$Equatable*) $tmp86), ((frost$core$Equatable*) $tmp91));
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block25; else goto block26;
block25:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp97 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp98 = *$tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98 != NULL};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block29; else goto block30;
block30:;
frost$core$Int $tmp101 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Int $tmp104 = (frost$core$Int) {0u};
frost$core$Object* $tmp105 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp98, $tmp104);
frost$core$String** $tmp106 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp105))->name;
frost$core$String* $tmp107 = *$tmp106;
frost$core$Bit $tmp108 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp107, &$s109);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local6) = $tmp108;
goto block27;
block26:;
*(&local6) = $tmp95;
goto block27;
block27:;
frost$core$Bit $tmp110 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp91)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp86)));
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:203
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp112 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp112);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$collections$Array* $tmp113 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local9) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:204
frost$collections$Array* $tmp114 = *(&local9);
org$frostlang$frostc$Symbol* $tmp115 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp114, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp115)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:205
org$frostlang$frostc$Position $tmp116 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp117 = *(&local3);
frost$collections$Array* $tmp118 = *(&local9);
frost$collections$Array* $tmp119 = *(&local5);
org$frostlang$frostc$Pair* $tmp120 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp116, $tmp117, ((frost$collections$ListView*) $tmp118), ((frost$collections$ListView*) $tmp119), param4);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$Pair* $tmp121 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local10) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:207
org$frostlang$frostc$Pair* $tmp122 = *(&local10);
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122 != NULL};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:208
org$frostlang$frostc$Pair* $tmp125 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$Pair* $tmp126 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp127 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp128 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp129 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp130 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp125;
block32:;
org$frostlang$frostc$Pair* $tmp132 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp133 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local9) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
goto block13;
block15:;
frost$core$Int $tmp134 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:212:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp135 = $tmp58.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 == $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:213
org$frostlang$frostc$Position $tmp140 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp141 = *(&local3);
org$frostlang$frostc$Symbol* $tmp142 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp143 = &((org$frostlang$frostc$Methods*) $tmp142)->methods;
org$frostlang$frostc$FixedArray* $tmp144 = *$tmp143;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Binary$_Closure2));
org$frostlang$frostc$expression$Binary$_Closure2* $tmp145 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp145, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp147 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Binary.frost:215:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp148 = &$tmp147->pointer;
*$tmp148 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Object** $tmp149 = &$tmp147->target;
frost$core$Object* $tmp150 = *$tmp149;
frost$core$Frost$unref$frost$core$Object$Q($tmp150);
frost$core$Object** $tmp151 = &$tmp147->target;
*$tmp151 = ((frost$core$Object*) $tmp145);
ITable* $tmp152 = ((frost$collections$ListView*) $tmp144)->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[6];
frost$collections$ListView* $tmp155 = $tmp153(((frost$collections$ListView*) $tmp144), $tmp147);
frost$collections$Array* $tmp156 = *(&local5);
org$frostlang$frostc$Pair* $tmp157 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp140, $tmp141, $tmp155, ((frost$collections$ListView*) $tmp156), param4);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$Pair* $tmp158 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local11) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:216
org$frostlang$frostc$Pair* $tmp159 = *(&local11);
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159 != NULL};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:217
org$frostlang$frostc$Pair* $tmp162 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
org$frostlang$frostc$Pair* $tmp163 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp164 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp165 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp166 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp162;
block38:;
org$frostlang$frostc$Pair* $tmp168 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
goto block13;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:221
frost$core$Int $tmp169 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s170, $tmp169);
abort(); // unreachable
block13:;
frost$collections$Array* $tmp171 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local5) = ((frost$collections$Array*) NULL);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:227
org$frostlang$frostc$Type* $tmp172 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$Type* $tmp173 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local12) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:228
org$frostlang$frostc$Type* $tmp174 = *(&local12);
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174 == NULL};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp177 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp178 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp179 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:231
org$frostlang$frostc$Type* $tmp181 = *(&local12);
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181 != NULL};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block43; else goto block44;
block44:;
frost$core$Int $tmp184 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block43:;
frost$core$Bit $tmp187 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp181);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:231:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp188 = $tmp187.value;
bool $tmp189 = !$tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp192 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp193 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp194 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:234
org$frostlang$frostc$Type* $tmp196 = *(&local12);
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196 != NULL};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block46; else goto block47;
block47:;
frost$core$Int $tmp199 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s200, $tmp199, &$s201);
abort(); // unreachable
block46:;
org$frostlang$frostc$ClassDecl* $tmp202 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp196);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
org$frostlang$frostc$ClassDecl* $tmp203 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local13) = $tmp202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:235
org$frostlang$frostc$ClassDecl* $tmp204 = *(&local13);
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204 == NULL};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp208 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp209 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:238
org$frostlang$frostc$ClassDecl* $tmp212 = *(&local13);
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212 != NULL};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block50; else goto block51;
block51:;
frost$core$Int $tmp215 = (frost$core$Int) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, $tmp215, &$s217);
abort(); // unreachable
block50:;
org$frostlang$frostc$SymbolTable* $tmp218 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp212);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp219->value = param2;
$fn221 $tmp220 = ($fn221) ((frost$core$Object*) $tmp219)->$class->vtable[0];
frost$core$String* $tmp222 = $tmp220(((frost$core$Object*) $tmp219));
org$frostlang$frostc$Symbol* $tmp223 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp218, $tmp222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
org$frostlang$frostc$Symbol* $tmp224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local4) = $tmp223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:239
org$frostlang$frostc$Symbol* $tmp225 = *(&local4);
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225 == NULL};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp228 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp229 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp230 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp231 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:242
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp233 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp234 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp233, $tmp234);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp235 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp236 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp237 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp238 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp235, $tmp236, $tmp237, $tmp238);
frost$collections$Array$add$frost$collections$Array$T($tmp233, ((frost$core$Object*) $tmp235));
frost$collections$Array$add$frost$collections$Array$T($tmp233, ((frost$core$Object*) param3));
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$collections$Array* $tmp239 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local14) = $tmp233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:243
org$frostlang$frostc$Symbol* $tmp240 = *(&local4);
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240 != NULL};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block54; else goto block55;
block55:;
frost$core$Int $tmp243 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s244, $tmp243, &$s245);
abort(); // unreachable
block54:;
org$frostlang$frostc$Symbol$Kind* $tmp246 = &$tmp240->kind;
org$frostlang$frostc$Symbol$Kind $tmp247 = *$tmp246;
frost$core$Int $tmp248 = $tmp247.$rawValue;
frost$core$Int $tmp249 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:244:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249.value;
bool $tmp252 = $tmp250 == $tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:245
org$frostlang$frostc$Symbol* $tmp255 = *(&local4);
org$frostlang$frostc$Annotations** $tmp256 = &((org$frostlang$frostc$MethodDecl*) $tmp255)->annotations;
org$frostlang$frostc$Annotations* $tmp257 = *$tmp256;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:245:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp258 = &$tmp257->flags;
frost$core$Int $tmp259 = *$tmp258;
frost$core$Int $tmp260 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261 & $tmp262;
frost$core$Int $tmp264 = (frost$core$Int) {$tmp263};
frost$core$Int $tmp265 = (frost$core$Int) {0u};
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 != $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:246
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp271 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp271);
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$collections$Array* $tmp272 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local15) = $tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:247
frost$collections$Array* $tmp273 = *(&local15);
org$frostlang$frostc$Symbol* $tmp274 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp273, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp274)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:248
org$frostlang$frostc$Position $tmp275 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp276 = *(&local15);
frost$collections$Array* $tmp277 = *(&local14);
org$frostlang$frostc$Pair* $tmp278 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp275, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp276), ((frost$collections$ListView*) $tmp277), param4);
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$Pair* $tmp279 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local16) = $tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:249
org$frostlang$frostc$Pair* $tmp280 = *(&local16);
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280 != NULL};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:250
org$frostlang$frostc$Pair* $tmp283 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlang$frostc$Pair* $tmp284 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp285 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local15) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp286 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp287 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp288 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp289 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp283;
block65:;
org$frostlang$frostc$Pair* $tmp292 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp293 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local15) = ((frost$collections$Array*) NULL);
goto block61;
block61:;
goto block56;
block58:;
frost$core$Int $tmp294 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:254:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp295 = $tmp248.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 == $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:255
org$frostlang$frostc$Position $tmp300 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp301 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp302 = &((org$frostlang$frostc$Methods*) $tmp301)->methods;
org$frostlang$frostc$FixedArray* $tmp303 = *$tmp302;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp305 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Binary.frost:256:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp306 = &$tmp305->pointer;
*$tmp306 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp307 = &$tmp305->target;
frost$core$Immutable* $tmp308 = *$tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Immutable** $tmp309 = &$tmp305->target;
*$tmp309 = ((frost$core$Immutable*) NULL);
ITable* $tmp310 = ((frost$collections$ListView*) $tmp303)->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[6];
frost$collections$ListView* $tmp313 = $tmp311(((frost$collections$ListView*) $tmp303), ((frost$core$MutableMethod*) $tmp305));
frost$collections$Array* $tmp314 = *(&local14);
org$frostlang$frostc$Pair* $tmp315 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp300, ((org$frostlang$frostc$IR$Value*) NULL), $tmp313, ((frost$collections$ListView*) $tmp314), param4);
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
org$frostlang$frostc$Pair* $tmp316 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local17) = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:257
org$frostlang$frostc$Pair* $tmp317 = *(&local17);
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317 != NULL};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:258
org$frostlang$frostc$Pair* $tmp320 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
org$frostlang$frostc$Pair* $tmp321 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp322 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp323 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp324 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp325 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp326 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp327 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp320;
block71:;
org$frostlang$frostc$Pair* $tmp328 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
goto block56;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:262
frost$core$Int $tmp329 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s330, $tmp329);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp331 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp332 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp333 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp334 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp335 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

frost$collections$CollectionView* local0 = NULL;
org$frostlang$frostc$Pair* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Pair* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
frost$core$Int local5;
frost$collections$Array* local6 = NULL;
org$frostlang$frostc$MethodRef* local7 = NULL;
org$frostlang$frostc$MethodRef* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:271
frost$collections$CollectionView* $tmp337 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$collections$CollectionView* $tmp338 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local0) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:272
frost$collections$CollectionView* $tmp339 = *(&local0);
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339 != NULL};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp342 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:274
frost$collections$CollectionView* $tmp343 = *(&local0);
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343 != NULL};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block3; else goto block4;
block4:;
frost$core$Int $tmp346 = (frost$core$Int) {274u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s347, $tmp346, &$s348);
abort(); // unreachable
block3:;
ITable* $tmp349 = ((frost$collections$Iterable*) $tmp343)->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[0];
frost$collections$Iterator* $tmp352 = $tmp350(((frost$collections$Iterable*) $tmp343));
goto block5;
block5:;
ITable* $tmp353 = $tmp352->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp353 = $tmp353->next;
}
$fn355 $tmp354 = $tmp353->methods[0];
frost$core$Bit $tmp356 = $tmp354($tmp352);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp358 = $tmp352->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp358 = $tmp358->next;
}
$fn360 $tmp359 = $tmp358->methods[1];
frost$core$Object* $tmp361 = $tmp359($tmp352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp361)));
org$frostlang$frostc$Type* $tmp362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp361);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:275
org$frostlang$frostc$Type* $tmp363 = *(&local2);
org$frostlang$frostc$Pair* $tmp364 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param1, $tmp363);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$Pair* $tmp365 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local3) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:276
org$frostlang$frostc$Pair* $tmp366 = *(&local3);
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366 != NULL};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block8; else goto block9;
block9:;
frost$core$Int $tmp369 = (frost$core$Int) {276u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn371 $tmp370 = ($fn371) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp372 = $tmp370(((frost$core$Object*) param1));
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s374, $tmp372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$String* $tmp375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp373, &$s376);
org$frostlang$frostc$Type* $tmp377 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn379 $tmp378 = ($fn379) ((frost$core$Object*) $tmp377)->$class->vtable[0];
frost$core$String* $tmp380 = $tmp378(((frost$core$Object*) $tmp377));
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp375, $tmp380);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s383);
$fn385 $tmp384 = ($fn385) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp386 = $tmp384(param1);
org$frostlang$frostc$Position$wrapper* $tmp387;
$tmp387 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp387->value = $tmp386;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn389 $tmp388 = ($fn389) ((frost$core$Object*) $tmp387)->$class->vtable[0];
frost$core$String* $tmp390 = $tmp388(((frost$core$Object*) $tmp387));
frost$core$String* $tmp391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, $tmp390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp391, &$s393);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s394, $tmp369, $tmp392);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:278
org$frostlang$frostc$Type* $tmp395 = *(&local2);
org$frostlang$frostc$Pair* $tmp396 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp395, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$Pair* $tmp397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local4) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:279
org$frostlang$frostc$Pair* $tmp398 = *(&local4);
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398 != NULL};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:280
org$frostlang$frostc$Pair* $tmp401 = *(&local4);
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401 != NULL};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block15; else goto block16;
block16:;
frost$core$Int $tmp404 = (frost$core$Int) {280u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block15:;
frost$core$Object** $tmp407 = &$tmp401->second;
frost$core$Object* $tmp408 = *$tmp407;
org$frostlang$frostc$Pair* $tmp409 = *(&local3);
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409 != NULL};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block17; else goto block18;
block18:;
frost$core$Int $tmp412 = (frost$core$Int) {280u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s413, $tmp412, &$s414);
abort(); // unreachable
block17:;
frost$core$Object** $tmp415 = &$tmp409->second;
frost$core$Object* $tmp416 = *$tmp415;
int64_t $tmp417 = ((frost$core$Int$wrapper*) $tmp408)->value.value;
int64_t $tmp418 = ((frost$core$Int$wrapper*) $tmp416)->value.value;
int64_t $tmp419 = $tmp417 + $tmp418;
frost$core$Int $tmp420 = (frost$core$Int) {$tmp419};
*(&local5) = $tmp420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:281
org$frostlang$frostc$Pair* $tmp421 = *(&local1);
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421 == NULL};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block19; else goto block22;
block22:;
frost$core$Int $tmp424 = *(&local5);
org$frostlang$frostc$Pair* $tmp425 = *(&local1);
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425 != NULL};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block23; else goto block24;
block24:;
frost$core$Int $tmp428 = (frost$core$Int) {281u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s429, $tmp428, &$s430);
abort(); // unreachable
block23:;
frost$core$Object** $tmp431 = &$tmp425->second;
frost$core$Object* $tmp432 = *$tmp431;
int64_t $tmp433 = $tmp424.value;
int64_t $tmp434 = ((frost$core$Int$wrapper*) $tmp432)->value.value;
bool $tmp435 = $tmp433 < $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:282
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp438 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp439 = *(&local4);
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439 != NULL};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block25; else goto block26;
block26:;
frost$core$Int $tmp442 = (frost$core$Int) {282u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s443, $tmp442, &$s444);
abort(); // unreachable
block25:;
frost$core$Object** $tmp445 = &$tmp439->first;
frost$core$Object* $tmp446 = *$tmp445;
frost$core$Int $tmp447 = *(&local5);
frost$core$Int$wrapper* $tmp448;
$tmp448 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp448->value = $tmp447;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp438, ((frost$core$Object*) ((frost$collections$ListView*) $tmp446)), ((frost$core$Object*) $tmp448));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
org$frostlang$frostc$Pair* $tmp449 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local1) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
goto block20;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:284
frost$core$Int $tmp450 = *(&local5);
org$frostlang$frostc$Pair* $tmp451 = *(&local1);
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451 != NULL};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block29; else goto block30;
block30:;
frost$core$Int $tmp454 = (frost$core$Int) {284u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s455, $tmp454, &$s456);
abort(); // unreachable
block29:;
frost$core$Object** $tmp457 = &$tmp451->second;
frost$core$Object* $tmp458 = *$tmp457;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:284:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp459 = $tmp450.value;
int64_t $tmp460 = ((frost$core$Int$wrapper*) $tmp458)->value.value;
bool $tmp461 = $tmp459 == $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:285
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp464 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp464);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$collections$Array* $tmp465 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local6) = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:286
frost$collections$Array* $tmp466 = *(&local6);
org$frostlang$frostc$Pair* $tmp467 = *(&local1);
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467 != NULL};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block32; else goto block33;
block33:;
frost$core$Int $tmp470 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s471, $tmp470, &$s472);
abort(); // unreachable
block32:;
frost$core$Object** $tmp473 = &$tmp467->first;
frost$core$Object* $tmp474 = *$tmp473;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp466, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp474)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:287
org$frostlang$frostc$Pair* $tmp475 = *(&local4);
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475 != NULL};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block34; else goto block35;
block35:;
frost$core$Int $tmp478 = (frost$core$Int) {287u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s479, $tmp478, &$s480);
abort(); // unreachable
block34:;
frost$core$Object** $tmp481 = &$tmp475->first;
frost$core$Object* $tmp482 = *$tmp481;
ITable* $tmp483 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp482))->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$collections$Iterator* $tmp486 = $tmp484(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp482)));
goto block36;
block36:;
ITable* $tmp487 = $tmp486->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Bit $tmp490 = $tmp488($tmp486);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block38; else goto block37;
block37:;
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp492 = $tmp486->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[1];
frost$core$Object* $tmp495 = $tmp493($tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp495)));
org$frostlang$frostc$MethodRef* $tmp496 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local7) = ((org$frostlang$frostc$MethodRef*) $tmp495);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:288
org$frostlang$frostc$Pair* $tmp497 = *(&local1);
frost$core$Bit $tmp498 = (frost$core$Bit) {$tmp497 != NULL};
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block39; else goto block40;
block40:;
frost$core$Int $tmp500 = (frost$core$Int) {288u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s501, $tmp500, &$s502);
abort(); // unreachable
block39:;
frost$core$Object** $tmp503 = &$tmp497->first;
frost$core$Object* $tmp504 = *$tmp503;
ITable* $tmp505 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp504))->$class->itable;
while ($tmp505->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp505 = $tmp505->next;
}
$fn507 $tmp506 = $tmp505->methods[0];
frost$collections$Iterator* $tmp508 = $tmp506(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp504)));
goto block41;
block41:;
ITable* $tmp509 = $tmp508->$class->itable;
while ($tmp509->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp509 = $tmp509->next;
}
$fn511 $tmp510 = $tmp509->methods[0];
frost$core$Bit $tmp512 = $tmp510($tmp508);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block43; else goto block42;
block42:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp514 = $tmp508->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[1];
frost$core$Object* $tmp517 = $tmp515($tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp517)));
org$frostlang$frostc$MethodRef* $tmp518 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp517);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:289
org$frostlang$frostc$MethodRef* $tmp519 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp520 = &$tmp519->value;
org$frostlang$frostc$MethodDecl* $tmp521 = *$tmp520;
org$frostlang$frostc$MethodRef* $tmp522 = *(&local7);
org$frostlang$frostc$MethodDecl** $tmp523 = &$tmp522->value;
org$frostlang$frostc$MethodDecl* $tmp524 = *$tmp523;
bool $tmp525 = $tmp521 == $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:290
frost$core$Frost$unref$frost$core$Object$Q($tmp517);
org$frostlang$frostc$MethodRef* $tmp528 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
org$frostlang$frostc$MethodRef* $tmp529 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block36;
block45:;
frost$core$Frost$unref$frost$core$Object$Q($tmp517);
org$frostlang$frostc$MethodRef* $tmp530 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:293
frost$collections$Array* $tmp531 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp532 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp531, ((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
org$frostlang$frostc$MethodRef* $tmp533 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block36;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:295
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp534 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp535 = *(&local6);
frost$core$Int $tmp536 = *(&local5);
frost$core$Int$wrapper* $tmp537;
$tmp537 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp537->value = $tmp536;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp534, ((frost$core$Object*) ((frost$collections$ListView*) $tmp535)), ((frost$core$Object*) $tmp537));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
org$frostlang$frostc$Pair* $tmp538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local1) = $tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$collections$Array* $tmp539 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local6) = ((frost$collections$Array*) NULL);
goto block28;
block28:;
goto block20;
block20:;
goto block14;
block14:;
org$frostlang$frostc$Pair* $tmp540 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp541 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp361);
org$frostlang$frostc$Type* $tmp542 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:299
org$frostlang$frostc$Pair* $tmp543 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
org$frostlang$frostc$Pair* $tmp544 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp545 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp543;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp546 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$UInt64 local3;
frost$core$UInt64 local4;
frost$core$UInt64 local5;
frost$core$UInt64 local6;
frost$core$UInt64 local7;
frost$core$UInt64 local8;
frost$core$UInt64 local9;
frost$core$UInt64 local10;
frost$core$UInt64 local11;
frost$core$UInt64 local12;
frost$core$UInt64 local13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:306
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:307
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:309
frost$core$Int* $tmp547 = &param1->$rawValue;
frost$core$Int $tmp548 = *$tmp547;
frost$core$Int $tmp549 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:310:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549.value;
bool $tmp552 = $tmp550 == $tmp551;
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp555 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp556 = *$tmp555;
frost$core$UInt64* $tmp557 = (frost$core$UInt64*) (param1->$data + 24);
frost$core$UInt64 $tmp558 = *$tmp557;
*(&local2) = $tmp558;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:311
frost$core$UInt64 $tmp559 = *(&local2);
frost$core$Int64 $tmp560 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp561 = $tmp560.value;
frost$core$UInt64 $tmp562 = (frost$core$UInt64) {((uint64_t) $tmp561)};
uint64_t $tmp563 = $tmp559.value;
uint64_t $tmp564 = $tmp562.value;
bool $tmp565 = $tmp563 > $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:314
frost$core$UInt64 $tmp568 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:314:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp569 = $tmp568.value;
frost$core$Int64 $tmp570 = (frost$core$Int64) {((int64_t) $tmp569)};
*(&local0) = $tmp570;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:320
frost$core$Int* $tmp571 = &param3->$rawValue;
frost$core$Int $tmp572 = *$tmp571;
frost$core$Int $tmp573 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:321:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp574 = $tmp572.value;
int64_t $tmp575 = $tmp573.value;
bool $tmp576 = $tmp574 == $tmp575;
frost$core$Bit $tmp577 = (frost$core$Bit) {$tmp576};
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block10; else goto block11;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
org$frostlang$frostc$Position* $tmp579 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp580 = *$tmp579;
frost$core$UInt64* $tmp581 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp582 = *$tmp581;
*(&local3) = $tmp582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:322
frost$core$UInt64 $tmp583 = *(&local3);
frost$core$Int64 $tmp584 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:322:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp585 = $tmp584.value;
frost$core$UInt64 $tmp586 = (frost$core$UInt64) {((uint64_t) $tmp585)};
uint64_t $tmp587 = $tmp583.value;
uint64_t $tmp588 = $tmp586.value;
bool $tmp589 = $tmp587 > $tmp588;
frost$core$Bit $tmp590 = (frost$core$Bit) {$tmp589};
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:325
frost$core$UInt64 $tmp592 = *(&local3);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:325:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp593 = $tmp592.value;
frost$core$Int64 $tmp594 = (frost$core$Int64) {((int64_t) $tmp593)};
*(&local1) = $tmp594;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:331
frost$core$Int $tmp595 = param2.$rawValue;
frost$core$Int $tmp596 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:332:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 == $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block18; else goto block19;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:333
frost$core$Int64 $tmp602 = *(&local0);
frost$core$Int64 $tmp603 = *(&local1);
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
int64_t $tmp606 = $tmp604 + $tmp605;
frost$core$Int64 $tmp607 = (frost$core$Int64) {$tmp606};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:333:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp608 = $tmp607.value;
frost$core$UInt64 $tmp609 = (frost$core$UInt64) {((uint64_t) $tmp608)};
*(&local4) = $tmp609;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:334
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp610 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp611 = (frost$core$Int) {25u};
$fn613 $tmp612 = ($fn613) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp614 = $tmp612(param1);
frost$core$UInt64 $tmp615 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp610, $tmp611, $tmp614, $tmp615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
return $tmp610;
block19:;
frost$core$Int $tmp616 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:336:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp617 = $tmp595.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 == $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:337
frost$core$Int64 $tmp622 = *(&local0);
frost$core$Int64 $tmp623 = *(&local1);
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624 - $tmp625;
frost$core$Int64 $tmp627 = (frost$core$Int64) {$tmp626};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:337:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp628 = $tmp627.value;
frost$core$UInt64 $tmp629 = (frost$core$UInt64) {((uint64_t) $tmp628)};
*(&local5) = $tmp629;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:338
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp630 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp631 = (frost$core$Int) {25u};
$fn633 $tmp632 = ($fn633) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp634 = $tmp632(param1);
frost$core$UInt64 $tmp635 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp630, $tmp631, $tmp634, $tmp635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
return $tmp630;
block23:;
frost$core$Int $tmp636 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:340:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp637 = $tmp595.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 == $tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:341
frost$core$Int64 $tmp642 = *(&local0);
frost$core$Int64 $tmp643 = *(&local1);
int64_t $tmp644 = $tmp642.value;
int64_t $tmp645 = $tmp643.value;
int64_t $tmp646 = $tmp644 * $tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {$tmp646};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:341:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp648 = $tmp647.value;
frost$core$UInt64 $tmp649 = (frost$core$UInt64) {((uint64_t) $tmp648)};
*(&local6) = $tmp649;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:342
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp650 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp651 = (frost$core$Int) {25u};
$fn653 $tmp652 = ($fn653) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp654 = $tmp652(param1);
frost$core$UInt64 $tmp655 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp650, $tmp651, $tmp654, $tmp655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
return $tmp650;
block27:;
frost$core$Int $tmp656 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:344:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp657 = $tmp595.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 == $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:345
frost$core$Int64 $tmp662 = *(&local1);
frost$core$Int64 $tmp663 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:345:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp664 = $tmp662.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 == $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:346
$fn670 $tmp669 = ($fn670) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp671 = $tmp669(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp671, &$s672);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:349
frost$core$Int64 $tmp673 = *(&local0);
frost$core$Int64 $tmp674 = *(&local1);
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675 / $tmp676;
frost$core$Int64 $tmp678 = (frost$core$Int64) {$tmp677};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:349:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp679 = $tmp678.value;
frost$core$UInt64 $tmp680 = (frost$core$UInt64) {((uint64_t) $tmp679)};
*(&local7) = $tmp680;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp681 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp682 = (frost$core$Int) {25u};
$fn684 $tmp683 = ($fn684) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp685 = $tmp683(param1);
frost$core$UInt64 $tmp686 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp681, $tmp682, $tmp685, $tmp686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
return $tmp681;
block31:;
frost$core$Int $tmp687 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:352:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp688 = $tmp595.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 == $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:353
frost$core$Int64 $tmp693 = *(&local1);
frost$core$Int64 $tmp694 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:353:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp695 = $tmp693.value;
int64_t $tmp696 = $tmp694.value;
bool $tmp697 = $tmp695 == $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:354
$fn701 $tmp700 = ($fn701) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp702 = $tmp700(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp702, &$s703);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:357
frost$core$Int64 $tmp704 = *(&local0);
frost$core$Int64 $tmp705 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Binary.frost:357:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp706 = $tmp704.value;
int64_t $tmp707 = $tmp705.value;
int64_t $tmp708 = $tmp706 % $tmp707;
frost$core$Int64 $tmp709 = (frost$core$Int64) {$tmp708};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:357:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp710 = $tmp709.value;
frost$core$UInt64 $tmp711 = (frost$core$UInt64) {((uint64_t) $tmp710)};
*(&local8) = $tmp711;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:358
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp712 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp713 = (frost$core$Int) {25u};
$fn715 $tmp714 = ($fn715) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp716 = $tmp714(param1);
frost$core$UInt64 $tmp717 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp712, $tmp713, $tmp716, $tmp717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
return $tmp712;
block38:;
frost$core$Int $tmp718 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:360:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp719 = $tmp595.value;
int64_t $tmp720 = $tmp718.value;
bool $tmp721 = $tmp719 == $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:361
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp724 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp725 = (frost$core$Int) {6u};
$fn727 $tmp726 = ($fn727) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp728 = $tmp726(param1);
frost$core$Int64 $tmp729 = *(&local0);
frost$core$Int64 $tmp730 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp731 = $tmp729.value;
int64_t $tmp732 = $tmp730.value;
bool $tmp733 = $tmp731 == $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp724, $tmp725, $tmp728, $tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
return $tmp724;
block46:;
frost$core$Int $tmp735 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:363:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp736 = $tmp595.value;
int64_t $tmp737 = $tmp735.value;
bool $tmp738 = $tmp736 == $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:364
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp741 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp742 = (frost$core$Int) {6u};
$fn744 $tmp743 = ($fn744) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp745 = $tmp743(param1);
frost$core$Int64 $tmp746 = *(&local0);
frost$core$Int64 $tmp747 = *(&local1);
int64_t $tmp748 = $tmp746.value;
int64_t $tmp749 = $tmp747.value;
bool $tmp750 = $tmp748 != $tmp749;
frost$core$Bit $tmp751 = (frost$core$Bit) {$tmp750};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp741, $tmp742, $tmp745, $tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
return $tmp741;
block50:;
frost$core$Int $tmp752 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:366:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp753 = $tmp595.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 == $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:367
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp758 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp759 = (frost$core$Int) {6u};
$fn761 $tmp760 = ($fn761) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp762 = $tmp760(param1);
frost$core$Int64 $tmp763 = *(&local0);
frost$core$Int64 $tmp764 = *(&local1);
int64_t $tmp765 = $tmp763.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 < $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp758, $tmp759, $tmp762, $tmp768);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
return $tmp758;
block53:;
frost$core$Int $tmp769 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:369:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp770 = $tmp595.value;
int64_t $tmp771 = $tmp769.value;
bool $tmp772 = $tmp770 == $tmp771;
frost$core$Bit $tmp773 = (frost$core$Bit) {$tmp772};
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp775 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp776 = (frost$core$Int) {6u};
$fn778 $tmp777 = ($fn778) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp779 = $tmp777(param1);
frost$core$Int64 $tmp780 = *(&local0);
frost$core$Int64 $tmp781 = *(&local1);
int64_t $tmp782 = $tmp780.value;
int64_t $tmp783 = $tmp781.value;
bool $tmp784 = $tmp782 > $tmp783;
frost$core$Bit $tmp785 = (frost$core$Bit) {$tmp784};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp775, $tmp776, $tmp779, $tmp785);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
return $tmp775;
block56:;
frost$core$Int $tmp786 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:372:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp787 = $tmp595.value;
int64_t $tmp788 = $tmp786.value;
bool $tmp789 = $tmp787 == $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:373
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp792 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp793 = (frost$core$Int) {6u};
$fn795 $tmp794 = ($fn795) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp796 = $tmp794(param1);
frost$core$Int64 $tmp797 = *(&local0);
frost$core$Int64 $tmp798 = *(&local1);
int64_t $tmp799 = $tmp797.value;
int64_t $tmp800 = $tmp798.value;
bool $tmp801 = $tmp799 <= $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp792, $tmp793, $tmp796, $tmp802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
return $tmp792;
block59:;
frost$core$Int $tmp803 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:375:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp804 = $tmp595.value;
int64_t $tmp805 = $tmp803.value;
bool $tmp806 = $tmp804 == $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:376
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp809 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp810 = (frost$core$Int) {6u};
$fn812 $tmp811 = ($fn812) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp813 = $tmp811(param1);
frost$core$Int64 $tmp814 = *(&local0);
frost$core$Int64 $tmp815 = *(&local1);
int64_t $tmp816 = $tmp814.value;
int64_t $tmp817 = $tmp815.value;
bool $tmp818 = $tmp816 >= $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp809, $tmp810, $tmp813, $tmp819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
return $tmp809;
block62:;
frost$core$Int $tmp820 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:378:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp821 = $tmp595.value;
int64_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 == $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:379
frost$core$Int64 $tmp826 = *(&local0);
frost$core$Int64 $tmp827 = *(&local1);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Binary.frost:379:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828 & $tmp829;
frost$core$Int64 $tmp831 = (frost$core$Int64) {$tmp830};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:379:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp832 = $tmp831.value;
frost$core$UInt64 $tmp833 = (frost$core$UInt64) {((uint64_t) $tmp832)};
*(&local9) = $tmp833;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp834 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp835 = (frost$core$Int) {25u};
$fn837 $tmp836 = ($fn837) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp838 = $tmp836(param1);
frost$core$UInt64 $tmp839 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp834, $tmp835, $tmp838, $tmp839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
return $tmp834;
block65:;
frost$core$Int $tmp840 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:382:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp841 = $tmp595.value;
int64_t $tmp842 = $tmp840.value;
bool $tmp843 = $tmp841 == $tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:383
frost$core$Int64 $tmp846 = *(&local0);
frost$core$Int64 $tmp847 = *(&local1);
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Binary.frost:383:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
int64_t $tmp848 = $tmp846.value;
int64_t $tmp849 = $tmp847.value;
int64_t $tmp850 = $tmp848 | $tmp849;
frost$core$Int64 $tmp851 = (frost$core$Int64) {$tmp850};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:383:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp852 = $tmp851.value;
frost$core$UInt64 $tmp853 = (frost$core$UInt64) {((uint64_t) $tmp852)};
*(&local10) = $tmp853;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:384
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp854 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp855 = (frost$core$Int) {25u};
$fn857 $tmp856 = ($fn857) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp858 = $tmp856(param1);
frost$core$UInt64 $tmp859 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp854, $tmp855, $tmp858, $tmp859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
return $tmp854;
block70:;
frost$core$Int $tmp860 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:386:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp861 = $tmp595.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:387
frost$core$Int64 $tmp866 = *(&local0);
frost$core$Int64 $tmp867 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Binary.frost:387:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
int64_t $tmp868 = $tmp866.value;
int64_t $tmp869 = $tmp867.value;
int64_t $tmp870 = $tmp868 ^ $tmp869;
frost$core$Int64 $tmp871 = (frost$core$Int64) {$tmp870};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:387:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp872 = $tmp871.value;
frost$core$UInt64 $tmp873 = (frost$core$UInt64) {((uint64_t) $tmp872)};
*(&local11) = $tmp873;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:388
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp874 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp875 = (frost$core$Int) {25u};
$fn877 $tmp876 = ($fn877) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp878 = $tmp876(param1);
frost$core$UInt64 $tmp879 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp874, $tmp875, $tmp878, $tmp879);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
return $tmp874;
block75:;
frost$core$Int $tmp880 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:390:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp881 = $tmp595.value;
int64_t $tmp882 = $tmp880.value;
bool $tmp883 = $tmp881 == $tmp882;
frost$core$Bit $tmp884 = (frost$core$Bit) {$tmp883};
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:391
frost$core$Int64 $tmp886 = *(&local0);
frost$core$Int64 $tmp887 = *(&local1);
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Binary.frost:391:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp888 = $tmp886.value;
int64_t $tmp889 = $tmp887.value;
int64_t $tmp890 = $tmp888 << $tmp889;
frost$core$Int64 $tmp891 = (frost$core$Int64) {$tmp890};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:391:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp892 = $tmp891.value;
frost$core$UInt64 $tmp893 = (frost$core$UInt64) {((uint64_t) $tmp892)};
*(&local12) = $tmp893;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:392
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp894 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp895 = (frost$core$Int) {25u};
$fn897 $tmp896 = ($fn897) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp898 = $tmp896(param1);
frost$core$UInt64 $tmp899 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp894, $tmp895, $tmp898, $tmp899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
return $tmp894;
block80:;
frost$core$Int $tmp900 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:394:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp901 = $tmp595.value;
int64_t $tmp902 = $tmp900.value;
bool $tmp903 = $tmp901 == $tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block84; else goto block17;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:395
frost$core$Int64 $tmp906 = *(&local0);
frost$core$Int64 $tmp907 = *(&local1);
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from Binary.frost:395:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
int64_t $tmp908 = $tmp906.value;
int64_t $tmp909 = $tmp907.value;
int64_t $tmp910 = $tmp908 >> $tmp909;
frost$core$Int64 $tmp911 = (frost$core$Int64) {$tmp910};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:395:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp912 = $tmp911.value;
frost$core$UInt64 $tmp913 = (frost$core$UInt64) {((uint64_t) $tmp912)};
*(&local13) = $tmp913;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:396
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp914 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp915 = (frost$core$Int) {25u};
$fn917 $tmp916 = ($fn917) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp918 = $tmp916(param1);
frost$core$UInt64 $tmp919 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp914, $tmp915, $tmp918, $tmp919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
return $tmp914;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:399
$fn921 $tmp920 = ($fn921) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp922 = $tmp920(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp923;
$tmp923 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp923->value = param2;
$fn925 $tmp924 = ($fn925) ((frost$core$Object*) $tmp923)->$class->vtable[0];
frost$core$String* $tmp926 = $tmp924(((frost$core$Object*) $tmp923));
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s928, $tmp926);
frost$core$String* $tmp929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp927, &$s930);
frost$core$String* $tmp931 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp929, &$s932);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp922, $tmp931);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:401
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Position local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:408
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp933;
$tmp933 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp933->value = param2;
frost$core$Int $tmp934 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:408:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp935 = &(&local1)->$rawValue;
*$tmp935 = $tmp934;
org$frostlang$frostc$expression$Binary$Operator $tmp936 = *(&local1);
*(&local0) = $tmp936;
org$frostlang$frostc$expression$Binary$Operator $tmp937 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp938;
$tmp938 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp938->value = $tmp937;
ITable* $tmp939 = ((frost$core$Equatable*) $tmp933)->$class->itable;
while ($tmp939->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
frost$core$Bit $tmp942 = $tmp940(((frost$core$Equatable*) $tmp933), ((frost$core$Equatable*) $tmp938));
bool $tmp943 = $tmp942.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp938)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp933)));
if ($tmp943) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:411
frost$core$Int* $tmp944 = &param1->$rawValue;
frost$core$Int $tmp945 = *$tmp944;
frost$core$Int $tmp946 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:412:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp947 = $tmp945.value;
int64_t $tmp948 = $tmp946.value;
bool $tmp949 = $tmp947 == $tmp948;
frost$core$Bit $tmp950 = (frost$core$Bit) {$tmp949};
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp952 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp953 = *$tmp952;
*(&local2) = $tmp953;
frost$core$String** $tmp954 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp955 = *$tmp954;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$String* $tmp956 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local3) = $tmp955;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:413
frost$core$Int* $tmp957 = &param3->$rawValue;
frost$core$Int $tmp958 = *$tmp957;
frost$core$Int $tmp959 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:414:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp960 = $tmp958.value;
int64_t $tmp961 = $tmp959.value;
bool $tmp962 = $tmp960 == $tmp961;
frost$core$Bit $tmp963 = (frost$core$Bit) {$tmp962};
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp965 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp966 = *$tmp965;
frost$core$String** $tmp967 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp968 = *$tmp967;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$String* $tmp969 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local4) = $tmp968;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp970 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp971 = (frost$core$Int) {40u};
org$frostlang$frostc$Position $tmp972 = *(&local2);
frost$core$String* $tmp973 = *(&local3);
frost$core$String* $tmp974 = *(&local4);
frost$core$String* $tmp975 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp973, $tmp974);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp970, $tmp971, $tmp972, $tmp975);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$String* $tmp976 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp977 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local3) = ((frost$core$String*) NULL);
return $tmp970;
block7:;
frost$core$String* $tmp978 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:425
frost$core$Int* $tmp979 = &param1->$rawValue;
frost$core$Int $tmp980 = *$tmp979;
frost$core$Int $tmp981 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:426:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp982 = $tmp980.value;
int64_t $tmp983 = $tmp981.value;
bool $tmp984 = $tmp982 == $tmp983;
frost$core$Bit $tmp985 = (frost$core$Bit) {$tmp984};
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:427
org$frostlang$frostc$ASTNode* $tmp987 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
return $tmp987;
block3:;
frost$core$Int $tmp988 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp989 = $tmp980.value;
int64_t $tmp990 = $tmp988.value;
bool $tmp991 = $tmp989 == $tmp990;
frost$core$Bit $tmp992 = (frost$core$Bit) {$tmp991};
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:430
org$frostlang$frostc$ASTNode* $tmp994 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
return $tmp994;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:433
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block8;
block8:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$expression$Binary$Operator local5;
frost$core$Bit local6;
frost$core$Bit local7;
frost$core$UInt64 local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$expression$Binary$Operator local16;
org$frostlang$frostc$expression$Binary$Operator local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
frost$core$UInt64 local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
frost$core$Bit local22;
org$frostlang$frostc$Type* local23 = NULL;
org$frostlang$frostc$IR$Statement$ID local24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:441
org$frostlang$frostc$ASTNode* $tmp995 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
org$frostlang$frostc$ASTNode* $tmp996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local0) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:442
org$frostlang$frostc$ASTNode* $tmp997 = *(&local0);
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997 != NULL};
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:443
org$frostlang$frostc$ASTNode* $tmp1000 = *(&local0);
frost$core$Bit $tmp1001 = (frost$core$Bit) {$tmp1000 != NULL};
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block3; else goto block4;
block4:;
frost$core$Int $tmp1003 = (frost$core$Int) {443u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1004, $tmp1003, &$s1005);
abort(); // unreachable
block3:;
org$frostlang$frostc$IR$Value* $tmp1006 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1000, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
org$frostlang$frostc$ASTNode* $tmp1007 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1006;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:445
frost$core$Int $tmp1008 = param3.$rawValue;
frost$core$Int $tmp1009 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:446:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1010 = $tmp1008.value;
int64_t $tmp1011 = $tmp1009.value;
bool $tmp1012 = $tmp1010 == $tmp1011;
frost$core$Bit $tmp1013 = (frost$core$Bit) {$tmp1012};
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:447
org$frostlang$frostc$Scanner** $tmp1015 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1016 = *$tmp1015;
org$frostlang$frostc$Type* $tmp1017 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1016, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
org$frostlang$frostc$Type* $tmp1018 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local1) = $tmp1017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:448
org$frostlang$frostc$Type* $tmp1019 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp1020 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp1019);
org$frostlang$frostc$IR$Value* $tmp1021 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1020, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
org$frostlang$frostc$Type* $tmp1022 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1023 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1021;
block7:;
frost$core$Int $tmp1024 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1025 = $tmp1008.value;
int64_t $tmp1026 = $tmp1024.value;
bool $tmp1027 = $tmp1025 == $tmp1026;
frost$core$Bit $tmp1028 = (frost$core$Bit) {$tmp1027};
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block9; else goto block10;
block10:;
frost$core$Int $tmp1030 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1031 = $tmp1008.value;
int64_t $tmp1032 = $tmp1030.value;
bool $tmp1033 = $tmp1031 == $tmp1032;
frost$core$Bit $tmp1034 = (frost$core$Bit) {$tmp1033};
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:451
org$frostlang$frostc$IR$Value* $tmp1036 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1036;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:454
org$frostlang$frostc$Pair* $tmp1038 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
org$frostlang$frostc$Pair* $tmp1039 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local2) = $tmp1038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:455
org$frostlang$frostc$Pair* $tmp1040 = *(&local2);
frost$core$Bit $tmp1041 = (frost$core$Bit) {$tmp1040 != NULL};
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:456
org$frostlang$frostc$Pair* $tmp1043 = *(&local2);
frost$core$Bit $tmp1044 = (frost$core$Bit) {$tmp1043 != NULL};
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block18; else goto block19;
block19:;
frost$core$Int $tmp1046 = (frost$core$Int) {456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1047, $tmp1046, &$s1048);
abort(); // unreachable
block18:;
frost$core$Object** $tmp1049 = &$tmp1043->first;
frost$core$Object* $tmp1050 = *$tmp1049;
ITable* $tmp1051 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1050))->$class->itable;
while ($tmp1051->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1051 = $tmp1051->next;
}
$fn1053 $tmp1052 = $tmp1051->methods[0];
frost$core$Int $tmp1054 = $tmp1052(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1050)));
frost$core$Int $tmp1055 = (frost$core$Int) {1u};
int64_t $tmp1056 = $tmp1054.value;
int64_t $tmp1057 = $tmp1055.value;
bool $tmp1058 = $tmp1056 > $tmp1057;
frost$core$Bit $tmp1059 = (frost$core$Bit) {$tmp1058};
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:457
org$frostlang$frostc$Pair* $tmp1061 = *(&local2);
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061 != NULL};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1064 = (frost$core$Int) {457u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1065, $tmp1064, &$s1066);
abort(); // unreachable
block20:;
frost$core$Object** $tmp1067 = &$tmp1061->first;
frost$core$Object* $tmp1068 = *$tmp1067;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1069 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1070 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp1069, $tmp1070);
frost$collections$Array$add$frost$collections$Array$T($tmp1069, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp1069, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp1068), ((frost$collections$ListView*) $tmp1069), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp1071 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1072 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:460
org$frostlang$frostc$Pair* $tmp1073 = *(&local2);
frost$core$Bit $tmp1074 = (frost$core$Bit) {$tmp1073 != NULL};
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1076 = (frost$core$Int) {460u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1077, $tmp1076, &$s1078);
abort(); // unreachable
block22:;
frost$core$Object** $tmp1079 = &$tmp1073->first;
frost$core$Object* $tmp1080 = *$tmp1079;
frost$core$Int $tmp1081 = (frost$core$Int) {0u};
ITable* $tmp1082 = ((frost$collections$ListView*) $tmp1080)->$class->itable;
while ($tmp1082->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1082 = $tmp1082->next;
}
$fn1084 $tmp1083 = $tmp1082->methods[0];
frost$core$Object* $tmp1085 = $tmp1083(((frost$collections$ListView*) $tmp1080), $tmp1081);
org$frostlang$frostc$MethodDecl** $tmp1086 = &((org$frostlang$frostc$MethodRef*) $tmp1085)->value;
org$frostlang$frostc$MethodDecl* $tmp1087 = *$tmp1086;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
org$frostlang$frostc$MethodDecl* $tmp1088 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local3) = $tmp1087;
frost$core$Frost$unref$frost$core$Object$Q($tmp1085);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:461
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1089;
$tmp1089 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1089->value = param3;
frost$core$Int $tmp1090 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:461:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp1091 = &(&local5)->$rawValue;
*$tmp1091 = $tmp1090;
org$frostlang$frostc$expression$Binary$Operator $tmp1092 = *(&local5);
*(&local4) = $tmp1092;
org$frostlang$frostc$expression$Binary$Operator $tmp1093 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1094;
$tmp1094 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1094->value = $tmp1093;
ITable* $tmp1095 = ((frost$core$Equatable*) $tmp1089)->$class->itable;
while ($tmp1095->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1095 = $tmp1095->next;
}
$fn1097 $tmp1096 = $tmp1095->methods[0];
frost$core$Bit $tmp1098 = $tmp1096(((frost$core$Equatable*) $tmp1089), ((frost$core$Equatable*) $tmp1094));
bool $tmp1099 = $tmp1098.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1094)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1089)));
if ($tmp1099) goto block26; else goto block25;
block26:;
org$frostlang$frostc$MethodDecl* $tmp1100 = *(&local3);
frost$core$Weak** $tmp1101 = &$tmp1100->owner;
frost$core$Weak* $tmp1102 = *$tmp1101;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:461:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1103 = &$tmp1102->_valid;
frost$core$Bit $tmp1104 = *$tmp1103;
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block30; else goto block31;
block31:;
frost$core$Int $tmp1106 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1107, $tmp1106);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1108 = &$tmp1102->value;
frost$core$Object* $tmp1109 = *$tmp1108;
frost$core$Frost$ref$frost$core$Object$Q($tmp1109);
// begin inline call to function org.frostlang.frostc.Compiler.isTuple(cl:org.frostlang.frostc.ClassDecl):frost.core.Bit from Binary.frost:461:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2686
frost$core$String** $tmp1110 = &((org$frostlang$frostc$ClassDecl*) $tmp1109)->name;
frost$core$String* $tmp1111 = *$tmp1110;
frost$core$Bit $tmp1112 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1111, &$s1113);
bool $tmp1114 = $tmp1112.value;
if ($tmp1114) goto block33; else goto block34;
block33:;
*(&local7) = $tmp1112;
goto block35;
block34:;
frost$core$String** $tmp1115 = &((org$frostlang$frostc$ClassDecl*) $tmp1109)->name;
frost$core$String* $tmp1116 = *$tmp1115;
frost$core$Bit $tmp1117 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1116, &$s1118);
*(&local7) = $tmp1117;
goto block35;
block35:;
frost$core$Bit $tmp1119 = *(&local7);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block36; else goto block37;
block36:;
*(&local6) = $tmp1119;
goto block38;
block37:;
frost$core$String** $tmp1121 = &((org$frostlang$frostc$ClassDecl*) $tmp1109)->name;
frost$core$String* $tmp1122 = *$tmp1121;
frost$core$Bit $tmp1123 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1122, &$s1124);
*(&local6) = $tmp1123;
goto block38;
block38:;
frost$core$Bit $tmp1125 = *(&local6);
bool $tmp1126 = $tmp1125.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1109);
if ($tmp1126) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:462
frost$core$Int* $tmp1127 = &param4->$rawValue;
frost$core$Int $tmp1128 = *$tmp1127;
frost$core$Int $tmp1129 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:463:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1130 = $tmp1128.value;
int64_t $tmp1131 = $tmp1129.value;
bool $tmp1132 = $tmp1130 == $tmp1131;
frost$core$Bit $tmp1133 = (frost$core$Bit) {$tmp1132};
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block40; else goto block39;
block40:;
org$frostlang$frostc$Position* $tmp1135 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1136 = *$tmp1135;
frost$core$UInt64* $tmp1137 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1138 = *$tmp1137;
*(&local8) = $tmp1138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:464
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1139 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1140 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1139, $tmp1140);
org$frostlang$frostc$IR$Value* $tmp1141 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1139);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
org$frostlang$frostc$IR$Value* $tmp1142 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local9) = $tmp1141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:466
org$frostlang$frostc$IR$Value* $tmp1143 = *(&local9);
frost$core$Bit $tmp1144 = (frost$core$Bit) {$tmp1143 == NULL};
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1146 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1147 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:469
org$frostlang$frostc$IR$Value* $tmp1150 = *(&local9);
frost$core$Bit $tmp1151 = (frost$core$Bit) {$tmp1150 != NULL};
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block44; else goto block45;
block45:;
frost$core$Int $tmp1153 = (frost$core$Int) {470u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1154, $tmp1153, &$s1155);
abort(); // unreachable
block44:;
frost$core$UInt64 $tmp1156 = *(&local8);
frost$core$UInt64$wrapper* $tmp1157;
$tmp1157 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1157->value = $tmp1156;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:470:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1159 $tmp1158 = ($fn1159) ((frost$core$Object*) $tmp1157)->$class->vtable[0];
frost$core$String* $tmp1160 = $tmp1158(((frost$core$Object*) $tmp1157));
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1162, $tmp1160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, &$s1164);
org$frostlang$frostc$IR$Value* $tmp1165 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1150, $tmp1163);
org$frostlang$frostc$IR$Value* $tmp1166 = *(&local9);
frost$core$Bit $tmp1167 = (frost$core$Bit) {$tmp1166 != NULL};
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block47; else goto block48;
block48:;
frost$core$Int $tmp1169 = (frost$core$Int) {471u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1170, $tmp1169, &$s1171);
abort(); // unreachable
block47:;
$fn1173 $tmp1172 = ($fn1173) $tmp1166->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1174 = $tmp1172($tmp1166);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:471:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1175 = &$tmp1174->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1176 = *$tmp1175;
frost$core$Bit $tmp1177 = (frost$core$Bit) {$tmp1176 != NULL};
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block50; else goto block51;
block51:;
frost$core$Int $tmp1179 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1180, $tmp1179, &$s1181);
abort(); // unreachable
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$UInt64 $tmp1182 = *(&local8);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:471:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1183 = $tmp1182.value;
frost$core$Int $tmp1184 = (frost$core$Int) {((int64_t) $tmp1183)};
frost$core$Object* $tmp1185 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1176, $tmp1184);
org$frostlang$frostc$IR$Value* $tmp1186 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1165, ((org$frostlang$frostc$Type*) $tmp1185));
org$frostlang$frostc$IR$Value* $tmp1187 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1186, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q($tmp1185);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
org$frostlang$frostc$IR$Value* $tmp1188 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1190 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1187;
block39:;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:475
org$frostlang$frostc$MethodDecl* $tmp1192 = *(&local3);
org$frostlang$frostc$Annotations** $tmp1193 = &$tmp1192->annotations;
org$frostlang$frostc$Annotations* $tmp1194 = *$tmp1193;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:475:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1195 = &$tmp1194->flags;
frost$core$Int $tmp1196 = *$tmp1195;
frost$core$Int $tmp1197 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1198 = $tmp1196.value;
int64_t $tmp1199 = $tmp1197.value;
int64_t $tmp1200 = $tmp1198 & $tmp1199;
frost$core$Int $tmp1201 = (frost$core$Int) {$tmp1200};
frost$core$Int $tmp1202 = (frost$core$Int) {0u};
int64_t $tmp1203 = $tmp1201.value;
int64_t $tmp1204 = $tmp1202.value;
bool $tmp1205 = $tmp1203 != $tmp1204;
frost$core$Bit $tmp1206 = (frost$core$Bit) {$tmp1205};
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:476
org$frostlang$frostc$MethodDecl* $tmp1208 = *(&local3);
frost$collections$Array** $tmp1209 = &$tmp1208->parameters;
frost$collections$Array* $tmp1210 = *$tmp1209;
ITable* $tmp1211 = ((frost$collections$CollectionView*) $tmp1210)->$class->itable;
while ($tmp1211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[0];
frost$core$Int $tmp1214 = $tmp1212(((frost$collections$CollectionView*) $tmp1210));
frost$core$Int $tmp1215 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:476:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1216 = $tmp1214.value;
int64_t $tmp1217 = $tmp1215.value;
bool $tmp1218 = $tmp1216 == $tmp1217;
frost$core$Bit $tmp1219 = (frost$core$Bit) {$tmp1218};
bool $tmp1220 = $tmp1219.value;
if ($tmp1220) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:477
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1221 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1222 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1223 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1224 = *(&local3);
org$frostlang$frostc$Type* $tmp1225 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1224, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1221, $tmp1222, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1223, $tmp1225);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1226 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1227 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp1226, $tmp1227);
frost$collections$Array$add$frost$collections$Array$T($tmp1226, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp1226, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1228 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1221, ((frost$collections$ListView*) $tmp1226), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
org$frostlang$frostc$MethodDecl* $tmp1229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1228;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:480
org$frostlang$frostc$MethodDecl* $tmp1232 = *(&local3);
frost$collections$Array** $tmp1233 = &$tmp1232->parameters;
frost$collections$Array* $tmp1234 = *$tmp1233;
ITable* $tmp1235 = ((frost$collections$CollectionView*) $tmp1234)->$class->itable;
while ($tmp1235->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1235 = $tmp1235->next;
}
$fn1237 $tmp1236 = $tmp1235->methods[0];
frost$core$Int $tmp1238 = $tmp1236(((frost$collections$CollectionView*) $tmp1234));
frost$core$Int $tmp1239 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:480:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1240 = $tmp1238.value;
int64_t $tmp1241 = $tmp1239.value;
bool $tmp1242 = $tmp1240 == $tmp1241;
frost$core$Bit $tmp1243 = (frost$core$Bit) {$tmp1242};
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block61; else goto block62;
block62:;
frost$core$Int $tmp1245 = (frost$core$Int) {480u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1246, $tmp1245);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:481
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1247 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1248 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1249 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1250 = *(&local3);
org$frostlang$frostc$Type* $tmp1251 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1250, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1247, $tmp1248, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1249, $tmp1251);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1252 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1253 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1252, $tmp1253);
frost$collections$Array$add$frost$collections$Array$T($tmp1252, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1254 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1247, ((frost$collections$ListView*) $tmp1252), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
org$frostlang$frostc$MethodDecl* $tmp1255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1256 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1257 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1254;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:484
org$frostlang$frostc$MethodDecl* $tmp1258 = *(&local3);
frost$core$Weak** $tmp1259 = &$tmp1258->owner;
frost$core$Weak* $tmp1260 = *$tmp1259;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:484:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1261 = &$tmp1260->_valid;
frost$core$Bit $tmp1262 = *$tmp1261;
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block67; else goto block68;
block68:;
frost$core$Int $tmp1264 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1265, $tmp1264);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1266 = &$tmp1260->value;
frost$core$Object* $tmp1267 = *$tmp1266;
frost$core$Frost$ref$frost$core$Object$Q($tmp1267);
frost$core$String** $tmp1268 = &((org$frostlang$frostc$ClassDecl*) $tmp1267)->name;
frost$core$String* $tmp1269 = *$tmp1268;
frost$core$Bit $tmp1270 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1269, &$s1271);
bool $tmp1272 = $tmp1270.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1267);
if ($tmp1272) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:485
org$frostlang$frostc$MethodDecl* $tmp1273 = *(&local3);
frost$core$String** $tmp1274 = &((org$frostlang$frostc$Symbol*) $tmp1273)->name;
frost$core$String* $tmp1275 = *$tmp1274;
frost$core$Bit $tmp1276 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1275, &$s1277);
bool $tmp1278 = $tmp1276.value;
if ($tmp1278) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:486
org$frostlang$frostc$IR$Value* $tmp1279 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$MethodDecl* $tmp1280 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1279;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:488
org$frostlang$frostc$MethodDecl* $tmp1283 = *(&local3);
frost$core$String** $tmp1284 = &((org$frostlang$frostc$Symbol*) $tmp1283)->name;
frost$core$String* $tmp1285 = *$tmp1284;
frost$core$Bit $tmp1286 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1285, &$s1287);
bool $tmp1288 = $tmp1286.value;
if ($tmp1288) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:489
org$frostlang$frostc$IR$Value* $tmp1289 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
org$frostlang$frostc$MethodDecl* $tmp1290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1291 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1289;
block72:;
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:492
frost$collections$CollectionView* $tmp1293 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
frost$core$Bit $tmp1294 = (frost$core$Bit) {$tmp1293 != NULL};
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block73; else goto block74;
block74:;
frost$core$Int $tmp1296 = (frost$core$Int) {492u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1297, $tmp1296, &$s1298);
abort(); // unreachable
block73:;
org$frostlang$frostc$MethodDecl* $tmp1299 = *(&local3);
frost$core$Weak** $tmp1300 = &$tmp1299->owner;
frost$core$Weak* $tmp1301 = *$tmp1300;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:492:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1302 = &$tmp1301->_valid;
frost$core$Bit $tmp1303 = *$tmp1302;
bool $tmp1304 = $tmp1303.value;
if ($tmp1304) goto block77; else goto block78;
block78:;
frost$core$Int $tmp1305 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1306, $tmp1305);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1307 = &$tmp1301->value;
frost$core$Object* $tmp1308 = *$tmp1307;
frost$core$Frost$ref$frost$core$Object$Q($tmp1308);
// begin inline call to function org.frostlang.frostc.Compiler.findType(start:frost.collections.CollectionView<org.frostlang.frostc.Type>, target:org.frostlang.frostc.ClassDecl):org.frostlang.frostc.Type? from Binary.frost:492:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4471
ITable* $tmp1309 = ((frost$collections$Iterable*) $tmp1293)->$class->itable;
while ($tmp1309->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[0];
frost$collections$Iterator* $tmp1312 = $tmp1310(((frost$collections$Iterable*) $tmp1293));
goto block80;
block80:;
ITable* $tmp1313 = $tmp1312->$class->itable;
while ($tmp1313->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1313 = $tmp1313->next;
}
$fn1315 $tmp1314 = $tmp1313->methods[0];
frost$core$Bit $tmp1316 = $tmp1314($tmp1312);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block82; else goto block81;
block81:;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1318 = $tmp1312->$class->itable;
while ($tmp1318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1318 = $tmp1318->next;
}
$fn1320 $tmp1319 = $tmp1318->methods[1];
frost$core$Object* $tmp1321 = $tmp1319($tmp1312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1321)));
org$frostlang$frostc$Type* $tmp1322 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1321);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4472
org$frostlang$frostc$Type* $tmp1323 = *(&local11);
org$frostlang$frostc$Type* $tmp1324 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1323, ((org$frostlang$frostc$ClassDecl*) $tmp1308));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$Type* $tmp1325 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local12) = $tmp1324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4473
org$frostlang$frostc$Type* $tmp1326 = *(&local12);
frost$core$Bit $tmp1327 = (frost$core$Bit) {$tmp1326 != NULL};
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4474
org$frostlang$frostc$Type* $tmp1329 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
org$frostlang$frostc$Type* $tmp1330 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1321);
org$frostlang$frostc$Type* $tmp1331 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local10) = $tmp1329;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
goto block79;
block84:;
org$frostlang$frostc$Type* $tmp1332 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1321);
org$frostlang$frostc$Type* $tmp1333 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block80;
block82:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4477
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
goto block79;
block79:;
org$frostlang$frostc$Type* $tmp1334 = *(&local10);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
org$frostlang$frostc$Type* $tmp1335 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local13) = $tmp1334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:493
org$frostlang$frostc$Type* $tmp1336 = *(&local13);
frost$core$Bit $tmp1337 = (frost$core$Bit) {$tmp1336 != NULL};
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block85; else goto block86;
block86:;
frost$core$Int $tmp1339 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1340, $tmp1339);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:494
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1341 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1342 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp1343 = *(&local13);
frost$core$Bit $tmp1344 = (frost$core$Bit) {$tmp1343 != NULL};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block87; else goto block88;
block88:;
frost$core$Int $tmp1346 = (frost$core$Int) {494u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1347, $tmp1346, &$s1348);
abort(); // unreachable
block87:;
frost$core$Bit $tmp1349 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1341, $tmp1342, $tmp1343, $tmp1349);
org$frostlang$frostc$IR$Value* $tmp1350 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1341);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
org$frostlang$frostc$IR$Value* $tmp1351 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local14) = $tmp1350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:495
org$frostlang$frostc$IR$Value* $tmp1352 = *(&local14);
frost$core$Bit $tmp1353 = (frost$core$Bit) {$tmp1352 == NULL};
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1355 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1356 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1357 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
org$frostlang$frostc$MethodDecl* $tmp1358 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1359 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:498
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1361 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1362 = (frost$core$Int) {9u};
org$frostlang$frostc$IR$Value* $tmp1363 = *(&local14);
org$frostlang$frostc$MethodDecl* $tmp1364 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1365 = *(&local3);
org$frostlang$frostc$Type* $tmp1366 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1365, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1361, $tmp1362, $tmp1363, $tmp1364, $tmp1366);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1367 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1368 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1367, $tmp1368);
frost$collections$Array$add$frost$collections$Array$T($tmp1367, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1369 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1361, ((frost$collections$ListView*) $tmp1367), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
org$frostlang$frostc$IR$Value* $tmp1370 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1371 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1372 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
org$frostlang$frostc$MethodDecl* $tmp1373 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1369;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:501
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1376 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1377 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1376, $tmp1377);
org$frostlang$frostc$IR$Value* $tmp1378 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1376);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
org$frostlang$frostc$IR$Value* $tmp1379 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local15) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:502
org$frostlang$frostc$IR$Value* $tmp1380 = *(&local15);
frost$core$Bit $tmp1381 = (frost$core$Bit) {$tmp1380 == NULL};
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1383 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1384 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1385 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1386;
$tmp1386 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1386->value = param3;
frost$core$Int $tmp1387 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:505:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp1388 = &(&local17)->$rawValue;
*$tmp1388 = $tmp1387;
org$frostlang$frostc$expression$Binary$Operator $tmp1389 = *(&local17);
*(&local16) = $tmp1389;
org$frostlang$frostc$expression$Binary$Operator $tmp1390 = *(&local16);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1391;
$tmp1391 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1391->value = $tmp1390;
ITable* $tmp1392 = ((frost$core$Equatable*) $tmp1386)->$class->itable;
while ($tmp1392->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[0];
frost$core$Bit $tmp1395 = $tmp1393(((frost$core$Equatable*) $tmp1386), ((frost$core$Equatable*) $tmp1391));
bool $tmp1396 = $tmp1395.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1391)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1386)));
if ($tmp1396) goto block95; else goto block94;
block95:;
org$frostlang$frostc$IR$Value* $tmp1397 = *(&local15);
frost$core$Bit $tmp1398 = (frost$core$Bit) {$tmp1397 != NULL};
bool $tmp1399 = $tmp1398.value;
if ($tmp1399) goto block97; else goto block98;
block98:;
frost$core$Int $tmp1400 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1401, $tmp1400, &$s1402);
abort(); // unreachable
block97:;
$fn1404 $tmp1403 = ($fn1404) $tmp1397->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1405 = $tmp1403($tmp1397);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Binary.frost:505:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp1406 = &$tmp1405->typeKind;
org$frostlang$frostc$Type$Kind $tmp1407 = *$tmp1406;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1408;
$tmp1408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1408->value = $tmp1407;
frost$core$Int $tmp1409 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1410 = &(&local19)->$rawValue;
*$tmp1410 = $tmp1409;
org$frostlang$frostc$Type$Kind $tmp1411 = *(&local19);
*(&local18) = $tmp1411;
org$frostlang$frostc$Type$Kind $tmp1412 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1413;
$tmp1413 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1413->value = $tmp1412;
ITable* $tmp1414 = ((frost$core$Equatable*) $tmp1408)->$class->itable;
while ($tmp1414->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1414 = $tmp1414->next;
}
$fn1416 $tmp1415 = $tmp1414->methods[0];
frost$core$Bit $tmp1417 = $tmp1415(((frost$core$Equatable*) $tmp1408), ((frost$core$Equatable*) $tmp1413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1413)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1408)));
bool $tmp1418 = $tmp1417.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
if ($tmp1418) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:506
frost$core$Int* $tmp1419 = &param4->$rawValue;
frost$core$Int $tmp1420 = *$tmp1419;
frost$core$Int $tmp1421 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:507:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1422 = $tmp1420.value;
int64_t $tmp1423 = $tmp1421.value;
bool $tmp1424 = $tmp1422 == $tmp1423;
frost$core$Bit $tmp1425 = (frost$core$Bit) {$tmp1424};
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block102; else goto block101;
block102:;
org$frostlang$frostc$Position* $tmp1427 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1428 = *$tmp1427;
frost$core$UInt64* $tmp1429 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1430 = *$tmp1429;
*(&local20) = $tmp1430;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:508
org$frostlang$frostc$IR$Value* $tmp1431 = *(&local15);
frost$core$Bit $tmp1432 = (frost$core$Bit) {$tmp1431 != NULL};
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block104; else goto block105;
block105:;
frost$core$Int $tmp1434 = (frost$core$Int) {509u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1435, $tmp1434, &$s1436);
abort(); // unreachable
block104:;
frost$core$UInt64 $tmp1437 = *(&local20);
frost$core$UInt64$wrapper* $tmp1438;
$tmp1438 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1438->value = $tmp1437;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:509:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1440 $tmp1439 = ($fn1440) ((frost$core$Object*) $tmp1438)->$class->vtable[0];
frost$core$String* $tmp1441 = $tmp1439(((frost$core$Object*) $tmp1438));
frost$core$String* $tmp1442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1443, $tmp1441);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$String* $tmp1444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1442, &$s1445);
org$frostlang$frostc$IR$Value* $tmp1446 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1431, $tmp1444);
org$frostlang$frostc$IR$Value* $tmp1447 = *(&local15);
frost$core$Bit $tmp1448 = (frost$core$Bit) {$tmp1447 != NULL};
bool $tmp1449 = $tmp1448.value;
if ($tmp1449) goto block107; else goto block108;
block108:;
frost$core$Int $tmp1450 = (frost$core$Int) {510u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1451, $tmp1450, &$s1452);
abort(); // unreachable
block107:;
$fn1454 $tmp1453 = ($fn1454) $tmp1447->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1455 = $tmp1453($tmp1447);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:510:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1456 = &$tmp1455->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1457 = *$tmp1456;
frost$core$Bit $tmp1458 = (frost$core$Bit) {$tmp1457 != NULL};
bool $tmp1459 = $tmp1458.value;
if ($tmp1459) goto block110; else goto block111;
block111:;
frost$core$Int $tmp1460 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1461, $tmp1460, &$s1462);
abort(); // unreachable
block110:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$UInt64 $tmp1463 = *(&local20);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:510:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1464 = $tmp1463.value;
frost$core$Int $tmp1465 = (frost$core$Int) {((int64_t) $tmp1464)};
frost$core$Object* $tmp1466 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1457, $tmp1465);
org$frostlang$frostc$IR$Value* $tmp1467 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1446, ((org$frostlang$frostc$Type*) $tmp1466));
org$frostlang$frostc$IR$Value* $tmp1468 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1467, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q($tmp1466);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
org$frostlang$frostc$IR$Value* $tmp1469 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1468;
block101:;
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:514
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1472 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1473 = (frost$core$Int) {3u};
org$frostlang$frostc$IR$Value* $tmp1474 = *(&local15);
frost$core$Bit $tmp1475 = (frost$core$Bit) {$tmp1474 != NULL};
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block113; else goto block114;
block114:;
frost$core$Int $tmp1477 = (frost$core$Int) {515u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1478, $tmp1477, &$s1479);
abort(); // unreachable
block113:;
$fn1481 $tmp1480 = ($fn1481) $tmp1474->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1482 = $tmp1480($tmp1474);
frost$core$Bit $tmp1483 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1472, $tmp1473, $tmp1482, $tmp1483);
org$frostlang$frostc$IR$Value* $tmp1484 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1472);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
org$frostlang$frostc$IR$Value* $tmp1485 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local21) = $tmp1484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:516
org$frostlang$frostc$IR$Value* $tmp1486 = *(&local21);
frost$core$Bit $tmp1487 = (frost$core$Bit) {$tmp1486 == NULL};
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1489 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1490 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:519
org$frostlang$frostc$IR$Value* $tmp1493 = *(&local15);
frost$core$Bit $tmp1494 = (frost$core$Bit) {$tmp1493 != NULL};
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block120; else goto block121;
block121:;
frost$core$Int $tmp1496 = (frost$core$Int) {519u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1497, $tmp1496, &$s1498);
abort(); // unreachable
block120:;
$fn1500 $tmp1499 = ($fn1500) $tmp1493->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1501 = $tmp1499($tmp1493);
org$frostlang$frostc$Type** $tmp1502 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1503 = *$tmp1502;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Binary.frost:519:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1504 = &((org$frostlang$frostc$Symbol*) $tmp1501)->name;
frost$core$String* $tmp1505 = *$tmp1504;
frost$core$String** $tmp1506 = &((org$frostlang$frostc$Symbol*) $tmp1503)->name;
frost$core$String* $tmp1507 = *$tmp1506;
frost$core$Bit $tmp1508 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1505, $tmp1507);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block123; else goto block124;
block123:;
org$frostlang$frostc$Type$Kind* $tmp1510 = &$tmp1501->typeKind;
org$frostlang$frostc$Type$Kind $tmp1511 = *$tmp1510;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1512;
$tmp1512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1512->value = $tmp1511;
org$frostlang$frostc$Type$Kind* $tmp1513 = &$tmp1503->typeKind;
org$frostlang$frostc$Type$Kind $tmp1514 = *$tmp1513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
ITable* $tmp1516 = ((frost$core$Equatable*) $tmp1512)->$class->itable;
while ($tmp1516->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1516 = $tmp1516->next;
}
$fn1518 $tmp1517 = $tmp1516->methods[0];
frost$core$Bit $tmp1519 = $tmp1517(((frost$core$Equatable*) $tmp1512), ((frost$core$Equatable*) $tmp1515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1515)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1512)));
*(&local22) = $tmp1519;
goto block125;
block124:;
*(&local22) = $tmp1508;
goto block125;
block125:;
frost$core$Bit $tmp1520 = *(&local22);
bool $tmp1521 = $tmp1520.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
if ($tmp1521) goto block117; else goto block119;
block119:;
org$frostlang$frostc$IR$Value* $tmp1522 = *(&local15);
frost$core$Bit $tmp1523 = (frost$core$Bit) {$tmp1522 != NULL};
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block126; else goto block127;
block127:;
frost$core$Int $tmp1525 = (frost$core$Int) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1526, $tmp1525, &$s1527);
abort(); // unreachable
block126:;
$fn1529 $tmp1528 = ($fn1529) $tmp1522->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1530 = $tmp1528($tmp1522);
frost$core$Bit $tmp1531 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1530);
bool $tmp1532 = $tmp1531.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
if ($tmp1532) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:521
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1533 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1534 = (frost$core$Int) {5u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1533, $tmp1534, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1535 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1533);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
org$frostlang$frostc$Type* $tmp1536 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local23) = $tmp1535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:523
org$frostlang$frostc$Type* $tmp1537 = *(&local23);
frost$core$Bit $tmp1538 = (frost$core$Bit) {$tmp1537 != NULL};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:524
org$frostlang$frostc$IR** $tmp1540 = &param0->ir;
org$frostlang$frostc$IR* $tmp1541 = *$tmp1540;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1542 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1543 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Value* $tmp1544 = *(&local15);
frost$core$Bit $tmp1545 = (frost$core$Bit) {$tmp1544 != NULL};
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block130; else goto block131;
block131:;
frost$core$Int $tmp1547 = (frost$core$Int) {524u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1548, $tmp1547, &$s1549);
abort(); // unreachable
block130:;
org$frostlang$frostc$IR$Value* $tmp1550 = *(&local21);
frost$core$Bit $tmp1551 = (frost$core$Bit) {$tmp1550 != NULL};
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block132; else goto block133;
block133:;
frost$core$Int $tmp1553 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1554, $tmp1553, &$s1555);
abort(); // unreachable
block132:;
org$frostlang$frostc$Type* $tmp1556 = *(&local23);
frost$core$Bit $tmp1557 = (frost$core$Bit) {$tmp1556 != NULL};
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block134; else goto block135;
block135:;
frost$core$Int $tmp1559 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1560, $tmp1559, &$s1561);
abort(); // unreachable
block134:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1542, $tmp1543, param1, $tmp1544, param3, $tmp1550, $tmp1556);
$fn1563 $tmp1562 = ($fn1563) $tmp1541->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1564 = $tmp1562($tmp1541, $tmp1542);
*(&local24) = $tmp1564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:526
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1565 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1566 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp1567 = *(&local24);
org$frostlang$frostc$Type* $tmp1568 = *(&local23);
frost$core$Bit $tmp1569 = (frost$core$Bit) {$tmp1568 != NULL};
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block136; else goto block137;
block137:;
frost$core$Int $tmp1571 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1572, $tmp1571, &$s1573);
abort(); // unreachable
block136:;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1565, $tmp1566, $tmp1567, $tmp1568);
org$frostlang$frostc$IR$Value* $tmp1574 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1565, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
org$frostlang$frostc$Type* $tmp1575 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1576 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1577 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1574;
block129:;
org$frostlang$frostc$Type* $tmp1580 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
goto block118;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:529
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1581;
$tmp1581 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1581->value = param3;
$fn1583 $tmp1582 = ($fn1583) ((frost$core$Object*) $tmp1581)->$class->vtable[0];
frost$core$String* $tmp1584 = $tmp1582(((frost$core$Object*) $tmp1581));
frost$core$String* $tmp1585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1586, $tmp1584);
frost$core$String* $tmp1587 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1585, &$s1588);
org$frostlang$frostc$IR$Value* $tmp1589 = *(&local15);
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589 != NULL};
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block138; else goto block139;
block139:;
frost$core$Int $tmp1592 = (frost$core$Int) {530u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1593, $tmp1592, &$s1594);
abort(); // unreachable
block138:;
$fn1596 $tmp1595 = ($fn1596) $tmp1589->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1597 = $tmp1595($tmp1589);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1599 $tmp1598 = ($fn1599) ((frost$core$Object*) $tmp1597)->$class->vtable[0];
frost$core$String* $tmp1600 = $tmp1598(((frost$core$Object*) $tmp1597));
frost$core$String* $tmp1601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1602, $tmp1600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$core$String* $tmp1603 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1601, &$s1604);
org$frostlang$frostc$IR$Value* $tmp1605 = *(&local21);
frost$core$Bit $tmp1606 = (frost$core$Bit) {$tmp1605 != NULL};
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block141; else goto block142;
block142:;
frost$core$Int $tmp1608 = (frost$core$Int) {530u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1609, $tmp1608, &$s1610);
abort(); // unreachable
block141:;
$fn1612 $tmp1611 = ($fn1612) $tmp1605->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1613 = $tmp1611($tmp1605);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1615 $tmp1614 = ($fn1615) ((frost$core$Object*) $tmp1613)->$class->vtable[0];
frost$core$String* $tmp1616 = $tmp1614(((frost$core$Object*) $tmp1613));
frost$core$String* $tmp1617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1603, $tmp1616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
frost$core$String* $tmp1618 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1617, &$s1619);
frost$core$String* $tmp1620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1587, $tmp1618);
$fn1622 $tmp1621 = ($fn1622) param5->$class->vtable[2];
frost$core$String* $tmp1623 = $tmp1621(param5);
frost$core$String* $tmp1624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1620, $tmp1623);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1624);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1625 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1626 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
goto block144;
block144:;

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

