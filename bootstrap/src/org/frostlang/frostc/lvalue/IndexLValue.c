#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Binary.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/expression/Call.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$IndexLValue$class_type org$frostlang$frostc$lvalue$IndexLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$IndexLValue$cleanup, org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$Int64 (*$fn58)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn71)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn75)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn87)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn129)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn160)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn197)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn222)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn225)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn232)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn235)(frost$core$Object*);
typedef frost$core$Int64 (*$fn300)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn322)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn352)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, -2527705490156128088, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, -3727949445279175429, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ASTNode* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:31
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp6 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp9 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$IndexLValue* param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
frost$collections$CollectionView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:38
org$frostlang$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp13 = *$tmp12;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp14 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {5};
org$frostlang$frostc$Position* $tmp16 = &param0->position;
org$frostlang$frostc$Position $tmp17 = *$tmp16;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp18 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp19 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp20 = &param0->position;
org$frostlang$frostc$Position $tmp21 = *$tmp20;
org$frostlang$frostc$IR$Value** $tmp22 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp23 = *$tmp22;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
frost$core$Int64 $tmp24 = (frost$core$Int64) {20};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:39:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp25 = &(&local1)->$rawValue;
*$tmp25 = $tmp24;
org$frostlang$frostc$expression$Binary$Operator $tmp26 = *(&local1);
*(&local0) = $tmp26;
org$frostlang$frostc$expression$Binary$Operator $tmp27 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp28 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp29 = *$tmp28;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp27, $tmp29);
frost$collections$CollectionView* $tmp30 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q($tmp13, $tmp14);
*(&local2) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$collections$CollectionView* $tmp31 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local2) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:40
frost$collections$CollectionView* $tmp32 = *(&local2);
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit($tmp32 == NULL);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:41
// begin inline call to method org.frostlang.frostc.Type.Any():org.frostlang.frostc.Type from IndexLValue.frost:41:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp35 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp35);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Array* $tmp36 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local3) = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
frost$collections$Array* $tmp37 = *(&local3);
// begin inline call to method org.frostlang.frostc.Type.Object():org.frostlang.frostc.Type from Type.frost:274:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp38 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp40 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp39);
org$frostlang$frostc$Position $tmp41 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp38, &$s43, $tmp40, $tmp41, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$collections$Array$add$frost$collections$Array$T($tmp37, ((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:275
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp44 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp45 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp46 = &(&local5)->$rawValue;
*$tmp46 = $tmp45;
org$frostlang$frostc$Type$Kind $tmp47 = *(&local5);
*(&local4) = $tmp47;
org$frostlang$frostc$Type$Kind $tmp48 = *(&local4);
org$frostlang$frostc$Position $tmp49 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp50 = *(&local3);
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp44, &$s52, $tmp48, $tmp49, ((frost$collections$ListView*) $tmp50), $tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$Array* $tmp53 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$CollectionView* $tmp54 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local2) = ((frost$collections$CollectionView*) NULL);
return $tmp44;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:43
frost$collections$CollectionView* $tmp55 = *(&local2);
ITable* $tmp56 = $tmp55->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[0];
frost$core$Int64 $tmp59 = $tmp57($tmp55);
frost$core$Int64 $tmp60 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:43:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 == $tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s67, $tmp66);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:44
frost$collections$CollectionView* $tmp68 = *(&local2);
ITable* $tmp69 = ((frost$collections$Iterable*) $tmp68)->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$collections$Iterator* $tmp72 = $tmp70(((frost$collections$Iterable*) $tmp68));
ITable* $tmp73 = $tmp72->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[1];
frost$core$Object* $tmp76 = $tmp74($tmp72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp76)));
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$CollectionView* $tmp77 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local2) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Type*) $tmp76);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$IndexLValue* param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Pair* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$expression$Binary$Operator local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:49
org$frostlang$frostc$IR$Value** $tmp78 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp79 = *$tmp78;
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit($tmp79 == NULL);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:50
org$frostlang$frostc$Compiler** $tmp82 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp83 = *$tmp82;
org$frostlang$frostc$IR$Value** $tmp84 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp85 = *$tmp84;
$fn87 $tmp86 = ($fn87) $tmp85->$class->vtable[2];
org$frostlang$frostc$Type* $tmp88 = $tmp86($tmp85);
frost$core$Int64 $tmp89 = (frost$core$Int64) {20};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:50:92
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp90 = &(&local1)->$rawValue;
*$tmp90 = $tmp89;
org$frostlang$frostc$expression$Binary$Operator $tmp91 = *(&local1);
*(&local0) = $tmp91;
org$frostlang$frostc$expression$Binary$Operator $tmp92 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp93 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp94 = *$tmp93;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp95 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp96 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp95, $tmp96);
org$frostlang$frostc$Pair* $tmp97 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp83, $tmp88, $tmp92, $tmp94, $tmp95);
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
org$frostlang$frostc$Pair* $tmp98 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local2) = $tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:52
org$frostlang$frostc$Pair* $tmp99 = *(&local2);
frost$core$Bit $tmp100 = frost$core$Bit$init$builtin_bit($tmp99 != NULL);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:53
org$frostlang$frostc$Pair* $tmp102 = *(&local2);
frost$core$Object** $tmp103 = &$tmp102->first;
frost$core$Object* $tmp104 = *$tmp103;
ITable* $tmp105 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp104))->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Int64 $tmp108 = $tmp106(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp104)));
frost$core$Int64 $tmp109 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:53:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
bool $tmp112 = $tmp110 == $tmp111;
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s116, $tmp115);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:54
org$frostlang$frostc$Compiler** $tmp117 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp118 = *$tmp117;
org$frostlang$frostc$ASTNode** $tmp119 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp120 = *$tmp119;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp121 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {3};
org$frostlang$frostc$Pair* $tmp123 = *(&local2);
frost$core$Object** $tmp124 = &$tmp123->first;
frost$core$Object* $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
ITable* $tmp127 = ((frost$collections$ListView*) $tmp125)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Object* $tmp130 = $tmp128(((frost$collections$ListView*) $tmp125), $tmp126);
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int64):org.frostlang.frostc.Type from IndexLValue.frost:55:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp132 = &((org$frostlang$frostc$MethodRef*) $tmp130)->effectiveType;
org$frostlang$frostc$Type* $tmp133 = *$tmp132;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp134 = &$tmp133->_subtypes;
org$frostlang$frostc$FixedArray* $tmp135 = *$tmp134;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135 != NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s139, $tmp138);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp140 = &$tmp133->_subtypes;
org$frostlang$frostc$FixedArray* $tmp141 = *$tmp140;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Object* $tmp142 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp141, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp142)));
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp121, $tmp122, ((org$frostlang$frostc$Type*) $tmp142), $tmp143);
org$frostlang$frostc$IR$Value* $tmp144 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp118, $tmp120, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$IR$Value** $tmp145 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp146 = *$tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
org$frostlang$frostc$IR$Value** $tmp147 = &param0->index;
*$tmp147 = $tmp144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp142)));
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
goto block5;
block5:;
org$frostlang$frostc$Pair* $tmp148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:58
org$frostlang$frostc$IR$Value** $tmp149 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp150 = *$tmp149;
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit($tmp150 == NULL);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:59
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp153 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp154 = (frost$core$Int64) {7};
frost$core$Int64 $tmp155 = (frost$core$Int64) {18446744073709551615};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:59:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp156 = &(&local4)->value;
*$tmp156 = $tmp155;
org$frostlang$frostc$IR$Statement$ID $tmp157 = *(&local4);
*(&local3) = $tmp157;
org$frostlang$frostc$IR$Statement$ID $tmp158 = *(&local3);
$fn160 $tmp159 = ($fn160) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp161 = $tmp159(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp153, $tmp154, $tmp158, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$IR$Value** $tmp162 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp163 = *$tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$IR$Value** $tmp164 = &param0->index;
*$tmp164 = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:62
org$frostlang$frostc$Compiler** $tmp165 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp166 = *$tmp165;
org$frostlang$frostc$Position* $tmp167 = &param0->position;
org$frostlang$frostc$Position $tmp168 = *$tmp167;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp169 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp170 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp171 = &param0->position;
org$frostlang$frostc$Position $tmp172 = *$tmp171;
org$frostlang$frostc$IR$Value** $tmp173 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp174 = *$tmp173;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp169, $tmp170, $tmp172, $tmp174);
frost$core$Int64 $tmp175 = (frost$core$Int64) {20};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from IndexLValue.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp176 = &(&local6)->$rawValue;
*$tmp176 = $tmp175;
org$frostlang$frostc$expression$Binary$Operator $tmp177 = *(&local6);
*(&local5) = $tmp177;
org$frostlang$frostc$expression$Binary$Operator $tmp178 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp179 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp180 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp181 = &param0->position;
org$frostlang$frostc$Position $tmp182 = *$tmp181;
org$frostlang$frostc$IR$Value** $tmp183 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp184 = *$tmp183;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp179, $tmp180, $tmp182, $tmp184);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp185 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp186 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp185, $tmp186);
org$frostlang$frostc$IR$Value* $tmp187 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp166, $tmp168, $tmp169, $tmp178, $tmp179, $tmp185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
return $tmp187;

}
void org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Statement$ID local6;
frost$collections$Array* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:69
org$frostlang$frostc$IR$Value** $tmp188 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp189 = *$tmp188;
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 == NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:70
org$frostlang$frostc$Compiler** $tmp192 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp193 = *$tmp192;
org$frostlang$frostc$IR$Value** $tmp194 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp195 = *$tmp194;
$fn197 $tmp196 = ($fn197) $tmp195->$class->vtable[2];
org$frostlang$frostc$Type* $tmp198 = $tmp196($tmp195);
org$frostlang$frostc$ClassDecl* $tmp199 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q($tmp193, $tmp198);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
org$frostlang$frostc$ClassDecl* $tmp200 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local0) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:71
org$frostlang$frostc$ClassDecl* $tmp201 = *(&local0);
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit($tmp201 == NULL);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:72
org$frostlang$frostc$ClassDecl* $tmp204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:74
org$frostlang$frostc$Compiler** $tmp205 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp206 = *$tmp205;
org$frostlang$frostc$ClassDecl* $tmp207 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp208 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp206, $tmp207);
org$frostlang$frostc$Symbol* $tmp209 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp208, &$s210);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$Symbol* $tmp211 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local1) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:75
org$frostlang$frostc$Symbol* $tmp212 = *(&local1);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212 == NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:76
org$frostlang$frostc$Compiler** $tmp215 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp216 = *$tmp215;
org$frostlang$frostc$Position* $tmp217 = &param0->position;
org$frostlang$frostc$Position $tmp218 = *$tmp217;
org$frostlang$frostc$IR$Value** $tmp219 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp220 = *$tmp219;
$fn222 $tmp221 = ($fn222) $tmp220->$class->vtable[2];
org$frostlang$frostc$Type* $tmp223 = $tmp221($tmp220);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn225 $tmp224 = ($fn225) ((frost$core$Object*) $tmp223)->$class->vtable[0];
frost$core$String* $tmp226 = $tmp224(((frost$core$Object*) $tmp223));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s228, $tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, &$s230);
$fn232 $tmp231 = ($fn232) param1->$class->vtable[2];
org$frostlang$frostc$Type* $tmp233 = $tmp231(param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IndexLValue.frost:77:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn235 $tmp234 = ($fn235) ((frost$core$Object*) $tmp233)->$class->vtable[0];
frost$core$String* $tmp236 = $tmp234(((frost$core$Object*) $tmp233));
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s238, $tmp236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, &$s240);
frost$core$String* $tmp241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp229, $tmp239);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp216, $tmp218, $tmp241);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:78
org$frostlang$frostc$Symbol* $tmp242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:80
*(&local2) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:81
org$frostlang$frostc$Symbol* $tmp244 = *(&local1);
org$frostlang$frostc$Symbol$Kind* $tmp245 = &$tmp244->kind;
org$frostlang$frostc$Symbol$Kind $tmp246 = *$tmp245;
frost$core$Int64 $tmp247 = $tmp246.$rawValue;
frost$core$Int64 $tmp248 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:82:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 == $tmp250;
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:83
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp254 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp254)));
frost$collections$ListView* $tmp255 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local2) = ((frost$collections$ListView*) $tmp254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:84
frost$collections$ListView* $tmp256 = *(&local2);
org$frostlang$frostc$Symbol* $tmp257 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp256), ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp257)));
goto block9;
block11:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:86:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp259 = $tmp247.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 == $tmp260;
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:87
org$frostlang$frostc$Symbol* $tmp264 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp265 = &((org$frostlang$frostc$Methods*) $tmp264)->methods;
org$frostlang$frostc$FixedArray* $tmp266 = *$tmp265;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp266)));
frost$collections$ListView* $tmp267 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local2) = ((frost$collections$ListView*) $tmp266);
goto block9;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:90
frost$core$Int64 $tmp268 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s269, $tmp268);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:93
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp270 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp270);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$collections$Array* $tmp271 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local3) = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:94
frost$collections$Array* $tmp272 = *(&local3);
org$frostlang$frostc$ASTNode** $tmp273 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp274 = *$tmp273;
frost$collections$Array$add$frost$collections$Array$T($tmp272, ((frost$core$Object*) $tmp274));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:95
frost$collections$Array* $tmp275 = *(&local3);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp276 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp277 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp278 = &param0->position;
org$frostlang$frostc$Position $tmp279 = *$tmp278;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp276, $tmp277, $tmp279, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp275, ((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:96
org$frostlang$frostc$Compiler** $tmp280 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp281 = *$tmp280;
org$frostlang$frostc$Position* $tmp282 = &param0->position;
org$frostlang$frostc$Position $tmp283 = *$tmp282;
org$frostlang$frostc$IR$Value** $tmp284 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp285 = *$tmp284;
frost$collections$ListView* $tmp286 = *(&local2);
frost$collections$Array* $tmp287 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp288 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp289 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp288, $tmp289);
org$frostlang$frostc$Pair* $tmp290 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp281, $tmp283, $tmp285, $tmp286, ((frost$collections$ListView*) $tmp287), $tmp288);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
org$frostlang$frostc$Pair* $tmp291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local4) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:98
org$frostlang$frostc$Pair* $tmp292 = *(&local4);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292 != NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:99
org$frostlang$frostc$Pair* $tmp295 = *(&local4);
frost$core$Object** $tmp296 = &$tmp295->first;
frost$core$Object* $tmp297 = *$tmp296;
ITable* $tmp298 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp297))->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Int64 $tmp301 = $tmp299(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp297)));
frost$core$Int64 $tmp302 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IndexLValue.frost:99:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 == $tmp304;
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit($tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s309, $tmp308);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:100
org$frostlang$frostc$Compiler** $tmp310 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp311 = *$tmp310;
org$frostlang$frostc$ASTNode** $tmp312 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp313 = *$tmp312;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp314 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp315 = (frost$core$Int64) {3};
org$frostlang$frostc$Pair* $tmp316 = *(&local4);
frost$core$Object** $tmp317 = &$tmp316->first;
frost$core$Object* $tmp318 = *$tmp317;
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
ITable* $tmp320 = ((frost$collections$ListView*) $tmp318)->$class->itable;
while ($tmp320->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp320 = $tmp320->next;
}
$fn322 $tmp321 = $tmp320->methods[0];
frost$core$Object* $tmp323 = $tmp321(((frost$collections$ListView*) $tmp318), $tmp319);
frost$core$Int64 $tmp324 = (frost$core$Int64) {0};
// begin inline call to function org.frostlang.frostc.MethodRef.parameterType(index:frost.core.Int64):org.frostlang.frostc.Type from IndexLValue.frost:101:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp325 = &((org$frostlang$frostc$MethodRef*) $tmp323)->effectiveType;
org$frostlang$frostc$Type* $tmp326 = *$tmp325;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp327 = &$tmp326->_subtypes;
org$frostlang$frostc$FixedArray* $tmp328 = *$tmp327;
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328 != NULL);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s332, $tmp331);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp333 = &$tmp326->_subtypes;
org$frostlang$frostc$FixedArray* $tmp334 = *$tmp333;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Object* $tmp335 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp334, $tmp324);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp335)));
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp314, $tmp315, ((org$frostlang$frostc$Type*) $tmp335), $tmp336);
org$frostlang$frostc$IR$Value* $tmp337 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp311, $tmp313, $tmp314);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
org$frostlang$frostc$IR$Value** $tmp338 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp339 = *$tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$IR$Value** $tmp340 = &param0->index;
*$tmp340 = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp335)));
frost$core$Frost$unref$frost$core$Object$Q($tmp323);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:103
org$frostlang$frostc$IR$Value** $tmp341 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp342 = *$tmp341;
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342 == NULL);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:105
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp345 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp346 = (frost$core$Int64) {7};
frost$core$Int64 $tmp347 = (frost$core$Int64) {18446744073709551615};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from IndexLValue.frost:105:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp348 = &(&local6)->value;
*$tmp348 = $tmp347;
org$frostlang$frostc$IR$Statement$ID $tmp349 = *(&local6);
*(&local5) = $tmp349;
org$frostlang$frostc$IR$Statement$ID $tmp350 = *(&local5);
$fn352 $tmp351 = ($fn352) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp353 = $tmp351(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp345, $tmp346, $tmp350, $tmp353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
org$frostlang$frostc$IR$Value** $tmp354 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp355 = *$tmp354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
org$frostlang$frostc$IR$Value** $tmp356 = &param0->index;
*$tmp356 = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
goto block26;
block26:;
org$frostlang$frostc$Pair* $tmp357 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp358 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp359 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Symbol* $tmp360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:108
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp362 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp362);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$collections$Array* $tmp363 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local7) = $tmp362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:109
frost$collections$Array* $tmp364 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp365 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp366 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp367 = &param0->position;
org$frostlang$frostc$Position $tmp368 = *$tmp367;
org$frostlang$frostc$IR$Value** $tmp369 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp370 = *$tmp369;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp365, $tmp366, $tmp368, $tmp370);
frost$collections$Array$add$frost$collections$Array$T($tmp364, ((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:110
frost$collections$Array* $tmp371 = *(&local7);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp372 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp373 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp374 = &param0->position;
org$frostlang$frostc$Position $tmp375 = *$tmp374;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp372, $tmp373, $tmp375, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp371, ((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:111
org$frostlang$frostc$Compiler** $tmp376 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp377 = *$tmp376;
org$frostlang$frostc$Position* $tmp378 = &param0->position;
org$frostlang$frostc$Position $tmp379 = *$tmp378;
org$frostlang$frostc$IR$Value** $tmp380 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp381 = *$tmp380;
frost$collections$Array* $tmp382 = *(&local7);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp383 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp384 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp383, $tmp384);
org$frostlang$frostc$IR$Value* $tmp385 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp377, $tmp379, $tmp381, &$s386, ((frost$collections$ListView*) $tmp382), $tmp383);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$collections$Array* $tmp387 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local7) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(org$frostlang$frostc$lvalue$IndexLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/IndexLValue.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp388 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp389 = *$tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$IR$Value** $tmp390 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp391 = *$tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
org$frostlang$frostc$ASTNode** $tmp392 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp393 = *$tmp392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
org$frostlang$frostc$IR$Value** $tmp394 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp395 = *$tmp394;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
return;

}

