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
typedef frost$core$Bit (*$fn131)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn139)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn191)(frost$core$Object*);
typedef frost$core$Bit (*$fn269)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn277)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn311)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn315)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn320)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn331)(frost$core$Object*);
typedef frost$core$String* (*$fn339)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn345)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn349)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn410)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn414)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn419)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn427)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn431)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn436)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn533)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn553)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn573)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn590)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn604)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn621)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn635)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn647)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn664)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn681)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn698)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn715)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn732)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn757)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn777)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn797)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn817)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn837)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn841)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn845)(frost$core$Object*);
typedef frost$core$Bit (*$fn861)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn963)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn984)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn997)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1054)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1063)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn1098)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1122)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1191)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1195)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1200)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1269)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1274)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1305)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1314)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1331)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1345)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1363)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1369)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1388)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1403)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1411)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1414)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1422)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1425)(frost$core$Object*);
typedef frost$core$String* (*$fn1432)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 7016920421845289241, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, 2403110168575220660, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3749530833636672211, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, 8004068995672102850, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -3764202169548220239, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65", 16, -4954590249221528654, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65", 19, -3755527176520939069, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65", 25, -4446748280071778646, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, -5808557972665537831, NULL };
static frost$core$String $s1310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -8926283552790936043, NULL };
static frost$core$String $s1408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 5247209226559449009, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s1419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 8856786456156887815, NULL };
static frost$core$String $s1429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Int $tmp89 = (frost$core$Int) {0u};
frost$core$Object* $tmp90 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp88, $tmp89);
frost$core$String** $tmp91 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp90))->name;
frost$core$String* $tmp92 = *$tmp91;
frost$core$Bit $tmp93 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp92, &$s94);
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local6) = $tmp93;
goto block23;
block22:;
*(&local6) = $tmp85;
goto block23;
block23:;
frost$core$Bit $tmp95 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:203
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp97 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp97);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$Array* $tmp98 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local9) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:204
frost$collections$Array* $tmp99 = *(&local9);
org$frostlang$frostc$Symbol* $tmp100 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp99, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp100)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:205
org$frostlang$frostc$Position $tmp101 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp102 = *(&local3);
frost$collections$Array* $tmp103 = *(&local9);
frost$collections$Array* $tmp104 = *(&local5);
org$frostlang$frostc$Pair* $tmp105 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp101, $tmp102, ((frost$collections$ListView*) $tmp103), ((frost$collections$ListView*) $tmp104), param4);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Pair* $tmp106 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local10) = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:207
org$frostlang$frostc$Pair* $tmp107 = *(&local10);
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107 != NULL};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:208
org$frostlang$frostc$Pair* $tmp110 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$Pair* $tmp111 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp112 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp113 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp110;
block26:;
org$frostlang$frostc$Pair* $tmp117 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp118 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local9) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
goto block9;
block11:;
frost$core$Int $tmp119 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:212:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp120 = $tmp48.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 == $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:213
org$frostlang$frostc$Position $tmp125 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp126 = *(&local3);
org$frostlang$frostc$Symbol* $tmp127 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp128 = &((org$frostlang$frostc$Methods*) $tmp127)->methods;
org$frostlang$frostc$FixedArray* $tmp129 = *$tmp128;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Binary$_Closure2));
org$frostlang$frostc$expression$Binary$_Closure2* $tmp130 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp130, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp132 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Binary.frost:215:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp133 = &$tmp132->pointer;
*$tmp133 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Object** $tmp134 = &$tmp132->target;
frost$core$Object* $tmp135 = *$tmp134;
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
frost$core$Object** $tmp136 = &$tmp132->target;
*$tmp136 = ((frost$core$Object*) $tmp130);
ITable* $tmp137 = ((frost$collections$ListView*) $tmp129)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[6];
frost$collections$ListView* $tmp140 = $tmp138(((frost$collections$ListView*) $tmp129), $tmp132);
frost$collections$Array* $tmp141 = *(&local5);
org$frostlang$frostc$Pair* $tmp142 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp125, $tmp126, $tmp140, ((frost$collections$ListView*) $tmp141), param4);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Pair* $tmp143 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local11) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:216
org$frostlang$frostc$Pair* $tmp144 = *(&local11);
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144 != NULL};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:217
org$frostlang$frostc$Pair* $tmp147 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$Pair* $tmp148 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp149 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp150 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp151 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp147;
block32:;
org$frostlang$frostc$Pair* $tmp153 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
goto block9;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:221
frost$core$Int $tmp154 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s155, $tmp154);
abort(); // unreachable
block9:;
frost$collections$Array* $tmp156 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local5) = ((frost$collections$Array*) NULL);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:227
org$frostlang$frostc$Type* $tmp157 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$Type* $tmp158 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local12) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:228
org$frostlang$frostc$Type* $tmp159 = *(&local12);
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159 == NULL};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp162 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp163 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp164 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:231
org$frostlang$frostc$Type* $tmp166 = *(&local12);
frost$core$Bit $tmp167 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp166);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:231:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp168 = $tmp167.value;
bool $tmp169 = !$tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp172 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp173 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp174 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:234
org$frostlang$frostc$Type* $tmp176 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp177 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp176);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$ClassDecl* $tmp178 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local13) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:235
org$frostlang$frostc$ClassDecl* $tmp179 = *(&local13);
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179 == NULL};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp182 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp183 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp185 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:238
org$frostlang$frostc$ClassDecl* $tmp187 = *(&local13);
org$frostlang$frostc$SymbolTable* $tmp188 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp187);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp189->value = param2;
$fn191 $tmp190 = ($fn191) ((frost$core$Object*) $tmp189)->$class->vtable[0];
frost$core$String* $tmp192 = $tmp190(((frost$core$Object*) $tmp189));
org$frostlang$frostc$Symbol* $tmp193 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp188, $tmp192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$Symbol* $tmp194 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local4) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:239
org$frostlang$frostc$Symbol* $tmp195 = *(&local4);
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195 == NULL};
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp198 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp200 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp201 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:242
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp203 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp204 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp203, $tmp204);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp205 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp206 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp207 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp208 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp205, $tmp206, $tmp207, $tmp208);
frost$collections$Array$add$frost$collections$Array$T($tmp203, ((frost$core$Object*) $tmp205));
frost$collections$Array$add$frost$collections$Array$T($tmp203, ((frost$core$Object*) param3));
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$collections$Array* $tmp209 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local14) = $tmp203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:243
org$frostlang$frostc$Symbol* $tmp210 = *(&local4);
org$frostlang$frostc$Symbol$Kind* $tmp211 = &$tmp210->kind;
org$frostlang$frostc$Symbol$Kind $tmp212 = *$tmp211;
frost$core$Int $tmp213 = $tmp212.$rawValue;
frost$core$Int $tmp214 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:244:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 == $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:245
org$frostlang$frostc$Symbol* $tmp220 = *(&local4);
org$frostlang$frostc$Annotations** $tmp221 = &((org$frostlang$frostc$MethodDecl*) $tmp220)->annotations;
org$frostlang$frostc$Annotations* $tmp222 = *$tmp221;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:245:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp223 = &$tmp222->flags;
frost$core$Int $tmp224 = *$tmp223;
frost$core$Int $tmp225 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226 & $tmp227;
frost$core$Int $tmp229 = (frost$core$Int) {$tmp228};
frost$core$Int $tmp230 = (frost$core$Int) {0u};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 != $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:246
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp236 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp236);
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$collections$Array* $tmp237 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local15) = $tmp236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:247
frost$collections$Array* $tmp238 = *(&local15);
org$frostlang$frostc$Symbol* $tmp239 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp238, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp239)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:248
org$frostlang$frostc$Position $tmp240 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp241 = *(&local15);
frost$collections$Array* $tmp242 = *(&local14);
org$frostlang$frostc$Pair* $tmp243 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp240, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp241), ((frost$collections$ListView*) $tmp242), param4);
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
org$frostlang$frostc$Pair* $tmp244 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local16) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:249
org$frostlang$frostc$Pair* $tmp245 = *(&local16);
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245 != NULL};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:250
org$frostlang$frostc$Pair* $tmp248 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
org$frostlang$frostc$Pair* $tmp249 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp250 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local15) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp251 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp252 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp253 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp248;
block51:;
org$frostlang$frostc$Pair* $tmp257 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp258 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local15) = ((frost$collections$Array*) NULL);
goto block47;
block47:;
goto block42;
block44:;
frost$core$Int $tmp259 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:254:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp260 = $tmp213.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 == $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:255
org$frostlang$frostc$Position $tmp265 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp266 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp267 = &((org$frostlang$frostc$Methods*) $tmp266)->methods;
org$frostlang$frostc$FixedArray* $tmp268 = *$tmp267;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp270 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Binary.frost:256:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp271 = &$tmp270->pointer;
*$tmp271 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp272 = &$tmp270->target;
frost$core$Immutable* $tmp273 = *$tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Immutable** $tmp274 = &$tmp270->target;
*$tmp274 = ((frost$core$Immutable*) NULL);
ITable* $tmp275 = ((frost$collections$ListView*) $tmp268)->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[6];
frost$collections$ListView* $tmp278 = $tmp276(((frost$collections$ListView*) $tmp268), ((frost$core$MutableMethod*) $tmp270));
frost$collections$Array* $tmp279 = *(&local14);
org$frostlang$frostc$Pair* $tmp280 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp265, ((org$frostlang$frostc$IR$Value*) NULL), $tmp278, ((frost$collections$ListView*) $tmp279), param4);
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
org$frostlang$frostc$Pair* $tmp281 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local17) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:257
org$frostlang$frostc$Pair* $tmp282 = *(&local17);
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282 != NULL};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:258
org$frostlang$frostc$Pair* $tmp285 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Pair* $tmp286 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp287 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp288 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp289 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp290 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp285;
block57:;
org$frostlang$frostc$Pair* $tmp293 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
goto block42;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:262
frost$core$Int $tmp294 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s295, $tmp294);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp296 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp297 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp298 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp299 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp300 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
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
frost$collections$CollectionView* $tmp302 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$collections$CollectionView* $tmp303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:272
frost$collections$CollectionView* $tmp304 = *(&local0);
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304 != NULL};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp307 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:274
frost$collections$CollectionView* $tmp308 = *(&local0);
ITable* $tmp309 = ((frost$collections$Iterable*) $tmp308)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$collections$Iterator* $tmp312 = $tmp310(((frost$collections$Iterable*) $tmp308));
goto block3;
block3:;
ITable* $tmp313 = $tmp312->$class->itable;
while ($tmp313->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp313 = $tmp313->next;
}
$fn315 $tmp314 = $tmp313->methods[0];
frost$core$Bit $tmp316 = $tmp314($tmp312);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp318 = $tmp312->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[1];
frost$core$Object* $tmp321 = $tmp319($tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp321)));
org$frostlang$frostc$Type* $tmp322 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp321);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:275
org$frostlang$frostc$Type* $tmp323 = *(&local2);
org$frostlang$frostc$Pair* $tmp324 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, param1, $tmp323);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$Pair* $tmp325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local3) = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:276
org$frostlang$frostc$Pair* $tmp326 = *(&local3);
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326 != NULL};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block6; else goto block7;
block7:;
frost$core$Int $tmp329 = (frost$core$Int) {276u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn331 $tmp330 = ($fn331) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp332 = $tmp330(((frost$core$Object*) param1));
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s334, $tmp332);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s336);
org$frostlang$frostc$Type* $tmp337 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn339 $tmp338 = ($fn339) ((frost$core$Object*) $tmp337)->$class->vtable[0];
frost$core$String* $tmp340 = $tmp338(((frost$core$Object*) $tmp337));
frost$core$String* $tmp341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp335, $tmp340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp341, &$s343);
$fn345 $tmp344 = ($fn345) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp346 = $tmp344(param1);
org$frostlang$frostc$Position$wrapper* $tmp347;
$tmp347 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp347->value = $tmp346;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn349 $tmp348 = ($fn349) ((frost$core$Object*) $tmp347)->$class->vtable[0];
frost$core$String* $tmp350 = $tmp348(((frost$core$Object*) $tmp347));
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, $tmp350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp351, &$s353);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s354, $tmp329, $tmp352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:278
org$frostlang$frostc$Type* $tmp355 = *(&local2);
org$frostlang$frostc$Pair* $tmp356 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, $tmp355, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$Pair* $tmp357 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local4) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:279
org$frostlang$frostc$Pair* $tmp358 = *(&local4);
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358 != NULL};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:280
org$frostlang$frostc$Pair* $tmp361 = *(&local4);
frost$core$Object** $tmp362 = &$tmp361->second;
frost$core$Object* $tmp363 = *$tmp362;
org$frostlang$frostc$Pair* $tmp364 = *(&local3);
frost$core$Object** $tmp365 = &$tmp364->second;
frost$core$Object* $tmp366 = *$tmp365;
int64_t $tmp367 = ((frost$core$Int$wrapper*) $tmp363)->value.value;
int64_t $tmp368 = ((frost$core$Int$wrapper*) $tmp366)->value.value;
int64_t $tmp369 = $tmp367 + $tmp368;
frost$core$Int $tmp370 = (frost$core$Int) {$tmp369};
*(&local5) = $tmp370;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:281
org$frostlang$frostc$Pair* $tmp371 = *(&local1);
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371 == NULL};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block13; else goto block16;
block16:;
frost$core$Int $tmp374 = *(&local5);
org$frostlang$frostc$Pair* $tmp375 = *(&local1);
frost$core$Object** $tmp376 = &$tmp375->second;
frost$core$Object* $tmp377 = *$tmp376;
int64_t $tmp378 = $tmp374.value;
int64_t $tmp379 = ((frost$core$Int$wrapper*) $tmp377)->value.value;
bool $tmp380 = $tmp378 < $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:282
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp383 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp384 = *(&local4);
frost$core$Object** $tmp385 = &$tmp384->first;
frost$core$Object* $tmp386 = *$tmp385;
frost$core$Int $tmp387 = *(&local5);
frost$core$Int$wrapper* $tmp388;
$tmp388 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp388->value = $tmp387;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp383, ((frost$core$Object*) ((frost$collections$ListView*) $tmp386)), ((frost$core$Object*) $tmp388));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$Pair* $tmp389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local1) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:284
frost$core$Int $tmp390 = *(&local5);
org$frostlang$frostc$Pair* $tmp391 = *(&local1);
frost$core$Object** $tmp392 = &$tmp391->second;
frost$core$Object* $tmp393 = *$tmp392;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:284:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp394 = $tmp390.value;
int64_t $tmp395 = ((frost$core$Int$wrapper*) $tmp393)->value.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:285
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp399 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp399);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$collections$Array* $tmp400 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local6) = $tmp399;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:286
frost$collections$Array* $tmp401 = *(&local6);
org$frostlang$frostc$Pair* $tmp402 = *(&local1);
frost$core$Object** $tmp403 = &$tmp402->first;
frost$core$Object* $tmp404 = *$tmp403;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp401, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp404)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:287
org$frostlang$frostc$Pair* $tmp405 = *(&local4);
frost$core$Object** $tmp406 = &$tmp405->first;
frost$core$Object* $tmp407 = *$tmp406;
ITable* $tmp408 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp407))->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$collections$Iterator* $tmp411 = $tmp409(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp407)));
goto block20;
block20:;
ITable* $tmp412 = $tmp411->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$core$Bit $tmp415 = $tmp413($tmp411);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp417 = $tmp411->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[1];
frost$core$Object* $tmp420 = $tmp418($tmp411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp420)));
org$frostlang$frostc$MethodRef* $tmp421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local7) = ((org$frostlang$frostc$MethodRef*) $tmp420);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:288
org$frostlang$frostc$Pair* $tmp422 = *(&local1);
frost$core$Object** $tmp423 = &$tmp422->first;
frost$core$Object* $tmp424 = *$tmp423;
ITable* $tmp425 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp424))->$class->itable;
while ($tmp425->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp425 = $tmp425->next;
}
$fn427 $tmp426 = $tmp425->methods[0];
frost$collections$Iterator* $tmp428 = $tmp426(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp424)));
goto block23;
block23:;
ITable* $tmp429 = $tmp428->$class->itable;
while ($tmp429->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp429 = $tmp429->next;
}
$fn431 $tmp430 = $tmp429->methods[0];
frost$core$Bit $tmp432 = $tmp430($tmp428);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block25; else goto block24;
block24:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp434 = $tmp428->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[1];
frost$core$Object* $tmp437 = $tmp435($tmp428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp437)));
org$frostlang$frostc$MethodRef* $tmp438 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp437);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:289
org$frostlang$frostc$MethodRef* $tmp439 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp440 = &$tmp439->value;
org$frostlang$frostc$MethodDecl* $tmp441 = *$tmp440;
org$frostlang$frostc$MethodRef* $tmp442 = *(&local7);
org$frostlang$frostc$MethodDecl** $tmp443 = &$tmp442->value;
org$frostlang$frostc$MethodDecl* $tmp444 = *$tmp443;
bool $tmp445 = $tmp441 == $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:290
frost$core$Frost$unref$frost$core$Object$Q($tmp437);
org$frostlang$frostc$MethodRef* $tmp448 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
org$frostlang$frostc$MethodRef* $tmp449 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp437);
org$frostlang$frostc$MethodRef* $tmp450 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:293
frost$collections$Array* $tmp451 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp452 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp451, ((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q($tmp420);
org$frostlang$frostc$MethodRef* $tmp453 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:295
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp454 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp455 = *(&local6);
frost$core$Int $tmp456 = *(&local5);
frost$core$Int$wrapper* $tmp457;
$tmp457 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp457->value = $tmp456;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp454, ((frost$core$Object*) ((frost$collections$ListView*) $tmp455)), ((frost$core$Object*) $tmp457));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
org$frostlang$frostc$Pair* $tmp458 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local1) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$collections$Array* $tmp459 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local6) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
goto block14;
block14:;
goto block12;
block12:;
org$frostlang$frostc$Pair* $tmp460 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp461 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp321);
org$frostlang$frostc$Type* $tmp462 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:299
org$frostlang$frostc$Pair* $tmp463 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$Pair* $tmp464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp465 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp463;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp466 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
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
frost$core$Int* $tmp467 = &param1->$rawValue;
frost$core$Int $tmp468 = *$tmp467;
frost$core$Int $tmp469 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:310:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 == $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp475 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp476 = *$tmp475;
frost$core$UInt64* $tmp477 = (frost$core$UInt64*) (param1->$data + 24);
frost$core$UInt64 $tmp478 = *$tmp477;
*(&local2) = $tmp478;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:311
frost$core$UInt64 $tmp479 = *(&local2);
frost$core$Int64 $tmp480 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp481 = $tmp480.value;
frost$core$UInt64 $tmp482 = (frost$core$UInt64) {((uint64_t) $tmp481)};
uint64_t $tmp483 = $tmp479.value;
uint64_t $tmp484 = $tmp482.value;
bool $tmp485 = $tmp483 > $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:314
frost$core$UInt64 $tmp488 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:314:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp489 = $tmp488.value;
frost$core$Int64 $tmp490 = (frost$core$Int64) {((int64_t) $tmp489)};
*(&local0) = $tmp490;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:320
frost$core$Int* $tmp491 = &param3->$rawValue;
frost$core$Int $tmp492 = *$tmp491;
frost$core$Int $tmp493 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:321:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp494 = $tmp492.value;
int64_t $tmp495 = $tmp493.value;
bool $tmp496 = $tmp494 == $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block10; else goto block11;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
org$frostlang$frostc$Position* $tmp499 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp500 = *$tmp499;
frost$core$UInt64* $tmp501 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp502 = *$tmp501;
*(&local3) = $tmp502;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:322
frost$core$UInt64 $tmp503 = *(&local3);
frost$core$Int64 $tmp504 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:322:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp505 = $tmp504.value;
frost$core$UInt64 $tmp506 = (frost$core$UInt64) {((uint64_t) $tmp505)};
uint64_t $tmp507 = $tmp503.value;
uint64_t $tmp508 = $tmp506.value;
bool $tmp509 = $tmp507 > $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:325
frost$core$UInt64 $tmp512 = *(&local3);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:325:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp513 = $tmp512.value;
frost$core$Int64 $tmp514 = (frost$core$Int64) {((int64_t) $tmp513)};
*(&local1) = $tmp514;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:331
frost$core$Int $tmp515 = param2.$rawValue;
frost$core$Int $tmp516 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:332:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 == $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block18; else goto block19;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:333
frost$core$Int64 $tmp522 = *(&local0);
frost$core$Int64 $tmp523 = *(&local1);
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524 + $tmp525;
frost$core$Int64 $tmp527 = (frost$core$Int64) {$tmp526};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:333:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp528 = $tmp527.value;
frost$core$UInt64 $tmp529 = (frost$core$UInt64) {((uint64_t) $tmp528)};
*(&local4) = $tmp529;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:334
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp530 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp531 = (frost$core$Int) {25u};
$fn533 $tmp532 = ($fn533) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp534 = $tmp532(param1);
frost$core$UInt64 $tmp535 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp530, $tmp531, $tmp534, $tmp535);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
return $tmp530;
block19:;
frost$core$Int $tmp536 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:336:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp537 = $tmp515.value;
int64_t $tmp538 = $tmp536.value;
bool $tmp539 = $tmp537 == $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:337
frost$core$Int64 $tmp542 = *(&local0);
frost$core$Int64 $tmp543 = *(&local1);
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543.value;
int64_t $tmp546 = $tmp544 - $tmp545;
frost$core$Int64 $tmp547 = (frost$core$Int64) {$tmp546};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:337:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp548 = $tmp547.value;
frost$core$UInt64 $tmp549 = (frost$core$UInt64) {((uint64_t) $tmp548)};
*(&local5) = $tmp549;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:338
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp550 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp551 = (frost$core$Int) {25u};
$fn553 $tmp552 = ($fn553) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp554 = $tmp552(param1);
frost$core$UInt64 $tmp555 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp550, $tmp551, $tmp554, $tmp555);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
return $tmp550;
block23:;
frost$core$Int $tmp556 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:340:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp557 = $tmp515.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 == $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:341
frost$core$Int64 $tmp562 = *(&local0);
frost$core$Int64 $tmp563 = *(&local1);
int64_t $tmp564 = $tmp562.value;
int64_t $tmp565 = $tmp563.value;
int64_t $tmp566 = $tmp564 * $tmp565;
frost$core$Int64 $tmp567 = (frost$core$Int64) {$tmp566};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:341:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp568 = $tmp567.value;
frost$core$UInt64 $tmp569 = (frost$core$UInt64) {((uint64_t) $tmp568)};
*(&local6) = $tmp569;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:342
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp570 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp571 = (frost$core$Int) {25u};
$fn573 $tmp572 = ($fn573) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp574 = $tmp572(param1);
frost$core$UInt64 $tmp575 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp570, $tmp571, $tmp574, $tmp575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
return $tmp570;
block27:;
frost$core$Int $tmp576 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:344:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp577 = $tmp515.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 == $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:345
frost$core$Int64 $tmp582 = *(&local1);
frost$core$Int64 $tmp583 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:345:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp584 = $tmp582.value;
int64_t $tmp585 = $tmp583.value;
bool $tmp586 = $tmp584 == $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:346
$fn590 $tmp589 = ($fn590) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp591 = $tmp589(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp591, &$s592);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:349
frost$core$Int64 $tmp593 = *(&local0);
frost$core$Int64 $tmp594 = *(&local1);
int64_t $tmp595 = $tmp593.value;
int64_t $tmp596 = $tmp594.value;
int64_t $tmp597 = $tmp595 / $tmp596;
frost$core$Int64 $tmp598 = (frost$core$Int64) {$tmp597};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:349:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp599 = $tmp598.value;
frost$core$UInt64 $tmp600 = (frost$core$UInt64) {((uint64_t) $tmp599)};
*(&local7) = $tmp600;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp601 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp602 = (frost$core$Int) {25u};
$fn604 $tmp603 = ($fn604) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp605 = $tmp603(param1);
frost$core$UInt64 $tmp606 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp601, $tmp602, $tmp605, $tmp606);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
return $tmp601;
block31:;
frost$core$Int $tmp607 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:352:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp608 = $tmp515.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 == $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:353
frost$core$Int64 $tmp613 = *(&local1);
frost$core$Int64 $tmp614 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:353:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp615 = $tmp613.value;
int64_t $tmp616 = $tmp614.value;
bool $tmp617 = $tmp615 == $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:354
$fn621 $tmp620 = ($fn621) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp622 = $tmp620(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp622, &$s623);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:357
frost$core$Int64 $tmp624 = *(&local0);
frost$core$Int64 $tmp625 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Binary.frost:357:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp626 = $tmp624.value;
int64_t $tmp627 = $tmp625.value;
int64_t $tmp628 = $tmp626 % $tmp627;
frost$core$Int64 $tmp629 = (frost$core$Int64) {$tmp628};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:357:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp630 = $tmp629.value;
frost$core$UInt64 $tmp631 = (frost$core$UInt64) {((uint64_t) $tmp630)};
*(&local8) = $tmp631;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:358
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp632 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp633 = (frost$core$Int) {25u};
$fn635 $tmp634 = ($fn635) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp636 = $tmp634(param1);
frost$core$UInt64 $tmp637 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp632, $tmp633, $tmp636, $tmp637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
return $tmp632;
block38:;
frost$core$Int $tmp638 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:360:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp639 = $tmp515.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:361
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp644 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp645 = (frost$core$Int) {6u};
$fn647 $tmp646 = ($fn647) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp648 = $tmp646(param1);
frost$core$Int64 $tmp649 = *(&local0);
frost$core$Int64 $tmp650 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650.value;
bool $tmp653 = $tmp651 == $tmp652;
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp644, $tmp645, $tmp648, $tmp654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
return $tmp644;
block46:;
frost$core$Int $tmp655 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:363:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp656 = $tmp515.value;
int64_t $tmp657 = $tmp655.value;
bool $tmp658 = $tmp656 == $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:364
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp661 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp662 = (frost$core$Int) {6u};
$fn664 $tmp663 = ($fn664) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp665 = $tmp663(param1);
frost$core$Int64 $tmp666 = *(&local0);
frost$core$Int64 $tmp667 = *(&local1);
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
bool $tmp670 = $tmp668 != $tmp669;
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp661, $tmp662, $tmp665, $tmp671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
return $tmp661;
block50:;
frost$core$Int $tmp672 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:366:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp673 = $tmp515.value;
int64_t $tmp674 = $tmp672.value;
bool $tmp675 = $tmp673 == $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:367
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp678 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp679 = (frost$core$Int) {6u};
$fn681 $tmp680 = ($fn681) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp682 = $tmp680(param1);
frost$core$Int64 $tmp683 = *(&local0);
frost$core$Int64 $tmp684 = *(&local1);
int64_t $tmp685 = $tmp683.value;
int64_t $tmp686 = $tmp684.value;
bool $tmp687 = $tmp685 < $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp678, $tmp679, $tmp682, $tmp688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
return $tmp678;
block53:;
frost$core$Int $tmp689 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:369:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp690 = $tmp515.value;
int64_t $tmp691 = $tmp689.value;
bool $tmp692 = $tmp690 == $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp695 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp696 = (frost$core$Int) {6u};
$fn698 $tmp697 = ($fn698) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp699 = $tmp697(param1);
frost$core$Int64 $tmp700 = *(&local0);
frost$core$Int64 $tmp701 = *(&local1);
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701.value;
bool $tmp704 = $tmp702 > $tmp703;
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp695, $tmp696, $tmp699, $tmp705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
return $tmp695;
block56:;
frost$core$Int $tmp706 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:372:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp707 = $tmp515.value;
int64_t $tmp708 = $tmp706.value;
bool $tmp709 = $tmp707 == $tmp708;
frost$core$Bit $tmp710 = (frost$core$Bit) {$tmp709};
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:373
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp712 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp713 = (frost$core$Int) {6u};
$fn715 $tmp714 = ($fn715) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp716 = $tmp714(param1);
frost$core$Int64 $tmp717 = *(&local0);
frost$core$Int64 $tmp718 = *(&local1);
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718.value;
bool $tmp721 = $tmp719 <= $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp712, $tmp713, $tmp716, $tmp722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
return $tmp712;
block59:;
frost$core$Int $tmp723 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:375:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp724 = $tmp515.value;
int64_t $tmp725 = $tmp723.value;
bool $tmp726 = $tmp724 == $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:376
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp729 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp730 = (frost$core$Int) {6u};
$fn732 $tmp731 = ($fn732) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp733 = $tmp731(param1);
frost$core$Int64 $tmp734 = *(&local0);
frost$core$Int64 $tmp735 = *(&local1);
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735.value;
bool $tmp738 = $tmp736 >= $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$Bit($tmp729, $tmp730, $tmp733, $tmp739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
return $tmp729;
block62:;
frost$core$Int $tmp740 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:378:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp741 = $tmp515.value;
int64_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 == $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:379
frost$core$Int64 $tmp746 = *(&local0);
frost$core$Int64 $tmp747 = *(&local1);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Binary.frost:379:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
int64_t $tmp748 = $tmp746.value;
int64_t $tmp749 = $tmp747.value;
int64_t $tmp750 = $tmp748 & $tmp749;
frost$core$Int64 $tmp751 = (frost$core$Int64) {$tmp750};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:379:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp752 = $tmp751.value;
frost$core$UInt64 $tmp753 = (frost$core$UInt64) {((uint64_t) $tmp752)};
*(&local9) = $tmp753;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp754 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp755 = (frost$core$Int) {25u};
$fn757 $tmp756 = ($fn757) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp758 = $tmp756(param1);
frost$core$UInt64 $tmp759 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp754, $tmp755, $tmp758, $tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
return $tmp754;
block65:;
frost$core$Int $tmp760 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:382:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp761 = $tmp515.value;
int64_t $tmp762 = $tmp760.value;
bool $tmp763 = $tmp761 == $tmp762;
frost$core$Bit $tmp764 = (frost$core$Bit) {$tmp763};
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:383
frost$core$Int64 $tmp766 = *(&local0);
frost$core$Int64 $tmp767 = *(&local1);
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Binary.frost:383:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767.value;
int64_t $tmp770 = $tmp768 | $tmp769;
frost$core$Int64 $tmp771 = (frost$core$Int64) {$tmp770};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:383:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp772 = $tmp771.value;
frost$core$UInt64 $tmp773 = (frost$core$UInt64) {((uint64_t) $tmp772)};
*(&local10) = $tmp773;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:384
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp774 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp775 = (frost$core$Int) {25u};
$fn777 $tmp776 = ($fn777) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp778 = $tmp776(param1);
frost$core$UInt64 $tmp779 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp774, $tmp775, $tmp778, $tmp779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
return $tmp774;
block70:;
frost$core$Int $tmp780 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:386:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp781 = $tmp515.value;
int64_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 == $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:387
frost$core$Int64 $tmp786 = *(&local0);
frost$core$Int64 $tmp787 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Binary.frost:387:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
int64_t $tmp788 = $tmp786.value;
int64_t $tmp789 = $tmp787.value;
int64_t $tmp790 = $tmp788 ^ $tmp789;
frost$core$Int64 $tmp791 = (frost$core$Int64) {$tmp790};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:387:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp792 = $tmp791.value;
frost$core$UInt64 $tmp793 = (frost$core$UInt64) {((uint64_t) $tmp792)};
*(&local11) = $tmp793;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:388
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp794 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp795 = (frost$core$Int) {25u};
$fn797 $tmp796 = ($fn797) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp798 = $tmp796(param1);
frost$core$UInt64 $tmp799 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp794, $tmp795, $tmp798, $tmp799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
return $tmp794;
block75:;
frost$core$Int $tmp800 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:390:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp801 = $tmp515.value;
int64_t $tmp802 = $tmp800.value;
bool $tmp803 = $tmp801 == $tmp802;
frost$core$Bit $tmp804 = (frost$core$Bit) {$tmp803};
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:391
frost$core$Int64 $tmp806 = *(&local0);
frost$core$Int64 $tmp807 = *(&local1);
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Binary.frost:391:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 << $tmp809;
frost$core$Int64 $tmp811 = (frost$core$Int64) {$tmp810};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:391:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp812 = $tmp811.value;
frost$core$UInt64 $tmp813 = (frost$core$UInt64) {((uint64_t) $tmp812)};
*(&local12) = $tmp813;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:392
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp814 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp815 = (frost$core$Int) {25u};
$fn817 $tmp816 = ($fn817) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp818 = $tmp816(param1);
frost$core$UInt64 $tmp819 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp814, $tmp815, $tmp818, $tmp819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
return $tmp814;
block80:;
frost$core$Int $tmp820 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:394:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp821 = $tmp515.value;
int64_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 == $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block84; else goto block17;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:395
frost$core$Int64 $tmp826 = *(&local0);
frost$core$Int64 $tmp827 = *(&local1);
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from Binary.frost:395:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828 >> $tmp829;
frost$core$Int64 $tmp831 = (frost$core$Int64) {$tmp830};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:395:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp832 = $tmp831.value;
frost$core$UInt64 $tmp833 = (frost$core$UInt64) {((uint64_t) $tmp832)};
*(&local13) = $tmp833;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:396
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp834 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp835 = (frost$core$Int) {25u};
$fn837 $tmp836 = ($fn837) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp838 = $tmp836(param1);
frost$core$UInt64 $tmp839 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp834, $tmp835, $tmp838, $tmp839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
return $tmp834;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:399
$fn841 $tmp840 = ($fn841) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp842 = $tmp840(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp843;
$tmp843 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp843->value = param2;
$fn845 $tmp844 = ($fn845) ((frost$core$Object*) $tmp843)->$class->vtable[0];
frost$core$String* $tmp846 = $tmp844(((frost$core$Object*) $tmp843));
frost$core$String* $tmp847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s848, $tmp846);
frost$core$String* $tmp849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp847, &$s850);
frost$core$String* $tmp851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp849, &$s852);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp842, $tmp851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
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
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp853;
$tmp853 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp853->value = param2;
frost$core$Int $tmp854 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:408:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp855 = &(&local1)->$rawValue;
*$tmp855 = $tmp854;
org$frostlang$frostc$expression$Binary$Operator $tmp856 = *(&local1);
*(&local0) = $tmp856;
org$frostlang$frostc$expression$Binary$Operator $tmp857 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp858;
$tmp858 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp858->value = $tmp857;
ITable* $tmp859 = ((frost$core$Equatable*) $tmp853)->$class->itable;
while ($tmp859->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp859 = $tmp859->next;
}
$fn861 $tmp860 = $tmp859->methods[1];
frost$core$Bit $tmp862 = $tmp860(((frost$core$Equatable*) $tmp853), ((frost$core$Equatable*) $tmp858));
bool $tmp863 = $tmp862.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp858)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp853)));
if ($tmp863) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:411
frost$core$Int* $tmp864 = &param1->$rawValue;
frost$core$Int $tmp865 = *$tmp864;
frost$core$Int $tmp866 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:412:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp867 = $tmp865.value;
int64_t $tmp868 = $tmp866.value;
bool $tmp869 = $tmp867 == $tmp868;
frost$core$Bit $tmp870 = (frost$core$Bit) {$tmp869};
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp872 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp873 = *$tmp872;
*(&local2) = $tmp873;
frost$core$String** $tmp874 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp875 = *$tmp874;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$String* $tmp876 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local3) = $tmp875;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:413
frost$core$Int* $tmp877 = &param3->$rawValue;
frost$core$Int $tmp878 = *$tmp877;
frost$core$Int $tmp879 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:414:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp880 = $tmp878.value;
int64_t $tmp881 = $tmp879.value;
bool $tmp882 = $tmp880 == $tmp881;
frost$core$Bit $tmp883 = (frost$core$Bit) {$tmp882};
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp885 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp886 = *$tmp885;
frost$core$String** $tmp887 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp888 = *$tmp887;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$String* $tmp889 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local4) = $tmp888;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp890 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp891 = (frost$core$Int) {40u};
org$frostlang$frostc$Position $tmp892 = *(&local2);
frost$core$String* $tmp893 = *(&local3);
frost$core$String* $tmp894 = *(&local4);
frost$core$String* $tmp895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp893, $tmp894);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp890, $tmp891, $tmp892, $tmp895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$String* $tmp896 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp897 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local3) = ((frost$core$String*) NULL);
return $tmp890;
block7:;
frost$core$String* $tmp898 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:425
frost$core$Int* $tmp899 = &param1->$rawValue;
frost$core$Int $tmp900 = *$tmp899;
frost$core$Int $tmp901 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:426:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901.value;
bool $tmp904 = $tmp902 == $tmp903;
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:427
org$frostlang$frostc$ASTNode* $tmp907 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
return $tmp907;
block3:;
frost$core$Int $tmp908 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp909 = $tmp900.value;
int64_t $tmp910 = $tmp908.value;
bool $tmp911 = $tmp909 == $tmp910;
frost$core$Bit $tmp912 = (frost$core$Bit) {$tmp911};
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:430
org$frostlang$frostc$ASTNode* $tmp914 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
return $tmp914;
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
org$frostlang$frostc$ASTNode* $tmp915 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
org$frostlang$frostc$ASTNode* $tmp916 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local0) = $tmp915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:442
org$frostlang$frostc$ASTNode* $tmp917 = *(&local0);
frost$core$Bit $tmp918 = (frost$core$Bit) {$tmp917 != NULL};
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:443
org$frostlang$frostc$ASTNode* $tmp920 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp921 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp920, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
org$frostlang$frostc$ASTNode* $tmp922 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp921;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:445
frost$core$Int $tmp923 = param3.$rawValue;
frost$core$Int $tmp924 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:446:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp925 = $tmp923.value;
int64_t $tmp926 = $tmp924.value;
bool $tmp927 = $tmp925 == $tmp926;
frost$core$Bit $tmp928 = (frost$core$Bit) {$tmp927};
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:447
org$frostlang$frostc$Scanner** $tmp930 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp931 = *$tmp930;
org$frostlang$frostc$Type* $tmp932 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp931, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
org$frostlang$frostc$Type* $tmp933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local1) = $tmp932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:448
org$frostlang$frostc$Type* $tmp934 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp935 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp934);
org$frostlang$frostc$IR$Value* $tmp936 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp935, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
org$frostlang$frostc$Type* $tmp937 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp938 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp936;
block5:;
frost$core$Int $tmp939 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp940 = $tmp923.value;
int64_t $tmp941 = $tmp939.value;
bool $tmp942 = $tmp940 == $tmp941;
frost$core$Bit $tmp943 = (frost$core$Bit) {$tmp942};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block7; else goto block8;
block8:;
frost$core$Int $tmp945 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:450:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp946 = $tmp923.value;
int64_t $tmp947 = $tmp945.value;
bool $tmp948 = $tmp946 == $tmp947;
frost$core$Bit $tmp949 = (frost$core$Bit) {$tmp948};
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block7; else goto block10;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:451
org$frostlang$frostc$IR$Value* $tmp951 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
org$frostlang$frostc$ASTNode* $tmp952 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp951;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:454
org$frostlang$frostc$Pair* $tmp953 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
org$frostlang$frostc$Pair* $tmp954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local2) = $tmp953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:455
org$frostlang$frostc$Pair* $tmp955 = *(&local2);
frost$core$Bit $tmp956 = (frost$core$Bit) {$tmp955 != NULL};
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:456
org$frostlang$frostc$Pair* $tmp958 = *(&local2);
frost$core$Object** $tmp959 = &$tmp958->first;
frost$core$Object* $tmp960 = *$tmp959;
ITable* $tmp961 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp960))->$class->itable;
while ($tmp961->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp961 = $tmp961->next;
}
$fn963 $tmp962 = $tmp961->methods[0];
frost$core$Int $tmp964 = $tmp962(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp960)));
frost$core$Int $tmp965 = (frost$core$Int) {1u};
int64_t $tmp966 = $tmp964.value;
int64_t $tmp967 = $tmp965.value;
bool $tmp968 = $tmp966 > $tmp967;
frost$core$Bit $tmp969 = (frost$core$Bit) {$tmp968};
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:457
org$frostlang$frostc$Pair* $tmp971 = *(&local2);
frost$core$Object** $tmp972 = &$tmp971->first;
frost$core$Object* $tmp973 = *$tmp972;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp974 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp975 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp974, $tmp975);
frost$collections$Array$add$frost$collections$Array$T($tmp974, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp974, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp973), ((frost$collections$ListView*) $tmp974), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp976 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:460
org$frostlang$frostc$Pair* $tmp978 = *(&local2);
frost$core$Object** $tmp979 = &$tmp978->first;
frost$core$Object* $tmp980 = *$tmp979;
frost$core$Int $tmp981 = (frost$core$Int) {0u};
ITable* $tmp982 = ((frost$collections$ListView*) $tmp980)->$class->itable;
while ($tmp982->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp982 = $tmp982->next;
}
$fn984 $tmp983 = $tmp982->methods[0];
frost$core$Object* $tmp985 = $tmp983(((frost$collections$ListView*) $tmp980), $tmp981);
org$frostlang$frostc$MethodDecl** $tmp986 = &((org$frostlang$frostc$MethodRef*) $tmp985)->value;
org$frostlang$frostc$MethodDecl* $tmp987 = *$tmp986;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
org$frostlang$frostc$MethodDecl* $tmp988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local3) = $tmp987;
frost$core$Frost$unref$frost$core$Object$Q($tmp985);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:461
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp989;
$tmp989 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp989->value = param3;
frost$core$Int $tmp990 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:461:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp991 = &(&local5)->$rawValue;
*$tmp991 = $tmp990;
org$frostlang$frostc$expression$Binary$Operator $tmp992 = *(&local5);
*(&local4) = $tmp992;
org$frostlang$frostc$expression$Binary$Operator $tmp993 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp994;
$tmp994 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp994->value = $tmp993;
ITable* $tmp995 = ((frost$core$Equatable*) $tmp989)->$class->itable;
while ($tmp995->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp995 = $tmp995->next;
}
$fn997 $tmp996 = $tmp995->methods[0];
frost$core$Bit $tmp998 = $tmp996(((frost$core$Equatable*) $tmp989), ((frost$core$Equatable*) $tmp994));
bool $tmp999 = $tmp998.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp994)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp989)));
if ($tmp999) goto block18; else goto block17;
block18:;
org$frostlang$frostc$MethodDecl* $tmp1000 = *(&local3);
frost$core$Weak** $tmp1001 = &$tmp1000->owner;
frost$core$Weak* $tmp1002 = *$tmp1001;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:461:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1003 = &$tmp1002->_valid;
frost$core$Bit $tmp1004 = *$tmp1003;
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block22; else goto block23;
block23:;
frost$core$Int $tmp1006 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1007, $tmp1006);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1008 = &$tmp1002->value;
frost$core$Object* $tmp1009 = *$tmp1008;
frost$core$Frost$ref$frost$core$Object$Q($tmp1009);
// begin inline call to function org.frostlang.frostc.Compiler.isTuple(cl:org.frostlang.frostc.ClassDecl):frost.core.Bit from Binary.frost:461:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2659
frost$core$String** $tmp1010 = &((org$frostlang$frostc$ClassDecl*) $tmp1009)->name;
frost$core$String* $tmp1011 = *$tmp1010;
frost$core$Bit $tmp1012 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1011, &$s1013);
bool $tmp1014 = $tmp1012.value;
if ($tmp1014) goto block25; else goto block26;
block25:;
*(&local7) = $tmp1012;
goto block27;
block26:;
frost$core$String** $tmp1015 = &((org$frostlang$frostc$ClassDecl*) $tmp1009)->name;
frost$core$String* $tmp1016 = *$tmp1015;
frost$core$Bit $tmp1017 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1016, &$s1018);
*(&local7) = $tmp1017;
goto block27;
block27:;
frost$core$Bit $tmp1019 = *(&local7);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block28; else goto block29;
block28:;
*(&local6) = $tmp1019;
goto block30;
block29:;
frost$core$String** $tmp1021 = &((org$frostlang$frostc$ClassDecl*) $tmp1009)->name;
frost$core$String* $tmp1022 = *$tmp1021;
frost$core$Bit $tmp1023 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1022, &$s1024);
*(&local6) = $tmp1023;
goto block30;
block30:;
frost$core$Bit $tmp1025 = *(&local6);
bool $tmp1026 = $tmp1025.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1009);
if ($tmp1026) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:462
frost$core$Int* $tmp1027 = &param4->$rawValue;
frost$core$Int $tmp1028 = *$tmp1027;
frost$core$Int $tmp1029 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:463:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1030 = $tmp1028.value;
int64_t $tmp1031 = $tmp1029.value;
bool $tmp1032 = $tmp1030 == $tmp1031;
frost$core$Bit $tmp1033 = (frost$core$Bit) {$tmp1032};
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Position* $tmp1035 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1036 = *$tmp1035;
frost$core$UInt64* $tmp1037 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1038 = *$tmp1037;
*(&local8) = $tmp1038;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:464
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1039 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1040 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1039, $tmp1040);
org$frostlang$frostc$IR$Value* $tmp1041 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1039);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
org$frostlang$frostc$IR$Value* $tmp1042 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local9) = $tmp1041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:466
org$frostlang$frostc$IR$Value* $tmp1043 = *(&local9);
frost$core$Bit $tmp1044 = (frost$core$Bit) {$tmp1043 == NULL};
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1046 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1047 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1048 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1049 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:469
org$frostlang$frostc$IR$Value* $tmp1050 = *(&local9);
frost$core$UInt64 $tmp1051 = *(&local8);
frost$core$UInt64$wrapper* $tmp1052;
$tmp1052 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1052->value = $tmp1051;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:470:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1054 $tmp1053 = ($fn1054) ((frost$core$Object*) $tmp1052)->$class->vtable[0];
frost$core$String* $tmp1055 = $tmp1053(((frost$core$Object*) $tmp1052));
frost$core$String* $tmp1056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1057, $tmp1055);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$String* $tmp1058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1056, &$s1059);
org$frostlang$frostc$IR$Value* $tmp1060 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1050, $tmp1058);
org$frostlang$frostc$IR$Value* $tmp1061 = *(&local9);
$fn1063 $tmp1062 = ($fn1063) $tmp1061->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1064 = $tmp1062($tmp1061);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:471:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1065 = &$tmp1064->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1066 = *$tmp1065;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$UInt64 $tmp1067 = *(&local8);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:471:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1068 = $tmp1067.value;
frost$core$Int $tmp1069 = (frost$core$Int) {((int64_t) $tmp1068)};
frost$core$Object* $tmp1070 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1066, $tmp1069);
org$frostlang$frostc$IR$Value* $tmp1071 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1060, ((org$frostlang$frostc$Type*) $tmp1070));
org$frostlang$frostc$IR$Value* $tmp1072 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1071, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q($tmp1070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
org$frostlang$frostc$IR$Value* $tmp1073 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1074 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1075 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1072;
block31:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:475
org$frostlang$frostc$MethodDecl* $tmp1077 = *(&local3);
org$frostlang$frostc$Annotations** $tmp1078 = &$tmp1077->annotations;
org$frostlang$frostc$Annotations* $tmp1079 = *$tmp1078;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:475:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp1080 = &$tmp1079->flags;
frost$core$Int $tmp1081 = *$tmp1080;
frost$core$Int $tmp1082 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1083 = $tmp1081.value;
int64_t $tmp1084 = $tmp1082.value;
int64_t $tmp1085 = $tmp1083 & $tmp1084;
frost$core$Int $tmp1086 = (frost$core$Int) {$tmp1085};
frost$core$Int $tmp1087 = (frost$core$Int) {0u};
int64_t $tmp1088 = $tmp1086.value;
int64_t $tmp1089 = $tmp1087.value;
bool $tmp1090 = $tmp1088 != $tmp1089;
frost$core$Bit $tmp1091 = (frost$core$Bit) {$tmp1090};
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:476
org$frostlang$frostc$MethodDecl* $tmp1093 = *(&local3);
frost$collections$Array** $tmp1094 = &$tmp1093->parameters;
frost$collections$Array* $tmp1095 = *$tmp1094;
ITable* $tmp1096 = ((frost$collections$CollectionView*) $tmp1095)->$class->itable;
while ($tmp1096->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1096 = $tmp1096->next;
}
$fn1098 $tmp1097 = $tmp1096->methods[0];
frost$core$Int $tmp1099 = $tmp1097(((frost$collections$CollectionView*) $tmp1095));
frost$core$Int $tmp1100 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:476:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1101 = $tmp1099.value;
int64_t $tmp1102 = $tmp1100.value;
bool $tmp1103 = $tmp1101 == $tmp1102;
frost$core$Bit $tmp1104 = (frost$core$Bit) {$tmp1103};
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:477
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1106 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1107 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1108 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1109 = *(&local3);
org$frostlang$frostc$Type* $tmp1110 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1109, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1106, $tmp1107, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1108, $tmp1110);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1111 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1112 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int($tmp1111, $tmp1112);
frost$collections$Array$add$frost$collections$Array$T($tmp1111, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp1111, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1113 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1106, ((frost$collections$ListView*) $tmp1111), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
org$frostlang$frostc$MethodDecl* $tmp1114 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1115 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1113;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:480
org$frostlang$frostc$MethodDecl* $tmp1117 = *(&local3);
frost$collections$Array** $tmp1118 = &$tmp1117->parameters;
frost$collections$Array* $tmp1119 = *$tmp1118;
ITable* $tmp1120 = ((frost$collections$CollectionView*) $tmp1119)->$class->itable;
while ($tmp1120->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1120 = $tmp1120->next;
}
$fn1122 $tmp1121 = $tmp1120->methods[0];
frost$core$Int $tmp1123 = $tmp1121(((frost$collections$CollectionView*) $tmp1119));
frost$core$Int $tmp1124 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:480:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1125 = $tmp1123.value;
int64_t $tmp1126 = $tmp1124.value;
bool $tmp1127 = $tmp1125 == $tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block47; else goto block48;
block48:;
frost$core$Int $tmp1130 = (frost$core$Int) {480u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1131, $tmp1130);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:481
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1132 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1133 = (frost$core$Int) {9u};
org$frostlang$frostc$MethodDecl* $tmp1134 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1135 = *(&local3);
org$frostlang$frostc$Type* $tmp1136 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1135, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1132, $tmp1133, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1134, $tmp1136);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1137 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1138 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1137, $tmp1138);
frost$collections$Array$add$frost$collections$Array$T($tmp1137, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1139 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1132, ((frost$collections$ListView*) $tmp1137), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
org$frostlang$frostc$MethodDecl* $tmp1140 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1141 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1139;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:484
org$frostlang$frostc$MethodDecl* $tmp1143 = *(&local3);
frost$core$Weak** $tmp1144 = &$tmp1143->owner;
frost$core$Weak* $tmp1145 = *$tmp1144;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:484:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1146 = &$tmp1145->_valid;
frost$core$Bit $tmp1147 = *$tmp1146;
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block53; else goto block54;
block54:;
frost$core$Int $tmp1149 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1150, $tmp1149);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1151 = &$tmp1145->value;
frost$core$Object* $tmp1152 = *$tmp1151;
frost$core$Frost$ref$frost$core$Object$Q($tmp1152);
frost$core$String** $tmp1153 = &((org$frostlang$frostc$ClassDecl*) $tmp1152)->name;
frost$core$String* $tmp1154 = *$tmp1153;
frost$core$Bit $tmp1155 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1154, &$s1156);
bool $tmp1157 = $tmp1155.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1152);
if ($tmp1157) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:485
org$frostlang$frostc$MethodDecl* $tmp1158 = *(&local3);
frost$core$String** $tmp1159 = &((org$frostlang$frostc$Symbol*) $tmp1158)->name;
frost$core$String* $tmp1160 = *$tmp1159;
frost$core$Bit $tmp1161 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1160, &$s1162);
bool $tmp1163 = $tmp1161.value;
if ($tmp1163) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:486
org$frostlang$frostc$IR$Value* $tmp1164 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
org$frostlang$frostc$MethodDecl* $tmp1165 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1166 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1164;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:488
org$frostlang$frostc$MethodDecl* $tmp1168 = *(&local3);
frost$core$String** $tmp1169 = &((org$frostlang$frostc$Symbol*) $tmp1168)->name;
frost$core$String* $tmp1170 = *$tmp1169;
frost$core$Bit $tmp1171 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1170, &$s1172);
bool $tmp1173 = $tmp1171.value;
if ($tmp1173) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:489
org$frostlang$frostc$IR$Value* $tmp1174 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
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
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:492
frost$collections$CollectionView* $tmp1178 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
org$frostlang$frostc$MethodDecl* $tmp1179 = *(&local3);
frost$core$Weak** $tmp1180 = &$tmp1179->owner;
frost$core$Weak* $tmp1181 = *$tmp1180;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:492:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1182 = &$tmp1181->_valid;
frost$core$Bit $tmp1183 = *$tmp1182;
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block61; else goto block62;
block62:;
frost$core$Int $tmp1185 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1186, $tmp1185);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1187 = &$tmp1181->value;
frost$core$Object* $tmp1188 = *$tmp1187;
frost$core$Frost$ref$frost$core$Object$Q($tmp1188);
// begin inline call to function org.frostlang.frostc.Compiler.findType(start:frost.collections.CollectionView<org.frostlang.frostc.Type>, target:org.frostlang.frostc.ClassDecl):org.frostlang.frostc.Type? from Binary.frost:492:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4432
ITable* $tmp1189 = ((frost$collections$Iterable*) $tmp1178)->$class->itable;
while ($tmp1189->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1189 = $tmp1189->next;
}
$fn1191 $tmp1190 = $tmp1189->methods[0];
frost$collections$Iterator* $tmp1192 = $tmp1190(((frost$collections$Iterable*) $tmp1178));
goto block64;
block64:;
ITable* $tmp1193 = $tmp1192->$class->itable;
while ($tmp1193->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1193 = $tmp1193->next;
}
$fn1195 $tmp1194 = $tmp1193->methods[0];
frost$core$Bit $tmp1196 = $tmp1194($tmp1192);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block66; else goto block65;
block65:;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1198 = $tmp1192->$class->itable;
while ($tmp1198->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1198 = $tmp1198->next;
}
$fn1200 $tmp1199 = $tmp1198->methods[1];
frost$core$Object* $tmp1201 = $tmp1199($tmp1192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1201)));
org$frostlang$frostc$Type* $tmp1202 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1201);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4433
org$frostlang$frostc$Type* $tmp1203 = *(&local11);
org$frostlang$frostc$Type* $tmp1204 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1203, ((org$frostlang$frostc$ClassDecl*) $tmp1188));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
org$frostlang$frostc$Type* $tmp1205 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local12) = $tmp1204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4434
org$frostlang$frostc$Type* $tmp1206 = *(&local12);
frost$core$Bit $tmp1207 = (frost$core$Bit) {$tmp1206 != NULL};
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4435
org$frostlang$frostc$Type* $tmp1209 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
org$frostlang$frostc$Type* $tmp1210 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1201);
org$frostlang$frostc$Type* $tmp1211 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local10) = $tmp1209;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
goto block63;
block68:;
org$frostlang$frostc$Type* $tmp1212 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1201);
org$frostlang$frostc$Type* $tmp1213 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block64;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4438
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
goto block63;
block63:;
org$frostlang$frostc$Type* $tmp1214 = *(&local10);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
org$frostlang$frostc$Type* $tmp1215 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local13) = $tmp1214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:493
org$frostlang$frostc$Type* $tmp1216 = *(&local13);
frost$core$Bit $tmp1217 = (frost$core$Bit) {$tmp1216 != NULL};
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block69; else goto block70;
block70:;
frost$core$Int $tmp1219 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1220, $tmp1219);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:494
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1221 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1222 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp1223 = *(&local13);
frost$core$Bit $tmp1224 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1221, $tmp1222, $tmp1223, $tmp1224);
org$frostlang$frostc$IR$Value* $tmp1225 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1221);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
org$frostlang$frostc$IR$Value* $tmp1226 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local14) = $tmp1225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:495
org$frostlang$frostc$IR$Value* $tmp1227 = *(&local14);
frost$core$Bit $tmp1228 = (frost$core$Bit) {$tmp1227 == NULL};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1230 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1231 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1232 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
org$frostlang$frostc$MethodDecl* $tmp1233 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1234 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:498
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1236 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1237 = (frost$core$Int) {9u};
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local14);
org$frostlang$frostc$MethodDecl* $tmp1239 = *(&local3);
org$frostlang$frostc$MethodDecl* $tmp1240 = *(&local3);
org$frostlang$frostc$Type* $tmp1241 = org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type($tmp1240, param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type($tmp1236, $tmp1237, $tmp1238, $tmp1239, $tmp1241);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1242 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp1243 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp1242, $tmp1243);
frost$collections$Array$add$frost$collections$Array$T($tmp1242, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1244 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1236, ((frost$collections$ListView*) $tmp1242), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1246 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1247 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
org$frostlang$frostc$MethodDecl* $tmp1248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1250 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1244;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:501
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1251 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1252 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1251, $tmp1252);
org$frostlang$frostc$IR$Value* $tmp1253 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1251);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local15) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:502
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local15);
frost$core$Bit $tmp1256 = (frost$core$Bit) {$tmp1255 == NULL};
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1258 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1261;
$tmp1261 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1261->value = param3;
frost$core$Int $tmp1262 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:505:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp1263 = &(&local17)->$rawValue;
*$tmp1263 = $tmp1262;
org$frostlang$frostc$expression$Binary$Operator $tmp1264 = *(&local17);
*(&local16) = $tmp1264;
org$frostlang$frostc$expression$Binary$Operator $tmp1265 = *(&local16);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1266;
$tmp1266 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1266->value = $tmp1265;
ITable* $tmp1267 = ((frost$core$Equatable*) $tmp1261)->$class->itable;
while ($tmp1267->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1267 = $tmp1267->next;
}
$fn1269 $tmp1268 = $tmp1267->methods[0];
frost$core$Bit $tmp1270 = $tmp1268(((frost$core$Equatable*) $tmp1261), ((frost$core$Equatable*) $tmp1266));
bool $tmp1271 = $tmp1270.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1266)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1261)));
if ($tmp1271) goto block77; else goto block76;
block77:;
org$frostlang$frostc$IR$Value* $tmp1272 = *(&local15);
$fn1274 $tmp1273 = ($fn1274) $tmp1272->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1275 = $tmp1273($tmp1272);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Binary.frost:505:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp1276 = &$tmp1275->typeKind;
org$frostlang$frostc$Type$Kind $tmp1277 = *$tmp1276;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1278;
$tmp1278 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1278->value = $tmp1277;
frost$core$Int $tmp1279 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1280 = &(&local19)->$rawValue;
*$tmp1280 = $tmp1279;
org$frostlang$frostc$Type$Kind $tmp1281 = *(&local19);
*(&local18) = $tmp1281;
org$frostlang$frostc$Type$Kind $tmp1282 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1283;
$tmp1283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1283->value = $tmp1282;
ITable* $tmp1284 = ((frost$core$Equatable*) $tmp1278)->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
frost$core$Bit $tmp1287 = $tmp1285(((frost$core$Equatable*) $tmp1278), ((frost$core$Equatable*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1283)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1278)));
bool $tmp1288 = $tmp1287.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
if ($tmp1288) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:506
frost$core$Int* $tmp1289 = &param4->$rawValue;
frost$core$Int $tmp1290 = *$tmp1289;
frost$core$Int $tmp1291 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:507:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1292 = $tmp1290.value;
int64_t $tmp1293 = $tmp1291.value;
bool $tmp1294 = $tmp1292 == $tmp1293;
frost$core$Bit $tmp1295 = (frost$core$Bit) {$tmp1294};
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block82; else goto block81;
block82:;
org$frostlang$frostc$Position* $tmp1297 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1298 = *$tmp1297;
frost$core$UInt64* $tmp1299 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1300 = *$tmp1299;
*(&local20) = $tmp1300;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:508
org$frostlang$frostc$IR$Value* $tmp1301 = *(&local15);
frost$core$UInt64 $tmp1302 = *(&local20);
frost$core$UInt64$wrapper* $tmp1303;
$tmp1303 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1303->value = $tmp1302;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:509:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1305 $tmp1304 = ($fn1305) ((frost$core$Object*) $tmp1303)->$class->vtable[0];
frost$core$String* $tmp1306 = $tmp1304(((frost$core$Object*) $tmp1303));
frost$core$String* $tmp1307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1308, $tmp1306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$String* $tmp1309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1307, &$s1310);
org$frostlang$frostc$IR$Value* $tmp1311 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1301, $tmp1309);
org$frostlang$frostc$IR$Value* $tmp1312 = *(&local15);
$fn1314 $tmp1313 = ($fn1314) $tmp1312->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1315 = $tmp1313($tmp1312);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:510:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1316 = &$tmp1315->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1317 = *$tmp1316;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$UInt64 $tmp1318 = *(&local20);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Binary.frost:510:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp1319 = $tmp1318.value;
frost$core$Int $tmp1320 = (frost$core$Int) {((int64_t) $tmp1319)};
frost$core$Object* $tmp1321 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp1317, $tmp1320);
org$frostlang$frostc$IR$Value* $tmp1322 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1311, ((org$frostlang$frostc$Type*) $tmp1321));
org$frostlang$frostc$IR$Value* $tmp1323 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1322, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q($tmp1321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1323;
block81:;
goto block76;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:514
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1327 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1328 = (frost$core$Int) {3u};
org$frostlang$frostc$IR$Value* $tmp1329 = *(&local15);
$fn1331 $tmp1330 = ($fn1331) $tmp1329->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1332 = $tmp1330($tmp1329);
frost$core$Bit $tmp1333 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp1327, $tmp1328, $tmp1332, $tmp1333);
org$frostlang$frostc$IR$Value* $tmp1334 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1327);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
org$frostlang$frostc$IR$Value* $tmp1335 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local21) = $tmp1334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:516
org$frostlang$frostc$IR$Value* $tmp1336 = *(&local21);
frost$core$Bit $tmp1337 = (frost$core$Bit) {$tmp1336 == NULL};
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1339 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1340 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1341 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:519
org$frostlang$frostc$IR$Value* $tmp1343 = *(&local15);
$fn1345 $tmp1344 = ($fn1345) $tmp1343->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1346 = $tmp1344($tmp1343);
org$frostlang$frostc$Type** $tmp1347 = &param0->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp1348 = *$tmp1347;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Binary.frost:519:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp1349 = &((org$frostlang$frostc$Symbol*) $tmp1346)->name;
frost$core$String* $tmp1350 = *$tmp1349;
frost$core$String** $tmp1351 = &((org$frostlang$frostc$Symbol*) $tmp1348)->name;
frost$core$String* $tmp1352 = *$tmp1351;
frost$core$Bit $tmp1353 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1350, $tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block93; else goto block94;
block93:;
org$frostlang$frostc$Type$Kind* $tmp1355 = &$tmp1346->typeKind;
org$frostlang$frostc$Type$Kind $tmp1356 = *$tmp1355;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1357;
$tmp1357 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1357->value = $tmp1356;
org$frostlang$frostc$Type$Kind* $tmp1358 = &$tmp1348->typeKind;
org$frostlang$frostc$Type$Kind $tmp1359 = *$tmp1358;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1360;
$tmp1360 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1360->value = $tmp1359;
ITable* $tmp1361 = ((frost$core$Equatable*) $tmp1357)->$class->itable;
while ($tmp1361->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1361 = $tmp1361->next;
}
$fn1363 $tmp1362 = $tmp1361->methods[0];
frost$core$Bit $tmp1364 = $tmp1362(((frost$core$Equatable*) $tmp1357), ((frost$core$Equatable*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1360)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1357)));
*(&local22) = $tmp1364;
goto block95;
block94:;
*(&local22) = $tmp1353;
goto block95;
block95:;
frost$core$Bit $tmp1365 = *(&local22);
bool $tmp1366 = $tmp1365.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
if ($tmp1366) goto block89; else goto block91;
block91:;
org$frostlang$frostc$IR$Value* $tmp1367 = *(&local15);
$fn1369 $tmp1368 = ($fn1369) $tmp1367->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1370 = $tmp1368($tmp1367);
frost$core$Bit $tmp1371 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1370);
bool $tmp1372 = $tmp1371.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
if ($tmp1372) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:521
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1373 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1374 = (frost$core$Int) {5u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1373, $tmp1374, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1375 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1373);
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
org$frostlang$frostc$Type* $tmp1376 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local23) = $tmp1375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:523
org$frostlang$frostc$Type* $tmp1377 = *(&local23);
frost$core$Bit $tmp1378 = (frost$core$Bit) {$tmp1377 != NULL};
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:524
org$frostlang$frostc$IR** $tmp1380 = &param0->ir;
org$frostlang$frostc$IR* $tmp1381 = *$tmp1380;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1382 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1383 = (frost$core$Int) {0u};
org$frostlang$frostc$IR$Value* $tmp1384 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp1385 = *(&local21);
org$frostlang$frostc$Type* $tmp1386 = *(&local23);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1382, $tmp1383, param1, $tmp1384, param3, $tmp1385, $tmp1386);
$fn1388 $tmp1387 = ($fn1388) $tmp1381->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1389 = $tmp1387($tmp1381, $tmp1382);
*(&local24) = $tmp1389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:526
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1390 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp1391 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp1392 = *(&local24);
org$frostlang$frostc$Type* $tmp1393 = *(&local23);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1390, $tmp1391, $tmp1392, $tmp1393);
org$frostlang$frostc$IR$Value* $tmp1394 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1390, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
org$frostlang$frostc$Type* $tmp1395 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1396 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1397 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1398 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1394;
block97:;
org$frostlang$frostc$Type* $tmp1400 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
goto block90;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:529
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1401;
$tmp1401 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1401->value = param3;
$fn1403 $tmp1402 = ($fn1403) ((frost$core$Object*) $tmp1401)->$class->vtable[0];
frost$core$String* $tmp1404 = $tmp1402(((frost$core$Object*) $tmp1401));
frost$core$String* $tmp1405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1406, $tmp1404);
frost$core$String* $tmp1407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1405, &$s1408);
org$frostlang$frostc$IR$Value* $tmp1409 = *(&local15);
$fn1411 $tmp1410 = ($fn1411) $tmp1409->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1412 = $tmp1410($tmp1409);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1414 $tmp1413 = ($fn1414) ((frost$core$Object*) $tmp1412)->$class->vtable[0];
frost$core$String* $tmp1415 = $tmp1413(((frost$core$Object*) $tmp1412));
frost$core$String* $tmp1416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1417, $tmp1415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$String* $tmp1418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1416, &$s1419);
org$frostlang$frostc$IR$Value* $tmp1420 = *(&local21);
$fn1422 $tmp1421 = ($fn1422) $tmp1420->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1423 = $tmp1421($tmp1420);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1425 $tmp1424 = ($fn1425) ((frost$core$Object*) $tmp1423)->$class->vtable[0];
frost$core$String* $tmp1426 = $tmp1424(((frost$core$Object*) $tmp1423));
frost$core$String* $tmp1427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1418, $tmp1426);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$String* $tmp1428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1427, &$s1429);
frost$core$String* $tmp1430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1407, $tmp1428);
$fn1432 $tmp1431 = ($fn1432) param5->$class->vtable[2];
frost$core$String* $tmp1433 = $tmp1431(param5);
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1430, $tmp1433);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1435 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1436 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block3:;
goto block100;
block100:;

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

