#include "org/frostlang/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Stack.h"
#include "frost/io/File.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assert$class_type org$frostlang$frostc$statement$Assert$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assert$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn69)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn87)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn92)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn103)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn108)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn112)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 37, 6365785395817378313, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, -7137946713078462448, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -7137960722408632065, NULL };

void org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$Compiler$AutoUnrefs* local0 = NULL;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
// line 1
// line 20
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 21
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array* $tmp5 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local1) = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// line 22
frost$collections$Array* $tmp6 = *(&local1);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp7 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp8 = (frost$core$Int64) {40};
frost$collections$Stack** $tmp9 = &param0->currentClass;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Object* $tmp12 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp10, $tmp11);
frost$io$File** $tmp13 = &((org$frostlang$frostc$ClassDecl*) $tmp12)->source;
frost$io$File* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = frost$io$File$get_name$R$frost$core$String($tmp14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp7, $tmp8, param1, $tmp15);
frost$collections$Array$add$frost$collections$Array$T($tmp6, ((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// line 23
frost$collections$Array* $tmp16 = *(&local1);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp17 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp18 = (frost$core$Int64) {25};
frost$core$Int64 $tmp19 = param1.line;
frost$core$UInt64 $tmp20 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp19);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp17, $tmp18, param1, $tmp20);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// line 24
org$frostlang$frostc$Type* $tmp21 = org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp22 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp21);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$ClassDecl* $tmp23 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local2) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// line 25
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
// line 26
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block3;
block1:;
// line 27
org$frostlang$frostc$ClassDecl* $tmp26 = *(&local2);
org$frostlang$frostc$SymbolTable* $tmp27 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp26);
org$frostlang$frostc$Symbol* $tmp28 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp27, &$s29);
org$frostlang$frostc$FixedArray** $tmp30 = &((org$frostlang$frostc$Methods*) $tmp28)->methods;
org$frostlang$frostc$FixedArray* $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {0};
frost$core$Object* $tmp33 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp31, $tmp32);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp33)));
org$frostlang$frostc$MethodDecl* $tmp34 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) $tmp33);
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 28
frost$collections$Array* $tmp35 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp35, ((frost$core$Object*) param2));
goto block2;
block3:;
// line 1
// line 31
org$frostlang$frostc$ClassDecl* $tmp36 = *(&local2);
org$frostlang$frostc$SymbolTable* $tmp37 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp36);
org$frostlang$frostc$Symbol* $tmp38 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp37, &$s39);
org$frostlang$frostc$FixedArray** $tmp40 = &((org$frostlang$frostc$Methods*) $tmp38)->methods;
org$frostlang$frostc$FixedArray* $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {1};
frost$core$Object* $tmp43 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp41, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp43)));
org$frostlang$frostc$MethodDecl* $tmp44 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) $tmp43);
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
goto block2;
block2:;
// line 33
org$frostlang$frostc$MethodDecl* $tmp45 = *(&local3);
frost$core$Bit $tmp46 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp45);
frost$core$Bit $tmp47 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block4; else goto block5;
block4:;
// line 34
org$frostlang$frostc$MethodDecl* $tmp49 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block5:;
// line 36
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp53 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp54 = org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type();
org$frostlang$frostc$MethodDecl* $tmp55 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp53, param0, $tmp54, $tmp55);
frost$collections$Array* $tmp56 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp57 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp58 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp57, $tmp58);
org$frostlang$frostc$IR$Value* $tmp59 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp53, ((frost$collections$ListView*) $tmp56), $tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$MethodDecl* $tmp60 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp61 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp62 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 39
org$frostlang$frostc$IR** $tmp64 = &param0->ir;
org$frostlang$frostc$IR* $tmp65 = *$tmp64;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp66 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp67 = (frost$core$Int64) {28};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp66, $tmp67, param1);
$fn69 $tmp68 = ($fn69) $tmp65->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp70 = $tmp68($tmp65, $tmp66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
return;

}
void org$frostlang$frostc$statement$Assert$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
// line 44
org$frostlang$frostc$IR** $tmp71 = &param0->ir;
org$frostlang$frostc$IR* $tmp72 = *$tmp71;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$IR* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
// line 45
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp74 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp76 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp77 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp74, $tmp75, $tmp76, $tmp77);
org$frostlang$frostc$IR$Value* $tmp78 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp74);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlang$frostc$IR$Value* $tmp79 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local1) = $tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// line 46
org$frostlang$frostc$IR$Value* $tmp80 = *(&local1);
frost$core$Bit $tmp81 = frost$core$Bit$init$builtin_bit($tmp80 == NULL);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block1; else goto block2;
block1:;
// line 47
org$frostlang$frostc$IR$Value* $tmp83 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block2:;
// line 49
org$frostlang$frostc$IR* $tmp85 = *(&local0);
$fn87 $tmp86 = ($fn87) $tmp85->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp88 = $tmp86($tmp85, &$s89);
*(&local2) = $tmp88;
// line 50
org$frostlang$frostc$IR* $tmp90 = *(&local0);
$fn92 $tmp91 = ($fn92) $tmp90->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp93 = $tmp91($tmp90, &$s94);
*(&local3) = $tmp93;
// line 51
org$frostlang$frostc$IR* $tmp95 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp96 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp97 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp98 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp99 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp98);
org$frostlang$frostc$IR$Block$ID $tmp100 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp101 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp96, $tmp97, param1, $tmp99, $tmp100, $tmp101);
$fn103 $tmp102 = ($fn103) $tmp95->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp104 = $tmp102($tmp95, $tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// line 53
org$frostlang$frostc$IR* $tmp105 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp106 = *(&local3);
$fn108 $tmp107 = ($fn108) $tmp105->$class->vtable[4];
$tmp107($tmp105, $tmp106);
// line 54
org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, param3);
// line 55
org$frostlang$frostc$IR* $tmp109 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp110 = *(&local2);
$fn112 $tmp111 = ($fn112) $tmp109->$class->vtable[4];
$tmp111($tmp109, $tmp110);
org$frostlang$frostc$IR$Value* $tmp113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Assert$init(org$frostlang$frostc$statement$Assert* param0) {

return;

}
void org$frostlang$frostc$statement$Assert$cleanup(org$frostlang$frostc$statement$Assert* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

