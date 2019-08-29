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

typedef frost$core$String* (*$fn35)(frost$core$Object*);
typedef frost$core$Bit (*$fn84)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn136)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn144)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn196)(frost$core$Object*);
typedef frost$core$Bit (*$fn274)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn282)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn316)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn320)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn325)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn336)(frost$core$Object*);
typedef frost$core$String* (*$fn344)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn350)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn354)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn415)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn419)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn424)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn432)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn436)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn441)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn538)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn558)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn578)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn595)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn609)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn626)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn640)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn652)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn669)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn686)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn703)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn720)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn737)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn762)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn782)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn802)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn822)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn842)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn846)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn850)(frost$core$Object*);
typedef frost$core$Bit (*$fn866)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn968)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn989)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn1002)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1059)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1068)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1108)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1132)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1201)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1205)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1210)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1279)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1284)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1296)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1315)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1324)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1346)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1360)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1378)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1384)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1403)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1418)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1426)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1429)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1437)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1440)(frost$core$Object*);
typedef frost$core$String* (*$fn1447)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 7016920421845289241, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, 2403110168575220660, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, 8004068995672102850, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -3764202169548220239, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65", 16, -4954590249221528654, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65", 19, -3755527176520939069, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65", 25, -4446748280071778646, NULL };
static frost$core$String $s1062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s1421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -8926283552790936043, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 5247209226559449009, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 8856786456156887815, NULL };
static frost$core$String $s1444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };

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
org$frostlang$frostc$SymbolTable* $tmp32 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp31);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp33->value = param2;
$fn35 $tmp34 = ($fn35) ((frost$core$Object*) $tmp33)->$class->vtable[0];
frost$core$String* $tmp36 = $tmp34(((frost$core$Object*) $tmp33));
org$frostlang$frostc$Symbol* $tmp37 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp32, $tmp36);
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlang$frostc$Symbol* $tmp38 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local4) = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:197
org$frostlang$frostc$Symbol* $tmp39 = *(&local4);
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39 != NULL};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:198
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp42 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp43 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp42, $tmp43);
frost$collections$Array$add$frost$collections$Array$T($tmp42, ((frost$core$Object*) param3));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$collections$Array* $tmp44 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local5) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:200
org$frostlang$frostc$Symbol* $tmp45 = *(&local4);
org$frostlang$frostc$Symbol$Kind* $tmp46 = &$tmp45->kind;
org$frostlang$frostc$Symbol$Kind $tmp47 = *$tmp46;
frost$core$Int $tmp48 = $tmp47.$rawValue;
frost$core$Int $tmp49 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:201:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 == $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:202
org$frostlang$frostc$Symbol* $tmp55 = *(&local4);
org$frostlang$frostc$Annotations** $tmp56 = &((org$frostlang$frostc$MethodDecl*) $tmp55)->annotations;
org$frostlang$frostc$Annotations* $tmp57 = *$tmp56;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:202:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp58 = &$tmp57->flags;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 & $tmp62;
frost$core$Int $tmp64 = (frost$core$Int) {$tmp63};
frost$core$Int $tmp65 = (frost$core$Int) {0u};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 != $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:202:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp70 = $tmp69.value;
bool $tmp71 = !$tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block13; else goto block15;
block15:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from Binary.frost:202:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp74 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp75 = *$tmp74;
org$frostlang$frostc$Type$Kind$wrapper* $tmp76;
$tmp76 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp76->value = $tmp75;
frost$core$Int $tmp77 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp78 = &(&local8)->$rawValue;
*$tmp78 = $tmp77;
org$frostlang$frostc$Type$Kind $tmp79 = *(&local8);
*(&local7) = $tmp79;
org$frostlang$frostc$Type$Kind $tmp80 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp81->value = $tmp80;
ITable* $tmp82 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[0];
frost$core$Bit $tmp85 = $tmp83(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) $tmp81));
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block21; else goto block22;
block21:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp87 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp88 = *$tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88 != NULL};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block25; else goto block26;
block26:;
frost$core$Int $tmp91 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, $tmp91, &$s93);
abort(); // unreachable
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Int $tmp94 = (frost$core$Int) {0u};
frost$core$Object* $tmp95 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp88, $tmp94);
frost$core$String** $tmp96 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp95))->name;
frost$core$String* $tmp97 = *$tmp96;
frost$core$Bit $tmp98 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp97, &$s99);
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local6) = $tmp98;
goto block23;
block22:;
*(&local6) = $tmp85;
goto block23;
block23:;
frost$core$Bit $tmp100 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:203
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp102 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp102);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$Array* $tmp103 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local9) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:204
frost$collections$Array* $tmp104 = *(&local9);
org$frostlang$frostc$Symbol* $tmp105 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp104, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp105)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:205
org$frostlang$frostc$Position $tmp106 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp107 = *(&local3);
frost$collections$Array* $tmp108 = *(&local9);
frost$collections$Array* $tmp109 = *(&local5);
org$frostlang$frostc$Pair* $tmp110 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp106, $tmp107, ((frost$collections$ListView*) $tmp108), ((frost$collections$ListView*) $tmp109), param4);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$Pair* $tmp111 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local10) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:207
org$frostlang$frostc$Pair* $tmp112 = *(&local10);
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112 != NULL};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:208
org$frostlang$frostc$Pair* $tmp115 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$Pair* $tmp116 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp117 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp118 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp120 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp115;
block28:;
org$frostlang$frostc$Pair* $tmp122 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp123 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local9) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
goto block9;
block11:;
frost$core$Int $tmp124 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:212:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp125 = $tmp48.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:213
org$frostlang$frostc$Position $tmp130 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp131 = *(&local3);
org$frostlang$frostc$Symbol* $tmp132 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp133 = &((org$frostlang$frostc$Methods*) $tmp132)->methods;
org$frostlang$frostc$FixedArray* $tmp134 = *$tmp133;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Binary$_Closure2));
org$frostlang$frostc$expression$Binary$_Closure2* $tmp135 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp135, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp137 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Binary.frost:215:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp138 = &$tmp137->pointer;
*$tmp138 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Object** $tmp139 = &$tmp137->target;
frost$core$Object* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q($tmp140);
frost$core$Object** $tmp141 = &$tmp137->target;
*$tmp141 = ((frost$core$Object*) $tmp135);
ITable* $tmp142 = ((frost$collections$ListView*) $tmp134)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[6];
frost$collections$ListView* $tmp145 = $tmp143(((frost$collections$ListView*) $tmp134), $tmp137);
frost$collections$Array* $tmp146 = *(&local5);
org$frostlang$frostc$Pair* $tmp147 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp130, $tmp131, $tmp145, ((frost$collections$ListView*) $tmp146), param4);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Pair* $tmp148 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local11) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:216
org$frostlang$frostc$Pair* $tmp149 = *(&local11);
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149 != NULL};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:217
org$frostlang$frostc$Pair* $tmp152 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlang$frostc$Pair* $tmp153 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp156 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp152;
block34:;
org$frostlang$frostc$Pair* $tmp158 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
goto block9;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:221
frost$core$Int $tmp159 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s160, $tmp159);
abort(); // unreachable
block9:;
frost$collections$Array* $tmp161 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local5) = ((frost$collections$Array*) NULL);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:227
org$frostlang$frostc$Type* $tmp162 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
org$frostlang$frostc$Type* $tmp163 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local12) = $tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:228
org$frostlang$frostc$Type* $tmp164 = *(&local12);
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164 == NULL};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp167 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp169 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:231
org$frostlang$frostc$Type* $tmp171 = *(&local12);
frost$core$Bit $tmp172 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp171);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:231:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp173 = $tmp172.value;
bool $tmp174 = !$tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:232
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
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:234
org$frostlang$frostc$Type* $tmp181 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp182 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp181);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$ClassDecl* $tmp183 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local13) = $tmp182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:235
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local13);
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184 == NULL};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp187 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp188 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp189 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp190 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:238
org$frostlang$frostc$ClassDecl* $tmp192 = *(&local13);
org$frostlang$frostc$SymbolTable* $tmp193 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp192);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp194;
$tmp194 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp194->value = param2;
$fn196 $tmp195 = ($fn196) ((frost$core$Object*) $tmp194)->$class->vtable[0];
frost$core$String* $tmp197 = $tmp195(((frost$core$Object*) $tmp194));
org$frostlang$frostc$Symbol* $tmp198 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp193, $tmp197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$Symbol* $tmp199 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local4) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:239
org$frostlang$frostc$Symbol* $tmp200 = *(&local4);
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200 == NULL};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp203 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp204 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp205 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:242
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp208 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp209 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp208, $tmp209);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp210 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp211 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp212 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp213 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp210, $tmp211, $tmp212, $tmp213);
frost$collections$Array$add$frost$collections$Array$T($tmp208, ((frost$core$Object*) $tmp210));
frost$collections$Array$add$frost$collections$Array$T($tmp208, ((frost$core$Object*) param3));
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$collections$Array* $tmp214 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local14) = $tmp208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:243
org$frostlang$frostc$Symbol* $tmp215 = *(&local4);
org$frostlang$frostc$Symbol$Kind* $tmp216 = &$tmp215->kind;
org$frostlang$frostc$Symbol$Kind $tmp217 = *$tmp216;
frost$core$Int $tmp218 = $tmp217.$rawValue;
frost$core$Int $tmp219 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:244:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 == $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:245
org$frostlang$frostc$Symbol* $tmp225 = *(&local4);
org$frostlang$frostc$Annotations** $tmp226 = &((org$frostlang$frostc$MethodDecl*) $tmp225)->annotations;
org$frostlang$frostc$Annotations* $tmp227 = *$tmp226;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:245:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp228 = &$tmp227->flags;
frost$core$Int $tmp229 = *$tmp228;
frost$core$Int $tmp230 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 & $tmp232;
frost$core$Int $tmp234 = (frost$core$Int) {$tmp233};
frost$core$Int $tmp235 = (frost$core$Int) {0u};
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 != $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:246
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp241 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp241);
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$collections$Array* $tmp242 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local15) = $tmp241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:247
frost$collections$Array* $tmp243 = *(&local15);
org$frostlang$frostc$Symbol* $tmp244 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp243, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp244)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:248
org$frostlang$frostc$Position $tmp245 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp246 = *(&local15);
frost$collections$Array* $tmp247 = *(&local14);
org$frostlang$frostc$Pair* $tmp248 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp245, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp246), ((frost$collections$ListView*) $tmp247), param4);
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
org$frostlang$frostc$Pair* $tmp249 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local16) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:249
org$frostlang$frostc$Pair* $tmp250 = *(&local16);
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250 != NULL};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:250
org$frostlang$frostc$Pair* $tmp253 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$Pair* $tmp254 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp255 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local15) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp256 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp257 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp258 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp259 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp253;
block53:;
org$frostlang$frostc$Pair* $tmp262 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp263 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local15) = ((frost$collections$Array*) NULL);
goto block49;
block49:;
goto block44;
block46:;
frost$core$Int $tmp264 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:254:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp265 = $tmp218.value;
int64_t $tmp266 = $tmp264.value;
bool $tmp267 = $tmp265 == $tmp266;
frost$core$Bit $tmp268 = (frost$core$Bit) {$tmp267};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:255
org$frostlang$frostc$Position $tmp270 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp271 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp272 = &((org$frostlang$frostc$Methods*) $tmp271)->methods;
org$frostlang$frostc$FixedArray* $tmp273 = *$tmp272;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp275 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Binary.frost:256:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp276 = &$tmp275->pointer;
*$tmp276 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp277 = &$tmp275->target;
frost$core$Immutable* $tmp278 = *$tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Immutable** $tmp279 = &$tmp275->target;
*$tmp279 = ((frost$core$Immutable*) NULL);
ITable* $tmp280 = ((frost$collections$ListView*) $tmp273)->$class->itable;
while ($tmp280->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[6];
frost$collections$ListView* $tmp283 = $tmp281(((frost$collections$ListView*) $tmp273), ((frost$core$MutableMethod*) $tmp275));
frost$collections$Array* $tmp284 = *(&local14);
org$frostlang$frostc$Pair* $tmp285 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp270, ((org$frostlang$frostc$IR$Value*) NULL), $tmp283, ((frost$collections$ListView*) $tmp284), param4);
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Pair* $tmp286 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local17) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:257
org$frostlang$frostc$Pair* $tmp287 = *(&local17);
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287 != NULL};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:258
org$frostlang$frostc$Pair* $tmp290 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
org$frostlang$frostc$Pair* $tmp291 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp292 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp293 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp294 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp295 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp296 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp290;
block59:;
org$frostlang$frostc$Pair* $tmp298 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
goto block44;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:262
frost$core$Int $tmp299 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s300, $tmp299);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp301 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp302 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp303 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp304 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp305 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
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
frost$collections$CollectionView* $tmp307 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$collections$CollectionView* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:272
frost$collections$CollectionView* $tmp309 = *(&local0);
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309 != NULL};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp312 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:274
frost$collections$CollectionView* $tmp313 = *(&local0);
ITable* $tmp314 = ((frost$collections$Iterable*) $tmp313)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$collections$Iterator* $tmp317 = $tmp315(((frost$collections$Iterable*) $tmp313));
goto block3;
block3:;
ITable* $tmp318 = $tmp317->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$core$Bit $tmp321 = $tmp319($tmp317);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp323 = $tmp317->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[1];
frost$core$Object* $tmp326 = $tmp324($tmp317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp326)));
org$frostlang$frostc$Type* $tmp327 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp326);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:275
org$frostlang$frostc$Type* $tmp328 = *(&local2);
org$frostlang$frostc$Pair* $tmp329 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param1, $tmp328);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$Pair* $tmp330 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local3) = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:276
org$frostlang$frostc$Pair* $tmp331 = *(&local3);
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331 != NULL};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block6; else goto block7;
block7:;
frost$core$Int $tmp334 = (frost$core$Int) {276u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn336 $tmp335 = ($fn336) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp337 = $tmp335(((frost$core$Object*) param1));
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s339, $tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
org$frostlang$frostc$Type* $tmp342 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn344 $tmp343 = ($fn344) ((frost$core$Object*) $tmp342)->$class->vtable[0];
frost$core$String* $tmp345 = $tmp343(((frost$core$Object*) $tmp342));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, $tmp345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, &$s348);
$fn350 $tmp349 = ($fn350) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp351 = $tmp349(param1);
org$frostlang$frostc$Position$wrapper* $tmp352;
$tmp352 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp352->value = $tmp351;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn354 $tmp353 = ($fn354) ((frost$core$Object*) $tmp352)->$class->vtable[0];
frost$core$String* $tmp355 = $tmp353(((frost$core$Object*) $tmp352));
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp347, $tmp355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$String* $tmp357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp356, &$s358);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s359, $tmp334, $tmp357);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:278
org$frostlang$frostc$Type* $tmp360 = *(&local2);
org$frostlang$frostc$Pair* $tmp361 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp360, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
org$frostlang$frostc$Pair* $tmp362 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local4) = $tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:279
org$frostlang$frostc$Pair* $tmp363 = *(&local4);
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363 != NULL};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:280
org$frostlang$frostc$Pair* $tmp366 = *(&local4);
frost$core$Object** $tmp367 = &$tmp366->second;
frost$core$Object* $tmp368 = *$tmp367;
org$frostlang$frostc$Pair* $tmp369 = *(&local3);
frost$core$Object** $tmp370 = &$tmp369->second;
frost$core$Object* $tmp371 = *$tmp370;
int64_t $tmp372 = ((frost$core$Int$wrapper*) $tmp368)->value.value;
int64_t $tmp373 = ((frost$core$Int$wrapper*) $tmp371)->value.value;
int64_t $tmp374 = $tmp372 + $tmp373;
frost$core$Int $tmp375 = (frost$core$Int) {$tmp374};
*(&local5) = $tmp375;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:281
org$frostlang$frostc$Pair* $tmp376 = *(&local1);
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376 == NULL};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block13; else goto block16;
block16:;
frost$core$Int $tmp379 = *(&local5);
org$frostlang$frostc$Pair* $tmp380 = *(&local1);
frost$core$Object** $tmp381 = &$tmp380->second;
frost$core$Object* $tmp382 = *$tmp381;
int64_t $tmp383 = $tmp379.value;
int64_t $tmp384 = ((frost$core$Int$wrapper*) $tmp382)->value.value;
bool $tmp385 = $tmp383 < $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:282
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp388 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp389 = *(&local4);
frost$core$Object** $tmp390 = &$tmp389->first;
frost$core$Object* $tmp391 = *$tmp390;
frost$core$Int $tmp392 = *(&local5);
frost$core$Int$wrapper* $tmp393;
$tmp393 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp393->value = $tmp392;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp388, ((frost$core$Object*) ((frost$collections$ListView*) $tmp391)), ((frost$core$Object*) $tmp393));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
org$frostlang$frostc$Pair* $tmp394 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local1) = $tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:284
frost$core$Int $tmp395 = *(&local5);
org$frostlang$frostc$Pair* $tmp396 = *(&local1);
frost$core$Object** $tmp397 = &$tmp396->second;
frost$core$Object* $tmp398 = *$tmp397;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:284:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp399 = $tmp395.value;
int64_t $tmp400 = ((frost$core$Int$wrapper*) $tmp398)->value.value;
bool $tmp401 = $tmp399 == $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:285
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp404 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp404);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$collections$Array* $tmp405 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local6) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:286
frost$collections$Array* $tmp406 = *(&local6);
org$frostlang$frostc$Pair* $tmp407 = *(&local1);
frost$core$Object** $tmp408 = &$tmp407->first;
frost$core$Object* $tmp409 = *$tmp408;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp406, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp409)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:287
org$frostlang$frostc$Pair* $tmp410 = *(&local4);
frost$core$Object** $tmp411 = &$tmp410->first;
frost$core$Object* $tmp412 = *$tmp411;
ITable* $tmp413 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp412))->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
frost$collections$Iterator* $tmp416 = $tmp414(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp412)));
goto block20;
block20:;
ITable* $tmp417 = $tmp416->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[0];
frost$core$Bit $tmp420 = $tmp418($tmp416);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp422 = $tmp416->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[1];
frost$core$Object* $tmp425 = $tmp423($tmp416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp425)));
org$frostlang$frostc$MethodRef* $tmp426 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local7) = ((org$frostlang$frostc$MethodRef*) $tmp425);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:288
org$frostlang$frostc$Pair* $tmp427 = *(&local1);
frost$core$Object** $tmp428 = &$tmp427->first;
frost$core$Object* $tmp429 = *$tmp428;
ITable* $tmp430 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp429))->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$collections$Iterator* $tmp433 = $tmp431(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp429)));
goto block23;
block23:;
ITable* $tmp434 = $tmp433->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$core$Bit $tmp437 = $tmp435($tmp433);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block25; else goto block24;
block24:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp439 = $tmp433->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[1];
frost$core$Object* $tmp442 = $tmp440($tmp433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp442)));
org$frostlang$frostc$MethodRef* $tmp443 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp442);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:289
org$frostlang$frostc$MethodRef* $tmp444 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp445 = &$tmp444->value;
org$frostlang$frostc$MethodDecl* $tmp446 = *$tmp445;
org$frostlang$frostc$MethodRef* $tmp447 = *(&local7);
org$frostlang$frostc$MethodDecl** $tmp448 = &$tmp447->value;
org$frostlang$frostc$MethodDecl* $tmp449 = *$tmp448;
bool $tmp450 = $tmp446 == $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:290
frost$core$Frost$unref$frost$core$Object$Q($tmp442);
org$frostlang$frostc$MethodRef* $tmp453 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q($tmp425);
org$frostlang$frostc$MethodRef* $tmp454 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp442);
org$frostlang$frostc$MethodRef* $tmp455 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:293
frost$collections$Array* $tmp456 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp457 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp456, ((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q($tmp425);
org$frostlang$frostc$MethodRef* $tmp458 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:295
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp459 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp460 = *(&local6);
frost$core$Int $tmp461 = *(&local5);
frost$core$Int$wrapper* $tmp462;
$tmp462 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp462->value = $tmp461;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp459, ((frost$core$Object*) ((frost$collections$ListView*) $tmp460)), ((frost$core$Object*) $tmp462));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
org$frostlang$frostc$Pair* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local1) = $tmp459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$collections$Array* $tmp464 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local6) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
goto block14;
block14:;
goto block12;
block12:;
org$frostlang$frostc$Pair* $tmp465 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp466 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
org$frostlang$frostc$Type* $tmp467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:299
org$frostlang$frostc$Pair* $tmp468 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
org$frostlang$frostc$Pair* $tmp469 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp470 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp468;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
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
frost$core$Int* $tmp472 = &param1->$rawValue;
frost$core$Int $tmp473 = *$tmp472;
frost$core$Int $tmp474 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:310:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474.value;
bool $tmp477 = $tmp475 == $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp480 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp481 = *$tmp480;
frost$core$UInt64* $tmp482 = (frost$core$UInt64*) (param1->$data + 24);
frost$core$UInt64 $tmp483 = *$tmp482;
*(&local2) = $tmp483;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:311
frost$core$UInt64 $tmp484 = *(&local2);
frost$core$Int64 $tmp485 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp486 = $tmp485.value;
frost$core$UInt64 $tmp487 = (frost$core$UInt64) {((uint64_t) $tmp486)};
uint64_t $tmp488 = $tmp484.value;
uint64_t $tmp489 = $tmp487.value;
bool $tmp490 = $tmp488 > $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:314
frost$core$UInt64 $tmp493 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:314:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp494 = $tmp493.value;
frost$core$Int64 $tmp495 = (frost$core$Int64) {((int64_t) $tmp494)};
*(&local0) = $tmp495;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:320
frost$core$Int* $tmp496 = &param3->$rawValue;
frost$core$Int $tmp497 = *$tmp496;
frost$core$Int $tmp498 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:321:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498.value;
bool $tmp501 = $tmp499 == $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block10; else goto block11;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
org$frostlang$frostc$Position* $tmp504 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp505 = *$tmp504;
frost$core$UInt64* $tmp506 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp507 = *$tmp506;
*(&local3) = $tmp507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:322
frost$core$UInt64 $tmp508 = *(&local3);
frost$core$Int64 $tmp509 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:322:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp510 = $tmp509.value;
frost$core$UInt64 $tmp511 = (frost$core$UInt64) {((uint64_t) $tmp510)};
uint64_t $tmp512 = $tmp508.value;
uint64_t $tmp513 = $tmp511.value;
bool $tmp514 = $tmp512 > $tmp513;
frost$core$Bit $tmp515 = (frost$core$Bit) {$tmp514};
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:325
frost$core$UInt64 $tmp517 = *(&local3);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:325:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp518 = $tmp517.value;
frost$core$Int64 $tmp519 = (frost$core$Int64) {((int64_t) $tmp518)};
*(&local1) = $tmp519;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:331
frost$core$Int $tmp520 = param2.$rawValue;
frost$core$Int $tmp521 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:332:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 == $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block18; else goto block19;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:333
frost$core$Int64 $tmp527 = *(&local0);
frost$core$Int64 $tmp528 = *(&local1);
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529 + $tmp530;
frost$core$Int64 $tmp532 = (frost$core$Int64) {$tmp531};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:333:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp533 = $tmp532.value;
frost$core$UInt64 $tmp534 = (frost$core$UInt64) {((uint64_t) $tmp533)};
*(&local4) = $tmp534;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:334
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp535 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp536 = (frost$core$Int) {25u};
$fn538 $tmp537 = ($fn538) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp539 = $tmp537(param1);
frost$core$UInt64 $tmp540 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp535, $tmp536, $tmp539, $tmp540);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
return $tmp535;
block19:;
frost$core$Int $tmp541 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:336:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp542 = $tmp520.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:337
frost$core$Int64 $tmp547 = *(&local0);
frost$core$Int64 $tmp548 = *(&local1);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 - $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:337:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp553 = $tmp552.value;
frost$core$UInt64 $tmp554 = (frost$core$UInt64) {((uint64_t) $tmp553)};
*(&local5) = $tmp554;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:338
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp555 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp556 = (frost$core$Int) {25u};
$fn558 $tmp557 = ($fn558) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp559 = $tmp557(param1);
frost$core$UInt64 $tmp560 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp555, $tmp556, $tmp559, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
return $tmp555;
block23:;
frost$core$Int $tmp561 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:340:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp562 = $tmp520.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:341
frost$core$Int64 $tmp567 = *(&local0);
frost$core$Int64 $tmp568 = *(&local1);
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569 * $tmp570;
frost$core$Int64 $tmp572 = (frost$core$Int64) {$tmp571};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:341:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp573 = $tmp572.value;
frost$core$UInt64 $tmp574 = (frost$core$UInt64) {((uint64_t) $tmp573)};
*(&local6) = $tmp574;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:342
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp575 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp576 = (frost$core$Int) {25u};
$fn578 $tmp577 = ($fn578) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp579 = $tmp577(param1);
frost$core$UInt64 $tmp580 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp575, $tmp576, $tmp579, $tmp580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
return $tmp575;
block27:;
frost$core$Int $tmp581 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:344:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp582 = $tmp520.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 == $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:345
frost$core$Int64 $tmp587 = *(&local1);
frost$core$Int64 $tmp588 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:345:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 == $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:346
$fn595 $tmp594 = ($fn595) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp596 = $tmp594(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp596, &$s597);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:349
frost$core$Int64 $tmp598 = *(&local0);
frost$core$Int64 $tmp599 = *(&local1);
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600 / $tmp601;
frost$core$Int64 $tmp603 = (frost$core$Int64) {$tmp602};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:349:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp604 = $tmp603.value;
frost$core$UInt64 $tmp605 = (frost$core$UInt64) {((uint64_t) $tmp604)};
*(&local7) = $tmp605;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp606 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp607 = (frost$core$Int) {25u};
$fn609 $tmp608 = ($fn609) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp610 = $tmp608(param1);
frost$core$UInt64 $tmp611 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp606, $tmp607, $tmp610, $tmp611);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
return $tmp606;
block31:;
frost$core$Int $tmp612 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:352:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp613 = $tmp520.value;
int64_t $tmp614 = $tmp612.value;
bool $tmp615 = $tmp613 == $tmp614;
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:353
frost$core$Int64 $tmp618 = *(&local1);
frost$core$Int64 $tmp619 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:353:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 == $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:354
$fn626 $tmp625 = ($fn626) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp627 = $tmp625(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp627, &$s628);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:357
frost$core$Int64 $tmp629 = *(&local0);
frost$core$Int64 $tmp630 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Binary.frost:357:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp631 = $tmp629.value;
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631 % $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:357:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp635 = $tmp634.value;
frost$core$UInt64 $tmp636 = (frost$core$UInt64) {((uint64_t) $tmp635)};
*(&local8) = $tmp636;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:358
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp637 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp638 = (frost$core$Int) {25u};
$fn640 $tmp639 = ($fn640) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp641 = $tmp639(param1);
frost$core$UInt64 $tmp642 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp637, $tmp638, $tmp641, $tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
return $tmp637;
block38:;
frost$core$Int $tmp643 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:360:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp644 = $tmp520.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 == $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:361
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp649 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp650 = (frost$core$Int) {6u};
$fn652 $tmp651 = ($fn652) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp653 = $tmp651(param1);
frost$core$Int64 $tmp654 = *(&local0);
frost$core$Int64 $tmp655 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655.value;
bool $tmp658 = $tmp656 == $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp649, $tmp650, $tmp653, $tmp659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
return $tmp649;
block46:;
frost$core$Int $tmp660 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:363:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp661 = $tmp520.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 == $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:364
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp666 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp667 = (frost$core$Int) {6u};
$fn669 $tmp668 = ($fn669) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp670 = $tmp668(param1);
frost$core$Int64 $tmp671 = *(&local0);
frost$core$Int64 $tmp672 = *(&local1);
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672.value;
bool $tmp675 = $tmp673 != $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp666, $tmp667, $tmp670, $tmp676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
return $tmp666;
block50:;
frost$core$Int $tmp677 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:366:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp678 = $tmp520.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 == $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:367
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp683 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp684 = (frost$core$Int) {6u};
$fn686 $tmp685 = ($fn686) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp687 = $tmp685(param1);
frost$core$Int64 $tmp688 = *(&local0);
frost$core$Int64 $tmp689 = *(&local1);
int64_t $tmp690 = $tmp688.value;
int64_t $tmp691 = $tmp689.value;
bool $tmp692 = $tmp690 < $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp683, $tmp684, $tmp687, $tmp693);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
return $tmp683;
block53:;
frost$core$Int $tmp694 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:369:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp695 = $tmp520.value;
int64_t $tmp696 = $tmp694.value;
bool $tmp697 = $tmp695 == $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp700 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp701 = (frost$core$Int) {6u};
$fn703 $tmp702 = ($fn703) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp704 = $tmp702(param1);
frost$core$Int64 $tmp705 = *(&local0);
frost$core$Int64 $tmp706 = *(&local1);
int64_t $tmp707 = $tmp705.value;
int64_t $tmp708 = $tmp706.value;
bool $tmp709 = $tmp707 > $tmp708;
frost$core$Bit $tmp710 = (frost$core$Bit) {$tmp709};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp700, $tmp701, $tmp704, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
return $tmp700;
block56:;
frost$core$Int $tmp711 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:372:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp712 = $tmp520.value;
int64_t $tmp713 = $tmp711.value;
bool $tmp714 = $tmp712 == $tmp713;
frost$core$Bit $tmp715 = (frost$core$Bit) {$tmp714};
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:373
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp717 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp718 = (frost$core$Int) {6u};
$fn720 $tmp719 = ($fn720) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp721 = $tmp719(param1);
frost$core$Int64 $tmp722 = *(&local0);
frost$core$Int64 $tmp723 = *(&local1);
int64_t $tmp724 = $tmp722.value;
int64_t $tmp725 = $tmp723.value;
bool $tmp726 = $tmp724 <= $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp717, $tmp718, $tmp721, $tmp727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
return $tmp717;
block59:;
frost$core$Int $tmp728 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:375:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp729 = $tmp520.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 == $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:376
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp734 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp735 = (frost$core$Int) {6u};
$fn737 $tmp736 = ($fn737) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp738 = $tmp736(param1);
frost$core$Int64 $tmp739 = *(&local0);
frost$core$Int64 $tmp740 = *(&local1);
int64_t $tmp741 = $tmp739.value;
int64_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 >= $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp734, $tmp735, $tmp738, $tmp744);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
return $tmp734;
block62:;
frost$core$Int $tmp745 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:378:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp746 = $tmp520.value;
int64_t $tmp747 = $tmp745.value;
bool $tmp748 = $tmp746 == $tmp747;
frost$core$Bit $tmp749 = (frost$core$Bit) {$tmp748};
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:379
frost$core$Int64 $tmp751 = *(&local0);
frost$core$Int64 $tmp752 = *(&local1);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Binary.frost:379:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752.value;
int64_t $tmp755 = $tmp753 & $tmp754;
frost$core$Int64 $tmp756 = (frost$core$Int64) {$tmp755};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:379:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp757 = $tmp756.value;
frost$core$UInt64 $tmp758 = (frost$core$UInt64) {((uint64_t) $tmp757)};
*(&local9) = $tmp758;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp759 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp760 = (frost$core$Int) {25u};
$fn762 $tmp761 = ($fn762) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp763 = $tmp761(param1);
frost$core$UInt64 $tmp764 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp759, $tmp760, $tmp763, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
return $tmp759;
block65:;
frost$core$Int $tmp765 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:382:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp766 = $tmp520.value;
int64_t $tmp767 = $tmp765.value;
bool $tmp768 = $tmp766 == $tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:383
frost$core$Int64 $tmp771 = *(&local0);
frost$core$Int64 $tmp772 = *(&local1);
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Binary.frost:383:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 | $tmp774;
frost$core$Int64 $tmp776 = (frost$core$Int64) {$tmp775};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:383:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp777 = $tmp776.value;
frost$core$UInt64 $tmp778 = (frost$core$UInt64) {((uint64_t) $tmp777)};
*(&local10) = $tmp778;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:384
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp779 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp780 = (frost$core$Int) {25u};
$fn782 $tmp781 = ($fn782) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp783 = $tmp781(param1);
frost$core$UInt64 $tmp784 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp779, $tmp780, $tmp783, $tmp784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
return $tmp779;
block70:;
frost$core$Int $tmp785 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:386:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp786 = $tmp520.value;
int64_t $tmp787 = $tmp785.value;
bool $tmp788 = $tmp786 == $tmp787;
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:387
frost$core$Int64 $tmp791 = *(&local0);
frost$core$Int64 $tmp792 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Binary.frost:387:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 ^ $tmp794;
frost$core$Int64 $tmp796 = (frost$core$Int64) {$tmp795};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:387:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp797 = $tmp796.value;
frost$core$UInt64 $tmp798 = (frost$core$UInt64) {((uint64_t) $tmp797)};
*(&local11) = $tmp798;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:388
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp799 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp800 = (frost$core$Int) {25u};
$fn802 $tmp801 = ($fn802) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp803 = $tmp801(param1);
frost$core$UInt64 $tmp804 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp799, $tmp800, $tmp803, $tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
return $tmp799;
block75:;
frost$core$Int $tmp805 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:390:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp806 = $tmp520.value;
int64_t $tmp807 = $tmp805.value;
bool $tmp808 = $tmp806 == $tmp807;
frost$core$Bit $tmp809 = (frost$core$Bit) {$tmp808};
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:391
frost$core$Int64 $tmp811 = *(&local0);
frost$core$Int64 $tmp812 = *(&local1);
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Binary.frost:391:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp813 = $tmp811.value;
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813 << $tmp814;
frost$core$Int64 $tmp816 = (frost$core$Int64) {$tmp815};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:391:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp817 = $tmp816.value;
frost$core$UInt64 $tmp818 = (frost$core$UInt64) {((uint64_t) $tmp817)};
*(&local12) = $tmp818;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:392
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp819 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp820 = (frost$core$Int) {25u};
$fn822 $tmp821 = ($fn822) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp823 = $tmp821(param1);
frost$core$UInt64 $tmp824 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp819, $tmp820, $tmp823, $tmp824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
return $tmp819;
block80:;
frost$core$Int $tmp825 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:394:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp826 = $tmp520.value;
int64_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 == $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block84; else goto block17;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:395
frost$core$Int64 $tmp831 = *(&local0);
frost$core$Int64 $tmp832 = *(&local1);
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from Binary.frost:395:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
int64_t $tmp835 = $tmp833 >> $tmp834;
frost$core$Int64 $tmp836 = (frost$core$Int64) {$tmp835};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:395:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp837 = $tmp836.value;
frost$core$UInt64 $tmp838 = (frost$core$UInt64) {((uint64_t) $tmp837)};
*(&local13) = $tmp838;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:396
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp839 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp840 = (frost$core$Int) {25u};
$fn842 $tmp841 = ($fn842) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp843 = $tmp841(param1);
frost$core$UInt64 $tmp844 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp839, $tmp840, $tmp843, $tmp844);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
return $tmp839;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:399
$fn846 $tmp845 = ($fn846) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp847 = $tmp845(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp848;
$tmp848 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp848->value = param2;
$fn850 $tmp849 = ($fn850) ((frost$core$Object*) $tmp848)->$class->vtable[0];
frost$core$String* $tmp851 = $tmp849(((frost$core$Object*) $tmp848));
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s853, $tmp851);
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp852, &$s855);
frost$core$String* $tmp856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp854, &$s857);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp847, $tmp856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
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
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp858;
$tmp858 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp858->value = param2;
frost$core$Int $tmp859 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:408:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp860 = &(&local1)->$rawValue;
*$tmp860 = $tmp859;
org$frostlang$frostc$expression$Binary$Operator $tmp861 = *(&local1);
*(&local0) = $tmp861;
org$frostlang$frostc$expression$Binary$Operator $tmp862 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp863;
$tmp863 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp863->value = $tmp862;
ITable* $tmp864 = ((frost$core$Equatable*) $tmp858)->$class->itable;
while ($tmp864->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp864 = $tmp864->next;
}
$fn866 $tmp865 = $tmp864->methods[1];
frost$core$Bit $tmp867 = $tmp865(((frost$core$Equatable*) $tmp858), ((frost$core$Equatable*) $tmp863));
bool $tmp868 = $tmp867.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp863)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp858)));
if ($tmp868) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:411
frost$core$Int* $tmp869 = &param1->$rawValue;
frost$core$Int $tmp870 = *$tmp869;
frost$core$Int $tmp871 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:412:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp872 = $tmp870.value;
int64_t $tmp873 = $tmp871.value;
bool $tmp874 = $tmp872 == $tmp873;
frost$core$Bit $tmp875 = (frost$core$Bit) {$tmp874};
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp877 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp878 = *$tmp877;
*(&local2) = $tmp878;
frost$core$String** $tmp879 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp880 = *$tmp879;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$String* $tmp881 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local3) = $tmp880;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:413
frost$core$Int* $tmp882 = &param3->$rawValue;
frost$core$Int $tmp883 = *$tmp882;
frost$core$Int $tmp884 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:414:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp885 = $tmp883.value;
int64_t $tmp886 = $tmp884.value;
bool $tmp887 = $tmp885 == $tmp886;
frost$core$Bit $tmp888 = (frost$core$Bit) {$tmp887};
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp890 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp891 = *$tmp890;
frost$core$String** $tmp892 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp893 = *$tmp892;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$String* $tmp894 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local4) = $tmp893;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp895 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp896 = (frost$core$Int) {40u};
org$frostlang$frostc$Position $tmp897 = *(&local2);
frost$core$String* $tmp898 = *(&local3);
frost$core$String* $tmp899 = *(&local4);
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp898, $tmp899);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp895, $tmp896, $tmp897, $tmp900);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$String* $tmp901 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp902 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local3) = ((frost$core$String*) NULL);
return $tmp895;
block7:;
frost$core$String* $tmp903 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:425
frost$core$Int* $tmp904 = &param1->$rawValue;
frost$core$Int $tmp905 = *$tmp904;
frost$core$Int $tmp906 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:426:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp907 = $tmp905.value;
int64_t $tmp908 = $tmp906.value;
bool $tmp909 = $tmp907 == $tmp908;
frost$core$Bit $tmp910 = (frost$core$Bit) {$tmp909};
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:427
org$frostlang$frostc$ASTNode* $tmp912 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
return $tmp912;
block3:;
frost$core$Int $tmp913 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp914 = $tmp905.value;
int64_t $tmp915 = $tmp913.value;
bool $tmp916 = $tmp914 == $tmp915;
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:430
org$frostlang$frostc$ASTNode* $tmp919 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
return $tmp919;
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
org$frostlang$frostc$ASTNode* $tmp920 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
org$frostlang$frostc$ASTNode* $tmp921 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local0) = $tmp920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:442
org$frostlang$frostc$ASTNode* $tmp922 = *(&local0);
frost$core$Bit $tmp923 = (frost$core$Bit) {$tmp922 != NULL};
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:443
org$frostlang$frostc$ASTNode* $tmp925 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp926 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp925, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
org$frostlang$frostc$ASTNode* $tmp927 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp926;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:445
frost$core$Int $tmp928 = param3.$rawValue;
frost$core$Int $tmp929 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:446:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929.value;
bool $tmp932 = $tmp930 == $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:447
org$frostlang$frostc$Scanner** $tmp935 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp936 = *$tmp935;
org$frostlang$frostc$Type* $tmp937 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp936, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
org$frostlang$frostc$Type* $tmp938 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local1) = $tmp937;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:448
org$frostlang$frostc$Type* $tmp939 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp940 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp939);
org$frostlang$frostc$IR$Value* $tmp941 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp940, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
org$frostlang$frostc$Type* $tmp942 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp943 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp941;
block5:;
frost$core$Int $tmp944 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp945 = $tmp928.value;
int64_t $tmp946 = $tmp944.value;
bool $tmp947 = $tmp945 == $tmp946;
frost$core$Bit $tmp948 = (frost$core$Bit) {$tmp947};
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block7; else goto block8;
block8:;
frost$core$Int $tmp950 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp951 = $tmp928.value;
int64_t $tmp952 = $tmp950.value;
bool $tmp953 = $tmp951 == $tmp952;
frost$core$Bit $tmp954 = (frost$core$Bit) {$tmp953};
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block7; else goto block10;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:451
org$frostlang$frostc$IR$Value* $tmp956 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$ASTNode* $tmp957 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp956;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:454
org$frostlang$frostc$Pair* $tmp958 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
org$frostlang$frostc$Pair* $tmp959 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local2) = $tmp958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:455
org$frostlang$frostc$Pair* $tmp960 = *(&local2);
frost$core$Bit $tmp961 = (frost$core$Bit) {$tmp960 != NULL};
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:456
org$frostlang$frostc$Pair* $tmp963 = *(&local2);
frost$core$Object** $tmp964 = &$tmp963->first;
frost$core$Object* $tmp965 = *$tmp964;
ITable* $tmp966 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp965))->$class->itable;
while ($tmp966->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp966 = $tmp966->next;
}
$fn968 $tmp967 = $tmp966->methods[0];
frost$core$Int $tmp969 = $tmp967(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp965)));
frost$core$Int $tmp970 = (frost$core$Int) {1u};
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970.value;
bool $tmp973 = $tmp971 > $tmp972;
frost$core$Bit $tmp974 = (frost$core$Bit) {$tmp973};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:457
org$frostlang$frostc$Pair* $tmp976 = *(&local2);
frost$core$Object** $tmp977 = &$tmp976->first;
frost$core$Object* $tmp978 = *$tmp977;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp979 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp980 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp979, $tmp980);
frost$collections$Array$add$frost$collections$Array$T($tmp979, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp979, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp978), ((frost$collections$ListView*) $tmp979), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp981 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:460
org$frostlang$frostc$Pair* $tmp983 = *(&local2);
frost$core$Object** $tmp984 = &$tmp983->first;
frost$core$Object* $tmp985 = *$tmp984;
frost$core$Int $tmp986 = (frost$core$Int) {0u};
ITable* $tmp987 = ((frost$collections$ListView*) $tmp985)->$class->itable;
while ($tmp987->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp987 = $tmp987->next;
}
$fn989 $tmp988 = $tmp987->methods[0];
frost$core$Object* $tmp990 = $tmp988(((frost$collections$ListView*) $tmp985), $tmp986);
org$frostlang$frostc$MethodDecl** $tmp991 = &((org$frostlang$frostc$MethodRef*) $tmp990)->value;
org$frostlang$frostc$MethodDecl* $tmp992 = *$tmp991;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
org$frostlang$frostc$MethodDecl* $tmp993 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local3) = $tmp992;
frost$core$Frost$unref$frost$core$Object$Q($tmp990);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:461
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp994;
$tmp994 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp994->value = param3;
frost$core$Int $tmp995 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:461:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp996 = &(&local5)->$rawValue;
*$tmp996 = $tmp995;
org$frostlang$frostc$expression$Binary$Operator $tmp997 = *(&local5);
*(&local4) = $tmp997;
org$frostlang$frostc$expression$Binary$Operator $tmp998 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp999;
$tmp999 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp999->value = $tmp998;
ITable* $tmp1000 = ((frost$core$Equatable*) $tmp994)->$class->itable;
while ($tmp1000->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[0];
frost$core$Bit $tmp1003 = $tmp1001(((frost$core$Equatable*) $tmp994), ((frost$core$Equatable*) $tmp999));
bool $tmp1004 = $tmp1003.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp999)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp994)));
if ($tmp1004) goto block18; else goto block17;
block18:;
org$frostlang$frostc$MethodDecl* $tmp1005 = *(&local3);
frost$core$Weak** $tmp1006 = &$tmp1005->owner;
frost$core$Weak* $tmp1007 = *$tmp1006;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:461:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1008 = &$tmp1007->_valid;
frost$core$Bit $tmp1009 = *$tmp1008;
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1011 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1012, $tmp1011);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1013 = &$tmp1007->value;
frost$core$Object* $tmp1014 = *$tmp1013;
frost$core$Frost$ref$frost$core$Object$Q($tmp1014);
// begin inline call to function org.frostlang.frostc.Compiler.isTuple(cl:org.frostlang.frostc.ClassDecl):frost.core.Bit from Binary.frost:461:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2660
frost$core$String** $tmp1015 = &((org$frostlang$frostc$ClassDecl*) $tmp1014)->name;
frost$core$String* $tmp1016 = *$tmp1015;
frost$core$Bit $tmp1017 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1016, &$s1018);
bool $tmp1019 = $tmp1017.value;
if ($tmp1019) goto block25; else goto block26;
block25:;
*(&local7) = $tmp1017;
goto block27;
block26:;
frost$core$String** $tmp1020 = &((org$frostlang$frostc$ClassDecl*) $tmp1014)->name;
frost$core$String* $tmp1021 = *$tmp1020;
frost$core$Bit $tmp1022 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1021, &$s1023);
*(&local7) = $tmp1022;
goto block27;
block27:;
frost$core$Bit $tmp1024 = *(&local7);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block28; else goto block29;
block28:;
*(&local6) = $tmp1024;
goto block30;
block29:;
frost$core$String** $tmp1026 = &((org$frostlang$frostc$ClassDecl*) $tmp1014)->name;
frost$core$String* $tmp1027 = *$tmp1026;
frost$core$Bit $tmp1028 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1027, &$s1029);
*(&local6) = $tmp1028;
goto block30;
block30:;
frost$core$Bit $tmp1030 = *(&local6);
bool $tmp1031 = $tmp1030.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1014);
if ($tmp1031) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:462
frost$core$Int* $tmp1032 = &param4->$rawValue;
frost$core$Int $tmp1033 = *$tmp1032;
frost$core$Int $tmp1034 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:463:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1035 = $tmp1033.value;
int64_t $tmp1036 = $tmp1034.value;
bool $tmp1037 = $tmp1035 == $tmp1036;
frost$core$Bit $tmp1038 = (frost$core$Bit) {$tmp1037};
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Position* $tmp1040 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1041 = *$tmp1040;
frost$core$UInt64* $tmp1042 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1043 = *$tmp1042;
*(&local8) = $tmp1043;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:464
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1044 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1045 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1044, $tmp1045);
org$frostlang$frostc$IR$Value* $tmp1046 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1044);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$IR$Value* $tmp1047 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local9) = $tmp1046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:466
org$frostlang$frostc$IR$Value* $tmp1048 = *(&local9);
frost$core$Bit $tmp1049 = (frost$core$Bit) {$tmp1048 == NULL};
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1051 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1052 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1053 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:469
org$frostlang$frostc$IR$Value* $tmp1055 = *(&local9);
frost$core$UInt64 $tmp1056 = *(&local8);
frost$core$UInt64$wrapper* $tmp1057;
$tmp1057 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1057->value = $tmp1056;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:470:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1059 $tmp1058 = ($fn1059) ((frost$core$Object*) $tmp1057)->$class->vtable[0];
frost$core$String* $tmp1060 = $tmp1058(((frost$core$Object*) $tmp1057));
frost$core$String* $tmp1061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1062, $tmp1060);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$String* $tmp1063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1061, &$s1064);
org$frostlang$frostc$IR$Value* $tmp1065 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1055, $tmp1063);
org$frostlang$frostc$IR$Value* $tmp1066 = *(&local9);
$fn1068 $tmp1067 = ($fn1068) $tmp1066->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1069 = $tmp1067($tmp1066);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:471:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1070 = &$tmp1069->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1071 = *$tmp1070;
frost$core$Bit $tmp1072 = (frost$core$Bit) {$tmp1071 != NULL};
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block38; else goto block39;
block39:;
frost$core$Int $tmp1074 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1075, $tmp1074, &$s1076);
abort(); // unreachable
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$UInt64 $tmp1077 = *(&local8);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:471:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1078 = $tmp1077.value;
frost$core$Int $tmp1079 = (frost$core$Int) {((int64_t) $tmp1078)};
frost$core$Object* $tmp1080 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1071, $tmp1079);
org$frostlang$frostc$IR$Value* $tmp1081 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1065, ((org$frostlang$frostc$Type*) $tmp1080));
org$frostlang$frostc$IR$Value* $tmp1082 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1081, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q($tmp1080);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
org$frostlang$frostc$IR$Value* $tmp1083 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1084 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1085 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1086 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1082;
block31:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:475
org$frostlang$frostc$MethodDecl* $tmp1087 = *(&local3);
org$frostlang$frostc$Annotations** $tmp1088 = &$tmp1087->annotations;
org$frostlang$frostc$Annotations* $tmp1089 = *$tmp1088;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:475:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp1090 = &$tmp1089->flags;
frost$core$Int $tmp1091 = *$tmp1090;
frost$core$Int $tmp1092 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1093 = $tmp1091.value;
int64_t $tmp1094 = $tmp1092.value;
int64_t $tmp1095 = $tmp1093 & $tmp1094;
frost$core$Int $tmp1096 = (frost$core$Int) {$tmp1095};
frost$core$Int $tmp1097 = (frost$core$Int) {0u};
int64_t $tmp1098 = $tmp1096.value;
int64_t $tmp1099 = $tmp1097.value;
bool $tmp1100 = $tmp1098 != $tmp1099;
frost$core$Bit $tmp1101 = (frost$core$Bit) {$tmp1100};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:476
org$frostlang$frostc$MethodDecl* $tmp1103 = *(&local3);
frost$collections$Array** $tmp1104 = &$tmp1103->parameters;
frost$collections$Array* $tmp1105 = *$tmp1104;
ITable* $tmp1106 = ((frost$collections$CollectionView*) $tmp1105)->$class->itable;
while ($tmp1106->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1106 = $tmp1106->next;
}
$fn1108 $tmp1107 = $tmp1106->methods[0];
frost$core$Int $tmp1109 = $tmp1107(((frost$collections$CollectionView*) $tmp1105));
frost$core$Int $tmp1110 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:476:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1111 = $tmp1109.value;
int64_t $tmp1112 = $tmp1110.value;
bool $tmp1113 = $tmp1111 == $tmp1112;
frost$core$Bit $tmp1114 = (frost$core$Bit) {$tmp1113};
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:477
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1116 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1117 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1118 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1119 = *(&local3);
org$frostlang$frostc$Type* $tmp1120 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1119, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1116, $tmp1117, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1118, $tmp1120);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1121 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1122 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp1121, $tmp1122);
frost$collections$Array$add$frost$collections$Array$T($tmp1121, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp1121, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1123 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1116, ((frost$collections$ListView*) $tmp1121), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
org$frostlang$frostc$MethodDecl* $tmp1124 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1123;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:480
org$frostlang$frostc$MethodDecl* $tmp1127 = *(&local3);
frost$collections$Array** $tmp1128 = &$tmp1127->parameters;
frost$collections$Array* $tmp1129 = *$tmp1128;
ITable* $tmp1130 = ((frost$collections$CollectionView*) $tmp1129)->$class->itable;
while ($tmp1130->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1130 = $tmp1130->next;
}
$fn1132 $tmp1131 = $tmp1130->methods[0];
frost$core$Int $tmp1133 = $tmp1131(((frost$collections$CollectionView*) $tmp1129));
frost$core$Int $tmp1134 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:480:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134.value;
bool $tmp1137 = $tmp1135 == $tmp1136;
frost$core$Bit $tmp1138 = (frost$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1140 = (frost$core$Int) {480u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1141, $tmp1140);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:481
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1142 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1143 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1144 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1145 = *(&local3);
org$frostlang$frostc$Type* $tmp1146 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1145, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1142, $tmp1143, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1144, $tmp1146);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1147 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1148 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1147, $tmp1148);
frost$collections$Array$add$frost$collections$Array$T($tmp1147, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1149 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1142, ((frost$collections$ListView*) $tmp1147), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
org$frostlang$frostc$MethodDecl* $tmp1150 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1151 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1149;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:484
org$frostlang$frostc$MethodDecl* $tmp1153 = *(&local3);
frost$core$Weak** $tmp1154 = &$tmp1153->owner;
frost$core$Weak* $tmp1155 = *$tmp1154;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:484:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1156 = &$tmp1155->_valid;
frost$core$Bit $tmp1157 = *$tmp1156;
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block55; else goto block56;
block56:;
frost$core$Int $tmp1159 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1160, $tmp1159);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1161 = &$tmp1155->value;
frost$core$Object* $tmp1162 = *$tmp1161;
frost$core$Frost$ref$frost$core$Object$Q($tmp1162);
frost$core$String** $tmp1163 = &((org$frostlang$frostc$ClassDecl*) $tmp1162)->name;
frost$core$String* $tmp1164 = *$tmp1163;
frost$core$Bit $tmp1165 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1164, &$s1166);
bool $tmp1167 = $tmp1165.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1162);
if ($tmp1167) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:485
org$frostlang$frostc$MethodDecl* $tmp1168 = *(&local3);
frost$core$String** $tmp1169 = &((org$frostlang$frostc$Symbol*) $tmp1168)->name;
frost$core$String* $tmp1170 = *$tmp1169;
frost$core$Bit $tmp1171 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1170, &$s1172);
bool $tmp1173 = $tmp1171.value;
if ($tmp1173) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:486
org$frostlang$frostc$IR$Value* $tmp1174 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
org$frostlang$frostc$MethodDecl* $tmp1175 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1176 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1174;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:488
org$frostlang$frostc$MethodDecl* $tmp1178 = *(&local3);
frost$core$String** $tmp1179 = &((org$frostlang$frostc$Symbol*) $tmp1178)->name;
frost$core$String* $tmp1180 = *$tmp1179;
frost$core$Bit $tmp1181 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1180, &$s1182);
bool $tmp1183 = $tmp1181.value;
if ($tmp1183) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:489
org$frostlang$frostc$IR$Value* $tmp1184 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
org$frostlang$frostc$MethodDecl* $tmp1185 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1186 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1184;
block60:;
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:492
frost$collections$CollectionView* $tmp1188 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
org$frostlang$frostc$MethodDecl* $tmp1189 = *(&local3);
frost$core$Weak** $tmp1190 = &$tmp1189->owner;
frost$core$Weak* $tmp1191 = *$tmp1190;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:492:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1192 = &$tmp1191->_valid;
frost$core$Bit $tmp1193 = *$tmp1192;
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block63; else goto block64;
block64:;
frost$core$Int $tmp1195 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1196, $tmp1195);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1197 = &$tmp1191->value;
frost$core$Object* $tmp1198 = *$tmp1197;
frost$core$Frost$ref$frost$core$Object$Q($tmp1198);
// begin inline call to function org.frostlang.frostc.Compiler.findType(start:frost.collections.CollectionView<org.frostlang.frostc.Type>, target:org.frostlang.frostc.ClassDecl):org.frostlang.frostc.Type? from Binary.frost:492:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4443
ITable* $tmp1199 = ((frost$collections$Iterable*) $tmp1188)->$class->itable;
while ($tmp1199->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1199 = $tmp1199->next;
}
$fn1201 $tmp1200 = $tmp1199->methods[0];
frost$collections$Iterator* $tmp1202 = $tmp1200(((frost$collections$Iterable*) $tmp1188));
goto block66;
block66:;
ITable* $tmp1203 = $tmp1202->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[0];
frost$core$Bit $tmp1206 = $tmp1204($tmp1202);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block68; else goto block67;
block67:;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1208 = $tmp1202->$class->itable;
while ($tmp1208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1208 = $tmp1208->next;
}
$fn1210 $tmp1209 = $tmp1208->methods[1];
frost$core$Object* $tmp1211 = $tmp1209($tmp1202);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1211)));
org$frostlang$frostc$Type* $tmp1212 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1211);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4444
org$frostlang$frostc$Type* $tmp1213 = *(&local11);
org$frostlang$frostc$Type* $tmp1214 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1213, ((org$frostlang$frostc$ClassDecl*) $tmp1198));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
org$frostlang$frostc$Type* $tmp1215 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local12) = $tmp1214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4445
org$frostlang$frostc$Type* $tmp1216 = *(&local12);
frost$core$Bit $tmp1217 = (frost$core$Bit) {$tmp1216 != NULL};
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4446
org$frostlang$frostc$Type* $tmp1219 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
org$frostlang$frostc$Type* $tmp1220 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1211);
org$frostlang$frostc$Type* $tmp1221 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local10) = $tmp1219;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
goto block65;
block70:;
org$frostlang$frostc$Type* $tmp1222 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1211);
org$frostlang$frostc$Type* $tmp1223 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4449
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
goto block65;
block65:;
org$frostlang$frostc$Type* $tmp1224 = *(&local10);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
org$frostlang$frostc$Type* $tmp1225 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local13) = $tmp1224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:493
org$frostlang$frostc$Type* $tmp1226 = *(&local13);
frost$core$Bit $tmp1227 = (frost$core$Bit) {$tmp1226 != NULL};
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block71; else goto block72;
block72:;
frost$core$Int $tmp1229 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1230, $tmp1229);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:494
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1231 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1232 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp1233 = *(&local13);
frost$core$Bit $tmp1234 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1231, $tmp1232, $tmp1233, $tmp1234);
org$frostlang$frostc$IR$Value* $tmp1235 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1231);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
org$frostlang$frostc$IR$Value* $tmp1236 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local14) = $tmp1235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:495
org$frostlang$frostc$IR$Value* $tmp1237 = *(&local14);
frost$core$Bit $tmp1238 = (frost$core$Bit) {$tmp1237 == NULL};
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1240 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1241 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1242 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1198);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
org$frostlang$frostc$MethodDecl* $tmp1243 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1244 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:498
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1246 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1247 = (frost$core$Int) {9u};
org$frostlang$frostc$IR$Value* $tmp1248 = *(&local14);
org$frostlang$frostc$MethodDecl* $tmp1249 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1250 = *(&local3);
org$frostlang$frostc$Type* $tmp1251 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1250, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1246, $tmp1247, $tmp1248, $tmp1249, $tmp1251);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1252 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1253 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1252, $tmp1253);
frost$collections$Array$add$frost$collections$Array$T($tmp1252, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1254 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1246, ((frost$collections$ListView*) $tmp1252), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1256 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1257 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1198);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
org$frostlang$frostc$MethodDecl* $tmp1258 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1254;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:501
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1261 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1262 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1261, $tmp1262);
org$frostlang$frostc$IR$Value* $tmp1263 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1261);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
org$frostlang$frostc$IR$Value* $tmp1264 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local15) = $tmp1263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:502
org$frostlang$frostc$IR$Value* $tmp1265 = *(&local15);
frost$core$Bit $tmp1266 = (frost$core$Bit) {$tmp1265 == NULL};
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1268 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1269 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1271;
$tmp1271 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1271->value = param3;
frost$core$Int $tmp1272 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:505:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp1273 = &(&local17)->$rawValue;
*$tmp1273 = $tmp1272;
org$frostlang$frostc$expression$Binary$Operator $tmp1274 = *(&local17);
*(&local16) = $tmp1274;
org$frostlang$frostc$expression$Binary$Operator $tmp1275 = *(&local16);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1276;
$tmp1276 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1276->value = $tmp1275;
ITable* $tmp1277 = ((frost$core$Equatable*) $tmp1271)->$class->itable;
while ($tmp1277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1277 = $tmp1277->next;
}
$fn1279 $tmp1278 = $tmp1277->methods[0];
frost$core$Bit $tmp1280 = $tmp1278(((frost$core$Equatable*) $tmp1271), ((frost$core$Equatable*) $tmp1276));
bool $tmp1281 = $tmp1280.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1276)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1271)));
if ($tmp1281) goto block79; else goto block78;
block79:;
org$frostlang$frostc$IR$Value* $tmp1282 = *(&local15);
$fn1284 $tmp1283 = ($fn1284) $tmp1282->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1285 = $tmp1283($tmp1282);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Binary.frost:505:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp1286 = &$tmp1285->typeKind;
org$frostlang$frostc$Type$Kind $tmp1287 = *$tmp1286;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1288;
$tmp1288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1288->value = $tmp1287;
frost$core$Int $tmp1289 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1290 = &(&local19)->$rawValue;
*$tmp1290 = $tmp1289;
org$frostlang$frostc$Type$Kind $tmp1291 = *(&local19);
*(&local18) = $tmp1291;
org$frostlang$frostc$Type$Kind $tmp1292 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1293;
$tmp1293 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1293->value = $tmp1292;
ITable* $tmp1294 = ((frost$core$Equatable*) $tmp1288)->$class->itable;
while ($tmp1294->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1294 = $tmp1294->next;
}
$fn1296 $tmp1295 = $tmp1294->methods[0];
frost$core$Bit $tmp1297 = $tmp1295(((frost$core$Equatable*) $tmp1288), ((frost$core$Equatable*) $tmp1293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1293)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1288)));
bool $tmp1298 = $tmp1297.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
if ($tmp1298) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:506
frost$core$Int* $tmp1299 = &param4->$rawValue;
frost$core$Int $tmp1300 = *$tmp1299;
frost$core$Int $tmp1301 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:507:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1302 = $tmp1300.value;
int64_t $tmp1303 = $tmp1301.value;
bool $tmp1304 = $tmp1302 == $tmp1303;
frost$core$Bit $tmp1305 = (frost$core$Bit) {$tmp1304};
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block84; else goto block83;
block84:;
org$frostlang$frostc$Position* $tmp1307 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1308 = *$tmp1307;
frost$core$UInt64* $tmp1309 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1310 = *$tmp1309;
*(&local20) = $tmp1310;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:508
org$frostlang$frostc$IR$Value* $tmp1311 = *(&local15);
frost$core$UInt64 $tmp1312 = *(&local20);
frost$core$UInt64$wrapper* $tmp1313;
$tmp1313 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1313->value = $tmp1312;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:509:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1315 $tmp1314 = ($fn1315) ((frost$core$Object*) $tmp1313)->$class->vtable[0];
frost$core$String* $tmp1316 = $tmp1314(((frost$core$Object*) $tmp1313));
frost$core$String* $tmp1317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1318, $tmp1316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$String* $tmp1319 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1317, &$s1320);
org$frostlang$frostc$IR$Value* $tmp1321 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1311, $tmp1319);
org$frostlang$frostc$IR$Value* $tmp1322 = *(&local15);
$fn1324 $tmp1323 = ($fn1324) $tmp1322->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1325 = $tmp1323($tmp1322);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:510:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1326 = &$tmp1325->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1327 = *$tmp1326;
frost$core$Bit $tmp1328 = (frost$core$Bit) {$tmp1327 != NULL};
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block88; else goto block89;
block89:;
frost$core$Int $tmp1330 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1331, $tmp1330, &$s1332);
abort(); // unreachable
block88:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$UInt64 $tmp1333 = *(&local20);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:510:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1334 = $tmp1333.value;
frost$core$Int $tmp1335 = (frost$core$Int) {((int64_t) $tmp1334)};
frost$core$Object* $tmp1336 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1327, $tmp1335);
org$frostlang$frostc$IR$Value* $tmp1337 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1321, ((org$frostlang$frostc$Type*) $tmp1336));
org$frostlang$frostc$IR$Value* $tmp1338 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1337, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q($tmp1336);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
org$frostlang$frostc$IR$Value* $tmp1339 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1338;
block83:;
goto block78;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:514
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1342 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1343 = (frost$core$Int) {3u};
org$frostlang$frostc$IR$Value* $tmp1344 = *(&local15);
$fn1346 $tmp1345 = ($fn1346) $tmp1344->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1347 = $tmp1345($tmp1344);
frost$core$Bit $tmp1348 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1342, $tmp1343, $tmp1347, $tmp1348);
org$frostlang$frostc$IR$Value* $tmp1349 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1342);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
org$frostlang$frostc$IR$Value* $tmp1350 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local21) = $tmp1349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:516
org$frostlang$frostc$IR$Value* $tmp1351 = *(&local21);
frost$core$Bit $tmp1352 = (frost$core$Bit) {$tmp1351 == NULL};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1354 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1355 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1356 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:519
org$frostlang$frostc$IR$Value* $tmp1358 = *(&local15);
$fn1360 $tmp1359 = ($fn1360) $tmp1358->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1361 = $tmp1359($tmp1358);
org$frostlang$frostc$Type** $tmp1362 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1363 = *$tmp1362;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Binary.frost:519:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1364 = &((org$frostlang$frostc$Symbol*) $tmp1361)->name;
frost$core$String* $tmp1365 = *$tmp1364;
frost$core$String** $tmp1366 = &((org$frostlang$frostc$Symbol*) $tmp1363)->name;
frost$core$String* $tmp1367 = *$tmp1366;
frost$core$Bit $tmp1368 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1365, $tmp1367);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Type$Kind* $tmp1370 = &$tmp1361->typeKind;
org$frostlang$frostc$Type$Kind $tmp1371 = *$tmp1370;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1372;
$tmp1372 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1372->value = $tmp1371;
org$frostlang$frostc$Type$Kind* $tmp1373 = &$tmp1363->typeKind;
org$frostlang$frostc$Type$Kind $tmp1374 = *$tmp1373;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1375;
$tmp1375 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1375->value = $tmp1374;
ITable* $tmp1376 = ((frost$core$Equatable*) $tmp1372)->$class->itable;
while ($tmp1376->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1376 = $tmp1376->next;
}
$fn1378 $tmp1377 = $tmp1376->methods[0];
frost$core$Bit $tmp1379 = $tmp1377(((frost$core$Equatable*) $tmp1372), ((frost$core$Equatable*) $tmp1375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1375)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1372)));
*(&local22) = $tmp1379;
goto block99;
block98:;
*(&local22) = $tmp1368;
goto block99;
block99:;
frost$core$Bit $tmp1380 = *(&local22);
bool $tmp1381 = $tmp1380.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
if ($tmp1381) goto block93; else goto block95;
block95:;
org$frostlang$frostc$IR$Value* $tmp1382 = *(&local15);
$fn1384 $tmp1383 = ($fn1384) $tmp1382->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1385 = $tmp1383($tmp1382);
frost$core$Bit $tmp1386 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1385);
bool $tmp1387 = $tmp1386.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
if ($tmp1387) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:521
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1388 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1389 = (frost$core$Int) {5u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1388, $tmp1389, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1390 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1388);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
org$frostlang$frostc$Type* $tmp1391 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local23) = $tmp1390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:523
org$frostlang$frostc$Type* $tmp1392 = *(&local23);
frost$core$Bit $tmp1393 = (frost$core$Bit) {$tmp1392 != NULL};
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:524
org$frostlang$frostc$IR** $tmp1395 = &param0->ir;
org$frostlang$frostc$IR* $tmp1396 = *$tmp1395;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1397 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1398 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Value* $tmp1399 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp1400 = *(&local21);
org$frostlang$frostc$Type* $tmp1401 = *(&local23);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1397, $tmp1398, param1, $tmp1399, param3, $tmp1400, $tmp1401);
$fn1403 $tmp1402 = ($fn1403) $tmp1396->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1404 = $tmp1402($tmp1396, $tmp1397);
*(&local24) = $tmp1404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:526
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1405 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1406 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp1407 = *(&local24);
org$frostlang$frostc$Type* $tmp1408 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1405, $tmp1406, $tmp1407, $tmp1408);
org$frostlang$frostc$IR$Value* $tmp1409 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1405, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
org$frostlang$frostc$Type* $tmp1410 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1411 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1412 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1409;
block101:;
org$frostlang$frostc$Type* $tmp1415 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:529
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1416;
$tmp1416 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1416->value = param3;
$fn1418 $tmp1417 = ($fn1418) ((frost$core$Object*) $tmp1416)->$class->vtable[0];
frost$core$String* $tmp1419 = $tmp1417(((frost$core$Object*) $tmp1416));
frost$core$String* $tmp1420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1421, $tmp1419);
frost$core$String* $tmp1422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1420, &$s1423);
org$frostlang$frostc$IR$Value* $tmp1424 = *(&local15);
$fn1426 $tmp1425 = ($fn1426) $tmp1424->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1427 = $tmp1425($tmp1424);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1429 $tmp1428 = ($fn1429) ((frost$core$Object*) $tmp1427)->$class->vtable[0];
frost$core$String* $tmp1430 = $tmp1428(((frost$core$Object*) $tmp1427));
frost$core$String* $tmp1431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1432, $tmp1430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$core$String* $tmp1433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1431, &$s1434);
org$frostlang$frostc$IR$Value* $tmp1435 = *(&local21);
$fn1437 $tmp1436 = ($fn1437) $tmp1435->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1438 = $tmp1436($tmp1435);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1440 $tmp1439 = ($fn1440) ((frost$core$Object*) $tmp1438)->$class->vtable[0];
frost$core$String* $tmp1441 = $tmp1439(((frost$core$Object*) $tmp1438));
frost$core$String* $tmp1442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1433, $tmp1441);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$String* $tmp1443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1442, &$s1444);
frost$core$String* $tmp1445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1422, $tmp1443);
$fn1447 $tmp1446 = ($fn1447) param5->$class->vtable[2];
frost$core$String* $tmp1448 = $tmp1446(param5);
frost$core$String* $tmp1449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1445, $tmp1448);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1449);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1450 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1451 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block3:;
goto block104;
block104:;

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

