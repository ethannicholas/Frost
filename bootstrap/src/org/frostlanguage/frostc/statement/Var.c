#include "org/frostlanguage/frostc/statement/Var.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$Var$class_type org$frostlanguage$frostc$statement$Var$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$Var$cleanup} };

typedef frost$collections$Iterator* (*$fn4)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn13)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x56\x61\x72", 38, 3603109228378600514, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x61\x72\x2e\x66\x72\x6f\x73\x74", 9, 2035463259934498602, NULL };

void org$frostlanguage$frostc$statement$Var$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable$Kind$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$Variable$Kind param2, org$frostlanguage$frostc$FixedArray* param3) {

org$frostlanguage$frostc$ASTNode* local0 = NULL;
org$frostlanguage$frostc$Position local1;
org$frostlanguage$frostc$ASTNode* local2 = NULL;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
// line 13
ITable* $tmp2 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$collections$Iterator* $tmp5 = $tmp3(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp6 = $tmp5->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Bit $tmp9 = $tmp7($tmp5);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp11 = $tmp5->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
frost$core$Object* $tmp14 = $tmp12($tmp5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp14)));
org$frostlanguage$frostc$ASTNode* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) $tmp14);
// line 14
org$frostlanguage$frostc$ASTNode* $tmp16 = *(&local0);
frost$core$Int64* $tmp17 = &$tmp16->$rawValue;
frost$core$Int64 $tmp18 = *$tmp17;
frost$core$Int64 $tmp19 = (frost$core$Int64) {14};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp18, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block5:;
org$frostlanguage$frostc$Position* $tmp22 = (org$frostlanguage$frostc$Position*) ($tmp16->$data + 0);
org$frostlanguage$frostc$Position $tmp23 = *$tmp22;
*(&local1) = $tmp23;
org$frostlanguage$frostc$ASTNode** $tmp24 = (org$frostlanguage$frostc$ASTNode**) ($tmp16->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp25 = *$tmp24;
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlanguage$frostc$ASTNode* $tmp26 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local2) = $tmp25;
org$frostlanguage$frostc$ASTNode** $tmp27 = (org$frostlanguage$frostc$ASTNode**) ($tmp16->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlanguage$frostc$ASTNode* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 16
org$frostlanguage$frostc$Position $tmp30 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp31 = *(&local2);
org$frostlanguage$frostc$ASTNode* $tmp32 = *(&local3);
org$frostlanguage$frostc$Compiler$compileDeclaration$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$Variable$Kind(param0, $tmp30, $tmp31, $tmp32, param2);
org$frostlanguage$frostc$ASTNode* $tmp33 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing rawValue
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp34 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing target
*(&local2) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block4;
block6:;
// line 19
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(false);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {19};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block7:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
// unreffing REF($15:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp39 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing decl
*(&local0) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void org$frostlanguage$frostc$statement$Var$init(org$frostlanguage$frostc$statement$Var* param0) {

return;

}
void org$frostlanguage$frostc$statement$Var$cleanup(org$frostlanguage$frostc$statement$Var* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






