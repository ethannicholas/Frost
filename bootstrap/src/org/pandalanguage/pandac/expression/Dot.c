#include "org/pandalanguage/pandac/expression/Dot.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Scanner.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Dot$class_type org$pandalanguage$pandac$expression$Dot$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Dot$cleanup} };

typedef org$pandalanguage$pandac$Type* (*$fn3)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn19)(org$pandalanguage$pandac$IR$Value*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x44\x6f\x74", 39, 985718176122630291, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$String* param3) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
// line 13
$fn3 $tmp2 = ($fn3) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp4 = $tmp2(param2);
org$pandalanguage$pandac$ClassDecl* $tmp5 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp4);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
org$pandalanguage$pandac$ClassDecl* $tmp6 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
*(&local0) = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($3:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($2:org.pandalanguage.pandac.Type)
// line 14
org$pandalanguage$pandac$ClassDecl* $tmp7 = *(&local0);
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 == NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 15
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 17
org$pandalanguage$pandac$ClassDecl* $tmp11 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp12 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp11);
org$pandalanguage$pandac$Symbol* $tmp13 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp12, param3);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
org$pandalanguage$pandac$Symbol* $tmp14 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
*(&local1) = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($36:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($35:org.pandalanguage.pandac.SymbolTable)
// line 18
org$pandalanguage$pandac$Symbol* $tmp15 = *(&local1);
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit($tmp15 == NULL);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block3:;
// line 19
$fn19 $tmp18 = ($fn19) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp20 = $tmp18(param2);
panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s22, ((panda$core$Object*) $tmp20));
panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s24);
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, param3);
panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s27);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($58:org.pandalanguage.pandac.Type)
// line 20
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp28 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing symbol
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp29 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 22
org$pandalanguage$pandac$Symbol* $tmp30 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp31 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp30);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($98:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp32 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing symbol
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp33 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp31;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, panda$core$String* param3) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
// line 27
panda$core$Int64* $tmp34 = &param2->$rawValue;
panda$core$Int64 $tmp35 = *$tmp34;
panda$core$Int64 $tmp36 = (panda$core$Int64) {21};
panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp35, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block2; else goto block1;
block2:;
// line 29
org$pandalanguage$pandac$Scanner** $tmp39 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp40 = *$tmp39;
org$pandalanguage$pandac$Type* $tmp41 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp40, param2);
org$pandalanguage$pandac$Type* $tmp42 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp41);
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
org$pandalanguage$pandac$Type* $tmp43 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local0) = $tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($11:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($10:org.pandalanguage.pandac.Type)
// line 30
org$pandalanguage$pandac$Type* $tmp44 = *(&local0);
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block3; else goto block4;
block3:;
// line 31
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp47 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing resolved
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 33
org$pandalanguage$pandac$IR$Value* $tmp48 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp49 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp50 = *(&local0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp48, $tmp49, $tmp50);
org$pandalanguage$pandac$IR$Value* $tmp51 = org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp48, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($46:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($41:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing resolved
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp51;
block1:;
// line 36
org$pandalanguage$pandac$IR$Value* $tmp53 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
org$pandalanguage$pandac$IR$Value* $tmp54 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
*(&local1) = $tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing REF($62:org.pandalanguage.pandac.IR.Value?)
// line 37
org$pandalanguage$pandac$IR$Value* $tmp55 = *(&local1);
panda$core$Bit $tmp56 = panda$core$Bit$init$builtin_bit($tmp55 == NULL);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block5; else goto block6;
block5:;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp58 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing compiledBase
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block6:;
// line 40
org$pandalanguage$pandac$IR$Value* $tmp59 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp60 = org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp59, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($91:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp61 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing compiledBase
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp60;

}
void org$pandalanguage$pandac$expression$Dot$init(org$pandalanguage$pandac$expression$Dot* param0) {

return;

}
void org$pandalanguage$pandac$expression$Dot$cleanup(org$pandalanguage$pandac$expression$Dot* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






