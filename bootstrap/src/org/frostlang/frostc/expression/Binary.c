#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Int64.h"
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
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn156)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn164)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn216)(frost$core$Object*);
typedef frost$core$Bit (*$fn294)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn302)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn336)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn340)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn345)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn356)(frost$core$Object*);
typedef frost$core$String* (*$fn364)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn370)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn374)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn435)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn439)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn444)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn452)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn456)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn461)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn558)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn578)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn598)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn615)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn629)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn646)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn660)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn672)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn689)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn706)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn723)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn740)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn757)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn782)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn802)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn822)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn842)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn862)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn866)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn870)(frost$core$Object*);
typedef frost$core$Bit (*$fn886)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn988)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1009)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1022)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1079)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1088)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1129)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1151)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1218)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1222)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1227)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1294)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1299)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1311)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1330)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1339)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1362)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1376)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1400)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1406)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1425)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn1440)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1448)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1451)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn1459)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn1462)(frost$core$Object*);
typedef frost$core$String* (*$fn1469)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 8989498193344452911, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, -655368231937263126, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -6918652954435975437, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65", 16, -3824106974885053230, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65", 19, 3485158542744871659, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x54\x75\x70\x6c\x65", 25, -929241320127471718, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, 203, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s1333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66", 1, 203, NULL };
static frost$core$String $s1335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static frost$core$String $s1445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:256
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:256:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp4 = &$tmp3->flags;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {16};
frost$core$Int64 $tmp7 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp5, $tmp6);
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 != $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
return $tmp12;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$Symbol* local4 = NULL;
frost$collections$Array* local5 = NULL;
frost$core$Bit local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
frost$core$Bit local9;
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Pair* local11 = NULL;
org$frostlang$frostc$Pair* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$ClassDecl* local14 = NULL;
frost$collections$Array* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlang$frostc$Pair* local17 = NULL;
org$frostlang$frostc$Pair* local18 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:188
frost$core$Bit $tmp13 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:188:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
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
frost$core$Bit $tmp21 = frost$core$Bit$init$builtin_bit($tmp20 == NULL);
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
frost$core$Int64 $tmp25 = (frost$core$Int64) {7};
frost$core$Int64 $tmp26 = (frost$core$Int64) {18446744073709551615};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from Binary.frost:195:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp27 = &(&local2)->value;
*$tmp27 = $tmp26;
org$frostlang$frostc$IR$Statement$ID $tmp28 = *(&local2);
*(&local1) = $tmp28;
org$frostlang$frostc$IR$Statement$ID $tmp29 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp24, $tmp25, $tmp29, param1);
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
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit($tmp39 != NULL);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:198
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp42 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp42, $tmp43);
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
frost$core$Int64 $tmp48 = $tmp47.$rawValue;
frost$core$Int64 $tmp49 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:201:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 == $tmp51;
frost$core$Bit $tmp53 = frost$core$Bit$init$builtin_bit($tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:202
org$frostlang$frostc$Symbol* $tmp55 = *(&local4);
org$frostlang$frostc$Annotations** $tmp56 = &((org$frostlang$frostc$MethodDecl*) $tmp55)->annotations;
org$frostlang$frostc$Annotations* $tmp57 = *$tmp56;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:202:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp58 = &$tmp57->flags;
frost$core$Int64 $tmp59 = *$tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 & $tmp62;
frost$core$Int64 $tmp64 = frost$core$Int64$init$builtin_int64($tmp63);
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 != $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:202:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp70 = $tmp69.value;
bool $tmp71 = !$tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block13; else goto block15;
block15:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from Binary.frost:202:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
org$frostlang$frostc$Type$Kind* $tmp74 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp75 = *$tmp74;
org$frostlang$frostc$Type$Kind$wrapper* $tmp76;
$tmp76 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp76->value = $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:599:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp78 = &(&local8)->$rawValue;
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp87 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp88 = *$tmp87;
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit($tmp88 != NULL);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s92, $tmp91);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp93 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp94 = *$tmp93;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Int64 $tmp95 = (frost$core$Int64) {0};
frost$core$Object* $tmp96 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp94, $tmp95);
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:599:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp97 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp98 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp99 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp98);
org$frostlang$frostc$Position $tmp100 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp97, &$s102, $tmp99, $tmp100, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:599:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp103 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp96))->name;
frost$core$String* $tmp104 = *$tmp103;
frost$core$String** $tmp105 = &((org$frostlang$frostc$Symbol*) $tmp97)->name;
frost$core$String* $tmp106 = *$tmp105;
frost$core$Bit $tmp107 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp104, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Type$Kind* $tmp109 = &((org$frostlang$frostc$Type*) $tmp96)->typeKind;
org$frostlang$frostc$Type$Kind $tmp110 = *$tmp109;
org$frostlang$frostc$Type$Kind$wrapper* $tmp111;
$tmp111 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp111->value = $tmp110;
org$frostlang$frostc$Type$Kind* $tmp112 = &$tmp97->typeKind;
org$frostlang$frostc$Type$Kind $tmp113 = *$tmp112;
org$frostlang$frostc$Type$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp114->value = $tmp113;
ITable* $tmp115 = ((frost$core$Equatable*) $tmp111)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Bit $tmp118 = $tmp116(((frost$core$Equatable*) $tmp111), ((frost$core$Equatable*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp111)));
*(&local9) = $tmp118;
goto block31;
block30:;
*(&local9) = $tmp107;
goto block31;
block31:;
frost$core$Bit $tmp119 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q($tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local6) = $tmp119;
goto block23;
block22:;
*(&local6) = $tmp85;
goto block23;
block23:;
frost$core$Bit $tmp120 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:203
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp122 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp122);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$collections$Array* $tmp123 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local10) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:204
frost$collections$Array* $tmp124 = *(&local10);
org$frostlang$frostc$Symbol* $tmp125 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp124, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp125)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:205
org$frostlang$frostc$Position $tmp126 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp127 = *(&local3);
frost$collections$Array* $tmp128 = *(&local10);
frost$collections$Array* $tmp129 = *(&local5);
org$frostlang$frostc$Pair* $tmp130 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp126, $tmp127, ((frost$collections$ListView*) $tmp128), ((frost$collections$ListView*) $tmp129), param4);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$Pair* $tmp131 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local11) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:207
org$frostlang$frostc$Pair* $tmp132 = *(&local11);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132 != NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:208
org$frostlang$frostc$Pair* $tmp135 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$Pair* $tmp136 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp137 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local10) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp138 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp140 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp135;
block33:;
org$frostlang$frostc$Pair* $tmp142 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp143 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local10) = ((frost$collections$Array*) NULL);
goto block14;
block14:;
goto block9;
block11:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:212:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp145 = $tmp48.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:213
org$frostlang$frostc$Position $tmp150 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp151 = *(&local3);
org$frostlang$frostc$Symbol* $tmp152 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp153 = &((org$frostlang$frostc$Methods*) $tmp152)->methods;
org$frostlang$frostc$FixedArray* $tmp154 = *$tmp153;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Binary$_Closure2));
org$frostlang$frostc$expression$Binary$_Closure2* $tmp155 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp155, param1);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp157 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Binary.frost:215:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp158 = &$tmp157->pointer;
*$tmp158 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Object** $tmp159 = &$tmp157->target;
frost$core$Object* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
frost$core$Object** $tmp161 = &$tmp157->target;
*$tmp161 = ((frost$core$Object*) $tmp155);
ITable* $tmp162 = ((frost$collections$ListView*) $tmp154)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[4];
frost$collections$ListView* $tmp165 = $tmp163(((frost$collections$ListView*) $tmp154), $tmp157);
frost$collections$Array* $tmp166 = *(&local5);
org$frostlang$frostc$Pair* $tmp167 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp150, $tmp151, $tmp165, ((frost$collections$ListView*) $tmp166), param4);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$Pair* $tmp168 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local12) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:216
org$frostlang$frostc$Pair* $tmp169 = *(&local12);
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit($tmp169 != NULL);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:217
org$frostlang$frostc$Pair* $tmp172 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$Pair* $tmp173 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp174 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp175 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp176 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp172;
block39:;
org$frostlang$frostc$Pair* $tmp178 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
goto block9;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:221
frost$core$Int64 $tmp179 = (frost$core$Int64) {221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s180, $tmp179);
abort(); // unreachable
block9:;
frost$collections$Array* $tmp181 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local5) = ((frost$collections$Array*) NULL);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:227
org$frostlang$frostc$Type* $tmp182 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$Type* $tmp183 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local13) = $tmp182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:228
org$frostlang$frostc$Type* $tmp184 = *(&local13);
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit($tmp184 == NULL);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp187 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp188 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:231
org$frostlang$frostc$Type* $tmp191 = *(&local13);
frost$core$Bit $tmp192 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp191);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Binary.frost:231:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp193 = $tmp192.value;
bool $tmp194 = !$tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp197 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp198 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp199 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp200 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:234
org$frostlang$frostc$Type* $tmp201 = *(&local13);
org$frostlang$frostc$ClassDecl* $tmp202 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp201);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
org$frostlang$frostc$ClassDecl* $tmp203 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local14) = $tmp202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:235
org$frostlang$frostc$ClassDecl* $tmp204 = *(&local14);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204 == NULL);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp208 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
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
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:238
org$frostlang$frostc$ClassDecl* $tmp212 = *(&local14);
org$frostlang$frostc$SymbolTable* $tmp213 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp212);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp214->value = param2;
$fn216 $tmp215 = ($fn216) ((frost$core$Object*) $tmp214)->$class->vtable[0];
frost$core$String* $tmp217 = $tmp215(((frost$core$Object*) $tmp214));
org$frostlang$frostc$Symbol* $tmp218 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp213, $tmp217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
org$frostlang$frostc$Symbol* $tmp219 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local4) = $tmp218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:239
org$frostlang$frostc$Symbol* $tmp220 = *(&local4);
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220 == NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp223 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp224 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp225 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp226 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:242
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp228 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp229 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp228, $tmp229);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp230 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp231 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp232 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp233 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp230, $tmp231, $tmp232, $tmp233);
frost$collections$Array$add$frost$collections$Array$T($tmp228, ((frost$core$Object*) $tmp230));
frost$collections$Array$add$frost$collections$Array$T($tmp228, ((frost$core$Object*) param3));
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$collections$Array* $tmp234 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local15) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:243
org$frostlang$frostc$Symbol* $tmp235 = *(&local4);
org$frostlang$frostc$Symbol$Kind* $tmp236 = &$tmp235->kind;
org$frostlang$frostc$Symbol$Kind $tmp237 = *$tmp236;
frost$core$Int64 $tmp238 = $tmp237.$rawValue;
frost$core$Int64 $tmp239 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:244:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239.value;
bool $tmp242 = $tmp240 == $tmp241;
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:245
org$frostlang$frostc$Symbol* $tmp245 = *(&local4);
org$frostlang$frostc$Annotations** $tmp246 = &((org$frostlang$frostc$MethodDecl*) $tmp245)->annotations;
org$frostlang$frostc$Annotations* $tmp247 = *$tmp246;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:245:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp248 = &$tmp247->flags;
frost$core$Int64 $tmp249 = *$tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
int64_t $tmp253 = $tmp251 & $tmp252;
frost$core$Int64 $tmp254 = frost$core$Int64$init$builtin_int64($tmp253);
frost$core$Int64 $tmp255 = (frost$core$Int64) {0};
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255.value;
bool $tmp258 = $tmp256 != $tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:246
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp261 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp261);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$collections$Array* $tmp262 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local16) = $tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:247
frost$collections$Array* $tmp263 = *(&local16);
org$frostlang$frostc$Symbol* $tmp264 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp263, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp264)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:248
org$frostlang$frostc$Position $tmp265 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp266 = *(&local16);
frost$collections$Array* $tmp267 = *(&local15);
org$frostlang$frostc$Pair* $tmp268 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp265, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp266), ((frost$collections$ListView*) $tmp267), param4);
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
org$frostlang$frostc$Pair* $tmp269 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local17) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:249
org$frostlang$frostc$Pair* $tmp270 = *(&local17);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270 != NULL);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:250
org$frostlang$frostc$Pair* $tmp273 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$Pair* $tmp274 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp275 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local16) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp276 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp277 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp278 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp279 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp280 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp273;
block58:;
org$frostlang$frostc$Pair* $tmp282 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local17) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp283 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local16) = ((frost$collections$Array*) NULL);
goto block54;
block54:;
goto block49;
block51:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:254:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp285 = $tmp238.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 == $tmp286;
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit($tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:255
org$frostlang$frostc$Position $tmp290 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp291 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp292 = &((org$frostlang$frostc$Methods*) $tmp291)->methods;
org$frostlang$frostc$FixedArray* $tmp293 = *$tmp292;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp295 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Binary.frost:256:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp296 = &$tmp295->pointer;
*$tmp296 = ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp297 = &$tmp295->target;
frost$core$Immutable* $tmp298 = *$tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Immutable** $tmp299 = &$tmp295->target;
*$tmp299 = ((frost$core$Immutable*) NULL);
ITable* $tmp300 = ((frost$collections$ListView*) $tmp293)->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp300 = $tmp300->next;
}
$fn302 $tmp301 = $tmp300->methods[4];
frost$collections$ListView* $tmp303 = $tmp301(((frost$collections$ListView*) $tmp293), ((frost$core$MutableMethod*) $tmp295));
frost$collections$Array* $tmp304 = *(&local15);
org$frostlang$frostc$Pair* $tmp305 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp290, ((org$frostlang$frostc$IR$Value*) NULL), $tmp303, ((frost$collections$ListView*) $tmp304), param4);
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
org$frostlang$frostc$Pair* $tmp306 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local18) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:257
org$frostlang$frostc$Pair* $tmp307 = *(&local18);
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit($tmp307 != NULL);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:258
org$frostlang$frostc$Pair* $tmp310 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$Pair* $tmp311 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp312 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp313 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp314 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp315 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp316 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp310;
block64:;
org$frostlang$frostc$Pair* $tmp318 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
goto block49;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:262
frost$core$Int64 $tmp319 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s320, $tmp319);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp321 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local15) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp322 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp323 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp324 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local4) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

