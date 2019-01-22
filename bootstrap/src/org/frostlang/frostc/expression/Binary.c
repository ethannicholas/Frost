#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Scanner.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/expression/And.h"
#include "org/frostlang/frostc/expression/Or.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$class_type org$frostlang$frostc$expression$Binary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$cleanup} };

typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$Bit (*$fn80)(org$frostlang$frostc$expression$Binary$_Closure2*, org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn84)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn136)(frost$core$Object*);
typedef frost$core$Bit (*$fn197)(org$frostlang$frostc$MethodDecl*);
typedef frost$collections$ListView* (*$fn201)(frost$collections$ListView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn237)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn241)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn246)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn265)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn325)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn329)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn334)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn342)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn346)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn351)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn434)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn450)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn466)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn477)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn490)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn501)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn511)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn520)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn531)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn545)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn559)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn573)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn587)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn605)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn618)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn631)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn644)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn657)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn661)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn665)(frost$core$Object*);
typedef frost$core$Bit (*$fn679)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn760)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn781)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn796)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn815)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn912)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn926)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn933)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn953)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$String* (*$fn968)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn976)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn984)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn991)(org$frostlang$frostc$Compiler$TypeContext*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79", 38, 8989498193344452911, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x69\x6c\x65\x64\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x63\x61\x73\x74\x20", 21, -924378024990471136, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x30", 13, 3482653484934746977, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27\x2c\x20", 40, -655368231937263126, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 18, -6918652954435975437, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27", 14, -1314037361094274531, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x6f\x6e\x20", 5, 14602569225, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 256
org$frostlang$frostc$Annotations** $tmp2 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3);
return $tmp4;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$Symbol* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$Pair* local6 = NULL;
org$frostlang$frostc$Pair* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$ClassDecl* local9 = NULL;
frost$collections$Array* local10 = NULL;
frost$collections$Array* local11 = NULL;
org$frostlang$frostc$Pair* local12 = NULL;
org$frostlang$frostc$Pair* local13 = NULL;
// line 188
frost$core$Bit $tmp5 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
frost$core$Bit $tmp6 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
return ((org$frostlang$frostc$Pair*) NULL);
block2:;
// line 191
org$frostlang$frostc$ClassDecl* $tmp8 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$ClassDecl* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 192
org$frostlang$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block3; else goto block4;
block3:;
// line 193
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block4:;
// line 195
org$frostlang$frostc$IR$Value* $tmp14 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {7};
frost$core$Int64 $tmp16 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp17 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp14, $tmp15, $tmp17, param1);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$IR$Value* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// line 196
org$frostlang$frostc$ClassDecl* $tmp19 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp20 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp19);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp21->value = param2;
$fn23 $tmp22 = ($fn23) ((frost$core$Object*) $tmp21)->$class->vtable[0];
frost$core$String* $tmp24 = $tmp22(((frost$core$Object*) $tmp21));
org$frostlang$frostc$Symbol* $tmp25 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp20, $tmp24);
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$Symbol* $tmp26 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local2) = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// line 197
org$frostlang$frostc$Symbol* $tmp27 = *(&local2);
frost$core$Bit $tmp28 = frost$core$Bit$init$builtin_bit($tmp27 != NULL);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block5; else goto block6;
block5:;
// line 198
frost$collections$Array* $tmp30 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp30, $tmp31);
frost$collections$Array$add$frost$collections$Array$T($tmp30, ((frost$core$Object*) param3));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$collections$Array* $tmp32 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local3) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 200
org$frostlang$frostc$Symbol* $tmp33 = *(&local2);
org$frostlang$frostc$Symbol$Kind* $tmp34 = &$tmp33->kind;
org$frostlang$frostc$Symbol$Kind $tmp35 = *$tmp34;
frost$core$Int64 $tmp36 = $tmp35.$rawValue;
frost$core$Int64 $tmp37 = (frost$core$Int64) {5};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block8; else goto block9;
block8:;
// line 202
org$frostlang$frostc$Symbol* $tmp40 = *(&local2);
org$frostlang$frostc$Annotations** $tmp41 = &((org$frostlang$frostc$MethodDecl*) $tmp40)->annotations;
org$frostlang$frostc$Annotations* $tmp42 = *$tmp41;
frost$core$Bit $tmp43 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp42);
frost$core$Bit $tmp44 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block12; else goto block13;
block12:;
*(&local4) = $tmp44;
goto block14;
block13:;
frost$core$Bit $tmp46 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param1);
*(&local4) = $tmp46;
goto block14;
block14:;
frost$core$Bit $tmp47 = *(&local4);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block10; else goto block11;
block10:;
// line 203
frost$collections$Array* $tmp49 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp49);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$Array* $tmp50 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local5) = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// line 204
frost$collections$Array* $tmp51 = *(&local5);
org$frostlang$frostc$Symbol* $tmp52 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp51, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp52)));
// line 205
org$frostlang$frostc$Position $tmp53 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp54 = *(&local1);
frost$collections$Array* $tmp55 = *(&local5);
frost$collections$Array* $tmp56 = *(&local3);
org$frostlang$frostc$Pair* $tmp57 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp53, $tmp54, ((frost$collections$ListView*) $tmp55), ((frost$collections$ListView*) $tmp56), param4);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
org$frostlang$frostc$Pair* $tmp58 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local6) = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// line 207
org$frostlang$frostc$Pair* $tmp59 = *(&local6);
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit($tmp59 != NULL);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block15; else goto block16;
block15:;
// line 208
org$frostlang$frostc$Pair* $tmp62 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$Pair* $tmp63 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp64 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp65 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp66 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp62;
block16:;
org$frostlang$frostc$Pair* $tmp69 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp70 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local5) = ((frost$collections$Array*) NULL);
goto block11;
block11:;
goto block7;
block9:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {6};
frost$core$Bit $tmp72 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp36, $tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block17; else goto block18;
block17:;
// line 213
org$frostlang$frostc$Position $tmp74 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp75 = *(&local1);
org$frostlang$frostc$Symbol* $tmp76 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp77 = &((org$frostlang$frostc$Methods*) $tmp76)->methods;
org$frostlang$frostc$FixedArray* $tmp78 = *$tmp77;
org$frostlang$frostc$expression$Binary$_Closure2* $tmp79 = (org$frostlang$frostc$expression$Binary$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$_Closure2$class);
org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type($tmp79, param1);
frost$core$MutableMethod* $tmp81 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp81, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Object*) $tmp79));
ITable* $tmp82 = ((frost$collections$ListView*) $tmp78)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[4];
frost$collections$ListView* $tmp85 = $tmp83(((frost$collections$ListView*) $tmp78), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp81)));
frost$collections$Array* $tmp86 = *(&local3);
org$frostlang$frostc$Pair* $tmp87 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp74, $tmp75, $tmp85, ((frost$collections$ListView*) $tmp86), param4);
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$Pair* $tmp88 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local7) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// line 216
org$frostlang$frostc$Pair* $tmp89 = *(&local7);
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block19; else goto block20;
block19:;
// line 217
org$frostlang$frostc$Pair* $tmp92 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
org$frostlang$frostc$Pair* $tmp93 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp94 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp95 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp92;
block20:;
org$frostlang$frostc$Pair* $tmp98 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local7) = ((org$frostlang$frostc$Pair*) NULL);
goto block7;
block18:;
// line 221
frost$core$Bit $tmp99 = frost$core$Bit$init$builtin_bit(false);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s102, $tmp101);
abort(); // unreachable
block21:;
goto block7;
block7:;
frost$collections$Array* $tmp103 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local3) = ((frost$collections$Array*) NULL);
goto block6;
block6:;
// line 227
org$frostlang$frostc$Type* $tmp104 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param3);
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$Type* $tmp105 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local8) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// line 228
org$frostlang$frostc$Type* $tmp106 = *(&local8);
frost$core$Bit $tmp107 = frost$core$Bit$init$builtin_bit($tmp106 == NULL);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block23; else goto block24;
block23:;
// line 229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp109 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp110 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block24:;
// line 231
org$frostlang$frostc$Type* $tmp113 = *(&local8);
frost$core$Bit $tmp114 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp113);
frost$core$Bit $tmp115 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp114);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block25; else goto block26;
block25:;
// line 232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Type* $tmp117 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp120 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block26:;
// line 234
org$frostlang$frostc$Type* $tmp121 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp122 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp121);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$ClassDecl* $tmp123 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local9) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// line 235
org$frostlang$frostc$ClassDecl* $tmp124 = *(&local9);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124 == NULL);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block27; else goto block28;
block27:;
// line 236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp127 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp128 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block28:;
// line 238
org$frostlang$frostc$ClassDecl* $tmp132 = *(&local9);
org$frostlang$frostc$SymbolTable* $tmp133 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp132);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp134;
$tmp134 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp134->value = param2;
$fn136 $tmp135 = ($fn136) ((frost$core$Object*) $tmp134)->$class->vtable[0];
frost$core$String* $tmp137 = $tmp135(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Symbol* $tmp138 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp133, $tmp137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$Symbol* $tmp139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local2) = $tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// line 239
org$frostlang$frostc$Symbol* $tmp140 = *(&local2);
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit($tmp140 == NULL);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block29; else goto block30;
block29:;
// line 240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp143 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp144 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block30:;
// line 242
frost$collections$Array* $tmp148 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp149 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp148, $tmp149);
org$frostlang$frostc$ASTNode* $tmp150 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp151 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp152 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$IR$Value* $tmp153 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp150, $tmp151, $tmp152, $tmp153);
frost$collections$Array$add$frost$collections$Array$T($tmp148, ((frost$core$Object*) $tmp150));
frost$collections$Array$add$frost$collections$Array$T($tmp148, ((frost$core$Object*) param3));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$collections$Array* $tmp154 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local10) = $tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// line 243
org$frostlang$frostc$Symbol* $tmp155 = *(&local2);
org$frostlang$frostc$Symbol$Kind* $tmp156 = &$tmp155->kind;
org$frostlang$frostc$Symbol$Kind $tmp157 = *$tmp156;
frost$core$Int64 $tmp158 = $tmp157.$rawValue;
frost$core$Int64 $tmp159 = (frost$core$Int64) {5};
frost$core$Bit $tmp160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp158, $tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block32; else goto block33;
block32:;
// line 245
org$frostlang$frostc$Symbol* $tmp162 = *(&local2);
org$frostlang$frostc$Annotations** $tmp163 = &((org$frostlang$frostc$MethodDecl*) $tmp162)->annotations;
org$frostlang$frostc$Annotations* $tmp164 = *$tmp163;
frost$core$Bit $tmp165 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block34; else goto block35;
block34:;
// line 246
frost$collections$Array* $tmp167 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp167);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$collections$Array* $tmp168 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local11) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// line 247
frost$collections$Array* $tmp169 = *(&local11);
org$frostlang$frostc$Symbol* $tmp170 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp169, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp170)));
// line 248
org$frostlang$frostc$Position $tmp171 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp172 = *(&local11);
frost$collections$Array* $tmp173 = *(&local10);
org$frostlang$frostc$Pair* $tmp174 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp171, ((org$frostlang$frostc$IR$Value*) NULL), ((frost$collections$ListView*) $tmp172), ((frost$collections$ListView*) $tmp173), param4);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Pair* $tmp175 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local12) = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// line 249
org$frostlang$frostc$Pair* $tmp176 = *(&local12);
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit($tmp176 != NULL);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block36; else goto block37;
block36:;
// line 250
org$frostlang$frostc$Pair* $tmp179 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
org$frostlang$frostc$Pair* $tmp180 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp181 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local11) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp182 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp183 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp184 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp179;
block37:;
org$frostlang$frostc$Pair* $tmp188 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp189 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local11) = ((frost$collections$Array*) NULL);
goto block35;
block35:;
goto block31;
block33:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {6};
frost$core$Bit $tmp191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp158, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block38; else goto block39;
block38:;
// line 255
org$frostlang$frostc$Position $tmp193 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Symbol* $tmp194 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp195 = &((org$frostlang$frostc$Methods*) $tmp194)->methods;
org$frostlang$frostc$FixedArray* $tmp196 = *$tmp195;
frost$core$Method* $tmp198 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp198, ((frost$core$Int8*) org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
ITable* $tmp199 = ((frost$collections$ListView*) $tmp196)->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[4];
frost$collections$ListView* $tmp202 = $tmp200(((frost$collections$ListView*) $tmp196), ((frost$core$MutableMethod*) $tmp198));
frost$collections$Array* $tmp203 = *(&local10);
org$frostlang$frostc$Pair* $tmp204 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp193, ((org$frostlang$frostc$IR$Value*) NULL), $tmp202, ((frost$collections$ListView*) $tmp203), param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$Pair* $tmp205 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local13) = $tmp204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// line 257
org$frostlang$frostc$Pair* $tmp206 = *(&local13);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206 != NULL);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block40; else goto block41;
block40:;
// line 258
org$frostlang$frostc$Pair* $tmp209 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$Pair* $tmp210 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp211 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp212 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp213 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp214 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp215 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp209;
block41:;
org$frostlang$frostc$Pair* $tmp217 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
goto block31;
block39:;
// line 262
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit(false);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s221, $tmp220);
abort(); // unreachable
block42:;
goto block31;
block31:;
// line 265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp222 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local10) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ClassDecl* $tmp223 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp224 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Symbol* $tmp225 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local2) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$IR$Value* $tmp226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
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
frost$core$Bit local6;
frost$collections$Array* local7 = NULL;
org$frostlang$frostc$MethodRef* local8 = NULL;
org$frostlang$frostc$MethodRef* local9 = NULL;
// line 271
frost$collections$CollectionView* $tmp228 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$collections$CollectionView* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local0) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// line 272
frost$collections$CollectionView* $tmp230 = *(&local0);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230 != NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block1; else goto block2;
block1:;
// line 273
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp233 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
// line 274
frost$collections$CollectionView* $tmp234 = *(&local0);
ITable* $tmp235 = ((frost$collections$Iterable*) $tmp234)->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$collections$Iterator* $tmp238 = $tmp236(((frost$collections$Iterable*) $tmp234));
goto block3;
block3:;
ITable* $tmp239 = $tmp238->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$core$Bit $tmp242 = $tmp240($tmp238);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp244 = $tmp238->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[1];
frost$core$Object* $tmp247 = $tmp245($tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp247)));
org$frostlang$frostc$Type* $tmp248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp247);
// line 275
org$frostlang$frostc$Type* $tmp249 = *(&local2);
org$frostlang$frostc$Pair* $tmp250 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, param1, $tmp249);
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$Pair* $tmp251 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local3) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// line 276
org$frostlang$frostc$Pair* $tmp252 = *(&local3);
frost$core$Bit $tmp253 = frost$core$Bit$init$builtin_bit($tmp252 != NULL);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp255 = (frost$core$Int64) {276};
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s257, ((frost$core$Object*) param1));
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s259);
org$frostlang$frostc$Type* $tmp260 = *(&local2);
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp258, ((frost$core$Object*) $tmp260));
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp261, &$s263);
$fn265 $tmp264 = ($fn265) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp266 = $tmp264(param1);
org$frostlang$frostc$Position$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp267->value = $tmp266;
frost$core$String* $tmp268 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp262, ((frost$core$Object*) $tmp267));
frost$core$String* $tmp269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp268, &$s270);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s271, $tmp255, $tmp269);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
abort(); // unreachable
block6:;
// line 278
org$frostlang$frostc$Type* $tmp272 = *(&local2);
org$frostlang$frostc$Pair* $tmp273 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, $tmp272, param2, param3, param4);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$Pair* $tmp274 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local4) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// line 279
org$frostlang$frostc$Pair* $tmp275 = *(&local4);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block8; else goto block9;
block8:;
// line 280
org$frostlang$frostc$Pair* $tmp278 = *(&local4);
frost$core$Object** $tmp279 = &$tmp278->second;
frost$core$Object* $tmp280 = *$tmp279;
org$frostlang$frostc$Pair* $tmp281 = *(&local3);
frost$core$Object** $tmp282 = &$tmp281->second;
frost$core$Object* $tmp283 = *$tmp282;
int64_t $tmp284 = ((frost$core$Int64$wrapper*) $tmp280)->value.value;
int64_t $tmp285 = ((frost$core$Int64$wrapper*) $tmp283)->value.value;
int64_t $tmp286 = $tmp284 + $tmp285;
frost$core$Int64 $tmp287 = (frost$core$Int64) {$tmp286};
*(&local5) = $tmp287;
// line 281
org$frostlang$frostc$Pair* $tmp288 = *(&local1);
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit($tmp288 == NULL);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block12; else goto block13;
block12:;
*(&local6) = $tmp289;
goto block14;
block13:;
frost$core$Int64 $tmp291 = *(&local5);
org$frostlang$frostc$Pair* $tmp292 = *(&local1);
frost$core$Object** $tmp293 = &$tmp292->second;
frost$core$Object* $tmp294 = *$tmp293;
int64_t $tmp295 = $tmp291.value;
int64_t $tmp296 = ((frost$core$Int64$wrapper*) $tmp294)->value.value;
bool $tmp297 = $tmp295 < $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
*(&local6) = $tmp298;
goto block14;
block14:;
frost$core$Bit $tmp299 = *(&local6);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block10; else goto block15;
block10:;
// line 282
org$frostlang$frostc$Pair* $tmp301 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$Pair* $tmp302 = *(&local4);
frost$core$Object** $tmp303 = &$tmp302->first;
frost$core$Object* $tmp304 = *$tmp303;
frost$core$Int64 $tmp305 = *(&local5);
frost$core$Int64$wrapper* $tmp306;
$tmp306 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp306->value = $tmp305;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp301, ((frost$core$Object*) ((frost$collections$ListView*) $tmp304)), ((frost$core$Object*) $tmp306));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
org$frostlang$frostc$Pair* $tmp307 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local1) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
goto block11;
block15:;
// line 284
frost$core$Int64 $tmp308 = *(&local5);
org$frostlang$frostc$Pair* $tmp309 = *(&local1);
frost$core$Object** $tmp310 = &$tmp309->second;
frost$core$Object* $tmp311 = *$tmp310;
frost$core$Bit $tmp312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp308, ((frost$core$Int64$wrapper*) $tmp311)->value);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block16; else goto block17;
block16:;
// line 285
frost$collections$Array* $tmp314 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp314);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$collections$Array* $tmp315 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local7) = $tmp314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// line 286
frost$collections$Array* $tmp316 = *(&local7);
org$frostlang$frostc$Pair* $tmp317 = *(&local1);
frost$core$Object** $tmp318 = &$tmp317->first;
frost$core$Object* $tmp319 = *$tmp318;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp316, ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp319)));
// line 287
org$frostlang$frostc$Pair* $tmp320 = *(&local4);
frost$core$Object** $tmp321 = &$tmp320->first;
frost$core$Object* $tmp322 = *$tmp321;
ITable* $tmp323 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp322))->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
frost$collections$Iterator* $tmp326 = $tmp324(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp322)));
goto block18;
block18:;
ITable* $tmp327 = $tmp326->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Bit $tmp330 = $tmp328($tmp326);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block20; else goto block19;
block19:;
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp332 = $tmp326->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[1];
frost$core$Object* $tmp335 = $tmp333($tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp335)));
org$frostlang$frostc$MethodRef* $tmp336 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local8) = ((org$frostlang$frostc$MethodRef*) $tmp335);
// line 288
org$frostlang$frostc$Pair* $tmp337 = *(&local1);
frost$core$Object** $tmp338 = &$tmp337->first;
frost$core$Object* $tmp339 = *$tmp338;
ITable* $tmp340 = ((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp339))->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
frost$collections$Iterator* $tmp343 = $tmp341(((frost$collections$Iterable*) ((frost$collections$ListView*) $tmp339)));
goto block21;
block21:;
ITable* $tmp344 = $tmp343->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
frost$core$Bit $tmp347 = $tmp345($tmp343);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block23; else goto block22;
block22:;
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
ITable* $tmp349 = $tmp343->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[1];
frost$core$Object* $tmp352 = $tmp350($tmp343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodRef*) $tmp352)));
org$frostlang$frostc$MethodRef* $tmp353 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local9) = ((org$frostlang$frostc$MethodRef*) $tmp352);
// line 289
org$frostlang$frostc$MethodRef* $tmp354 = *(&local9);
org$frostlang$frostc$MethodDecl** $tmp355 = &$tmp354->value;
org$frostlang$frostc$MethodDecl* $tmp356 = *$tmp355;
org$frostlang$frostc$MethodRef* $tmp357 = *(&local8);
org$frostlang$frostc$MethodDecl** $tmp358 = &$tmp357->value;
org$frostlang$frostc$MethodDecl* $tmp359 = *$tmp358;
bool $tmp360 = $tmp356 == $tmp359;
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block24; else goto block25;
block24:;
// line 290
frost$core$Frost$unref$frost$core$Object$Q($tmp352);
org$frostlang$frostc$MethodRef* $tmp363 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
org$frostlang$frostc$MethodRef* $tmp364 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block18;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp352);
org$frostlang$frostc$MethodRef* $tmp365 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local9) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// line 293
frost$collections$Array* $tmp366 = *(&local7);
org$frostlang$frostc$MethodRef* $tmp367 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp366, ((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
org$frostlang$frostc$MethodRef* $tmp368 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local8) = ((org$frostlang$frostc$MethodRef*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// line 295
org$frostlang$frostc$Pair* $tmp369 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp370 = *(&local7);
frost$core$Int64 $tmp371 = *(&local5);
frost$core$Int64$wrapper* $tmp372;
$tmp372 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp372->value = $tmp371;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp369, ((frost$core$Object*) ((frost$collections$ListView*) $tmp370)), ((frost$core$Object*) $tmp372));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$Pair* $tmp373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local1) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$collections$Array* $tmp374 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local7) = ((frost$collections$Array*) NULL);
goto block17;
block17:;
goto block11;
block11:;
goto block9;
block9:;
org$frostlang$frostc$Pair* $tmp375 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Pair* $tmp376 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local3) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp247);
org$frostlang$frostc$Type* $tmp377 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// line 299
org$frostlang$frostc$Pair* $tmp378 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
org$frostlang$frostc$Pair* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local1) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$CollectionView* $tmp380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp378;
block2:;
// line 301
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
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
// line 306
// line 307
// line 309
frost$core$Int64* $tmp382 = &param1->$rawValue;
frost$core$Int64 $tmp383 = *$tmp382;
frost$core$Int64 $tmp384 = (frost$core$Int64) {25};
frost$core$Bit $tmp385 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp383, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp387 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp388 = *$tmp387;
frost$core$UInt64* $tmp389 = (frost$core$UInt64*) (param1->$data + 16);
frost$core$UInt64 $tmp390 = *$tmp389;
*(&local2) = $tmp390;
// line 311
frost$core$UInt64 $tmp391 = *(&local2);
frost$core$Int64 $tmp392 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp393 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp392);
uint64_t $tmp394 = $tmp391.value;
uint64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 > $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block4; else goto block5;
block4:;
// line 312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block5:;
// line 314
frost$core$UInt64 $tmp399 = *(&local2);
frost$core$Int64 $tmp400 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp399);
*(&local0) = $tmp400;
goto block1;
block3:;
// line 317
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
// line 320
frost$core$Int64* $tmp401 = &param3->$rawValue;
frost$core$Int64 $tmp402 = *$tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {25};
frost$core$Bit $tmp404 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp402, $tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp406 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp407 = *$tmp406;
frost$core$UInt64* $tmp408 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp409 = *$tmp408;
*(&local3) = $tmp409;
// line 322
frost$core$UInt64 $tmp410 = *(&local3);
frost$core$Int64 $tmp411 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp412 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp411);
uint64_t $tmp413 = $tmp410.value;
uint64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 > $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block9; else goto block10;
block9:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block10:;
// line 325
frost$core$UInt64 $tmp418 = *(&local3);
frost$core$Int64 $tmp419 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp418);
*(&local1) = $tmp419;
goto block6;
block8:;
// line 328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block6:;
// line 331
frost$core$Int64 $tmp420 = param2.$rawValue;
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
frost$core$Bit $tmp422 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block12; else goto block13;
block12:;
// line 333
frost$core$Int64 $tmp424 = *(&local0);
frost$core$Int64 $tmp425 = *(&local1);
int64_t $tmp426 = $tmp424.value;
int64_t $tmp427 = $tmp425.value;
int64_t $tmp428 = $tmp426 + $tmp427;
frost$core$Int64 $tmp429 = (frost$core$Int64) {$tmp428};
frost$core$UInt64 $tmp430 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp429);
*(&local4) = $tmp430;
// line 334
org$frostlang$frostc$ASTNode* $tmp431 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp432 = (frost$core$Int64) {25};
$fn434 $tmp433 = ($fn434) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp435 = $tmp433(param1);
frost$core$UInt64 $tmp436 = *(&local4);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp431, $tmp432, $tmp435, $tmp436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
return $tmp431;
block13:;
frost$core$Int64 $tmp437 = (frost$core$Int64) {1};
frost$core$Bit $tmp438 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp437);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block14; else goto block15;
block14:;
// line 337
frost$core$Int64 $tmp440 = *(&local0);
frost$core$Int64 $tmp441 = *(&local1);
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442 - $tmp443;
frost$core$Int64 $tmp445 = (frost$core$Int64) {$tmp444};
frost$core$UInt64 $tmp446 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp445);
*(&local5) = $tmp446;
// line 338
org$frostlang$frostc$ASTNode* $tmp447 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp448 = (frost$core$Int64) {25};
$fn450 $tmp449 = ($fn450) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp451 = $tmp449(param1);
frost$core$UInt64 $tmp452 = *(&local5);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp447, $tmp448, $tmp451, $tmp452);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
return $tmp447;
block15:;
frost$core$Int64 $tmp453 = (frost$core$Int64) {2};
frost$core$Bit $tmp454 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block16; else goto block17;
block16:;
// line 341
frost$core$Int64 $tmp456 = *(&local0);
frost$core$Int64 $tmp457 = *(&local1);
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458 * $tmp459;
frost$core$Int64 $tmp461 = (frost$core$Int64) {$tmp460};
frost$core$UInt64 $tmp462 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp461);
*(&local6) = $tmp462;
// line 342
org$frostlang$frostc$ASTNode* $tmp463 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp464 = (frost$core$Int64) {25};
$fn466 $tmp465 = ($fn466) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp467 = $tmp465(param1);
frost$core$UInt64 $tmp468 = *(&local6);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp463, $tmp464, $tmp467, $tmp468);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
return $tmp463;
block17:;
frost$core$Int64 $tmp469 = (frost$core$Int64) {4};
frost$core$Bit $tmp470 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp469);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block18; else goto block19;
block18:;
// line 345
frost$core$Int64 $tmp472 = *(&local1);
frost$core$Int64 $tmp473 = (frost$core$Int64) {0};
frost$core$Bit $tmp474 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp472, $tmp473);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block20; else goto block21;
block20:;
// line 346
$fn477 $tmp476 = ($fn477) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp478 = $tmp476(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp478, &$s479);
// line 347
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block21:;
// line 349
frost$core$Int64 $tmp480 = *(&local0);
frost$core$Int64 $tmp481 = *(&local1);
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482 / $tmp483;
frost$core$Int64 $tmp485 = (frost$core$Int64) {$tmp484};
frost$core$UInt64 $tmp486 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp485);
*(&local7) = $tmp486;
// line 350
org$frostlang$frostc$ASTNode* $tmp487 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp488 = (frost$core$Int64) {25};
$fn490 $tmp489 = ($fn490) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp491 = $tmp489(param1);
frost$core$UInt64 $tmp492 = *(&local7);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp487, $tmp488, $tmp491, $tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
return $tmp487;
block19:;
frost$core$Int64 $tmp493 = (frost$core$Int64) {5};
frost$core$Bit $tmp494 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp493);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block22; else goto block23;
block22:;
// line 353
frost$core$Int64 $tmp496 = *(&local1);
frost$core$Int64 $tmp497 = (frost$core$Int64) {0};
frost$core$Bit $tmp498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp496, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block24; else goto block25;
block24:;
// line 354
$fn501 $tmp500 = ($fn501) param3->$class->vtable[2];
org$frostlang$frostc$Position $tmp502 = $tmp500(param3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp502, &$s503);
// line 355
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block25:;
// line 357
frost$core$Int64 $tmp504 = *(&local0);
frost$core$Int64 $tmp505 = *(&local1);
frost$core$Int64 $tmp506 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp504, $tmp505);
frost$core$UInt64 $tmp507 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp506);
*(&local8) = $tmp507;
// line 358
org$frostlang$frostc$ASTNode* $tmp508 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp509 = (frost$core$Int64) {25};
$fn511 $tmp510 = ($fn511) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp512 = $tmp510(param1);
frost$core$UInt64 $tmp513 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp508, $tmp509, $tmp512, $tmp513);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
return $tmp508;
block23:;
frost$core$Int64 $tmp514 = (frost$core$Int64) {6};
frost$core$Bit $tmp515 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp514);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block26; else goto block27;
block26:;
// line 361
org$frostlang$frostc$ASTNode* $tmp517 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp518 = (frost$core$Int64) {6};
$fn520 $tmp519 = ($fn520) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp521 = $tmp519(param1);
frost$core$Int64 $tmp522 = *(&local0);
frost$core$Int64 $tmp523 = *(&local1);
frost$core$Bit $tmp524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp522, $tmp523);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp517, $tmp518, $tmp521, $tmp524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
return $tmp517;
block27:;
frost$core$Int64 $tmp525 = (frost$core$Int64) {7};
frost$core$Bit $tmp526 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block28; else goto block29;
block28:;
// line 364
org$frostlang$frostc$ASTNode* $tmp528 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp529 = (frost$core$Int64) {6};
$fn531 $tmp530 = ($fn531) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp532 = $tmp530(param1);
frost$core$Int64 $tmp533 = *(&local0);
frost$core$Int64 $tmp534 = *(&local1);
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 != $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp528, $tmp529, $tmp532, $tmp538);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
return $tmp528;
block29:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {9};
frost$core$Bit $tmp540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block30; else goto block31;
block30:;
// line 367
org$frostlang$frostc$ASTNode* $tmp542 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp543 = (frost$core$Int64) {6};
$fn545 $tmp544 = ($fn545) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp546 = $tmp544(param1);
frost$core$Int64 $tmp547 = *(&local0);
frost$core$Int64 $tmp548 = *(&local1);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
bool $tmp551 = $tmp549 < $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp542, $tmp543, $tmp546, $tmp552);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
return $tmp542;
block31:;
frost$core$Int64 $tmp553 = (frost$core$Int64) {8};
frost$core$Bit $tmp554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block32; else goto block33;
block32:;
// line 370
org$frostlang$frostc$ASTNode* $tmp556 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp557 = (frost$core$Int64) {6};
$fn559 $tmp558 = ($fn559) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp560 = $tmp558(param1);
frost$core$Int64 $tmp561 = *(&local0);
frost$core$Int64 $tmp562 = *(&local1);
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562.value;
bool $tmp565 = $tmp563 > $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp556, $tmp557, $tmp560, $tmp566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
return $tmp556;
block33:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {11};
frost$core$Bit $tmp568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block34; else goto block35;
block34:;
// line 373
org$frostlang$frostc$ASTNode* $tmp570 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp571 = (frost$core$Int64) {6};
$fn573 $tmp572 = ($fn573) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp574 = $tmp572(param1);
frost$core$Int64 $tmp575 = *(&local0);
frost$core$Int64 $tmp576 = *(&local1);
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 <= $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp570, $tmp571, $tmp574, $tmp580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
return $tmp570;
block35:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {10};
frost$core$Bit $tmp582 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block36; else goto block37;
block36:;
// line 376
org$frostlang$frostc$ASTNode* $tmp584 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp585 = (frost$core$Int64) {6};
$fn587 $tmp586 = ($fn587) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp588 = $tmp586(param1);
frost$core$Int64 $tmp589 = *(&local0);
frost$core$Int64 $tmp590 = *(&local1);
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590.value;
bool $tmp593 = $tmp591 >= $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit($tmp584, $tmp585, $tmp588, $tmp594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
return $tmp584;
block37:;
frost$core$Int64 $tmp595 = (frost$core$Int64) {15};
frost$core$Bit $tmp596 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp595);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block38; else goto block39;
block38:;
// line 379
frost$core$Int64 $tmp598 = *(&local0);
frost$core$Int64 $tmp599 = *(&local1);
frost$core$Int64 $tmp600 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp598, $tmp599);
frost$core$UInt64 $tmp601 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp600);
*(&local9) = $tmp601;
// line 380
org$frostlang$frostc$ASTNode* $tmp602 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp603 = (frost$core$Int64) {25};
$fn605 $tmp604 = ($fn605) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp606 = $tmp604(param1);
frost$core$UInt64 $tmp607 = *(&local9);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp602, $tmp603, $tmp606, $tmp607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
return $tmp602;
block39:;
frost$core$Int64 $tmp608 = (frost$core$Int64) {13};
frost$core$Bit $tmp609 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block40; else goto block41;
block40:;
// line 383
frost$core$Int64 $tmp611 = *(&local0);
frost$core$Int64 $tmp612 = *(&local1);
frost$core$Int64 $tmp613 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp611, $tmp612);
frost$core$UInt64 $tmp614 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp613);
*(&local10) = $tmp614;
// line 384
org$frostlang$frostc$ASTNode* $tmp615 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp616 = (frost$core$Int64) {25};
$fn618 $tmp617 = ($fn618) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp619 = $tmp617(param1);
frost$core$UInt64 $tmp620 = *(&local10);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp615, $tmp616, $tmp619, $tmp620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
return $tmp615;
block41:;
frost$core$Int64 $tmp621 = (frost$core$Int64) {17};
frost$core$Bit $tmp622 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block42; else goto block43;
block42:;
// line 387
frost$core$Int64 $tmp624 = *(&local0);
frost$core$Int64 $tmp625 = *(&local1);
frost$core$Int64 $tmp626 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp624, $tmp625);
frost$core$UInt64 $tmp627 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp626);
*(&local11) = $tmp627;
// line 388
org$frostlang$frostc$ASTNode* $tmp628 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp629 = (frost$core$Int64) {25};
$fn631 $tmp630 = ($fn631) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp632 = $tmp630(param1);
frost$core$UInt64 $tmp633 = *(&local11);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp628, $tmp629, $tmp632, $tmp633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
return $tmp628;
block43:;
frost$core$Int64 $tmp634 = (frost$core$Int64) {18};
frost$core$Bit $tmp635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block44; else goto block45;
block44:;
// line 391
frost$core$Int64 $tmp637 = *(&local0);
frost$core$Int64 $tmp638 = *(&local1);
frost$core$Int64 $tmp639 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp637, $tmp638);
frost$core$UInt64 $tmp640 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp639);
*(&local12) = $tmp640;
// line 392
org$frostlang$frostc$ASTNode* $tmp641 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp642 = (frost$core$Int64) {25};
$fn644 $tmp643 = ($fn644) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp645 = $tmp643(param1);
frost$core$UInt64 $tmp646 = *(&local12);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp641, $tmp642, $tmp645, $tmp646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
return $tmp641;
block45:;
frost$core$Int64 $tmp647 = (frost$core$Int64) {19};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp420, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block46; else goto block11;
block46:;
// line 395
frost$core$Int64 $tmp650 = *(&local0);
frost$core$Int64 $tmp651 = *(&local1);
frost$core$Int64 $tmp652 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp650, $tmp651);
frost$core$UInt64 $tmp653 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp652);
*(&local13) = $tmp653;
// line 396
org$frostlang$frostc$ASTNode* $tmp654 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp655 = (frost$core$Int64) {25};
$fn657 $tmp656 = ($fn657) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp658 = $tmp656(param1);
frost$core$UInt64 $tmp659 = *(&local13);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp654, $tmp655, $tmp658, $tmp659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
return $tmp654;
block11:;
// line 399
$fn661 $tmp660 = ($fn661) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp662 = $tmp660(param1);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp663;
$tmp663 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp663->value = param2;
$fn665 $tmp664 = ($fn665) ((frost$core$Object*) $tmp663)->$class->vtable[0];
frost$core$String* $tmp666 = $tmp664(((frost$core$Object*) $tmp663));
frost$core$String* $tmp667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s668, $tmp666);
frost$core$String* $tmp669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp667, &$s670);
frost$core$String* $tmp671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp669, &$s672);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp662, $tmp671);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// line 401
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 408
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp673;
$tmp673 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp673->value = param2;
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp675 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp674);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp676;
$tmp676 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp676->value = $tmp675;
ITable* $tmp677 = ((frost$core$Equatable*) $tmp673)->$class->itable;
while ($tmp677->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp677 = $tmp677->next;
}
$fn679 $tmp678 = $tmp677->methods[1];
frost$core$Bit $tmp680 = $tmp678(((frost$core$Equatable*) $tmp673), ((frost$core$Equatable*) $tmp676));
bool $tmp681 = $tmp680.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp676)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp673)));
if ($tmp681) goto block1; else goto block2;
block1:;
// line 409
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 411
frost$core$Int64* $tmp682 = &param1->$rawValue;
frost$core$Int64 $tmp683 = *$tmp682;
frost$core$Int64 $tmp684 = (frost$core$Int64) {40};
frost$core$Bit $tmp685 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp683, $tmp684);
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block4; else goto block3;
block4:;
org$frostlang$frostc$Position* $tmp687 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp688 = *$tmp687;
*(&local0) = $tmp688;
frost$core$String** $tmp689 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp690 = *$tmp689;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$String* $tmp691 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local1) = $tmp690;
// line 413
frost$core$Int64* $tmp692 = &param3->$rawValue;
frost$core$Int64 $tmp693 = *$tmp692;
frost$core$Int64 $tmp694 = (frost$core$Int64) {40};
frost$core$Bit $tmp695 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp693, $tmp694);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp697 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp698 = *$tmp697;
frost$core$String** $tmp699 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp700 = *$tmp699;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$String* $tmp701 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local2) = $tmp700;
// line 415
org$frostlang$frostc$ASTNode* $tmp702 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp703 = (frost$core$Int64) {40};
org$frostlang$frostc$Position $tmp704 = *(&local0);
frost$core$String* $tmp705 = *(&local1);
frost$core$String* $tmp706 = *(&local2);
frost$core$String* $tmp707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, $tmp706);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp702, $tmp703, $tmp704, $tmp707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$String* $tmp708 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp709 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local1) = ((frost$core$String*) NULL);
return $tmp702;
block5:;
frost$core$String* $tmp710 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local1) = ((frost$core$String*) NULL);
goto block3;
block3:;
// line 420
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);

}
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

