#include "org/frostlang/frostc/expression/Dot.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Dot$class_type org$frostlang$frostc$expression$Dot$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Dot$cleanup} };

typedef org$frostlang$frostc$Type* (*$fn3)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn19)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn22)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x44\x6f\x74", 35, 691094023978749877, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:13
$fn3 $tmp2 = ($fn3) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4 = $tmp2(param2);
org$frostlang$frostc$ClassDecl* $tmp5 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$ClassDecl* $tmp6 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local0) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:14
org$frostlang$frostc$ClassDecl* $tmp7 = *(&local0);
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 == NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:15
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:17
org$frostlang$frostc$ClassDecl* $tmp11 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp12 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp11);
org$frostlang$frostc$Symbol* $tmp13 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp12, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$Symbol* $tmp14 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:18
org$frostlang$frostc$Symbol* $tmp15 = *(&local1);
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15 == NULL);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:19
$fn19 $tmp18 = ($fn19) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp20 = $tmp18(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Dot.frost:20:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn22 $tmp21 = ($fn22) ((frost$core$Object*) $tmp20)->$class->vtable[0];
frost$core$String* $tmp23 = $tmp21(((frost$core$Object*) $tmp20));
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s25, $tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, param3);
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp28, &$s30);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp31 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:23
org$frostlang$frostc$Symbol* $tmp33 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp34 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
org$frostlang$frostc$Symbol* $tmp35 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp34;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, frost$core$String* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:28
frost$core$Int64* $tmp37 = &param2->$rawValue;
frost$core$Int64 $tmp38 = *$tmp37;
frost$core$Int64 $tmp39 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Dot.frost:29:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 == $tmp41;
frost$core$Bit $tmp43 = frost$core$Bit$init$builtin_bit($tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:30
org$frostlang$frostc$Scanner** $tmp45 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp46 = *$tmp45;
org$frostlang$frostc$Type* $tmp47 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp46, param2);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Dot.frost:30:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:852
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp49 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, $tmp47, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
org$frostlang$frostc$Type* $tmp50 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local0) = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:31
org$frostlang$frostc$Type* $tmp51 = *(&local0);
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit($tmp51 == NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:34
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp55 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp56 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp57 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp55, $tmp56, $tmp57);
org$frostlang$frostc$IR$Value* $tmp58 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp55, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$Type* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp58;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:37
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from Dot.frost:37:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4976
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp60 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp60, $tmp61);
org$frostlang$frostc$IR$Value* $tmp62 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$IR$Value* $tmp63 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local1) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:38
org$frostlang$frostc$IR$Value* $tmp64 = *(&local1);
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit($tmp64 == NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:41
org$frostlang$frostc$IR$Value* $tmp68 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp69 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp68, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$IR$Value* $tmp70 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp69;

}
void org$frostlang$frostc$expression$Dot$init(org$frostlang$frostc$expression$Dot* param0) {

return;

}
void org$frostlang$frostc$expression$Dot$cleanup(org$frostlang$frostc$expression$Dot* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






