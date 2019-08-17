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
typedef frost$core$Bit (*$fn137)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn145)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn197)(frost$core$Object*);
typedef frost$core$Bit (*$fn275)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn283)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn317)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn321)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn326)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn337)(frost$core$Object*);
typedef frost$core$String* (*$fn345)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn351)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn355)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn416)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn420)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn425)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn433)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn437)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn442)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn539)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn559)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn579)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn596)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn610)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn627)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn641)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn653)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn670)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn687)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn704)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn721)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn738)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn763)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn783)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn803)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn823)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn843)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn847)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn851)(frost$core$Object*);
typedef frost$core$Bit (*$fn867)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn969)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn990)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn1003)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1060)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1069)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1110)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1134)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1203)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1207)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1212)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1281)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1286)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1298)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1317)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1326)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1349)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1363)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1381)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1387)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1406)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1421)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1429)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1432)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1440)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1443)(frost$core$Object*);
typedef frost$core$String* (*$fn1450)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 7016920421845289241, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, 2403110168575220660, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, 8004068995672102850, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -3764202169548220239, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65", 16, -4954590249221528654, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65", 19, -3755527176520939069, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65", 25, -4446748280071778646, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -8926283552790936043, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 5247209226559449009, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 8856786456156887815, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:256
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:256:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp58 = &$tmp57->flags;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
org$frostlang$frostc$Type$Kind* $tmp74 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp75 = *$tmp74;
org$frostlang$frostc$Type$Kind$wrapper* $tmp76;
$tmp76 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp76->value = $tmp75;
frost$core$Int $tmp77 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:370:31
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:370:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp87 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp88 = *$tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88 != NULL};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block25; else goto block26;
block26:;
frost$core$Int $tmp91 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s92, $tmp91);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp93 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp94 = *$tmp93;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Int $tmp95 = (frost$core$Int) {0u};
frost$core$Object* $tmp96 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp94, $tmp95);
frost$core$String** $tmp97 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp96))->name;
frost$core$String* $tmp98 = *$tmp97;
frost$core$Bit $tmp99 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp98, &$s100);
frost$core$Frost$unref$frost$core$Object$Q($tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local6) = $tmp99;
goto block23;
block22:;
*(&local6) = $tmp85;
goto block23;
block23:;
frost$core$Bit $tmp101 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:203
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp103 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp103);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$collections$Array* $tmp104 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local9) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:204
frost$collections$Array* $tmp105 = *(&local9);
org$frostlang$frostc$Symbol* $tmp106 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp105, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp106)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:205
org$frostlang$frostc$Position $tmp107 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp108 = *(&local3);
frost$collections$Array* $tmp109 = *(&local9);
frost$collections$Array* $tmp110 = *(&local5);
org$frostlang$frostc$Pair* $tmp111 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp107, $tmp108, ((frost$collections$ListView*) $tmp109), ((frost$collections$ListView*) $tmp110), param4);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlang$frostc$Pair* $tmp112 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local10) = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:207
org$frostlang$frostc$Pair* $tmp113 = *(&local10);
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113 != NULL};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:208
org$frostlang$frostc$Pair* $tmp116 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
org$frostlang$frostc$Pair* $tmp117 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp118 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp119 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp120 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp121 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp116;
block28:;
org$frostlang$frostc$Pair* $tmp123 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp124 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local9) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
goto block9;
block11:;
frost$core$Int $tmp125 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:212:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp126 = $tmp48.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:213
org$frostlang$frostc$Position $tmp131 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp132 = *(&local3);
org$frostlang$frostc$Symbol* $tmp133 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp134 = &((org$frostlang$frostc$Methods*) $tmp133)->methods;
org$frostlang$frostc$FixedArray* $tmp135 = *$tmp134;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Binary$_Closure2));
org$frostlang$frostc$expression$Binary$_Closure2* $tmp136 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp136, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp138 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Binary.frost:215:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp139 = &$tmp138->pointer;
*$tmp139 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Object** $tmp140 = &$tmp138->target;
frost$core$Object* $tmp141 = *$tmp140;
frost$core$Frost$unref$frost$core$Object$Q($tmp141);
frost$core$Object** $tmp142 = &$tmp138->target;
*$tmp142 = ((frost$core$Object*) $tmp136);
ITable* $tmp143 = ((frost$collections$ListView*) $tmp135)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[6];
frost$collections$ListView* $tmp146 = $tmp144(((frost$collections$ListView*) $tmp135), $tmp138);
frost$collections$Array* $tmp147 = *(&local5);
org$frostlang$frostc$Pair* $tmp148 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp131, $tmp132, $tmp146, ((frost$collections$ListView*) $tmp147), param4);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
org$frostlang$frostc$Pair* $tmp149 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local11) = $tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:216
org$frostlang$frostc$Pair* $tmp150 = *(&local11);
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150 != NULL};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:217
org$frostlang$frostc$Pair* $tmp153 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$Pair* $tmp154 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp155 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp156 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp157 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp153;
block34:;
org$frostlang$frostc$Pair* $tmp159 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
goto block9;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:221
frost$core$Int $tmp160 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s161, $tmp160);
abort(); // unreachable
block9:;
frost$collections$Array* $tmp162 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local5) = ((frost$collections$Array*) NULL);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:227
org$frostlang$frostc$Type* $tmp163 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$Type* $tmp164 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local12) = $tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:228
org$frostlang$frostc$Type* $tmp165 = *(&local12);
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165 == NULL};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp168 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp169 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp170 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:231
org$frostlang$frostc$Type* $tmp172 = *(&local12);
frost$core$Bit $tmp173 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp172);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:231:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp174 = $tmp173.value;
bool $tmp175 = !$tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp178 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp179 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp180 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:234
org$frostlang$frostc$Type* $tmp182 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp183 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp182);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local13) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:235
org$frostlang$frostc$ClassDecl* $tmp185 = *(&local13);
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185 == NULL};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp189 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp191 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:238
org$frostlang$frostc$ClassDecl* $tmp193 = *(&local13);
org$frostlang$frostc$SymbolTable* $tmp194 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp193);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp195;
$tmp195 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp195->value = param2;
$fn197 $tmp196 = ($fn197) ((frost$core$Object*) $tmp195)->$class->vtable[0];
frost$core$String* $tmp198 = $tmp196(((frost$core$Object*) $tmp195));
org$frostlang$frostc$Symbol* $tmp199 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp194, $tmp198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
org$frostlang$frostc$Symbol* $tmp200 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local4) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:239
org$frostlang$frostc$Symbol* $tmp201 = *(&local4);
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201 == NULL};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp204 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp205 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp206 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp207 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:242
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp209 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp210 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp209, $tmp210);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp211 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp212 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp213 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp214 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp211, $tmp212, $tmp213, $tmp214);
frost$collections$Array$add$frost$collections$Array$T($tmp209, ((frost$core$Object*) $tmp211));
frost$collections$Array$add$frost$collections$Array$T($tmp209, ((frost$core$Object*) param3));
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$collections$Array* $tmp215 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local14) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:243
org$frostlang$frostc$Symbol* $tmp216 = *(&local4);
org$frostlang$frostc$Symbol$Kind* $tmp217 = &$tmp216->kind;
org$frostlang$frostc$Symbol$Kind $tmp218 = *$tmp217;
frost$core$Int $tmp219 = $tmp218.$rawValue;
frost$core$Int $tmp220 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:244:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 == $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:245
org$frostlang$frostc$Symbol* $tmp226 = *(&local4);
org$frostlang$frostc$Annotations** $tmp227 = &((org$frostlang$frostc$MethodDecl*) $tmp226)->annotations;
org$frostlang$frostc$Annotations* $tmp228 = *$tmp227;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:245:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp229 = &$tmp228->flags;
frost$core$Int $tmp230 = *$tmp229;
frost$core$Int $tmp231 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232 & $tmp233;
frost$core$Int $tmp235 = (frost$core$Int) {$tmp234};
frost$core$Int $tmp236 = (frost$core$Int) {0u};
int64_t $tmp237 = $tmp235.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 != $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:246
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp242 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp242);
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$collections$Array* $tmp243 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local15) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:247
frost$collections$Array* $tmp244 = *(&local15);
org$frostlang$frostc$Symbol* $tmp245 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp244, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp245)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:248
org$frostlang$frostc$Position $tmp246 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp247 = *(&local15);
frost$collections$Array* $tmp248 = *(&local14);
org$frostlang$frostc$Pair* $tmp249 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp246, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp247), ((frost$collections$ListView*) $tmp248), param4);
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
org$frostlang$frostc$Pair* $tmp250 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local16) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:249
org$frostlang$frostc$Pair* $tmp251 = *(&local16);
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251 != NULL};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:250
org$frostlang$frostc$Pair* $tmp254 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
org$frostlang$frostc$Pair* $tmp255 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp256 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local15) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp257 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp258 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp259 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp260 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp261 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp254;
block53:;
org$frostlang$frostc$Pair* $tmp263 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp264 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local15) = ((frost$collections$Array*) NULL);
goto block49;
block49:;
goto block44;
block46:;
frost$core$Int $tmp265 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:254:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp266 = $tmp219.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 == $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:255
org$frostlang$frostc$Position $tmp271 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp272 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp273 = &((org$frostlang$frostc$Methods*) $tmp272)->methods;
org$frostlang$frostc$FixedArray* $tmp274 = *$tmp273;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp276 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Binary.frost:256:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp277 = &$tmp276->pointer;
*$tmp277 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp278 = &$tmp276->target;
frost$core$Immutable* $tmp279 = *$tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Immutable** $tmp280 = &$tmp276->target;
*$tmp280 = ((frost$core$Immutable*) NULL);
ITable* $tmp281 = ((frost$collections$ListView*) $tmp274)->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[6];
frost$collections$ListView* $tmp284 = $tmp282(((frost$collections$ListView*) $tmp274), ((frost$core$MutableMethod*) $tmp276));
frost$collections$Array* $tmp285 = *(&local14);
org$frostlang$frostc$Pair* $tmp286 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp271, ((org$frostlang$frostc$IR$Value*) NULL), $tmp284, ((frost$collections$ListView*) $tmp285), param4);
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
org$frostlang$frostc$Pair* $tmp287 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local17) = $tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:257
org$frostlang$frostc$Pair* $tmp288 = *(&local17);
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288 != NULL};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:258
org$frostlang$frostc$Pair* $tmp291 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Pair* $tmp292 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp293 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp294 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp295 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp297 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp291;
block59:;
org$frostlang$frostc$Pair* $tmp299 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
goto block44;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:262
frost$core$Int $tmp300 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s301, $tmp300);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp302 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp303 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp304 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp305 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp306 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp307 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
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
frost$collections$CollectionView* $tmp308 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$collections$CollectionView* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:272
frost$collections$CollectionView* $tmp310 = *(&local0);
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310 != NULL};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp313 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:274
frost$collections$CollectionView* $tmp314 = *(&local0);
ITable* $tmp315 = ((frost$collections$Iterable*) $tmp314)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$collections$Iterator* $tmp318 = $tmp316(((frost$collections$Iterable*) $tmp314));
goto block3;
block3:;
ITable* $tmp319 = $tmp318->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
frost$core$Bit $tmp322 = $tmp320($tmp318);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp324 = $tmp318->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
frost$core$Object* $tmp327 = $tmp325($tmp318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp327)));
org$frostlang$frostc$Type* $tmp328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp327);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:275
org$frostlang$frostc$Type* $tmp329 = *(&local2);
org$frostlang$frostc$Pair* $tmp330 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param1, $tmp329);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
org$frostlang$frostc$Pair* $tmp331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local3) = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:276
org$frostlang$frostc$Pair* $tmp332 = *(&local3);
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332 != NULL};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block6; else goto block7;
block7:;
frost$core$Int $tmp335 = (frost$core$Int) {276u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn337 $tmp336 = ($fn337) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp338 = $tmp336(((frost$core$Object*) param1));
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s340, $tmp338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$String* $tmp341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, &$s342);
org$frostlang$frostc$Type* $tmp343 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn345 $tmp344 = ($fn345) ((frost$core$Object*) $tmp343)->$class->vtable[0];
frost$core$String* $tmp346 = $tmp344(((frost$core$Object*) $tmp343));
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp341, $tmp346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$String* $tmp348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp347, &$s349);
$fn351 $tmp350 = ($fn351) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp352 = $tmp350(param1);
org$frostlang$frostc$Position$wrapper* $tmp353;
$tmp353 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp353->value = $tmp352;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn355 $tmp354 = ($fn355) ((frost$core$Object*) $tmp353)->$class->vtable[0];
frost$core$String* $tmp356 = $tmp354(((frost$core$Object*) $tmp353));
frost$core$String* $tmp357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp348, $tmp356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp357, &$s359);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s360, $tmp335, $tmp358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:278
org$frostlang$frostc$Type* $tmp361 = *(&local2);
org$frostlang$frostc$Pair* $tmp362 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp361, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
org$frostlang$frostc$Pair* $tmp363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local4) = $tmp362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:279
org$frostlang$frostc$Pair* $tmp364 = *(&local4);
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364 != NULL};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:280
org$frostlang$frostc$Pair* $tmp367 = *(&local4);
frost$core$Object** $tmp368 = &$tmp367->second;
frost$core$Object* $tmp369 = *$tmp368;
org$frostlang$frostc$Pair* $tmp370 = *(&local3);
frost$core$Object** $tmp371 = &$tmp370->second;
frost$core$Object* $tmp372 = *$tmp371;
int64_t $tmp373 = ((frost$core$Int$wrapper*) $tmp369)->value.value;
int64_t $tmp374 = ((frost$core$Int$wrapper*) $tmp372)->value.value;
int64_t $tmp375 = $tmp373 + $tmp374;
frost$core$Int $tmp376 = (frost$core$Int) {$tmp375};
*(&local5) = $tmp376;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:281
org$frostlang$frostc$Pair* $tmp377 = *(&local1);
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377 == NULL};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block13; else goto block16;
block16:;
frost$core$Int $tmp380 = *(&local5);
org$frostlang$frostc$Pair* $tmp381 = *(&local1);
frost$core$Object** $tmp382 = &$tmp381->second;
frost$core$Object* $tmp383 = *$tmp382;
int64_t $tmp384 = $tmp380.value;
int64_t $tmp385 = ((frost$core$Int$wrapper*) $tmp383)->value.value;
bool $tmp386 = $tmp384 < $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:282
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp389 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp390 = *(&local4);
frost$core$Object** $tmp391 = &$tmp390->first;
frost$core$Object* $tmp392 = *$tmp391;
frost$core$Int $tmp393 = *(&local5);
frost$core$Int$wrapper* $tmp394;
$tmp394 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp394->value = $tmp393;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp389, ((frost$core$Object*) ((frost$collections$ListView*) $tmp392)), ((frost$core$Object*) $tmp394));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$Pair* $tmp395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local1) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:284
frost$core$Int $tmp396 = *(&local5);
org$frostlang$frostc$Pair* $tmp397 = *(&local1);
frost$core$Object** $tmp398 = &$tmp397->second;
frost$core$Object* $tmp399 = *$tmp398;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:284:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp400 = $tmp396.value;
int64_t $tmp401 = ((frost$core$Int$wrapper*) $tmp399)->value.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:285
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp405 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp405);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$collections$Array* $tmp406 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local6) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:286
frost$collections$Array* $tmp407 = *(&local6);
org$frostlang$frostc$Pair* $tmp408 = *(&local1);
frost$core$Object** $tmp409 = &$tmp408->first;
frost$core$Object* $tmp410 = *$tmp409;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp407, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp410)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:287
org$frostlang$frostc$Pair* $tmp411 = *(&local4);
frost$core$Object** $tmp412 = &$tmp411->first;
frost$core$Object* $tmp413 = *$tmp412;
ITable* $tmp414 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp413))->$class->itable;
while ($tmp414->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp414 = $tmp414->next;
}
$fn416 $tmp415 = $tmp414->methods[0];
frost$collections$Iterator* $tmp417 = $tmp415(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp413)));
goto block20;
block20:;
ITable* $tmp418 = $tmp417->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[0];
frost$core$Bit $tmp421 = $tmp419($tmp417);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp423 = $tmp417->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[1];
frost$core$Object* $tmp426 = $tmp424($tmp417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp426)));
org$frostlang$frostc$MethodRef* $tmp427 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local7) = ((org$frostlang$frostc$MethodRef*) $tmp426);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:288
org$frostlang$frostc$Pair* $tmp428 = *(&local1);
frost$core$Object** $tmp429 = &$tmp428->first;
frost$core$Object* $tmp430 = *$tmp429;
ITable* $tmp431 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp430))->$class->itable;
while ($tmp431->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp431 = $tmp431->next;
}
$fn433 $tmp432 = $tmp431->methods[0];
frost$collections$Iterator* $tmp434 = $tmp432(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp430)));
goto block23;
block23:;
ITable* $tmp435 = $tmp434->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Bit $tmp438 = $tmp436($tmp434);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block25; else goto block24;
block24:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp440 = $tmp434->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp440 = $tmp440->next;
}
$fn442 $tmp441 = $tmp440->methods[1];
frost$core$Object* $tmp443 = $tmp441($tmp434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp443)));
org$frostlang$frostc$MethodRef* $tmp444 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp443);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:289
org$frostlang$frostc$MethodRef* $tmp445 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp446 = &$tmp445->value;
org$frostlang$frostc$MethodDecl* $tmp447 = *$tmp446;
org$frostlang$frostc$MethodRef* $tmp448 = *(&local7);
org$frostlang$frostc$MethodDecl** $tmp449 = &$tmp448->value;
org$frostlang$frostc$MethodDecl* $tmp450 = *$tmp449;
bool $tmp451 = $tmp447 == $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:290
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
org$frostlang$frostc$MethodRef* $tmp454 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q($tmp426);
org$frostlang$frostc$MethodRef* $tmp455 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
org$frostlang$frostc$MethodRef* $tmp456 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:293
frost$collections$Array* $tmp457 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp458 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp457, ((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q($tmp426);
org$frostlang$frostc$MethodRef* $tmp459 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:295
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp460 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp461 = *(&local6);
frost$core$Int $tmp462 = *(&local5);
frost$core$Int$wrapper* $tmp463;
$tmp463 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp463->value = $tmp462;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp460, ((frost$core$Object*) ((frost$collections$ListView*) $tmp461)), ((frost$core$Object*) $tmp463));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$Pair* $tmp464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local1) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$collections$Array* $tmp465 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local6) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
goto block14;
block14:;
goto block12;
block12:;
org$frostlang$frostc$Pair* $tmp466 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp467 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
org$frostlang$frostc$Type* $tmp468 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:299
org$frostlang$frostc$Pair* $tmp469 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
org$frostlang$frostc$Pair* $tmp470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp469;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp472 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
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
frost$core$Int* $tmp473 = &param1->$rawValue;
frost$core$Int $tmp474 = *$tmp473;
frost$core$Int $tmp475 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:310:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 == $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp481 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp482 = *$tmp481;
frost$core$UInt64* $tmp483 = (frost$core$UInt64*) (param1->$data + 24);
frost$core$UInt64 $tmp484 = *$tmp483;
*(&local2) = $tmp484;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:311
frost$core$UInt64 $tmp485 = *(&local2);
frost$core$Int64 $tmp486 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp487 = $tmp486.value;
frost$core$UInt64 $tmp488 = (frost$core$UInt64) {((uint64_t) $tmp487)};
uint64_t $tmp489 = $tmp485.value;
uint64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 > $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:314
frost$core$UInt64 $tmp494 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:314:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp495 = $tmp494.value;
frost$core$Int64 $tmp496 = (frost$core$Int64) {((int64_t) $tmp495)};
*(&local0) = $tmp496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:320
frost$core$Int* $tmp497 = &param3->$rawValue;
frost$core$Int $tmp498 = *$tmp497;
frost$core$Int $tmp499 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:321:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 == $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block10; else goto block11;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
org$frostlang$frostc$Position* $tmp505 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp506 = *$tmp505;
frost$core$UInt64* $tmp507 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp508 = *$tmp507;
*(&local3) = $tmp508;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:322
frost$core$UInt64 $tmp509 = *(&local3);
frost$core$Int64 $tmp510 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:322:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp511 = $tmp510.value;
frost$core$UInt64 $tmp512 = (frost$core$UInt64) {((uint64_t) $tmp511)};
uint64_t $tmp513 = $tmp509.value;
uint64_t $tmp514 = $tmp512.value;
bool $tmp515 = $tmp513 > $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:325
frost$core$UInt64 $tmp518 = *(&local3);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:325:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp519 = $tmp518.value;
frost$core$Int64 $tmp520 = (frost$core$Int64) {((int64_t) $tmp519)};
*(&local1) = $tmp520;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:331
frost$core$Int $tmp521 = param2.$rawValue;
frost$core$Int $tmp522 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:332:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522.value;
bool $tmp525 = $tmp523 == $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block18; else goto block19;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:333
frost$core$Int64 $tmp528 = *(&local0);
frost$core$Int64 $tmp529 = *(&local1);
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 + $tmp531;
frost$core$Int64 $tmp533 = (frost$core$Int64) {$tmp532};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:333:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp534 = $tmp533.value;
frost$core$UInt64 $tmp535 = (frost$core$UInt64) {((uint64_t) $tmp534)};
*(&local4) = $tmp535;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:334
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp536 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp537 = (frost$core$Int) {25u};
$fn539 $tmp538 = ($fn539) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp540 = $tmp538(param1);
frost$core$UInt64 $tmp541 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp536, $tmp537, $tmp540, $tmp541);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
return $tmp536;
block19:;
frost$core$Int $tmp542 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:336:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp543 = $tmp521.value;
int64_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 == $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:337
frost$core$Int64 $tmp548 = *(&local0);
frost$core$Int64 $tmp549 = *(&local1);
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550 - $tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {$tmp552};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:337:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp554 = $tmp553.value;
frost$core$UInt64 $tmp555 = (frost$core$UInt64) {((uint64_t) $tmp554)};
*(&local5) = $tmp555;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:338
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp556 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp557 = (frost$core$Int) {25u};
$fn559 $tmp558 = ($fn559) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp560 = $tmp558(param1);
frost$core$UInt64 $tmp561 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp556, $tmp557, $tmp560, $tmp561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
return $tmp556;
block23:;
frost$core$Int $tmp562 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:340:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp563 = $tmp521.value;
int64_t $tmp564 = $tmp562.value;
bool $tmp565 = $tmp563 == $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:341
frost$core$Int64 $tmp568 = *(&local0);
frost$core$Int64 $tmp569 = *(&local1);
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570 * $tmp571;
frost$core$Int64 $tmp573 = (frost$core$Int64) {$tmp572};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:341:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp574 = $tmp573.value;
frost$core$UInt64 $tmp575 = (frost$core$UInt64) {((uint64_t) $tmp574)};
*(&local6) = $tmp575;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:342
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp576 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp577 = (frost$core$Int) {25u};
$fn579 $tmp578 = ($fn579) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp580 = $tmp578(param1);
frost$core$UInt64 $tmp581 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp576, $tmp577, $tmp580, $tmp581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
return $tmp576;
block27:;
frost$core$Int $tmp582 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:344:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp583 = $tmp521.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 == $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:345
frost$core$Int64 $tmp588 = *(&local1);
frost$core$Int64 $tmp589 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:345:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589.value;
bool $tmp592 = $tmp590 == $tmp591;
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:346
$fn596 $tmp595 = ($fn596) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp597 = $tmp595(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp597, &$s598);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:349
frost$core$Int64 $tmp599 = *(&local0);
frost$core$Int64 $tmp600 = *(&local1);
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 / $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:349:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp605 = $tmp604.value;
frost$core$UInt64 $tmp606 = (frost$core$UInt64) {((uint64_t) $tmp605)};
*(&local7) = $tmp606;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp607 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp608 = (frost$core$Int) {25u};
$fn610 $tmp609 = ($fn610) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp611 = $tmp609(param1);
frost$core$UInt64 $tmp612 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp607, $tmp608, $tmp611, $tmp612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
return $tmp607;
block31:;
frost$core$Int $tmp613 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:352:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp614 = $tmp521.value;
int64_t $tmp615 = $tmp613.value;
bool $tmp616 = $tmp614 == $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:353
frost$core$Int64 $tmp619 = *(&local1);
frost$core$Int64 $tmp620 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:353:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:354
$fn627 $tmp626 = ($fn627) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp628 = $tmp626(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp628, &$s629);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:357
frost$core$Int64 $tmp630 = *(&local0);
frost$core$Int64 $tmp631 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Binary.frost:357:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632 % $tmp633;
frost$core$Int64 $tmp635 = (frost$core$Int64) {$tmp634};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:357:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp636 = $tmp635.value;
frost$core$UInt64 $tmp637 = (frost$core$UInt64) {((uint64_t) $tmp636)};
*(&local8) = $tmp637;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:358
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp638 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp639 = (frost$core$Int) {25u};
$fn641 $tmp640 = ($fn641) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp642 = $tmp640(param1);
frost$core$UInt64 $tmp643 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp638, $tmp639, $tmp642, $tmp643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
return $tmp638;
block38:;
frost$core$Int $tmp644 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:360:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp645 = $tmp521.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 == $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:361
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp650 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp651 = (frost$core$Int) {6u};
$fn653 $tmp652 = ($fn653) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp654 = $tmp652(param1);
frost$core$Int64 $tmp655 = *(&local0);
frost$core$Int64 $tmp656 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 == $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp650, $tmp651, $tmp654, $tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
return $tmp650;
block46:;
frost$core$Int $tmp661 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:363:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp662 = $tmp521.value;
int64_t $tmp663 = $tmp661.value;
bool $tmp664 = $tmp662 == $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:364
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp667 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp668 = (frost$core$Int) {6u};
$fn670 $tmp669 = ($fn670) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp671 = $tmp669(param1);
frost$core$Int64 $tmp672 = *(&local0);
frost$core$Int64 $tmp673 = *(&local1);
int64_t $tmp674 = $tmp672.value;
int64_t $tmp675 = $tmp673.value;
bool $tmp676 = $tmp674 != $tmp675;
frost$core$Bit $tmp677 = (frost$core$Bit) {$tmp676};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp667, $tmp668, $tmp671, $tmp677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
return $tmp667;
block50:;
frost$core$Int $tmp678 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:366:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp679 = $tmp521.value;
int64_t $tmp680 = $tmp678.value;
bool $tmp681 = $tmp679 == $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:367
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp684 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp685 = (frost$core$Int) {6u};
$fn687 $tmp686 = ($fn687) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp688 = $tmp686(param1);
frost$core$Int64 $tmp689 = *(&local0);
frost$core$Int64 $tmp690 = *(&local1);
int64_t $tmp691 = $tmp689.value;
int64_t $tmp692 = $tmp690.value;
bool $tmp693 = $tmp691 < $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp684, $tmp685, $tmp688, $tmp694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
return $tmp684;
block53:;
frost$core$Int $tmp695 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:369:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp696 = $tmp521.value;
int64_t $tmp697 = $tmp695.value;
bool $tmp698 = $tmp696 == $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp701 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp702 = (frost$core$Int) {6u};
$fn704 $tmp703 = ($fn704) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp705 = $tmp703(param1);
frost$core$Int64 $tmp706 = *(&local0);
frost$core$Int64 $tmp707 = *(&local1);
int64_t $tmp708 = $tmp706.value;
int64_t $tmp709 = $tmp707.value;
bool $tmp710 = $tmp708 > $tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {$tmp710};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp701, $tmp702, $tmp705, $tmp711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
return $tmp701;
block56:;
frost$core$Int $tmp712 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:372:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp713 = $tmp521.value;
int64_t $tmp714 = $tmp712.value;
bool $tmp715 = $tmp713 == $tmp714;
frost$core$Bit $tmp716 = (frost$core$Bit) {$tmp715};
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:373
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp718 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp719 = (frost$core$Int) {6u};
$fn721 $tmp720 = ($fn721) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp722 = $tmp720(param1);
frost$core$Int64 $tmp723 = *(&local0);
frost$core$Int64 $tmp724 = *(&local1);
int64_t $tmp725 = $tmp723.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 <= $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp718, $tmp719, $tmp722, $tmp728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
return $tmp718;
block59:;
frost$core$Int $tmp729 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:375:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp730 = $tmp521.value;
int64_t $tmp731 = $tmp729.value;
bool $tmp732 = $tmp730 == $tmp731;
frost$core$Bit $tmp733 = (frost$core$Bit) {$tmp732};
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:376
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp735 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp736 = (frost$core$Int) {6u};
$fn738 $tmp737 = ($fn738) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp739 = $tmp737(param1);
frost$core$Int64 $tmp740 = *(&local0);
frost$core$Int64 $tmp741 = *(&local1);
int64_t $tmp742 = $tmp740.value;
int64_t $tmp743 = $tmp741.value;
bool $tmp744 = $tmp742 >= $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp735, $tmp736, $tmp739, $tmp745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
return $tmp735;
block62:;
frost$core$Int $tmp746 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:378:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp747 = $tmp521.value;
int64_t $tmp748 = $tmp746.value;
bool $tmp749 = $tmp747 == $tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:379
frost$core$Int64 $tmp752 = *(&local0);
frost$core$Int64 $tmp753 = *(&local1);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Binary.frost:379:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
int64_t $tmp754 = $tmp752.value;
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754 & $tmp755;
frost$core$Int64 $tmp757 = (frost$core$Int64) {$tmp756};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:379:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp758 = $tmp757.value;
frost$core$UInt64 $tmp759 = (frost$core$UInt64) {((uint64_t) $tmp758)};
*(&local9) = $tmp759;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp760 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp761 = (frost$core$Int) {25u};
$fn763 $tmp762 = ($fn763) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp764 = $tmp762(param1);
frost$core$UInt64 $tmp765 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp760, $tmp761, $tmp764, $tmp765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
return $tmp760;
block65:;
frost$core$Int $tmp766 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:382:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp767 = $tmp521.value;
int64_t $tmp768 = $tmp766.value;
bool $tmp769 = $tmp767 == $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:383
frost$core$Int64 $tmp772 = *(&local0);
frost$core$Int64 $tmp773 = *(&local1);
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Binary.frost:383:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774 | $tmp775;
frost$core$Int64 $tmp777 = (frost$core$Int64) {$tmp776};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:383:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp778 = $tmp777.value;
frost$core$UInt64 $tmp779 = (frost$core$UInt64) {((uint64_t) $tmp778)};
*(&local10) = $tmp779;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:384
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp780 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp781 = (frost$core$Int) {25u};
$fn783 $tmp782 = ($fn783) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp784 = $tmp782(param1);
frost$core$UInt64 $tmp785 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp780, $tmp781, $tmp784, $tmp785);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
return $tmp780;
block70:;
frost$core$Int $tmp786 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:386:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp787 = $tmp521.value;
int64_t $tmp788 = $tmp786.value;
bool $tmp789 = $tmp787 == $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:387
frost$core$Int64 $tmp792 = *(&local0);
frost$core$Int64 $tmp793 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Binary.frost:387:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793.value;
int64_t $tmp796 = $tmp794 ^ $tmp795;
frost$core$Int64 $tmp797 = (frost$core$Int64) {$tmp796};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:387:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp798 = $tmp797.value;
frost$core$UInt64 $tmp799 = (frost$core$UInt64) {((uint64_t) $tmp798)};
*(&local11) = $tmp799;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:388
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp800 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp801 = (frost$core$Int) {25u};
$fn803 $tmp802 = ($fn803) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp804 = $tmp802(param1);
frost$core$UInt64 $tmp805 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp800, $tmp801, $tmp804, $tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
return $tmp800;
block75:;
frost$core$Int $tmp806 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:390:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp807 = $tmp521.value;
int64_t $tmp808 = $tmp806.value;
bool $tmp809 = $tmp807 == $tmp808;
frost$core$Bit $tmp810 = (frost$core$Bit) {$tmp809};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:391
frost$core$Int64 $tmp812 = *(&local0);
frost$core$Int64 $tmp813 = *(&local1);
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Binary.frost:391:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 << $tmp815;
frost$core$Int64 $tmp817 = (frost$core$Int64) {$tmp816};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:391:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp818 = $tmp817.value;
frost$core$UInt64 $tmp819 = (frost$core$UInt64) {((uint64_t) $tmp818)};
*(&local12) = $tmp819;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:392
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp820 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp821 = (frost$core$Int) {25u};
$fn823 $tmp822 = ($fn823) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp824 = $tmp822(param1);
frost$core$UInt64 $tmp825 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp820, $tmp821, $tmp824, $tmp825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
return $tmp820;
block80:;
frost$core$Int $tmp826 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:394:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp827 = $tmp521.value;
int64_t $tmp828 = $tmp826.value;
bool $tmp829 = $tmp827 == $tmp828;
frost$core$Bit $tmp830 = (frost$core$Bit) {$tmp829};
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block84; else goto block17;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:395
frost$core$Int64 $tmp832 = *(&local0);
frost$core$Int64 $tmp833 = *(&local1);
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from Binary.frost:395:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
int64_t $tmp834 = $tmp832.value;
int64_t $tmp835 = $tmp833.value;
int64_t $tmp836 = $tmp834 >> $tmp835;
frost$core$Int64 $tmp837 = (frost$core$Int64) {$tmp836};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:395:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp838 = $tmp837.value;
frost$core$UInt64 $tmp839 = (frost$core$UInt64) {((uint64_t) $tmp838)};
*(&local13) = $tmp839;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:396
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp840 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp841 = (frost$core$Int) {25u};
$fn843 $tmp842 = ($fn843) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp844 = $tmp842(param1);
frost$core$UInt64 $tmp845 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp840, $tmp841, $tmp844, $tmp845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
return $tmp840;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:399
$fn847 $tmp846 = ($fn847) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp848 = $tmp846(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp849;
$tmp849 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp849->value = param2;
$fn851 $tmp850 = ($fn851) ((frost$core$Object*) $tmp849)->$class->vtable[0];
frost$core$String* $tmp852 = $tmp850(((frost$core$Object*) $tmp849));
frost$core$String* $tmp853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s854, $tmp852);
frost$core$String* $tmp855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp853, &$s856);
frost$core$String* $tmp857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp855, &$s858);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp848, $tmp857);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
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
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp859;
$tmp859 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp859->value = param2;
frost$core$Int $tmp860 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:408:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp861 = &(&local1)->$rawValue;
*$tmp861 = $tmp860;
org$frostlang$frostc$expression$Binary$Operator $tmp862 = *(&local1);
*(&local0) = $tmp862;
org$frostlang$frostc$expression$Binary$Operator $tmp863 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp864;
$tmp864 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp864->value = $tmp863;
ITable* $tmp865 = ((frost$core$Equatable*) $tmp859)->$class->itable;
while ($tmp865->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp865 = $tmp865->next;
}
$fn867 $tmp866 = $tmp865->methods[1];
frost$core$Bit $tmp868 = $tmp866(((frost$core$Equatable*) $tmp859), ((frost$core$Equatable*) $tmp864));
bool $tmp869 = $tmp868.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp864)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp859)));
if ($tmp869) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:411
frost$core$Int* $tmp870 = &param1->$rawValue;
frost$core$Int $tmp871 = *$tmp870;
frost$core$Int $tmp872 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:412:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp873 = $tmp871.value;
int64_t $tmp874 = $tmp872.value;
bool $tmp875 = $tmp873 == $tmp874;
frost$core$Bit $tmp876 = (frost$core$Bit) {$tmp875};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp878 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp879 = *$tmp878;
*(&local2) = $tmp879;
frost$core$String** $tmp880 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp881 = *$tmp880;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
frost$core$String* $tmp882 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local3) = $tmp881;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:413
frost$core$Int* $tmp883 = &param3->$rawValue;
frost$core$Int $tmp884 = *$tmp883;
frost$core$Int $tmp885 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:414:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp886 = $tmp884.value;
int64_t $tmp887 = $tmp885.value;
bool $tmp888 = $tmp886 == $tmp887;
frost$core$Bit $tmp889 = (frost$core$Bit) {$tmp888};
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp891 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp892 = *$tmp891;
frost$core$String** $tmp893 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp894 = *$tmp893;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$String* $tmp895 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local4) = $tmp894;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp896 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp897 = (frost$core$Int) {40u};
org$frostlang$frostc$Position $tmp898 = *(&local2);
frost$core$String* $tmp899 = *(&local3);
frost$core$String* $tmp900 = *(&local4);
frost$core$String* $tmp901 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp899, $tmp900);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp896, $tmp897, $tmp898, $tmp901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$String* $tmp902 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp903 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local3) = ((frost$core$String*) NULL);
return $tmp896;
block7:;
frost$core$String* $tmp904 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:425
frost$core$Int* $tmp905 = &param1->$rawValue;
frost$core$Int $tmp906 = *$tmp905;
frost$core$Int $tmp907 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:426:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp908 = $tmp906.value;
int64_t $tmp909 = $tmp907.value;
bool $tmp910 = $tmp908 == $tmp909;
frost$core$Bit $tmp911 = (frost$core$Bit) {$tmp910};
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:427
org$frostlang$frostc$ASTNode* $tmp913 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
return $tmp913;
block3:;
frost$core$Int $tmp914 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp915 = $tmp906.value;
int64_t $tmp916 = $tmp914.value;
bool $tmp917 = $tmp915 == $tmp916;
frost$core$Bit $tmp918 = (frost$core$Bit) {$tmp917};
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:430
org$frostlang$frostc$ASTNode* $tmp920 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
return $tmp920;
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
org$frostlang$frostc$ASTNode* $tmp921 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
org$frostlang$frostc$ASTNode* $tmp922 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local0) = $tmp921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:442
org$frostlang$frostc$ASTNode* $tmp923 = *(&local0);
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923 != NULL};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:443
org$frostlang$frostc$ASTNode* $tmp926 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp927 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp926, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
org$frostlang$frostc$ASTNode* $tmp928 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp927;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:445
frost$core$Int $tmp929 = param3.$rawValue;
frost$core$Int $tmp930 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:446:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930.value;
bool $tmp933 = $tmp931 == $tmp932;
frost$core$Bit $tmp934 = (frost$core$Bit) {$tmp933};
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:447
org$frostlang$frostc$Scanner** $tmp936 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp937 = *$tmp936;
org$frostlang$frostc$Type* $tmp938 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp937, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
org$frostlang$frostc$Type* $tmp939 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local1) = $tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:448
org$frostlang$frostc$Type* $tmp940 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp941 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp940);
org$frostlang$frostc$IR$Value* $tmp942 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp941, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
org$frostlang$frostc$Type* $tmp943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp942;
block5:;
frost$core$Int $tmp945 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp946 = $tmp929.value;
int64_t $tmp947 = $tmp945.value;
bool $tmp948 = $tmp946 == $tmp947;
frost$core$Bit $tmp949 = (frost$core$Bit) {$tmp948};
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block7; else goto block8;
block8:;
frost$core$Int $tmp951 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp952 = $tmp929.value;
int64_t $tmp953 = $tmp951.value;
bool $tmp954 = $tmp952 == $tmp953;
frost$core$Bit $tmp955 = (frost$core$Bit) {$tmp954};
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block7; else goto block10;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:451
org$frostlang$frostc$IR$Value* $tmp957 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
org$frostlang$frostc$ASTNode* $tmp958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp957;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:454
org$frostlang$frostc$Pair* $tmp959 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
org$frostlang$frostc$Pair* $tmp960 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local2) = $tmp959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:455
org$frostlang$frostc$Pair* $tmp961 = *(&local2);
frost$core$Bit $tmp962 = (frost$core$Bit) {$tmp961 != NULL};
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:456
org$frostlang$frostc$Pair* $tmp964 = *(&local2);
frost$core$Object** $tmp965 = &$tmp964->first;
frost$core$Object* $tmp966 = *$tmp965;
ITable* $tmp967 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp966))->$class->itable;
while ($tmp967->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp967 = $tmp967->next;
}
$fn969 $tmp968 = $tmp967->methods[0];
frost$core$Int $tmp970 = $tmp968(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp966)));
frost$core$Int $tmp971 = (frost$core$Int) {1u};
int64_t $tmp972 = $tmp970.value;
int64_t $tmp973 = $tmp971.value;
bool $tmp974 = $tmp972 > $tmp973;
frost$core$Bit $tmp975 = (frost$core$Bit) {$tmp974};
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:457
org$frostlang$frostc$Pair* $tmp977 = *(&local2);
frost$core$Object** $tmp978 = &$tmp977->first;
frost$core$Object* $tmp979 = *$tmp978;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp980 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp981 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp980, $tmp981);
frost$collections$Array$add$frost$collections$Array$T($tmp980, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp980, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp979), ((frost$collections$ListView*) $tmp980), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp982 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp983 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:460
org$frostlang$frostc$Pair* $tmp984 = *(&local2);
frost$core$Object** $tmp985 = &$tmp984->first;
frost$core$Object* $tmp986 = *$tmp985;
frost$core$Int $tmp987 = (frost$core$Int) {0u};
ITable* $tmp988 = ((frost$collections$ListView*) $tmp986)->$class->itable;
while ($tmp988->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp988 = $tmp988->next;
}
$fn990 $tmp989 = $tmp988->methods[0];
frost$core$Object* $tmp991 = $tmp989(((frost$collections$ListView*) $tmp986), $tmp987);
org$frostlang$frostc$MethodDecl** $tmp992 = &((org$frostlang$frostc$MethodRef*) $tmp991)->value;
org$frostlang$frostc$MethodDecl* $tmp993 = *$tmp992;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
org$frostlang$frostc$MethodDecl* $tmp994 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local3) = $tmp993;
frost$core$Frost$unref$frost$core$Object$Q($tmp991);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:461
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp995;
$tmp995 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp995->value = param3;
frost$core$Int $tmp996 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:461:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp997 = &(&local5)->$rawValue;
*$tmp997 = $tmp996;
org$frostlang$frostc$expression$Binary$Operator $tmp998 = *(&local5);
*(&local4) = $tmp998;
org$frostlang$frostc$expression$Binary$Operator $tmp999 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1000;
$tmp1000 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1000->value = $tmp999;
ITable* $tmp1001 = ((frost$core$Equatable*) $tmp995)->$class->itable;
while ($tmp1001->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1001 = $tmp1001->next;
}
$fn1003 $tmp1002 = $tmp1001->methods[0];
frost$core$Bit $tmp1004 = $tmp1002(((frost$core$Equatable*) $tmp995), ((frost$core$Equatable*) $tmp1000));
bool $tmp1005 = $tmp1004.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1000)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp995)));
if ($tmp1005) goto block18; else goto block17;
block18:;
org$frostlang$frostc$MethodDecl* $tmp1006 = *(&local3);
frost$core$Weak** $tmp1007 = &$tmp1006->owner;
frost$core$Weak* $tmp1008 = *$tmp1007;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:461:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1009 = &$tmp1008->_valid;
frost$core$Bit $tmp1010 = *$tmp1009;
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1012 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1013, $tmp1012);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1014 = &$tmp1008->value;
frost$core$Object* $tmp1015 = *$tmp1014;
frost$core$Frost$ref$frost$core$Object$Q($tmp1015);
// begin inline call to function org.frostlang.frostc.Compiler.isTuple(cl:org.frostlang.frostc.ClassDecl):frost.core.Bit from Binary.frost:461:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2659
frost$core$String** $tmp1016 = &((org$frostlang$frostc$ClassDecl*) $tmp1015)->name;
frost$core$String* $tmp1017 = *$tmp1016;
frost$core$Bit $tmp1018 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1017, &$s1019);
bool $tmp1020 = $tmp1018.value;
if ($tmp1020) goto block25; else goto block26;
block25:;
*(&local7) = $tmp1018;
goto block27;
block26:;
frost$core$String** $tmp1021 = &((org$frostlang$frostc$ClassDecl*) $tmp1015)->name;
frost$core$String* $tmp1022 = *$tmp1021;
frost$core$Bit $tmp1023 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1022, &$s1024);
*(&local7) = $tmp1023;
goto block27;
block27:;
frost$core$Bit $tmp1025 = *(&local7);
bool $tmp1026 = $tmp1025.value;
if ($tmp1026) goto block28; else goto block29;
block28:;
*(&local6) = $tmp1025;
goto block30;
block29:;
frost$core$String** $tmp1027 = &((org$frostlang$frostc$ClassDecl*) $tmp1015)->name;
frost$core$String* $tmp1028 = *$tmp1027;
frost$core$Bit $tmp1029 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1028, &$s1030);
*(&local6) = $tmp1029;
goto block30;
block30:;
frost$core$Bit $tmp1031 = *(&local6);
bool $tmp1032 = $tmp1031.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1015);
if ($tmp1032) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:462
frost$core$Int* $tmp1033 = &param4->$rawValue;
frost$core$Int $tmp1034 = *$tmp1033;
frost$core$Int $tmp1035 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:463:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1036 = $tmp1034.value;
int64_t $tmp1037 = $tmp1035.value;
bool $tmp1038 = $tmp1036 == $tmp1037;
frost$core$Bit $tmp1039 = (frost$core$Bit) {$tmp1038};
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Position* $tmp1041 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1042 = *$tmp1041;
frost$core$UInt64* $tmp1043 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1044 = *$tmp1043;
*(&local8) = $tmp1044;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:464
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1045 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1046 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1045, $tmp1046);
org$frostlang$frostc$IR$Value* $tmp1047 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1045);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
org$frostlang$frostc$IR$Value* $tmp1048 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local9) = $tmp1047;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:466
org$frostlang$frostc$IR$Value* $tmp1049 = *(&local9);
frost$core$Bit $tmp1050 = (frost$core$Bit) {$tmp1049 == NULL};
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1052 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1053 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1054 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:469
org$frostlang$frostc$IR$Value* $tmp1056 = *(&local9);
frost$core$UInt64 $tmp1057 = *(&local8);
frost$core$UInt64$wrapper* $tmp1058;
$tmp1058 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1058->value = $tmp1057;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:470:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1060 $tmp1059 = ($fn1060) ((frost$core$Object*) $tmp1058)->$class->vtable[0];
frost$core$String* $tmp1061 = $tmp1059(((frost$core$Object*) $tmp1058));
frost$core$String* $tmp1062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1063, $tmp1061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$String* $tmp1064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1062, &$s1065);
org$frostlang$frostc$IR$Value* $tmp1066 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1056, $tmp1064);
org$frostlang$frostc$IR$Value* $tmp1067 = *(&local9);
$fn1069 $tmp1068 = ($fn1069) $tmp1067->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1070 = $tmp1068($tmp1067);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:471:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1071 = &$tmp1070->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1072 = *$tmp1071;
frost$core$Bit $tmp1073 = (frost$core$Bit) {$tmp1072 != NULL};
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block38; else goto block39;
block39:;
frost$core$Int $tmp1075 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1076, $tmp1075);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1077 = &$tmp1070->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1078 = *$tmp1077;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$UInt64 $tmp1079 = *(&local8);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:471:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1080 = $tmp1079.value;
frost$core$Int $tmp1081 = (frost$core$Int) {((int64_t) $tmp1080)};
frost$core$Object* $tmp1082 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1078, $tmp1081);
org$frostlang$frostc$IR$Value* $tmp1083 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1066, ((org$frostlang$frostc$Type*) $tmp1082));
org$frostlang$frostc$IR$Value* $tmp1084 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1083, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q($tmp1082);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
org$frostlang$frostc$IR$Value* $tmp1085 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1086 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1088 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1084;
block31:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:475
org$frostlang$frostc$MethodDecl* $tmp1089 = *(&local3);
org$frostlang$frostc$Annotations** $tmp1090 = &$tmp1089->annotations;
org$frostlang$frostc$Annotations* $tmp1091 = *$tmp1090;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:475:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp1092 = &$tmp1091->flags;
frost$core$Int $tmp1093 = *$tmp1092;
frost$core$Int $tmp1094 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1095 = $tmp1093.value;
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095 & $tmp1096;
frost$core$Int $tmp1098 = (frost$core$Int) {$tmp1097};
frost$core$Int $tmp1099 = (frost$core$Int) {0u};
int64_t $tmp1100 = $tmp1098.value;
int64_t $tmp1101 = $tmp1099.value;
bool $tmp1102 = $tmp1100 != $tmp1101;
frost$core$Bit $tmp1103 = (frost$core$Bit) {$tmp1102};
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:476
org$frostlang$frostc$MethodDecl* $tmp1105 = *(&local3);
frost$collections$Array** $tmp1106 = &$tmp1105->parameters;
frost$collections$Array* $tmp1107 = *$tmp1106;
ITable* $tmp1108 = ((frost$collections$CollectionView*) $tmp1107)->$class->itable;
while ($tmp1108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1108 = $tmp1108->next;
}
$fn1110 $tmp1109 = $tmp1108->methods[0];
frost$core$Int $tmp1111 = $tmp1109(((frost$collections$CollectionView*) $tmp1107));
frost$core$Int $tmp1112 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:476:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1113 = $tmp1111.value;
int64_t $tmp1114 = $tmp1112.value;
bool $tmp1115 = $tmp1113 == $tmp1114;
frost$core$Bit $tmp1116 = (frost$core$Bit) {$tmp1115};
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:477
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1118 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1119 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1120 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1121 = *(&local3);
org$frostlang$frostc$Type* $tmp1122 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1121, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1118, $tmp1119, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1120, $tmp1122);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1123 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1124 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp1123, $tmp1124);
frost$collections$Array$add$frost$collections$Array$T($tmp1123, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp1123, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1125 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1118, ((frost$collections$ListView*) $tmp1123), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
org$frostlang$frostc$MethodDecl* $tmp1126 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1125;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:480
org$frostlang$frostc$MethodDecl* $tmp1129 = *(&local3);
frost$collections$Array** $tmp1130 = &$tmp1129->parameters;
frost$collections$Array* $tmp1131 = *$tmp1130;
ITable* $tmp1132 = ((frost$collections$CollectionView*) $tmp1131)->$class->itable;
while ($tmp1132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1132 = $tmp1132->next;
}
$fn1134 $tmp1133 = $tmp1132->methods[0];
frost$core$Int $tmp1135 = $tmp1133(((frost$collections$CollectionView*) $tmp1131));
frost$core$Int $tmp1136 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:480:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1137 = $tmp1135.value;
int64_t $tmp1138 = $tmp1136.value;
bool $tmp1139 = $tmp1137 == $tmp1138;
frost$core$Bit $tmp1140 = (frost$core$Bit) {$tmp1139};
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1142 = (frost$core$Int) {480u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1143, $tmp1142);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:481
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1144 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1145 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1146 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1147 = *(&local3);
org$frostlang$frostc$Type* $tmp1148 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1147, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1144, $tmp1145, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1146, $tmp1148);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1149 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1150 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1149, $tmp1150);
frost$collections$Array$add$frost$collections$Array$T($tmp1149, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1151 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1144, ((frost$collections$ListView*) $tmp1149), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
org$frostlang$frostc$MethodDecl* $tmp1152 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1151;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:484
org$frostlang$frostc$MethodDecl* $tmp1155 = *(&local3);
frost$core$Weak** $tmp1156 = &$tmp1155->owner;
frost$core$Weak* $tmp1157 = *$tmp1156;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:484:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1158 = &$tmp1157->_valid;
frost$core$Bit $tmp1159 = *$tmp1158;
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block55; else goto block56;
block56:;
frost$core$Int $tmp1161 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1162, $tmp1161);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1163 = &$tmp1157->value;
frost$core$Object* $tmp1164 = *$tmp1163;
frost$core$Frost$ref$frost$core$Object$Q($tmp1164);
frost$core$String** $tmp1165 = &((org$frostlang$frostc$ClassDecl*) $tmp1164)->name;
frost$core$String* $tmp1166 = *$tmp1165;
frost$core$Bit $tmp1167 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1166, &$s1168);
bool $tmp1169 = $tmp1167.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1164);
if ($tmp1169) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:485
org$frostlang$frostc$MethodDecl* $tmp1170 = *(&local3);
frost$core$String** $tmp1171 = &((org$frostlang$frostc$Symbol*) $tmp1170)->name;
frost$core$String* $tmp1172 = *$tmp1171;
frost$core$Bit $tmp1173 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1172, &$s1174);
bool $tmp1175 = $tmp1173.value;
if ($tmp1175) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:486
org$frostlang$frostc$IR$Value* $tmp1176 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
org$frostlang$frostc$MethodDecl* $tmp1177 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1178 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1176;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:488
org$frostlang$frostc$MethodDecl* $tmp1180 = *(&local3);
frost$core$String** $tmp1181 = &((org$frostlang$frostc$Symbol*) $tmp1180)->name;
frost$core$String* $tmp1182 = *$tmp1181;
frost$core$Bit $tmp1183 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1182, &$s1184);
bool $tmp1185 = $tmp1183.value;
if ($tmp1185) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:489
org$frostlang$frostc$IR$Value* $tmp1186 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
org$frostlang$frostc$MethodDecl* $tmp1187 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1188 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1186;
block60:;
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:492
frost$collections$CollectionView* $tmp1190 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
org$frostlang$frostc$MethodDecl* $tmp1191 = *(&local3);
frost$core$Weak** $tmp1192 = &$tmp1191->owner;
frost$core$Weak* $tmp1193 = *$tmp1192;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:492:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1194 = &$tmp1193->_valid;
frost$core$Bit $tmp1195 = *$tmp1194;
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block63; else goto block64;
block64:;
frost$core$Int $tmp1197 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1198, $tmp1197);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1199 = &$tmp1193->value;
frost$core$Object* $tmp1200 = *$tmp1199;
frost$core$Frost$ref$frost$core$Object$Q($tmp1200);
// begin inline call to function org.frostlang.frostc.Compiler.findType(start:frost.collections.CollectionView<org.frostlang.frostc.Type>, target:org.frostlang.frostc.ClassDecl):org.frostlang.frostc.Type? from Binary.frost:492:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4432
ITable* $tmp1201 = ((frost$collections$Iterable*) $tmp1190)->$class->itable;
while ($tmp1201->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1201 = $tmp1201->next;
}
$fn1203 $tmp1202 = $tmp1201->methods[0];
frost$collections$Iterator* $tmp1204 = $tmp1202(((frost$collections$Iterable*) $tmp1190));
goto block66;
block66:;
ITable* $tmp1205 = $tmp1204->$class->itable;
while ($tmp1205->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1205 = $tmp1205->next;
}
$fn1207 $tmp1206 = $tmp1205->methods[0];
frost$core$Bit $tmp1208 = $tmp1206($tmp1204);
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block68; else goto block67;
block67:;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1210 = $tmp1204->$class->itable;
while ($tmp1210->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1210 = $tmp1210->next;
}
$fn1212 $tmp1211 = $tmp1210->methods[1];
frost$core$Object* $tmp1213 = $tmp1211($tmp1204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1213)));
org$frostlang$frostc$Type* $tmp1214 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1213);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4433
org$frostlang$frostc$Type* $tmp1215 = *(&local11);
org$frostlang$frostc$Type* $tmp1216 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1215, ((org$frostlang$frostc$ClassDecl*) $tmp1200));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
org$frostlang$frostc$Type* $tmp1217 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local12) = $tmp1216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4434
org$frostlang$frostc$Type* $tmp1218 = *(&local12);
frost$core$Bit $tmp1219 = (frost$core$Bit) {$tmp1218 != NULL};
bool $tmp1220 = $tmp1219.value;
if ($tmp1220) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4435
org$frostlang$frostc$Type* $tmp1221 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
org$frostlang$frostc$Type* $tmp1222 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1213);
org$frostlang$frostc$Type* $tmp1223 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local10) = $tmp1221;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
goto block65;
block70:;
org$frostlang$frostc$Type* $tmp1224 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1213);
org$frostlang$frostc$Type* $tmp1225 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4438
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
goto block65;
block65:;
org$frostlang$frostc$Type* $tmp1226 = *(&local10);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
org$frostlang$frostc$Type* $tmp1227 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local13) = $tmp1226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:493
org$frostlang$frostc$Type* $tmp1228 = *(&local13);
frost$core$Bit $tmp1229 = (frost$core$Bit) {$tmp1228 != NULL};
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block71; else goto block72;
block72:;
frost$core$Int $tmp1231 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1232, $tmp1231);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:494
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1233 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1234 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp1235 = *(&local13);
frost$core$Bit $tmp1236 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1233, $tmp1234, $tmp1235, $tmp1236);
org$frostlang$frostc$IR$Value* $tmp1237 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1233);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local14) = $tmp1237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:495
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local14);
frost$core$Bit $tmp1240 = (frost$core$Bit) {$tmp1239 == NULL};
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1242 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1243 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1244 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1200);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
org$frostlang$frostc$MethodDecl* $tmp1245 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:498
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1248 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1249 = (frost$core$Int) {9u};
org$frostlang$frostc$IR$Value* $tmp1250 = *(&local14);
org$frostlang$frostc$MethodDecl* $tmp1251 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1252 = *(&local3);
org$frostlang$frostc$Type* $tmp1253 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1252, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1248, $tmp1249, $tmp1250, $tmp1251, $tmp1253);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1254 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1255 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1254, $tmp1255);
frost$collections$Array$add$frost$collections$Array$T($tmp1254, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1256 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1248, ((frost$collections$ListView*) $tmp1254), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
org$frostlang$frostc$IR$Value* $tmp1257 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1258 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1259 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1200);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
org$frostlang$frostc$MethodDecl* $tmp1260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1261 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1256;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:501
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1263 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1264 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1263, $tmp1264);
org$frostlang$frostc$IR$Value* $tmp1265 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1263);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
org$frostlang$frostc$IR$Value* $tmp1266 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local15) = $tmp1265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:502
org$frostlang$frostc$IR$Value* $tmp1267 = *(&local15);
frost$core$Bit $tmp1268 = (frost$core$Bit) {$tmp1267 == NULL};
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1270 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1273;
$tmp1273 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1273->value = param3;
frost$core$Int $tmp1274 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:505:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp1275 = &(&local17)->$rawValue;
*$tmp1275 = $tmp1274;
org$frostlang$frostc$expression$Binary$Operator $tmp1276 = *(&local17);
*(&local16) = $tmp1276;
org$frostlang$frostc$expression$Binary$Operator $tmp1277 = *(&local16);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1278;
$tmp1278 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1278->value = $tmp1277;
ITable* $tmp1279 = ((frost$core$Equatable*) $tmp1273)->$class->itable;
while ($tmp1279->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1279 = $tmp1279->next;
}
$fn1281 $tmp1280 = $tmp1279->methods[0];
frost$core$Bit $tmp1282 = $tmp1280(((frost$core$Equatable*) $tmp1273), ((frost$core$Equatable*) $tmp1278));
bool $tmp1283 = $tmp1282.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1278)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1273)));
if ($tmp1283) goto block79; else goto block78;
block79:;
org$frostlang$frostc$IR$Value* $tmp1284 = *(&local15);
$fn1286 $tmp1285 = ($fn1286) $tmp1284->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1287 = $tmp1285($tmp1284);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Binary.frost:505:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:374
org$frostlang$frostc$Type$Kind* $tmp1288 = &$tmp1287->typeKind;
org$frostlang$frostc$Type$Kind $tmp1289 = *$tmp1288;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1290;
$tmp1290 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1290->value = $tmp1289;
frost$core$Int $tmp1291 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:374:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1292 = &(&local19)->$rawValue;
*$tmp1292 = $tmp1291;
org$frostlang$frostc$Type$Kind $tmp1293 = *(&local19);
*(&local18) = $tmp1293;
org$frostlang$frostc$Type$Kind $tmp1294 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1295;
$tmp1295 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1295->value = $tmp1294;
ITable* $tmp1296 = ((frost$core$Equatable*) $tmp1290)->$class->itable;
while ($tmp1296->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[0];
frost$core$Bit $tmp1299 = $tmp1297(((frost$core$Equatable*) $tmp1290), ((frost$core$Equatable*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1295)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1290)));
bool $tmp1300 = $tmp1299.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
if ($tmp1300) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:506
frost$core$Int* $tmp1301 = &param4->$rawValue;
frost$core$Int $tmp1302 = *$tmp1301;
frost$core$Int $tmp1303 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:507:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1304 = $tmp1302.value;
int64_t $tmp1305 = $tmp1303.value;
bool $tmp1306 = $tmp1304 == $tmp1305;
frost$core$Bit $tmp1307 = (frost$core$Bit) {$tmp1306};
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block84; else goto block83;
block84:;
org$frostlang$frostc$Position* $tmp1309 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1310 = *$tmp1309;
frost$core$UInt64* $tmp1311 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1312 = *$tmp1311;
*(&local20) = $tmp1312;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:508
org$frostlang$frostc$IR$Value* $tmp1313 = *(&local15);
frost$core$UInt64 $tmp1314 = *(&local20);
frost$core$UInt64$wrapper* $tmp1315;
$tmp1315 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1315->value = $tmp1314;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:509:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1317 $tmp1316 = ($fn1317) ((frost$core$Object*) $tmp1315)->$class->vtable[0];
frost$core$String* $tmp1318 = $tmp1316(((frost$core$Object*) $tmp1315));
frost$core$String* $tmp1319 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1320, $tmp1318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$String* $tmp1321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1319, &$s1322);
org$frostlang$frostc$IR$Value* $tmp1323 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1313, $tmp1321);
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local15);
$fn1326 $tmp1325 = ($fn1326) $tmp1324->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1327 = $tmp1325($tmp1324);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:510:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1328 = &$tmp1327->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1329 = *$tmp1328;
frost$core$Bit $tmp1330 = (frost$core$Bit) {$tmp1329 != NULL};
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block88; else goto block89;
block89:;
frost$core$Int $tmp1332 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1333, $tmp1332);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1334 = &$tmp1327->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1335 = *$tmp1334;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$UInt64 $tmp1336 = *(&local20);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:510:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1337 = $tmp1336.value;
frost$core$Int $tmp1338 = (frost$core$Int) {((int64_t) $tmp1337)};
frost$core$Object* $tmp1339 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1335, $tmp1338);
org$frostlang$frostc$IR$Value* $tmp1340 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1323, ((org$frostlang$frostc$Type*) $tmp1339));
org$frostlang$frostc$IR$Value* $tmp1341 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1340, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q($tmp1339);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
org$frostlang$frostc$IR$Value* $tmp1342 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1343 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1344 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1341;
block83:;
goto block78;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:514
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1345 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1346 = (frost$core$Int) {3u};
org$frostlang$frostc$IR$Value* $tmp1347 = *(&local15);
$fn1349 $tmp1348 = ($fn1349) $tmp1347->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1350 = $tmp1348($tmp1347);
frost$core$Bit $tmp1351 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1345, $tmp1346, $tmp1350, $tmp1351);
org$frostlang$frostc$IR$Value* $tmp1352 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1345);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
org$frostlang$frostc$IR$Value* $tmp1353 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local21) = $tmp1352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:516
org$frostlang$frostc$IR$Value* $tmp1354 = *(&local21);
frost$core$Bit $tmp1355 = (frost$core$Bit) {$tmp1354 == NULL};
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1357 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1358 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1359 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:519
org$frostlang$frostc$IR$Value* $tmp1361 = *(&local15);
$fn1363 $tmp1362 = ($fn1363) $tmp1361->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1364 = $tmp1362($tmp1361);
org$frostlang$frostc$Type** $tmp1365 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1366 = *$tmp1365;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Binary.frost:519:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1367 = &((org$frostlang$frostc$Symbol*) $tmp1364)->name;
frost$core$String* $tmp1368 = *$tmp1367;
frost$core$String** $tmp1369 = &((org$frostlang$frostc$Symbol*) $tmp1366)->name;
frost$core$String* $tmp1370 = *$tmp1369;
frost$core$Bit $tmp1371 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1368, $tmp1370);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Type$Kind* $tmp1373 = &$tmp1364->typeKind;
org$frostlang$frostc$Type$Kind $tmp1374 = *$tmp1373;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1375;
$tmp1375 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1375->value = $tmp1374;
org$frostlang$frostc$Type$Kind* $tmp1376 = &$tmp1366->typeKind;
org$frostlang$frostc$Type$Kind $tmp1377 = *$tmp1376;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1378;
$tmp1378 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1378->value = $tmp1377;
ITable* $tmp1379 = ((frost$core$Equatable*) $tmp1375)->$class->itable;
while ($tmp1379->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[0];
frost$core$Bit $tmp1382 = $tmp1380(((frost$core$Equatable*) $tmp1375), ((frost$core$Equatable*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1378)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1375)));
*(&local22) = $tmp1382;
goto block99;
block98:;
*(&local22) = $tmp1371;
goto block99;
block99:;
frost$core$Bit $tmp1383 = *(&local22);
bool $tmp1384 = $tmp1383.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
if ($tmp1384) goto block93; else goto block95;
block95:;
org$frostlang$frostc$IR$Value* $tmp1385 = *(&local15);
$fn1387 $tmp1386 = ($fn1387) $tmp1385->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1388 = $tmp1386($tmp1385);
frost$core$Bit $tmp1389 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1388);
bool $tmp1390 = $tmp1389.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
if ($tmp1390) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:521
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1391 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1392 = (frost$core$Int) {5u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1391, $tmp1392, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1393 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1391);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
org$frostlang$frostc$Type* $tmp1394 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local23) = $tmp1393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:523
org$frostlang$frostc$Type* $tmp1395 = *(&local23);
frost$core$Bit $tmp1396 = (frost$core$Bit) {$tmp1395 != NULL};
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:524
org$frostlang$frostc$IR** $tmp1398 = &param0->ir;
org$frostlang$frostc$IR* $tmp1399 = *$tmp1398;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1400 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1401 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Value* $tmp1402 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp1403 = *(&local21);
org$frostlang$frostc$Type* $tmp1404 = *(&local23);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1400, $tmp1401, param1, $tmp1402, param3, $tmp1403, $tmp1404);
$fn1406 $tmp1405 = ($fn1406) $tmp1399->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1407 = $tmp1405($tmp1399, $tmp1400);
*(&local24) = $tmp1407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:526
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1408 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1409 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp1410 = *(&local24);
org$frostlang$frostc$Type* $tmp1411 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1408, $tmp1409, $tmp1410, $tmp1411);
org$frostlang$frostc$IR$Value* $tmp1412 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1408, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
org$frostlang$frostc$Type* $tmp1413 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1414 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1415 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1416 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1417 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1412;
block101:;
org$frostlang$frostc$Type* $tmp1418 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:529
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1419;
$tmp1419 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1419->value = param3;
$fn1421 $tmp1420 = ($fn1421) ((frost$core$Object*) $tmp1419)->$class->vtable[0];
frost$core$String* $tmp1422 = $tmp1420(((frost$core$Object*) $tmp1419));
frost$core$String* $tmp1423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1424, $tmp1422);
frost$core$String* $tmp1425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1423, &$s1426);
org$frostlang$frostc$IR$Value* $tmp1427 = *(&local15);
$fn1429 $tmp1428 = ($fn1429) $tmp1427->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1430 = $tmp1428($tmp1427);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1432 $tmp1431 = ($fn1432) ((frost$core$Object*) $tmp1430)->$class->vtable[0];
frost$core$String* $tmp1433 = $tmp1431(((frost$core$Object*) $tmp1430));
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1435, $tmp1433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$String* $tmp1436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1434, &$s1437);
org$frostlang$frostc$IR$Value* $tmp1438 = *(&local21);
$fn1440 $tmp1439 = ($fn1440) $tmp1438->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1441 = $tmp1439($tmp1438);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1443 $tmp1442 = ($fn1443) ((frost$core$Object*) $tmp1441)->$class->vtable[0];
frost$core$String* $tmp1444 = $tmp1442(((frost$core$Object*) $tmp1441));
frost$core$String* $tmp1445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1436, $tmp1444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$String* $tmp1446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1445, &$s1447);
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1425, $tmp1446);
$fn1450 $tmp1449 = ($fn1450) param5->$class->vtable[2];
frost$core$String* $tmp1451 = $tmp1449(param5);
frost$core$String* $tmp1452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1448, $tmp1451);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1452);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1453 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1454 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
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

