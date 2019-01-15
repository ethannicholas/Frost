#include "org/frostlanguage/frostc/expression/Dot.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Scanner.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$Dot$class_type org$frostlanguage$frostc$expression$Dot$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$Dot$cleanup} };

typedef org$frostlanguage$frostc$Type* (*$fn3)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Type* (*$fn19)(org$frostlanguage$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x44\x6f\x74", 39, -8117016228593026217, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$IR$Value* param2, frost$core$String* param3) {

org$frostlanguage$frostc$ClassDecl* local0 = NULL;
org$frostlanguage$frostc$Symbol* local1 = NULL;
// line 13
$fn3 $tmp2 = ($fn3) param2->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp4 = $tmp2(param2);
org$frostlanguage$frostc$ClassDecl* $tmp5 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(param0, $tmp4);
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlanguage$frostc$ClassDecl* $tmp6 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local0) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($3:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// unreffing REF($2:org.frostlanguage.frostc.Type)
// line 14
org$frostlanguage$frostc$ClassDecl* $tmp7 = *(&local0);
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 == NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 15
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block2:;
// line 17
org$frostlanguage$frostc$ClassDecl* $tmp11 = *(&local0);
org$frostlanguage$frostc$SymbolTable* $tmp12 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp11);
org$frostlanguage$frostc$Symbol* $tmp13 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp12, param3);
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlanguage$frostc$Symbol* $tmp14 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local1) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($36:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($35:org.frostlanguage.frostc.SymbolTable)
// line 18
org$frostlanguage$frostc$Symbol* $tmp15 = *(&local1);
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15 == NULL);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block3:;
// line 19
$fn19 $tmp18 = ($fn19) param2->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp20 = $tmp18(param2);
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s22, ((frost$core$Object*) $tmp20));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp21, &$s24);
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp23, param3);
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp25, &$s27);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($61:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($60:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($58:org.frostlanguage.frostc.Type)
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp28 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing symbol
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block4:;
// line 22
org$frostlanguage$frostc$Symbol* $tmp30 = *(&local1);
org$frostlanguage$frostc$IR$Value* $tmp31 = org$frostlanguage$frostc$Compiler$symbolRef$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Symbol$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, $tmp30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($98:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$Symbol* $tmp32 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing symbol
*(&local1) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp33 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing cl
*(&local0) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp31;

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, frost$core$String* param3) {

org$frostlanguage$frostc$Type* local0 = NULL;
org$frostlanguage$frostc$IR$Value* local1 = NULL;
// line 27
frost$core$Int64* $tmp34 = &param2->$rawValue;
frost$core$Int64 $tmp35 = *$tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {21};
frost$core$Bit $tmp37 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp35, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block2; else goto block1;
block2:;
// line 29
org$frostlanguage$frostc$Scanner** $tmp39 = &param0->scanner;
org$frostlanguage$frostc$Scanner* $tmp40 = *$tmp39;
org$frostlanguage$frostc$Type* $tmp41 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type($tmp40, param2);
org$frostlanguage$frostc$Type* $tmp42 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type$Q(param0, $tmp41);
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlanguage$frostc$Type* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($11:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($10:org.frostlanguage.frostc.Type)
// line 30
org$frostlanguage$frostc$Type* $tmp44 = *(&local0);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block3; else goto block4;
block3:;
// line 31
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing resolved
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block4:;
// line 33
org$frostlanguage$frostc$IR$Value* $tmp48 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp49 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Type* $tmp50 = *(&local0);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp48, $tmp49, $tmp50);
org$frostlanguage$frostc$IR$Value* $tmp51 = org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp48, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($46:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($41:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$Type* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing resolved
*(&local0) = ((org$frostlanguage$frostc$Type*) NULL);
return $tmp51;
block1:;
// line 36
org$frostlanguage$frostc$IR$Value* $tmp53 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2);
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlanguage$frostc$IR$Value* $tmp54 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local1) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($62:org.frostlanguage.frostc.IR.Value?)
// line 37
org$frostlanguage$frostc$IR$Value* $tmp55 = *(&local1);
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55 == NULL);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block5; else goto block6;
block5:;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp58 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing compiledBase
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block6:;
// line 40
org$frostlanguage$frostc$IR$Value* $tmp59 = *(&local1);
org$frostlanguage$frostc$IR$Value* $tmp60 = org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp59, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($91:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$IR$Value* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing compiledBase
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return $tmp60;

}
void org$frostlanguage$frostc$expression$Dot$init(org$frostlanguage$frostc$expression$Dot* param0) {

return;

}
void org$frostlanguage$frostc$expression$Dot$cleanup(org$frostlanguage$frostc$expression$Dot* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