// line 425
frost$core$Int64* $tmp711 = &param1->$rawValue;
frost$core$Int64 $tmp712 = *$tmp711;
frost$core$Int64 $tmp713 = (frost$core$Int64) {25};
frost$core$Bit $tmp714 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp712, $tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block2; else goto block3;
block2:;
// line 427
org$frostlang$frostc$ASTNode* $tmp716 = org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
return $tmp716;
block3:;
frost$core$Int64 $tmp717 = (frost$core$Int64) {40};
frost$core$Bit $tmp718 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp712, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block4; else goto block5;
block4:;
// line 430
org$frostlang$frostc$ASTNode* $tmp720 = org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param1, param2, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
return $tmp720;
block5:;
// line 433
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block1:;
goto block6;
block6:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
frost$core$Bit local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$IR$Statement$ID local10;
// line 441
org$frostlang$frostc$ASTNode* $tmp721 = org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(param0, param2, param3, param4);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
org$frostlang$frostc$ASTNode* $tmp722 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local0) = $tmp721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// line 442
org$frostlang$frostc$ASTNode* $tmp723 = *(&local0);
frost$core$Bit $tmp724 = frost$core$Bit$init$builtin_bit($tmp723 != NULL);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block1; else goto block2;
block1:;
// line 443
org$frostlang$frostc$ASTNode* $tmp726 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp727 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp726, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
org$frostlang$frostc$ASTNode* $tmp728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp727;
block2:;
// line 445
frost$core$Int64 $tmp729 = param3.$rawValue;
frost$core$Int64 $tmp730 = (frost$core$Int64) {23};
frost$core$Bit $tmp731 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp729, $tmp730);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block4; else goto block5;
block4:;
// line 447
org$frostlang$frostc$Scanner** $tmp733 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp734 = *$tmp733;
org$frostlang$frostc$Type* $tmp735 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp734, param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
org$frostlang$frostc$Type* $tmp736 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local1) = $tmp735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// line 448
org$frostlang$frostc$Type* $tmp737 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp738 = org$frostlang$frostc$Compiler$compileCast$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp737);
org$frostlang$frostc$IR$Value* $tmp739 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp738, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
org$frostlang$frostc$Type* $tmp740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp741 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp739;
block5:;
frost$core$Int64 $tmp742 = (frost$core$Int64) {21};
frost$core$Bit $tmp743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp729, $tmp742);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp745 = (frost$core$Int64) {22};
frost$core$Bit $tmp746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp729, $tmp745);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block6; else goto block8;
block6:;
// line 451
org$frostlang$frostc$IR$Value* $tmp748 = org$frostlang$frostc$Compiler$compileIdentityComparison$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
org$frostlang$frostc$ASTNode* $tmp749 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp748;
block8:;
// line 454
org$frostlang$frostc$Pair* $tmp750 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param2, param3, param4, param5);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
org$frostlang$frostc$Pair* $tmp751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local2) = $tmp750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// line 455
org$frostlang$frostc$Pair* $tmp752 = *(&local2);
frost$core$Bit $tmp753 = frost$core$Bit$init$builtin_bit($tmp752 != NULL);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block9; else goto block10;
block9:;
// line 456
org$frostlang$frostc$Pair* $tmp755 = *(&local2);
frost$core$Object** $tmp756 = &$tmp755->first;
frost$core$Object* $tmp757 = *$tmp756;
ITable* $tmp758 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp757))->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[0];
frost$core$Int64 $tmp761 = $tmp759(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp757)));
frost$core$Int64 $tmp762 = (frost$core$Int64) {1};
int64_t $tmp763 = $tmp761.value;
int64_t $tmp764 = $tmp762.value;
bool $tmp765 = $tmp763 > $tmp764;
frost$core$Bit $tmp766 = (frost$core$Bit) {$tmp765};
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block11; else goto block12;
block11:;
// line 457
org$frostlang$frostc$Pair* $tmp768 = *(&local2);
frost$core$Object** $tmp769 = &$tmp768->first;
frost$core$Object* $tmp770 = *$tmp769;
frost$collections$Array* $tmp771 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp771, $tmp772);
frost$collections$Array$add$frost$collections$Array$T($tmp771, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp771, ((frost$core$Object*) param4));
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp770), ((frost$collections$ListView*) $tmp771), param5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// line 458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp774 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// line 460
org$frostlang$frostc$Pair* $tmp775 = *(&local2);
frost$core$Object** $tmp776 = &$tmp775->first;
frost$core$Object* $tmp777 = *$tmp776;
frost$core$Int64 $tmp778 = (frost$core$Int64) {0};
ITable* $tmp779 = ((frost$collections$ListView*) $tmp777)->$class->itable;
while ($tmp779->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp779 = $tmp779->next;
}
$fn781 $tmp780 = $tmp779->methods[0];
frost$core$Object* $tmp782 = $tmp780(((frost$collections$ListView*) $tmp777), $tmp778);
org$frostlang$frostc$MethodDecl** $tmp783 = &((org$frostlang$frostc$MethodRef*) $tmp782)->value;
org$frostlang$frostc$MethodDecl* $tmp784 = *$tmp783;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
org$frostlang$frostc$MethodDecl* $tmp785 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local3) = $tmp784;
frost$core$Frost$unref$frost$core$Object$Q($tmp782);
// line 461
org$frostlang$frostc$MethodDecl* $tmp786 = *(&local3);
org$frostlang$frostc$Annotations** $tmp787 = &$tmp786->annotations;
org$frostlang$frostc$Annotations* $tmp788 = *$tmp787;
frost$core$Bit $tmp789 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block13; else goto block14;
block13:;
// line 462
org$frostlang$frostc$MethodDecl* $tmp791 = *(&local3);
frost$collections$Array** $tmp792 = &$tmp791->parameters;
frost$collections$Array* $tmp793 = *$tmp792;
ITable* $tmp794 = ((frost$collections$CollectionView*) $tmp793)->$class->itable;
while ($tmp794->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp794 = $tmp794->next;
}
$fn796 $tmp795 = $tmp794->methods[0];
frost$core$Int64 $tmp797 = $tmp795(((frost$collections$CollectionView*) $tmp793));
frost$core$Int64 $tmp798 = (frost$core$Int64) {2};
frost$core$Bit $tmp799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp797, $tmp798);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block15; else goto block16;
block15:;
// line 463
org$frostlang$frostc$IR$Value* $tmp801 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp802 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp803 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp801, $tmp802, ((org$frostlang$frostc$IR$Value*) NULL), $tmp803);
frost$collections$Array* $tmp804 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp805 = (frost$core$Int64) {2};
frost$collections$Array$init$frost$core$Int64($tmp804, $tmp805);
frost$collections$Array$add$frost$collections$Array$T($tmp804, ((frost$core$Object*) param2));
frost$collections$Array$add$frost$collections$Array$T($tmp804, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp806 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp801, ((frost$collections$ListView*) $tmp804), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
org$frostlang$frostc$MethodDecl* $tmp807 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp808 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp806;
block16:;
// line 466
org$frostlang$frostc$MethodDecl* $tmp810 = *(&local3);
frost$collections$Array** $tmp811 = &$tmp810->parameters;
frost$collections$Array* $tmp812 = *$tmp811;
ITable* $tmp813 = ((frost$collections$CollectionView*) $tmp812)->$class->itable;
while ($tmp813->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp813 = $tmp813->next;
}
$fn815 $tmp814 = $tmp813->methods[0];
frost$core$Int64 $tmp816 = $tmp814(((frost$collections$CollectionView*) $tmp812));
frost$core$Int64 $tmp817 = (frost$core$Int64) {1};
frost$core$Bit $tmp818 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp816, $tmp817);
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp820 = (frost$core$Int64) {466};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s821, $tmp820);
abort(); // unreachable
block17:;
// line 467
org$frostlang$frostc$IR$Value* $tmp822 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp823 = (frost$core$Int64) {9};
org$frostlang$frostc$MethodDecl* $tmp824 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp822, $tmp823, ((org$frostlang$frostc$IR$Value*) NULL), $tmp824);
frost$collections$Array* $tmp825 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp826 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp825, $tmp826);
frost$collections$Array$add$frost$collections$Array$T($tmp825, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp827 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp822, ((frost$collections$ListView*) $tmp825), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
org$frostlang$frostc$MethodDecl* $tmp828 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp829 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp830 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp827;
block14:;
// line 470
org$frostlang$frostc$MethodDecl* $tmp831 = *(&local3);
frost$core$Weak** $tmp832 = &$tmp831->owner;
frost$core$Weak* $tmp833 = *$tmp832;
frost$core$Object* $tmp834 = frost$core$Weak$get$R$frost$core$Weak$T($tmp833);
frost$core$String** $tmp835 = &((org$frostlang$frostc$ClassDecl*) $tmp834)->name;
frost$core$String* $tmp836 = *$tmp835;
frost$core$Bit $tmp837 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp836, &$s838);
bool $tmp839 = $tmp837.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp834);
if ($tmp839) goto block19; else goto block20;
block19:;
// line 471
org$frostlang$frostc$MethodDecl* $tmp840 = *(&local3);
frost$core$String** $tmp841 = &((org$frostlang$frostc$Symbol*) $tmp840)->name;
frost$core$String* $tmp842 = *$tmp841;
frost$core$Bit $tmp843 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp842, &$s844);
bool $tmp845 = $tmp843.value;
if ($tmp845) goto block21; else goto block22;
block21:;
// line 472
org$frostlang$frostc$IR$Value* $tmp846 = org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
org$frostlang$frostc$MethodDecl* $tmp847 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp848 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp849 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp846;
block22:;
// line 474
org$frostlang$frostc$MethodDecl* $tmp850 = *(&local3);
frost$core$String** $tmp851 = &((org$frostlang$frostc$Symbol*) $tmp850)->name;
frost$core$String* $tmp852 = *$tmp851;
frost$core$Bit $tmp853 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp852, &$s854);
bool $tmp855 = $tmp853.value;
if ($tmp855) goto block23; else goto block24;
block23:;
// line 475
org$frostlang$frostc$IR$Value* $tmp856 = org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
org$frostlang$frostc$MethodDecl* $tmp857 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp858 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp859 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp856;
block24:;
goto block20;
block20:;
// line 478
frost$collections$CollectionView* $tmp860 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param2);
org$frostlang$frostc$MethodDecl* $tmp861 = *(&local3);
frost$core$Weak** $tmp862 = &$tmp861->owner;
frost$core$Weak* $tmp863 = *$tmp862;
frost$core$Object* $tmp864 = frost$core$Weak$get$R$frost$core$Weak$T($tmp863);
org$frostlang$frostc$Type* $tmp865 = org$frostlang$frostc$Compiler$findType$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp860, ((org$frostlang$frostc$ClassDecl*) $tmp864));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
org$frostlang$frostc$Type* $tmp866 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local4) = $tmp865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q($tmp864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// line 479
org$frostlang$frostc$Type* $tmp867 = *(&local4);
frost$core$Bit $tmp868 = frost$core$Bit$init$builtin_bit($tmp867 != NULL);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp870 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s871, $tmp870);
abort(); // unreachable
block25:;
// line 480
org$frostlang$frostc$Compiler$TypeContext* $tmp872 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp873 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp874 = *(&local4);
frost$core$Bit $tmp875 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp872, $tmp873, $tmp874, $tmp875);
org$frostlang$frostc$IR$Value* $tmp876 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp872);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
org$frostlang$frostc$IR$Value* $tmp877 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local5) = $tmp876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// line 481
org$frostlang$frostc$IR$Value* $tmp878 = *(&local5);
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit($tmp878 == NULL);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block27; else goto block28;
block27:;
// line 482
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp881 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp882 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp883 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp884 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp885 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block28:;
// line 484
org$frostlang$frostc$IR$Value* $tmp886 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp887 = (frost$core$Int64) {9};
org$frostlang$frostc$IR$Value* $tmp888 = *(&local5);
org$frostlang$frostc$MethodDecl* $tmp889 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl($tmp886, $tmp887, $tmp888, $tmp889);
frost$collections$Array* $tmp890 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp891 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp890, $tmp891);
frost$collections$Array$add$frost$collections$Array$T($tmp890, ((frost$core$Object*) param4));
org$frostlang$frostc$IR$Value* $tmp892 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp886, ((frost$collections$ListView*) $tmp890), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
org$frostlang$frostc$IR$Value* $tmp893 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp894 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp895 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Pair* $tmp896 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp897 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp892;
block10:;
// line 487
org$frostlang$frostc$Compiler$TypeContext* $tmp898 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp899 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp898, $tmp899);
org$frostlang$frostc$IR$Value* $tmp900 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp898);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
org$frostlang$frostc$IR$Value* $tmp901 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local6) = $tmp900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// line 488
org$frostlang$frostc$IR$Value* $tmp902 = *(&local6);
frost$core$Bit $tmp903 = frost$core$Bit$init$builtin_bit($tmp902 == NULL);
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block29; else goto block30;
block29:;
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp905 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp906 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp907 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
// line 491
org$frostlang$frostc$Compiler$TypeContext* $tmp908 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp909 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp910 = *(&local6);
$fn912 $tmp911 = ($fn912) $tmp910->$class->vtable[2];
org$frostlang$frostc$Type* $tmp913 = $tmp911($tmp910);
frost$core$Bit $tmp914 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp908, $tmp909, $tmp913, $tmp914);
org$frostlang$frostc$IR$Value* $tmp915 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp908);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
org$frostlang$frostc$IR$Value* $tmp916 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local7) = $tmp915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// line 493
org$frostlang$frostc$IR$Value* $tmp917 = *(&local7);
frost$core$Bit $tmp918 = frost$core$Bit$init$builtin_bit($tmp917 == NULL);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block31; else goto block32;
block31:;
// line 494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp920 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp921 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp922 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp923 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block32:;
// line 496
org$frostlang$frostc$IR$Value* $tmp924 = *(&local6);
$fn926 $tmp925 = ($fn926) $tmp924->$class->vtable[2];
org$frostlang$frostc$Type* $tmp927 = $tmp925($tmp924);
org$frostlang$frostc$Type* $tmp928 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp929 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp927, $tmp928);
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block35; else goto block36;
block35:;
*(&local8) = $tmp929;
goto block37;
block36:;
org$frostlang$frostc$IR$Value* $tmp931 = *(&local6);
$fn933 $tmp932 = ($fn933) $tmp931->$class->vtable[2];
org$frostlang$frostc$Type* $tmp934 = $tmp932($tmp931);
frost$core$Bit $tmp935 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp934);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local8) = $tmp935;
goto block37;
block37:;
frost$core$Bit $tmp936 = *(&local8);
bool $tmp937 = $tmp936.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
if ($tmp937) goto block33; else goto block34;
block33:;
// line 498
org$frostlang$frostc$ASTNode* $tmp938 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp939 = (frost$core$Int64) {5};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp938, $tmp939, param1, param2, param3, param4);
org$frostlang$frostc$Type* $tmp940 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp938);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
org$frostlang$frostc$Type* $tmp941 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local9) = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// line 500
org$frostlang$frostc$Type* $tmp942 = *(&local9);
frost$core$Bit $tmp943 = frost$core$Bit$init$builtin_bit($tmp942 != NULL);
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block38; else goto block39;
block38:;
// line 501
org$frostlang$frostc$IR** $tmp945 = &param0->ir;
org$frostlang$frostc$IR* $tmp946 = *$tmp945;
org$frostlang$frostc$IR$Statement* $tmp947 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp948 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp949 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp950 = *(&local7);
org$frostlang$frostc$Type* $tmp951 = *(&local9);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp947, $tmp948, param1, $tmp949, param3, $tmp950, $tmp951);
$fn953 $tmp952 = ($fn953) $tmp946->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp954 = $tmp952($tmp946, $tmp947);
*(&local10) = $tmp954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// line 503
org$frostlang$frostc$IR$Value* $tmp955 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp956 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp957 = *(&local10);
org$frostlang$frostc$Type* $tmp958 = *(&local9);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp955, $tmp956, $tmp957, $tmp958);
org$frostlang$frostc$IR$Value* $tmp959 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp955, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
org$frostlang$frostc$Type* $tmp960 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp961 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp962 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp964 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp959;
block39:;
org$frostlang$frostc$Type* $tmp965 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block34;
block34:;
// line 506
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp966;
$tmp966 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp966->value = param3;
$fn968 $tmp967 = ($fn968) ((frost$core$Object*) $tmp966)->$class->vtable[0];
frost$core$String* $tmp969 = $tmp967(((frost$core$Object*) $tmp966));
frost$core$String* $tmp970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s971, $tmp969);
frost$core$String* $tmp972 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp970, &$s973);
org$frostlang$frostc$IR$Value* $tmp974 = *(&local6);
$fn976 $tmp975 = ($fn976) $tmp974->$class->vtable[2];
org$frostlang$frostc$Type* $tmp977 = $tmp975($tmp974);
frost$core$String* $tmp978 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s979, ((frost$core$Object*) $tmp977));
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp978, &$s981);
org$frostlang$frostc$IR$Value* $tmp982 = *(&local7);
$fn984 $tmp983 = ($fn984) $tmp982->$class->vtable[2];
org$frostlang$frostc$Type* $tmp985 = $tmp983($tmp982);
frost$core$String* $tmp986 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp980, ((frost$core$Object*) $tmp985));
frost$core$String* $tmp987 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp986, &$s988);
frost$core$String* $tmp989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp972, $tmp987);
$fn991 $tmp990 = ($fn991) param5->$class->vtable[2];
frost$core$String* $tmp992 = $tmp990(param5);
frost$core$String* $tmp993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp989, $tmp992);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp993);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// line 509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp994 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp995 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$ASTNode* $tmp997 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block3:;
goto block40;
block40:;

}
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* param0) {

return;

}
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

