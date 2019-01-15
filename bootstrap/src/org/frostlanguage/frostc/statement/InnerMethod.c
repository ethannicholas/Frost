#include "org/frostlanguage/frostc/statement/InnerMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/expression/Closure.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "frost/collections/Array.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$InnerMethod$class_type org$frostlanguage$frostc$statement$InnerMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$InnerMethod$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64", 46, -3963981393048632994, NULL };

void org$frostlanguage$frostc$statement$InnerMethod$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$MethodDecl$Kind param2, frost$core$String* param3, org$frostlanguage$frostc$FixedArray* param4, org$frostlanguage$frostc$ASTNode* param5, org$frostlanguage$frostc$FixedArray* param6) {

org$frostlanguage$frostc$IR$Value* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
// line 17
org$frostlanguage$frostc$Compiler$TypeContext* $tmp2 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2, $tmp3);
org$frostlanguage$frostc$IR$Value* $tmp4 = org$frostlanguage$frostc$expression$Closure$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$MethodDecl$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, param2, param4, param5, param6, $tmp2);
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlanguage$frostc$IR$Value* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// unreffing REF($4:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlanguage.frostc.Compiler.TypeContext)
// line 19
org$frostlanguage$frostc$IR$Value* $tmp6 = *(&local0);
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 == NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 20
org$frostlanguage$frostc$IR$Value* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing methodRef
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return;
block2:;
// line 22
org$frostlanguage$frostc$ASTNode* $tmp10 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp11 = (frost$core$Int64) {14};
org$frostlanguage$frostc$ASTNode* $tmp12 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp13 = (frost$core$Int64) {22};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp12, $tmp13, param1, param3);
org$frostlanguage$frostc$ASTNode* $tmp14 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp16 = *(&local0);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp14, $tmp15, param1, $tmp16);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$Q($tmp10, $tmp11, param1, $tmp12, $tmp14);
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlanguage$frostc$ASTNode* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local1) = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($37:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($34:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing REF($32:org.frostlanguage.frostc.ASTNode)
// line 24
org$frostlanguage$frostc$ASTNode* $tmp18 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp19 = (frost$core$Int64) {50};
frost$core$Int64 $tmp20 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Variable$Kind $tmp21 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp20);
frost$collections$Array* $tmp22 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp23 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp22, $tmp23);
org$frostlanguage$frostc$ASTNode* $tmp24 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp22, ((frost$core$Object*) $tmp24));
org$frostlanguage$frostc$FixedArray* $tmp25 = org$frostlanguage$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlanguage$frostc$FixedArray$T$GT$R$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp22);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp18, $tmp19, param1, $tmp21, $tmp25);
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, $tmp18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($74:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($65:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($61:org.frostlanguage.frostc.ASTNode)
org$frostlanguage$frostc$ASTNode* $tmp26 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing decl
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing methodRef
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return;

}
void org$frostlanguage$frostc$statement$InnerMethod$init(org$frostlanguage$frostc$statement$InnerMethod* param0) {

return;

}
void org$frostlanguage$frostc$statement$InnerMethod$cleanup(org$frostlanguage$frostc$statement$InnerMethod* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