frost$collections$CollectionView* local0 = NULL;
org$frostlang$frostc$Pair* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Pair* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
frost$core$Int64 local5;
frost$collections$Array* local6 = NULL;
org$frostlang$frostc$MethodRef* local7 = NULL;
org$frostlang$frostc$MethodRef* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:271
frost$collections$CollectionView* $tmp327 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$CollectionView* $tmp328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local0) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:272
frost$collections$CollectionView* $tmp329 = *(&local0);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329 != NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp332 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:274
frost$collections$CollectionView* $tmp333 = *(&local0);
ITable* $tmp334 = ((frost$collections$Iterable*) $tmp333)->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$collections$Iterator* $tmp337 = $tmp335(((frost$collections$Iterable*) $tmp333));
goto block3;
block3:;
ITable* $tmp338 = $tmp337->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
frost$core$Bit $tmp341 = $tmp339($tmp337);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp343 = $tmp337->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[1];
frost$core$Object* $tmp346 = $tmp344($tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp346)));
org$frostlang$frostc$Type* $tmp347 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp346);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:275
org$frostlang$frostc$Type* $tmp348 = *(&local2);
org$frostlang$frostc$Pair* $tmp349 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param1, $tmp348);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$Pair* $tmp350 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local3) = $tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:276
org$frostlang$frostc$Pair* $tmp351 = *(&local3);
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit($tmp351 != NULL);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp354 = (frost$core$Int64) {276};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn356 $tmp355 = ($fn356) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp357 = $tmp355(((frost$core$Object*) param1));
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s359, $tmp357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$String* $tmp360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp358, &$s361);
org$frostlang$frostc$Type* $tmp362 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn364 $tmp363 = ($fn364) ((frost$core$Object*) $tmp362)->$class->vtable[0];
frost$core$String* $tmp365 = $tmp363(((frost$core$Object*) $tmp362));
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp360, $tmp365);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp366, &$s368);
$fn370 $tmp369 = ($fn370) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp371 = $tmp369(param1);
org$frostlang$frostc$Position$wrapper* $tmp372;
$tmp372 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp372->value = $tmp371;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn374 $tmp373 = ($fn374) ((frost$core$Object*) $tmp372)->$class->vtable[0];
frost$core$String* $tmp375 = $tmp373(((frost$core$Object*) $tmp372));
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp367, $tmp375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp376, &$s378);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s379, $tmp354, $tmp377);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:278
org$frostlang$frostc$Type* $tmp380 = *(&local2);
org$frostlang$frostc$Pair* $tmp381 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp380, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$Pair* $tmp382 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local4) = $tmp381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:279
org$frostlang$frostc$Pair* $tmp383 = *(&local4);
frost$core$Bit $tmp384 = frost$core$Bit$init$builtin_bit($tmp383 != NULL);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:280
org$frostlang$frostc$Pair* $tmp386 = *(&local4);
frost$core$Object** $tmp387 = &$tmp386->second;
frost$core$Object* $tmp388 = *$tmp387;
org$frostlang$frostc$Pair* $tmp389 = *(&local3);
frost$core$Object** $tmp390 = &$tmp389->second;
frost$core$Object* $tmp391 = *$tmp390;
int64_t $tmp392 = ((frost$core$Int64$wrapper*) $tmp388)->value.value;
int64_t $tmp393 = ((frost$core$Int64$wrapper*) $tmp391)->value.value;
int64_t $tmp394 = $tmp392 + $tmp393;
frost$core$Int64 $tmp395 = (frost$core$Int64) {$tmp394};
*(&local5) = $tmp395;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:281
org$frostlang$frostc$Pair* $tmp396 = *(&local1);
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit($tmp396 == NULL);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block13; else goto block16;
block16:;
frost$core$Int64 $tmp399 = *(&local5);
org$frostlang$frostc$Pair* $tmp400 = *(&local1);
frost$core$Object** $tmp401 = &$tmp400->second;
frost$core$Object* $tmp402 = *$tmp401;
int64_t $tmp403 = $tmp399.value;
int64_t $tmp404 = ((frost$core$Int64$wrapper*) $tmp402)->value.value;
bool $tmp405 = $tmp403 < $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:282
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp408 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp409 = *(&local4);
frost$core$Object** $tmp410 = &$tmp409->first;
frost$core$Object* $tmp411 = *$tmp410;
frost$core$Int64 $tmp412 = *(&local5);
frost$core$Int64$wrapper* $tmp413;
$tmp413 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp413->value = $tmp412;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp408, ((frost$core$Object*) ((frost$collections$ListView*) $tmp411)), ((frost$core$Object*) $tmp413));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
org$frostlang$frostc$Pair* $tmp414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local1) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:284
frost$core$Int64 $tmp415 = *(&local5);
org$frostlang$frostc$Pair* $tmp416 = *(&local1);
frost$core$Object** $tmp417 = &$tmp416->second;
frost$core$Object* $tmp418 = *$tmp417;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:284:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp419 = $tmp415.value;
int64_t $tmp420 = ((frost$core$Int64$wrapper*) $tmp418)->value.value;
bool $tmp421 = $tmp419 == $tmp420;
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit($tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:285
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp424 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp424);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$collections$Array* $tmp425 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local6) = $tmp424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:286
frost$collections$Array* $tmp426 = *(&local6);
org$frostlang$frostc$Pair* $tmp427 = *(&local1);
frost$core$Object** $tmp428 = &$tmp427->first;
frost$core$Object* $tmp429 = *$tmp428;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp426, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp429)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:287
org$frostlang$frostc$Pair* $tmp430 = *(&local4);
frost$core$Object** $tmp431 = &$tmp430->first;
frost$core$Object* $tmp432 = *$tmp431;
ITable* $tmp433 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp432))->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp433 = $tmp433->next;
}
$fn435 $tmp434 = $tmp433->methods[0];
frost$collections$Iterator* $tmp436 = $tmp434(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp432)));
goto block20;
block20:;
ITable* $tmp437 = $tmp436->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp437 = $tmp437->next;
}
$fn439 $tmp438 = $tmp437->methods[0];
frost$core$Bit $tmp440 = $tmp438($tmp436);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp442 = $tmp436->$class->itable;
while ($tmp442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp442 = $tmp442->next;
}
$fn444 $tmp443 = $tmp442->methods[1];
frost$core$Object* $tmp445 = $tmp443($tmp436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp445)));
org$frostlang$frostc$MethodRef* $tmp446 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local7) = ((org$frostlang$frostc$MethodRef*) $tmp445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:288
org$frostlang$frostc$Pair* $tmp447 = *(&local1);
frost$core$Object** $tmp448 = &$tmp447->first;
frost$core$Object* $tmp449 = *$tmp448;
ITable* $tmp450 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp449))->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$collections$Iterator* $tmp453 = $tmp451(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp449)));
goto block23;
block23:;
ITable* $tmp454 = $tmp453->$class->itable;
while ($tmp454->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp454 = $tmp454->next;
}
$fn456 $tmp455 = $tmp454->methods[0];
frost$core$Bit $tmp457 = $tmp455($tmp453);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block25; else goto block24;
block24:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp459 = $tmp453->$class->itable;
while ($tmp459->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp459 = $tmp459->next;
}
$fn461 $tmp460 = $tmp459->methods[1];
frost$core$Object* $tmp462 = $tmp460($tmp453);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp462)));
org$frostlang$frostc$MethodRef* $tmp463 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp462);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:289
org$frostlang$frostc$MethodRef* $tmp464 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp465 = &$tmp464->value;
org$frostlang$frostc$MethodDecl* $tmp466 = *$tmp465;
org$frostlang$frostc$MethodRef* $tmp467 = *(&local7);
org$frostlang$frostc$MethodDecl** $tmp468 = &$tmp467->value;
org$frostlang$frostc$MethodDecl* $tmp469 = *$tmp468;
bool $tmp470 = $tmp466 == $tmp469;
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit($tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:290
frost$core$Frost$unref$frost$core$Object$Q($tmp462);
org$frostlang$frostc$MethodRef* $tmp473 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
org$frostlang$frostc$MethodRef* $tmp474 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp462);
org$frostlang$frostc$MethodRef* $tmp475 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:293
frost$collections$Array* $tmp476 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp477 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp476, ((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
org$frostlang$frostc$MethodRef* $tmp478 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local7) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:295
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp479 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp480 = *(&local6);
frost$core$Int64 $tmp481 = *(&local5);
frost$core$Int64$wrapper* $tmp482;
$tmp482 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp482->value = $tmp481;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp479, ((frost$core$Object*) ((frost$collections$ListView*) $tmp480)), ((frost$core$Object*) $tmp482));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$Pair* $tmp483 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local1) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$collections$Array* $tmp484 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local6) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
goto block14;
block14:;
goto block12;
block12:;
org$frostlang$frostc$Pair* $tmp485 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp486 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
org$frostlang$frostc$Type* $tmp487 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:299
org$frostlang$frostc$Pair* $tmp488 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
org$frostlang$frostc$Pair* $tmp489 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp490 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp488;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp491 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
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
frost$core$Int64* $tmp492 = &param1->$rawValue;
frost$core$Int64 $tmp493 = *$tmp492;
frost$core$Int64 $tmp494 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:310:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494.value;
bool $tmp497 = $tmp495 == $tmp496;
frost$core$Bit $tmp498 = frost$core$Bit$init$builtin_bit($tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp500 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp501 = *$tmp500;
frost$core$UInt64* $tmp502 = (frost$core$UInt64*) (param1->$data + 24);
frost$core$UInt64 $tmp503 = *$tmp502;
*(&local2) = $tmp503;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:311
frost$core$UInt64 $tmp504 = *(&local2);
frost$core$Int64 $tmp505 = (frost$core$Int64) {9223372036854775807};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:311:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp506 = $tmp505.value;
frost$core$UInt64 $tmp507 = (frost$core$UInt64) {((uint64_t) $tmp506)};
uint64_t $tmp508 = $tmp504.value;
uint64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 > $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:314
frost$core$UInt64 $tmp513 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:314:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp514 = $tmp513.value;
frost$core$Int64 $tmp515 = (frost$core$Int64) {((int64_t) $tmp514)};
*(&local0) = $tmp515;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:320
frost$core$Int64* $tmp516 = &param3->$rawValue;
frost$core$Int64 $tmp517 = *$tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:321:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518.value;
bool $tmp521 = $tmp519 == $tmp520;
frost$core$Bit $tmp522 = frost$core$Bit$init$builtin_bit($tmp521);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block10; else goto block11;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
org$frostlang$frostc$Position* $tmp524 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp525 = *$tmp524;
frost$core$UInt64* $tmp526 = (frost$core$UInt64*) (param3->$data + 24);
frost$core$UInt64 $tmp527 = *$tmp526;
*(&local3) = $tmp527;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:322
frost$core$UInt64 $tmp528 = *(&local3);
frost$core$Int64 $tmp529 = (frost$core$Int64) {9223372036854775807};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:322:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp530 = $tmp529.value;
frost$core$UInt64 $tmp531 = (frost$core$UInt64) {((uint64_t) $tmp530)};
uint64_t $tmp532 = $tmp528.value;
uint64_t $tmp533 = $tmp531.value;
bool $tmp534 = $tmp532 > $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:325
frost$core$UInt64 $tmp537 = *(&local3);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:325:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp538 = $tmp537.value;
frost$core$Int64 $tmp539 = (frost$core$Int64) {((int64_t) $tmp538)};
*(&local1) = $tmp539;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:331
frost$core$Int64 $tmp540 = param2.$rawValue;
frost$core$Int64 $tmp541 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:332:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp542 = $tmp540.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = frost$core$Bit$init$builtin_bit($tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block18; else goto block19;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:333
frost$core$Int64 $tmp547 = *(&local0);
frost$core$Int64 $tmp548 = *(&local1);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:333:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp553 = $tmp552.value;
frost$core$UInt64 $tmp554 = (frost$core$UInt64) {((uint64_t) $tmp553)};
*(&local4) = $tmp554;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:334
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp555 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp556 = (frost$core$Int64) {25};
$fn558 $tmp557 = ($fn558) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp559 = $tmp557(param1);
frost$core$UInt64 $tmp560 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp555, $tmp556, $tmp559, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
return $tmp555;
block19:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:336:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp562 = $tmp540.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:337
frost$core$Int64 $tmp567 = *(&local0);
frost$core$Int64 $tmp568 = *(&local1);
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569 - $tmp570;
frost$core$Int64 $tmp572 = (frost$core$Int64) {$tmp571};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:337:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp573 = $tmp572.value;
frost$core$UInt64 $tmp574 = (frost$core$UInt64) {((uint64_t) $tmp573)};
*(&local5) = $tmp574;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:338
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp575 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp576 = (frost$core$Int64) {25};
$fn578 $tmp577 = ($fn578) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp579 = $tmp577(param1);
frost$core$UInt64 $tmp580 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp575, $tmp576, $tmp579, $tmp580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
return $tmp575;
block23:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:340:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp582 = $tmp540.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 == $tmp583;
frost$core$Bit $tmp585 = frost$core$Bit$init$builtin_bit($tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:341
frost$core$Int64 $tmp587 = *(&local0);
frost$core$Int64 $tmp588 = *(&local1);
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589 * $tmp590;
frost$core$Int64 $tmp592 = (frost$core$Int64) {$tmp591};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:341:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp593 = $tmp592.value;
frost$core$UInt64 $tmp594 = (frost$core$UInt64) {((uint64_t) $tmp593)};
*(&local6) = $tmp594;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:342
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp595 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp596 = (frost$core$Int64) {25};
$fn598 $tmp597 = ($fn598) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp599 = $tmp597(param1);
frost$core$UInt64 $tmp600 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp595, $tmp596, $tmp599, $tmp600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
return $tmp595;
block27:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:344:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp602 = $tmp540.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 == $tmp603;
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:345
frost$core$Int64 $tmp607 = *(&local1);
frost$core$Int64 $tmp608 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:345:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp609 = $tmp607.value;
int64_t $tmp610 = $tmp608.value;
bool $tmp611 = $tmp609 == $tmp610;
frost$core$Bit $tmp612 = frost$core$Bit$init$builtin_bit($tmp611);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:346
$fn615 $tmp614 = ($fn615) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp616 = $tmp614(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp616, &$s617);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:349
frost$core$Int64 $tmp618 = *(&local0);
frost$core$Int64 $tmp619 = *(&local1);
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620 / $tmp621;
frost$core$Int64 $tmp623 = (frost$core$Int64) {$tmp622};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:349:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp624 = $tmp623.value;
frost$core$UInt64 $tmp625 = (frost$core$UInt64) {((uint64_t) $tmp624)};
*(&local7) = $tmp625;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp626 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp627 = (frost$core$Int64) {25};
$fn629 $tmp628 = ($fn629) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp630 = $tmp628(param1);
frost$core$UInt64 $tmp631 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp626, $tmp627, $tmp630, $tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
return $tmp626;
block31:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:352:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp633 = $tmp540.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 == $tmp634;
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit($tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:353
frost$core$Int64 $tmp638 = *(&local1);
frost$core$Int64 $tmp639 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:353:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639.value;
bool $tmp642 = $tmp640 == $tmp641;
frost$core$Bit $tmp643 = frost$core$Bit$init$builtin_bit($tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:354
$fn646 $tmp645 = ($fn646) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp647 = $tmp645(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp647, &$s648);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:357
frost$core$Int64 $tmp649 = *(&local0);
frost$core$Int64 $tmp650 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Binary.frost:357:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651 % $tmp652;
frost$core$Int64 $tmp654 = frost$core$Int64$init$builtin_int64($tmp653);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:357:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp655 = $tmp654.value;
frost$core$UInt64 $tmp656 = (frost$core$UInt64) {((uint64_t) $tmp655)};
*(&local8) = $tmp656;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:358
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp657 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp658 = (frost$core$Int64) {25};
$fn660 $tmp659 = ($fn660) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp661 = $tmp659(param1);
frost$core$UInt64 $tmp662 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp657, $tmp658, $tmp661, $tmp662);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
return $tmp657;
block38:;
frost$core$Int64 $tmp663 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:360:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp664 = $tmp540.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 == $tmp665;
frost$core$Bit $tmp667 = frost$core$Bit$init$builtin_bit($tmp666);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:361
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp669 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp670 = (frost$core$Int64) {6};
$fn672 $tmp671 = ($fn672) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp673 = $tmp671(param1);
frost$core$Int64 $tmp674 = *(&local0);
frost$core$Int64 $tmp675 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675.value;
bool $tmp678 = $tmp676 == $tmp677;
frost$core$Bit $tmp679 = frost$core$Bit$init$builtin_bit($tmp678);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp669, $tmp670, $tmp673, $tmp679);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
return $tmp669;
block46:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:363:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp681 = $tmp540.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 == $tmp682;
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit($tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:364
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp686 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp687 = (frost$core$Int64) {6};
$fn689 $tmp688 = ($fn689) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp690 = $tmp688(param1);
frost$core$Int64 $tmp691 = *(&local0);
frost$core$Int64 $tmp692 = *(&local1);
int64_t $tmp693 = $tmp691.value;
int64_t $tmp694 = $tmp692.value;
bool $tmp695 = $tmp693 != $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp686, $tmp687, $tmp690, $tmp696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
return $tmp686;
block50:;
frost$core$Int64 $tmp697 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:366:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp698 = $tmp540.value;
int64_t $tmp699 = $tmp697.value;
bool $tmp700 = $tmp698 == $tmp699;
frost$core$Bit $tmp701 = frost$core$Bit$init$builtin_bit($tmp700);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:367
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp703 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp704 = (frost$core$Int64) {6};
$fn706 $tmp705 = ($fn706) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp707 = $tmp705(param1);
frost$core$Int64 $tmp708 = *(&local0);
frost$core$Int64 $tmp709 = *(&local1);
int64_t $tmp710 = $tmp708.value;
int64_t $tmp711 = $tmp709.value;
bool $tmp712 = $tmp710 < $tmp711;
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp712};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp703, $tmp704, $tmp707, $tmp713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
return $tmp703;
block53:;
frost$core$Int64 $tmp714 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:369:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp715 = $tmp540.value;
int64_t $tmp716 = $tmp714.value;
bool $tmp717 = $tmp715 == $tmp716;
frost$core$Bit $tmp718 = frost$core$Bit$init$builtin_bit($tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:370
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp720 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp721 = (frost$core$Int64) {6};
$fn723 $tmp722 = ($fn723) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp724 = $tmp722(param1);
frost$core$Int64 $tmp725 = *(&local0);
frost$core$Int64 $tmp726 = *(&local1);
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726.value;
bool $tmp729 = $tmp727 > $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp720, $tmp721, $tmp724, $tmp730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
return $tmp720;
block56:;
frost$core$Int64 $tmp731 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:372:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp732 = $tmp540.value;
int64_t $tmp733 = $tmp731.value;
bool $tmp734 = $tmp732 == $tmp733;
frost$core$Bit $tmp735 = frost$core$Bit$init$builtin_bit($tmp734);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:373
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp737 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp738 = (frost$core$Int64) {6};
$fn740 $tmp739 = ($fn740) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp741 = $tmp739(param1);
frost$core$Int64 $tmp742 = *(&local0);
frost$core$Int64 $tmp743 = *(&local1);
int64_t $tmp744 = $tmp742.value;
int64_t $tmp745 = $tmp743.value;
bool $tmp746 = $tmp744 <= $tmp745;
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp737, $tmp738, $tmp741, $tmp747);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
return $tmp737;
block59:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:375:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp749 = $tmp540.value;
int64_t $tmp750 = $tmp748.value;
bool $tmp751 = $tmp749 == $tmp750;
frost$core$Bit $tmp752 = frost$core$Bit$init$builtin_bit($tmp751);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:376
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp754 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp755 = (frost$core$Int64) {6};
$fn757 $tmp756 = ($fn757) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp758 = $tmp756(param1);
frost$core$Int64 $tmp759 = *(&local0);
frost$core$Int64 $tmp760 = *(&local1);
int64_t $tmp761 = $tmp759.value;
int64_t $tmp762 = $tmp760.value;
bool $tmp763 = $tmp761 >= $tmp762;
frost$core$Bit $tmp764 = (frost$core$Bit) {$tmp763};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp754, $tmp755, $tmp758, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
return $tmp754;
block62:;
frost$core$Int64 $tmp765 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:378:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp766 = $tmp540.value;
int64_t $tmp767 = $tmp765.value;
bool $tmp768 = $tmp766 == $tmp767;
frost$core$Bit $tmp769 = frost$core$Bit$init$builtin_bit($tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:379
frost$core$Int64 $tmp771 = *(&local0);
frost$core$Int64 $tmp772 = *(&local1);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Binary.frost:379:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 & $tmp774;
frost$core$Int64 $tmp776 = frost$core$Int64$init$builtin_int64($tmp775);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:379:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp777 = $tmp776.value;
frost$core$UInt64 $tmp778 = (frost$core$UInt64) {((uint64_t) $tmp777)};
*(&local9) = $tmp778;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:380
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp779 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp780 = (frost$core$Int64) {25};
$fn782 $tmp781 = ($fn782) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp783 = $tmp781(param1);
frost$core$UInt64 $tmp784 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp779, $tmp780, $tmp783, $tmp784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
return $tmp779;
block65:;
frost$core$Int64 $tmp785 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:382:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp786 = $tmp540.value;
int64_t $tmp787 = $tmp785.value;
bool $tmp788 = $tmp786 == $tmp787;
frost$core$Bit $tmp789 = frost$core$Bit$init$builtin_bit($tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:383
frost$core$Int64 $tmp791 = *(&local0);
frost$core$Int64 $tmp792 = *(&local1);
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Binary.frost:383:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 | $tmp794;
frost$core$Int64 $tmp796 = frost$core$Int64$init$builtin_int64($tmp795);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:383:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp797 = $tmp796.value;
frost$core$UInt64 $tmp798 = (frost$core$UInt64) {((uint64_t) $tmp797)};
*(&local10) = $tmp798;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:384
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp799 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp800 = (frost$core$Int64) {25};
$fn802 $tmp801 = ($fn802) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp803 = $tmp801(param1);
frost$core$UInt64 $tmp804 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp799, $tmp800, $tmp803, $tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
return $tmp799;
block70:;
frost$core$Int64 $tmp805 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:386:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp806 = $tmp540.value;
int64_t $tmp807 = $tmp805.value;
bool $tmp808 = $tmp806 == $tmp807;
frost$core$Bit $tmp809 = frost$core$Bit$init$builtin_bit($tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:387
frost$core$Int64 $tmp811 = *(&local0);
frost$core$Int64 $tmp812 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Binary.frost:387:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp813 = $tmp811.value;
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813 ^ $tmp814;
frost$core$Int64 $tmp816 = frost$core$Int64$init$builtin_int64($tmp815);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:387:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp817 = $tmp816.value;
frost$core$UInt64 $tmp818 = (frost$core$UInt64) {((uint64_t) $tmp817)};
*(&local11) = $tmp818;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:388
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp819 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp820 = (frost$core$Int64) {25};
$fn822 $tmp821 = ($fn822) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp823 = $tmp821(param1);
frost$core$UInt64 $tmp824 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp819, $tmp820, $tmp823, $tmp824);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
return $tmp819;
block75:;
frost$core$Int64 $tmp825 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:390:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp826 = $tmp540.value;
int64_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 == $tmp827;
frost$core$Bit $tmp829 = frost$core$Bit$init$builtin_bit($tmp828);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:391
frost$core$Int64 $tmp831 = *(&local0);
frost$core$Int64 $tmp832 = *(&local1);
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Binary.frost:391:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:153
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
int64_t $tmp835 = $tmp833 << $tmp834;
frost$core$Int64 $tmp836 = frost$core$Int64$init$builtin_int64($tmp835);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:391:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp837 = $tmp836.value;
frost$core$UInt64 $tmp838 = (frost$core$UInt64) {((uint64_t) $tmp837)};
*(&local12) = $tmp838;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:392
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp839 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp840 = (frost$core$Int64) {25};
$fn842 $tmp841 = ($fn842) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp843 = $tmp841(param1);
frost$core$UInt64 $tmp844 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp839, $tmp840, $tmp843, $tmp844);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
return $tmp839;
block80:;
frost$core$Int64 $tmp845 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:394:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp846 = $tmp540.value;
int64_t $tmp847 = $tmp845.value;
bool $tmp848 = $tmp846 == $tmp847;
frost$core$Bit $tmp849 = frost$core$Bit$init$builtin_bit($tmp848);
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block84; else goto block17;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:395
frost$core$Int64 $tmp851 = *(&local0);
frost$core$Int64 $tmp852 = *(&local1);
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from Binary.frost:395:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp853 = $tmp851.value;
int64_t $tmp854 = $tmp852.value;
int64_t $tmp855 = $tmp853 >> $tmp854;
frost$core$Int64 $tmp856 = frost$core$Int64$init$builtin_int64($tmp855);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Binary.frost:395:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp857 = $tmp856.value;
frost$core$UInt64 $tmp858 = (frost$core$UInt64) {((uint64_t) $tmp857)};
*(&local13) = $tmp858;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:396
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp859 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp860 = (frost$core$Int64) {25};
$fn862 $tmp861 = ($fn862) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp863 = $tmp861(param1);
frost$core$UInt64 $tmp864 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp859, $tmp860, $tmp863, $tmp864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
return $tmp859;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:399
$fn866 $tmp865 = ($fn866) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp867 = $tmp865(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp868;
$tmp868 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp868->value = param2;
$fn870 $tmp869 = ($fn870) ((frost$core$Object*) $tmp868)->$class->vtable[0];
frost$core$String* $tmp871 = $tmp869(((frost$core$Object*) $tmp868));
frost$core$String* $tmp872 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s873, $tmp871);
frost$core$String* $tmp874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp872, &$s875);
frost$core$String* $tmp876 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp874, &$s877);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp867, $tmp876);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
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
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp878;
$tmp878 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp878->value = param2;
frost$core$Int64 $tmp879 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:408:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp880 = &(&local1)->$rawValue;
*$tmp880 = $tmp879;
org$frostlang$frostc$expression$Binary$Operator $tmp881 = *(&local1);
*(&local0) = $tmp881;
org$frostlang$frostc$expression$Binary$Operator $tmp882 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp883;
$tmp883 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp883->value = $tmp882;
ITable* $tmp884 = ((frost$core$Equatable*) $tmp878)->$class->itable;
while ($tmp884->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp884 = $tmp884->next;
}
$fn886 $tmp885 = $tmp884->methods[1];
frost$core$Bit $tmp887 = $tmp885(((frost$core$Equatable*) $tmp878), ((frost$core$Equatable*) $tmp883));
bool $tmp888 = $tmp887.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp883)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp878)));
if ($tmp888) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:411
frost$core$Int64* $tmp889 = &param1->$rawValue;
frost$core$Int64 $tmp890 = *$tmp889;
frost$core$Int64 $tmp891 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:412:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891.value;
bool $tmp894 = $tmp892 == $tmp893;
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit($tmp894);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp897 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp898 = *$tmp897;
*(&local2) = $tmp898;
frost$core$String** $tmp899 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp900 = *$tmp899;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$String* $tmp901 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local3) = $tmp900;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:413
frost$core$Int64* $tmp902 = &param3->$rawValue;
frost$core$Int64 $tmp903 = *$tmp902;
frost$core$Int64 $tmp904 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:414:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp905 = $tmp903.value;
int64_t $tmp906 = $tmp904.value;
bool $tmp907 = $tmp905 == $tmp906;
frost$core$Bit $tmp908 = frost$core$Bit$init$builtin_bit($tmp907);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp910 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp911 = *$tmp910;
frost$core$String** $tmp912 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp913 = *$tmp912;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$String* $tmp914 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local4) = $tmp913;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:415
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp915 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp916 = (frost$core$Int64) {40};
org$frostlang$frostc$Position $tmp917 = *(&local2);
frost$core$String* $tmp918 = *(&local3);
frost$core$String* $tmp919 = *(&local4);
frost$core$String* $tmp920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp918, $tmp919);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp915, $tmp916, $tmp917, $tmp920);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$String* $tmp921 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp922 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local3) = ((frost$core$String*) NULL);
return $tmp915;
block7:;
frost$core$String* $tmp923 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local3) = ((frost$core$String*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:425
frost$core$Int64* $tmp924 = &param1->$rawValue;
frost$core$Int64 $tmp925 = *$tmp924;
frost$core$Int64 $tmp926 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:426:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp927 = $tmp925.value;
int64_t $tmp928 = $tmp926.value;
bool $tmp929 = $tmp927 == $tmp928;
frost$core$Bit $tmp930 = frost$core$Bit$init$builtin_bit($tmp929);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:427
org$frostlang$frostc$ASTNode* $tmp932 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
return $tmp932;
block3:;
frost$core$Int64 $tmp933 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp934 = $tmp925.value;
int64_t $tmp935 = $tmp933.value;
bool $tmp936 = $tmp934 == $tmp935;
frost$core$Bit $tmp937 = frost$core$Bit$init$builtin_bit($tmp936);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:430
org$frostlang$frostc$ASTNode* $tmp939 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
return $tmp939;
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
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
frost$core$Bit local24;
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$IR$Statement$ID local26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:441
org$frostlang$frostc$ASTNode* $tmp940 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
org$frostlang$frostc$ASTNode* $tmp941 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local0) = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:442
org$frostlang$frostc$ASTNode* $tmp942 = *(&local0);
frost$core$Bit $tmp943 = frost$core$Bit$init$builtin_bit($tmp942 != NULL);
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:443
org$frostlang$frostc$ASTNode* $tmp945 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp946 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp945, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
org$frostlang$frostc$ASTNode* $tmp947 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp946;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:445
frost$core$Int64 $tmp948 = param3.$rawValue;
frost$core$Int64 $tmp949 = (frost$core$Int64) {23};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:446:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp950 = $tmp948.value;
int64_t $tmp951 = $tmp949.value;
bool $tmp952 = $tmp950 == $tmp951;
frost$core$Bit $tmp953 = frost$core$Bit$init$builtin_bit($tmp952);
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:447
org$frostlang$frostc$Scanner** $tmp955 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp956 = *$tmp955;
org$frostlang$frostc$Type* $tmp957 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp956, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
org$frostlang$frostc$Type* $tmp958 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local1) = $tmp957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:448
org$frostlang$frostc$Type* $tmp959 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp960 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp959);
org$frostlang$frostc$IR$Value* $tmp961 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp960, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
org$frostlang$frostc$Type* $tmp962 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp963 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp961;
block5:;
frost$core$Int64 $tmp964 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:450:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp965 = $tmp948.value;
int64_t $tmp966 = $tmp964.value;
bool $tmp967 = $tmp965 == $tmp966;
frost$core$Bit $tmp968 = frost$core$Bit$init$builtin_bit($tmp967);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp970 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:450:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp971 = $tmp948.value;
int64_t $tmp972 = $tmp970.value;
bool $tmp973 = $tmp971 == $tmp972;
frost$core$Bit $tmp974 = frost$core$Bit$init$builtin_bit($tmp973);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block7; else goto block10;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:451
org$frostlang$frostc$IR$Value* $tmp976 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
org$frostlang$frostc$ASTNode* $tmp977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp976;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:454
org$frostlang$frostc$Pair* $tmp978 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
org$frostlang$frostc$Pair* $tmp979 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local2) = $tmp978;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:455
org$frostlang$frostc$Pair* $tmp980 = *(&local2);
frost$core$Bit $tmp981 = frost$core$Bit$init$builtin_bit($tmp980 != NULL);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:456
org$frostlang$frostc$Pair* $tmp983 = *(&local2);
frost$core$Object** $tmp984 = &$tmp983->first;
frost$core$Object* $tmp985 = *$tmp984;
ITable* $tmp986 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp985))->$class->itable;
while ($tmp986->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[0];
frost$core$Int64 $tmp989 = $tmp987(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp985)));
frost$core$Int64 $tmp990 = (frost$core$Int64) {1};
int64_t $tmp991 = $tmp989.value;
int64_t $tmp992 = $tmp990.value;
bool $tmp993 = $tmp991 > $tmp992;
frost$core$Bit $tmp994 = (frost$core$Bit) {$tmp993};
bool $tmp995 = $tmp994.value;
if ($tmp995) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:457
org$frostlang$frostc$Pair* $tmp996 = *(&local2);
frost$core$Object** $tmp997 = &$tmp996->first;
frost$core$Object* $tmp998 = *$tmp997;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp999 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1000 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp999, $tmp1000);
frost$collections$Array$add$frost$collections$Array$T($tmp999, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp999, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp998), ((frost$collections$ListView*) $tmp999), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp1001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:460
org$frostlang$frostc$Pair* $tmp1003 = *(&local2);
frost$core$Object** $tmp1004 = &$tmp1003->first;
frost$core$Object* $tmp1005 = *$tmp1004;
frost$core$Int64 $tmp1006 = (frost$core$Int64) {0};
ITable* $tmp1007 = ((frost$collections$ListView*) $tmp1005)->$class->itable;
while ($tmp1007->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
frost$core$Object* $tmp1010 = $tmp1008(((frost$collections$ListView*) $tmp1005), $tmp1006);
org$frostlang$frostc$MethodDecl** $tmp1011 = &((org$frostlang$frostc$MethodRef*) $tmp1010)->value;
org$frostlang$frostc$MethodDecl* $tmp1012 = *$tmp1011;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
org$frostlang$frostc$MethodDecl* $tmp1013 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local3) = $tmp1012;
frost$core$Frost$unref$frost$core$Object$Q($tmp1010);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:461
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1014;
$tmp1014 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1014->value = param3;
frost$core$Int64 $tmp1015 = (frost$core$Int64) {20};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:461:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp1016 = &(&local5)->$rawValue;
*$tmp1016 = $tmp1015;
org$frostlang$frostc$expression$Binary$Operator $tmp1017 = *(&local5);
*(&local4) = $tmp1017;
org$frostlang$frostc$expression$Binary$Operator $tmp1018 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1019;
$tmp1019 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1019->value = $tmp1018;
ITable* $tmp1020 = ((frost$core$Equatable*) $tmp1014)->$class->itable;
while ($tmp1020->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1020 = $tmp1020->next;
}
$fn1022 $tmp1021 = $tmp1020->methods[0];
frost$core$Bit $tmp1023 = $tmp1021(((frost$core$Equatable*) $tmp1014), ((frost$core$Equatable*) $tmp1019));
bool $tmp1024 = $tmp1023.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1019)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1014)));
if ($tmp1024) goto block18; else goto block17;
block18:;
org$frostlang$frostc$MethodDecl* $tmp1025 = *(&local3);
frost$core$Weak** $tmp1026 = &$tmp1025->owner;
frost$core$Weak* $tmp1027 = *$tmp1026;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:461:64
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1028 = &$tmp1027->_valid;
frost$core$Bit $tmp1029 = *$tmp1028;
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1031 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1032, $tmp1031);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1033 = &$tmp1027->value;
frost$core$Object* $tmp1034 = *$tmp1033;
frost$core$Frost$ref$frost$core$Object$Q($tmp1034);
// begin inline call to function org.frostlang.frostc.Compiler.isTuple(cl:org.frostlang.frostc.ClassDecl):frost.core.Bit from Binary.frost:461:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2543
frost$core$String** $tmp1035 = &((org$frostlang$frostc$ClassDecl*) $tmp1034)->name;
frost$core$String* $tmp1036 = *$tmp1035;
frost$core$Bit $tmp1037 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1036, &$s1038);
bool $tmp1039 = $tmp1037.value;
if ($tmp1039) goto block25; else goto block26;
block25:;
*(&local7) = $tmp1037;
goto block27;
block26:;
frost$core$String** $tmp1040 = &((org$frostlang$frostc$ClassDecl*) $tmp1034)->name;
frost$core$String* $tmp1041 = *$tmp1040;
frost$core$Bit $tmp1042 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1041, &$s1043);
*(&local7) = $tmp1042;
goto block27;
block27:;
frost$core$Bit $tmp1044 = *(&local7);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block28; else goto block29;
block28:;
*(&local6) = $tmp1044;
goto block30;
block29:;
frost$core$String** $tmp1046 = &((org$frostlang$frostc$ClassDecl*) $tmp1034)->name;
frost$core$String* $tmp1047 = *$tmp1046;
frost$core$Bit $tmp1048 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1047, &$s1049);
*(&local6) = $tmp1048;
goto block30;
block30:;
frost$core$Bit $tmp1050 = *(&local6);
bool $tmp1051 = $tmp1050.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1034);
if ($tmp1051) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:462
frost$core$Int64* $tmp1052 = &param4->$rawValue;
frost$core$Int64 $tmp1053 = *$tmp1052;
frost$core$Int64 $tmp1054 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:463:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1055 = $tmp1053.value;
int64_t $tmp1056 = $tmp1054.value;
bool $tmp1057 = $tmp1055 == $tmp1056;
frost$core$Bit $tmp1058 = frost$core$Bit$init$builtin_bit($tmp1057);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Position* $tmp1060 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1061 = *$tmp1060;
frost$core$UInt64* $tmp1062 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1063 = *$tmp1062;
*(&local8) = $tmp1063;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:464
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1064 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1065 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1064, $tmp1065);
org$frostlang$frostc$IR$Value* $tmp1066 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1064);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
org$frostlang$frostc$IR$Value* $tmp1067 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local9) = $tmp1066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:466
org$frostlang$frostc$IR$Value* $tmp1068 = *(&local9);
frost$core$Bit $tmp1069 = frost$core$Bit$init$builtin_bit($tmp1068 == NULL);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1071 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1072 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1073 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1074 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:469
org$frostlang$frostc$IR$Value* $tmp1075 = *(&local9);
frost$core$UInt64 $tmp1076 = *(&local8);
frost$core$UInt64$wrapper* $tmp1077;
$tmp1077 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1077->value = $tmp1076;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:470:87
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1079 $tmp1078 = ($fn1079) ((frost$core$Object*) $tmp1077)->$class->vtable[0];
frost$core$String* $tmp1080 = $tmp1078(((frost$core$Object*) $tmp1077));
frost$core$String* $tmp1081 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1082, $tmp1080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$String* $tmp1083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1081, &$s1084);
org$frostlang$frostc$IR$Value* $tmp1085 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1075, $tmp1083);
org$frostlang$frostc$IR$Value* $tmp1086 = *(&local9);
$fn1088 $tmp1087 = ($fn1088) $tmp1086->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1089 = $tmp1087($tmp1086);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:471:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1090 = &$tmp1089->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1091 = *$tmp1090;
frost$core$Bit $tmp1092 = frost$core$Bit$init$builtin_bit($tmp1091 != NULL);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1094 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1095, $tmp1094);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1096 = &$tmp1089->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1097 = *$tmp1096;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$UInt64 $tmp1098 = *(&local8);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:471:75
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp1099 = $tmp1098.value;
frost$core$Int64 $tmp1100 = (frost$core$Int64) {((int64_t) $tmp1099)};
frost$core$Object* $tmp1101 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1097, $tmp1100);
org$frostlang$frostc$IR$Value* $tmp1102 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1085, ((org$frostlang$frostc$Type*) $tmp1101));
org$frostlang$frostc$IR$Value* $tmp1103 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1102, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$Frost$unref$frost$core$Object$Q($tmp1101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
org$frostlang$frostc$IR$Value* $tmp1104 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$MethodDecl* $tmp1105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1106 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1103;
block31:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:475
org$frostlang$frostc$MethodDecl* $tmp1108 = *(&local3);
org$frostlang$frostc$Annotations** $tmp1109 = &$tmp1108->annotations;
org$frostlang$frostc$Annotations* $tmp1110 = *$tmp1109;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:475:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp1111 = &$tmp1110->flags;
frost$core$Int64 $tmp1112 = *$tmp1111;
frost$core$Int64 $tmp1113 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1114 = $tmp1112.value;
int64_t $tmp1115 = $tmp1113.value;
int64_t $tmp1116 = $tmp1114 & $tmp1115;
frost$core$Int64 $tmp1117 = frost$core$Int64$init$builtin_int64($tmp1116);
frost$core$Int64 $tmp1118 = (frost$core$Int64) {0};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
bool $tmp1121 = $tmp1119 != $tmp1120;
frost$core$Bit $tmp1122 = (frost$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:476
org$frostlang$frostc$MethodDecl* $tmp1124 = *(&local3);
frost$collections$Array** $tmp1125 = &$tmp1124->parameters;
frost$collections$Array* $tmp1126 = *$tmp1125;
ITable* $tmp1127 = ((frost$collections$CollectionView*) $tmp1126)->$class->itable;
while ($tmp1127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1127 = $tmp1127->next;
}
$fn1129 $tmp1128 = $tmp1127->methods[0];
frost$core$Int64 $tmp1130 = $tmp1128(((frost$collections$CollectionView*) $tmp1126));
frost$core$Int64 $tmp1131 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:476:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1132 = $tmp1130.value;
int64_t $tmp1133 = $tmp1131.value;
bool $tmp1134 = $tmp1132 == $tmp1133;
frost$core$Bit $tmp1135 = frost$core$Bit$init$builtin_bit($tmp1134);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:477
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1137 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1138 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp1139 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp1137, $tmp1138, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1139);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1140 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1141 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp1140, $tmp1141);
frost$collections$Array$add$frost$collections$Array$T($tmp1140, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp1140, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1142 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1137, ((frost$collections$ListView*) $tmp1140), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
org$frostlang$frostc$MethodDecl* $tmp1143 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1144 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1142;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:480
org$frostlang$frostc$MethodDecl* $tmp1146 = *(&local3);
frost$collections$Array** $tmp1147 = &$tmp1146->parameters;
frost$collections$Array* $tmp1148 = *$tmp1147;
ITable* $tmp1149 = ((frost$collections$CollectionView*) $tmp1148)->$class->itable;
while ($tmp1149->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1149 = $tmp1149->next;
}
$fn1151 $tmp1150 = $tmp1149->methods[0];
frost$core$Int64 $tmp1152 = $tmp1150(((frost$collections$CollectionView*) $tmp1148));
frost$core$Int64 $tmp1153 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:480:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1154 = $tmp1152.value;
int64_t $tmp1155 = $tmp1153.value;
bool $tmp1156 = $tmp1154 == $tmp1155;
frost$core$Bit $tmp1157 = frost$core$Bit$init$builtin_bit($tmp1156);
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1159 = (frost$core$Int64) {480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1160, $tmp1159);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:481
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1161 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1162 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp1163 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp1161, $tmp1162, ((org$frostlang$frostc$IR$Value*) NULL), $tmp1163);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1165 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1164, $tmp1165);
frost$collections$Array$add$frost$collections$Array$T($tmp1164, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1166 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1161, ((frost$collections$ListView*) $tmp1164), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
org$frostlang$frostc$MethodDecl* $tmp1167 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1168 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1166;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:484
org$frostlang$frostc$MethodDecl* $tmp1170 = *(&local3);
frost$core$Weak** $tmp1171 = &$tmp1170->owner;
frost$core$Weak* $tmp1172 = *$tmp1171;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:484:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1173 = &$tmp1172->_valid;
frost$core$Bit $tmp1174 = *$tmp1173;
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp1176 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1177, $tmp1176);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1178 = &$tmp1172->value;
frost$core$Object* $tmp1179 = *$tmp1178;
frost$core$Frost$ref$frost$core$Object$Q($tmp1179);
frost$core$String** $tmp1180 = &((org$frostlang$frostc$ClassDecl*) $tmp1179)->name;
frost$core$String* $tmp1181 = *$tmp1180;
frost$core$Bit $tmp1182 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1181, &$s1183);
bool $tmp1184 = $tmp1182.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1179);
if ($tmp1184) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:485
org$frostlang$frostc$MethodDecl* $tmp1185 = *(&local3);
frost$core$String** $tmp1186 = &((org$frostlang$frostc$Symbol*) $tmp1185)->name;
frost$core$String* $tmp1187 = *$tmp1186;
frost$core$Bit $tmp1188 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1187, &$s1189);
bool $tmp1190 = $tmp1188.value;
if ($tmp1190) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:486
org$frostlang$frostc$IR$Value* $tmp1191 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$MethodDecl* $tmp1192 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1193 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1191;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:488
org$frostlang$frostc$MethodDecl* $tmp1195 = *(&local3);
frost$core$String** $tmp1196 = &((org$frostlang$frostc$Symbol*) $tmp1195)->name;
frost$core$String* $tmp1197 = *$tmp1196;
frost$core$Bit $tmp1198 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1197, &$s1199);
bool $tmp1200 = $tmp1198.value;
if ($tmp1200) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:489
org$frostlang$frostc$IR$Value* $tmp1201 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
org$frostlang$frostc$MethodDecl* $tmp1202 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1201;
block60:;
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:492
frost$collections$CollectionView* $tmp1205 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
org$frostlang$frostc$MethodDecl* $tmp1206 = *(&local3);
frost$core$Weak** $tmp1207 = &$tmp1206->owner;
frost$core$Weak* $tmp1208 = *$tmp1207;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Binary.frost:492:83
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1209 = &$tmp1208->_valid;
frost$core$Bit $tmp1210 = *$tmp1209;
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp1212 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1213, $tmp1212);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1214 = &$tmp1208->value;
frost$core$Object* $tmp1215 = *$tmp1214;
frost$core$Frost$ref$frost$core$Object$Q($tmp1215);
// begin inline call to function org.frostlang.frostc.Compiler.findType(start:frost.collections.CollectionView<org.frostlang.frostc.Type>, target:org.frostlang.frostc.ClassDecl):org.frostlang.frostc.Type? from Binary.frost:492:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4321
ITable* $tmp1216 = ((frost$collections$Iterable*) $tmp1205)->$class->itable;
while ($tmp1216->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1216 = $tmp1216->next;
}
$fn1218 $tmp1217 = $tmp1216->methods[0];
frost$collections$Iterator* $tmp1219 = $tmp1217(((frost$collections$Iterable*) $tmp1205));
goto block66;
block66:;
ITable* $tmp1220 = $tmp1219->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[0];
frost$core$Bit $tmp1223 = $tmp1221($tmp1219);
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block68; else goto block67;
block67:;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1225 = $tmp1219->$class->itable;
while ($tmp1225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1225 = $tmp1225->next;
}
$fn1227 $tmp1226 = $tmp1225->methods[1];
frost$core$Object* $tmp1228 = $tmp1226($tmp1219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1228)));
org$frostlang$frostc$Type* $tmp1229 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local11) = ((org$frostlang$frostc$Type*) $tmp1228);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4322
org$frostlang$frostc$Type* $tmp1230 = *(&local11);
org$frostlang$frostc$Type* $tmp1231 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1230, ((org$frostlang$frostc$ClassDecl*) $tmp1215));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
org$frostlang$frostc$Type* $tmp1232 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local12) = $tmp1231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4323
org$frostlang$frostc$Type* $tmp1233 = *(&local12);
frost$core$Bit $tmp1234 = frost$core$Bit$init$builtin_bit($tmp1233 != NULL);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4324
org$frostlang$frostc$Type* $tmp1236 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
org$frostlang$frostc$Type* $tmp1237 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1228);
org$frostlang$frostc$Type* $tmp1238 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local10) = $tmp1236;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
goto block65;
block70:;
org$frostlang$frostc$Type* $tmp1239 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1228);
org$frostlang$frostc$Type* $tmp1240 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4327
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
goto block65;
block65:;
org$frostlang$frostc$Type* $tmp1241 = *(&local10);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
org$frostlang$frostc$Type* $tmp1242 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local13) = $tmp1241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:493
org$frostlang$frostc$Type* $tmp1243 = *(&local13);
frost$core$Bit $tmp1244 = frost$core$Bit$init$builtin_bit($tmp1243 != NULL);
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp1246 = (frost$core$Int64) {493};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1247, $tmp1246);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:494
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1248 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1249 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1250 = *(&local13);
frost$core$Bit $tmp1251 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1248, $tmp1249, $tmp1250, $tmp1251);
org$frostlang$frostc$IR$Value* $tmp1252 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1248);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
org$frostlang$frostc$IR$Value* $tmp1253 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local14) = $tmp1252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:495
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local14);
frost$core$Bit $tmp1255 = frost$core$Bit$init$builtin_bit($tmp1254 == NULL);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1257 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1258 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1259 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
org$frostlang$frostc$MethodDecl* $tmp1260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1261 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:498
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1263 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1264 = (frost$core$Int64) {9};
org$frostlang$frostc$IR$Value* $tmp1265 = *(&local14);
org$frostlang$frostc$MethodDecl* $tmp1266 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp1263, $tmp1264, $tmp1265, $tmp1266);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1267 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1268 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1267, $tmp1268);
frost$collections$Array$add$frost$collections$Array$T($tmp1267, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp1269 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1263, ((frost$collections$ListView*) $tmp1267), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
org$frostlang$frostc$IR$Value* $tmp1270 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1271 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1272 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
org$frostlang$frostc$MethodDecl* $tmp1273 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp1274 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1269;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:501
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1276 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1277 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1276, $tmp1277);
org$frostlang$frostc$IR$Value* $tmp1278 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1276);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
org$frostlang$frostc$IR$Value* $tmp1279 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local15) = $tmp1278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:502
org$frostlang$frostc$IR$Value* $tmp1280 = *(&local15);
frost$core$Bit $tmp1281 = frost$core$Bit$init$builtin_bit($tmp1280 == NULL);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1283 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1284 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:505
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1286;
$tmp1286 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1286->value = param3;
frost$core$Int64 $tmp1287 = (frost$core$Int64) {20};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:505:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp1288 = &(&local17)->$rawValue;
*$tmp1288 = $tmp1287;
org$frostlang$frostc$expression$Binary$Operator $tmp1289 = *(&local17);
*(&local16) = $tmp1289;
org$frostlang$frostc$expression$Binary$Operator $tmp1290 = *(&local16);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1291;
$tmp1291 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1291->value = $tmp1290;
ITable* $tmp1292 = ((frost$core$Equatable*) $tmp1286)->$class->itable;
while ($tmp1292->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1292 = $tmp1292->next;
}
$fn1294 $tmp1293 = $tmp1292->methods[0];
frost$core$Bit $tmp1295 = $tmp1293(((frost$core$Equatable*) $tmp1286), ((frost$core$Equatable*) $tmp1291));
bool $tmp1296 = $tmp1295.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1291)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1286)));
if ($tmp1296) goto block79; else goto block78;
block79:;
org$frostlang$frostc$IR$Value* $tmp1297 = *(&local15);
$fn1299 $tmp1298 = ($fn1299) $tmp1297->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1300 = $tmp1298($tmp1297);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Binary.frost:505:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:603
org$frostlang$frostc$Type$Kind* $tmp1301 = &$tmp1300->typeKind;
org$frostlang$frostc$Type$Kind $tmp1302 = *$tmp1301;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1303;
$tmp1303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1303->value = $tmp1302;
frost$core$Int64 $tmp1304 = (frost$core$Int64) {10};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:603:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1305 = &(&local19)->$rawValue;
*$tmp1305 = $tmp1304;
org$frostlang$frostc$Type$Kind $tmp1306 = *(&local19);
*(&local18) = $tmp1306;
org$frostlang$frostc$Type$Kind $tmp1307 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
ITable* $tmp1309 = ((frost$core$Equatable*) $tmp1303)->$class->itable;
while ($tmp1309->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[0];
frost$core$Bit $tmp1312 = $tmp1310(((frost$core$Equatable*) $tmp1303), ((frost$core$Equatable*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1303)));
bool $tmp1313 = $tmp1312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
if ($tmp1313) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:506
frost$core$Int64* $tmp1314 = &param4->$rawValue;
frost$core$Int64 $tmp1315 = *$tmp1314;
frost$core$Int64 $tmp1316 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Binary.frost:507:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1317 = $tmp1315.value;
int64_t $tmp1318 = $tmp1316.value;
bool $tmp1319 = $tmp1317 == $tmp1318;
frost$core$Bit $tmp1320 = frost$core$Bit$init$builtin_bit($tmp1319);
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block84; else goto block83;
block84:;
org$frostlang$frostc$Position* $tmp1322 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1323 = *$tmp1322;
frost$core$UInt64* $tmp1324 = (frost$core$UInt64*) (param4->$data + 24);
frost$core$UInt64 $tmp1325 = *$tmp1324;
*(&local20) = $tmp1325;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:508
org$frostlang$frostc$IR$Value* $tmp1326 = *(&local15);
frost$core$UInt64 $tmp1327 = *(&local20);
frost$core$UInt64$wrapper* $tmp1328;
$tmp1328 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1328->value = $tmp1327;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:509:83
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1330 $tmp1329 = ($fn1330) ((frost$core$Object*) $tmp1328)->$class->vtable[0];
frost$core$String* $tmp1331 = $tmp1329(((frost$core$Object*) $tmp1328));
frost$core$String* $tmp1332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1333, $tmp1331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$String* $tmp1334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1332, &$s1335);
org$frostlang$frostc$IR$Value* $tmp1336 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1326, $tmp1334);
org$frostlang$frostc$IR$Value* $tmp1337 = *(&local15);
$fn1339 $tmp1338 = ($fn1339) $tmp1337->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1340 = $tmp1338($tmp1337);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Binary.frost:510:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1341 = &$tmp1340->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1342 = *$tmp1341;
frost$core$Bit $tmp1343 = frost$core$Bit$init$builtin_bit($tmp1342 != NULL);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp1345 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1346, $tmp1345);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1347 = &$tmp1340->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1348 = *$tmp1347;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$UInt64 $tmp1349 = *(&local20);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Binary.frost:510:71
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp1350 = $tmp1349.value;
frost$core$Int64 $tmp1351 = (frost$core$Int64) {((int64_t) $tmp1350)};
frost$core$Object* $tmp1352 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1348, $tmp1351);
org$frostlang$frostc$IR$Value* $tmp1353 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1336, ((org$frostlang$frostc$Type*) $tmp1352));
org$frostlang$frostc$IR$Value* $tmp1354 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1353, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q($tmp1352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
org$frostlang$frostc$IR$Value* $tmp1355 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1356 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1357 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1354;
block83:;
goto block78;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:514
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1358 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1359 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp1360 = *(&local15);
$fn1362 $tmp1361 = ($fn1362) $tmp1360->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1363 = $tmp1361($tmp1360);
frost$core$Bit $tmp1364 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1358, $tmp1359, $tmp1363, $tmp1364);
org$frostlang$frostc$IR$Value* $tmp1365 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1358);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
org$frostlang$frostc$IR$Value* $tmp1366 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local21) = $tmp1365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:516
org$frostlang$frostc$IR$Value* $tmp1367 = *(&local21);
frost$core$Bit $tmp1368 = frost$core$Bit$init$builtin_bit($tmp1367 == NULL);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1370 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1371 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1372 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:519
org$frostlang$frostc$IR$Value* $tmp1374 = *(&local15);
$fn1376 $tmp1375 = ($fn1376) $tmp1374->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1377 = $tmp1375($tmp1374);
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Binary.frost:519:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1378 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1379 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1380 = &(&local23)->$rawValue;
*$tmp1380 = $tmp1379;
org$frostlang$frostc$Type$Kind $tmp1381 = *(&local23);
*(&local22) = $tmp1381;
org$frostlang$frostc$Type$Kind $tmp1382 = *(&local22);
org$frostlang$frostc$Position $tmp1383 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1384 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1378, &$s1385, $tmp1382, $tmp1383, $tmp1384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Binary.frost:519:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1386 = &((org$frostlang$frostc$Symbol*) $tmp1377)->name;
frost$core$String* $tmp1387 = *$tmp1386;
frost$core$String** $tmp1388 = &((org$frostlang$frostc$Symbol*) $tmp1378)->name;
frost$core$String* $tmp1389 = *$tmp1388;
frost$core$Bit $tmp1390 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1387, $tmp1389);
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Type$Kind* $tmp1392 = &$tmp1377->typeKind;
org$frostlang$frostc$Type$Kind $tmp1393 = *$tmp1392;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1394;
$tmp1394 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1394->value = $tmp1393;
org$frostlang$frostc$Type$Kind* $tmp1395 = &$tmp1378->typeKind;
org$frostlang$frostc$Type$Kind $tmp1396 = *$tmp1395;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1397;
$tmp1397 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1397->value = $tmp1396;
ITable* $tmp1398 = ((frost$core$Equatable*) $tmp1394)->$class->itable;
while ($tmp1398->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1398 = $tmp1398->next;
}
$fn1400 $tmp1399 = $tmp1398->methods[0];
frost$core$Bit $tmp1401 = $tmp1399(((frost$core$Equatable*) $tmp1394), ((frost$core$Equatable*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1397)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1394)));
*(&local24) = $tmp1401;
goto block101;
block100:;
*(&local24) = $tmp1390;
goto block101;
block101:;
frost$core$Bit $tmp1402 = *(&local24);
bool $tmp1403 = $tmp1402.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
if ($tmp1403) goto block93; else goto block95;
block95:;
org$frostlang$frostc$IR$Value* $tmp1404 = *(&local15);
$fn1406 $tmp1405 = ($fn1406) $tmp1404->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1407 = $tmp1405($tmp1404);
frost$core$Bit $tmp1408 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp1407);
bool $tmp1409 = $tmp1408.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
if ($tmp1409) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:521
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1410 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1411 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp1410, $tmp1411, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp1412 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp1410);
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
org$frostlang$frostc$Type* $tmp1413 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local25) = $tmp1412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:523
org$frostlang$frostc$Type* $tmp1414 = *(&local25);
frost$core$Bit $tmp1415 = frost$core$Bit$init$builtin_bit($tmp1414 != NULL);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:524
org$frostlang$frostc$IR** $tmp1417 = &param0->ir;
org$frostlang$frostc$IR* $tmp1418 = *$tmp1417;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1419 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1420 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1421 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp1422 = *(&local21);
org$frostlang$frostc$Type* $tmp1423 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1419, $tmp1420, param1, $tmp1421, param3, $tmp1422, $tmp1423);
$fn1425 $tmp1424 = ($fn1425) $tmp1418->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1426 = $tmp1424($tmp1418, $tmp1419);
*(&local26) = $tmp1426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:526
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1427 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1428 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1429 = *(&local26);
org$frostlang$frostc$Type* $tmp1430 = *(&local25);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1427, $tmp1428, $tmp1429, $tmp1430);
org$frostlang$frostc$IR$Value* $tmp1431 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1427, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
org$frostlang$frostc$Type* $tmp1432 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1433 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1434 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1435 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1436 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1431;
block103:;
org$frostlang$frostc$Type* $tmp1437 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:529
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp1438;
$tmp1438 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp1438->value = param3;
$fn1440 $tmp1439 = ($fn1440) ((frost$core$Object*) $tmp1438)->$class->vtable[0];
frost$core$String* $tmp1441 = $tmp1439(((frost$core$Object*) $tmp1438));
frost$core$String* $tmp1442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1443, $tmp1441);
frost$core$String* $tmp1444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1442, &$s1445);
org$frostlang$frostc$IR$Value* $tmp1446 = *(&local15);
$fn1448 $tmp1447 = ($fn1448) $tmp1446->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1449 = $tmp1447($tmp1446);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1451 $tmp1450 = ($fn1451) ((frost$core$Object*) $tmp1449)->$class->vtable[0];
frost$core$String* $tmp1452 = $tmp1450(((frost$core$Object*) $tmp1449));
frost$core$String* $tmp1453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1454, $tmp1452);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
frost$core$String* $tmp1455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1453, &$s1456);
org$frostlang$frostc$IR$Value* $tmp1457 = *(&local21);
$fn1459 $tmp1458 = ($fn1459) $tmp1457->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1460 = $tmp1458($tmp1457);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:530:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1462 $tmp1461 = ($fn1462) ((frost$core$Object*) $tmp1460)->$class->vtable[0];
frost$core$String* $tmp1463 = $tmp1461(((frost$core$Object*) $tmp1460));
frost$core$String* $tmp1464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1455, $tmp1463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$String* $tmp1465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1464, &$s1466);
frost$core$String* $tmp1467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1444, $tmp1465);
$fn1469 $tmp1468 = ($fn1469) param5->$class->vtable[2];
frost$core$String* $tmp1470 = $tmp1468(param5);
frost$core$String* $tmp1471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1467, $tmp1470);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1472 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1473 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp1474 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp1475 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block3:;
goto block106;
block106:;

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

