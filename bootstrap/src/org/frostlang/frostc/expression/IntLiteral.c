#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn19)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn31)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn48)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 3365467049159589290, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
// line 14
frost$core$Int64* $tmp2 = &param3->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {3};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp7 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp8 = *$tmp7;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$Type* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
// line 16
org$frostlang$frostc$Type* $tmp10 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp11 = &$tmp10->typeKind;
org$frostlang$frostc$Type$Kind $tmp12 = *$tmp11;
org$frostlang$frostc$Type$Kind$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp13->value = $tmp12;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp15 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp16;
$tmp16 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp16->value = $tmp15;
ITable* $tmp17 = ((frost$core$Equatable*) $tmp13)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Bit $tmp20 = $tmp18(((frost$core$Equatable*) $tmp13), ((frost$core$Equatable*) $tmp16));
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block5:;
*(&local1) = $tmp20;
goto block7;
block6:;
org$frostlang$frostc$Type* $tmp22 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp23 = &$tmp22->typeKind;
org$frostlang$frostc$Type$Kind $tmp24 = *$tmp23;
org$frostlang$frostc$Type$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp25->value = $tmp24;
frost$core$Int64 $tmp26 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp27 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp28->value = $tmp27;
ITable* $tmp29 = ((frost$core$Equatable*) $tmp25)->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[0];
frost$core$Bit $tmp32 = $tmp30(((frost$core$Equatable*) $tmp25), ((frost$core$Equatable*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp28)));
// unreffing REF($38:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp25)));
// unreffing REF($34:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp32;
goto block7;
block7:;
frost$core$Bit $tmp33 = *(&local1);
bool $tmp34 = $tmp33.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp16)));
// unreffing REF($24:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp13)));
// unreffing REF($20:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp34) goto block3; else goto block4;
block3:;
// line 17
org$frostlang$frostc$IR$Value* $tmp35 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp36 = (frost$core$Int64) {1};
org$frostlang$frostc$Type* $tmp37 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp35, $tmp36, param2, $tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($59:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp35;
block4:;
// line 19
org$frostlang$frostc$Type* $tmp39 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp40 = &$tmp39->typeKind;
org$frostlang$frostc$Type$Kind $tmp41 = *$tmp40;
org$frostlang$frostc$Type$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp42->value = $tmp41;
frost$core$Int64 $tmp43 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp44 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp43);
org$frostlang$frostc$Type$Kind$wrapper* $tmp45;
$tmp45 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp45->value = $tmp44;
ITable* $tmp46 = ((frost$core$Equatable*) $tmp42)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Bit $tmp49 = $tmp47(((frost$core$Equatable*) $tmp42), ((frost$core$Equatable*) $tmp45));
bool $tmp50 = $tmp49.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp45)));
// unreffing REF($83:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp42)));
// unreffing REF($79:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp50) goto block8; else goto block9;
block8:;
// line 20
org$frostlang$frostc$IR$Value* $tmp51 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp52 = (frost$core$Int64) {6};
frost$core$Real64 $tmp53 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp54 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp51, $tmp52, $tmp53, $tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($95:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp55 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp51;
block9:;
// line 22
org$frostlang$frostc$Type* $tmp56 = *(&local0);
frost$core$Bit $tmp57 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp56);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block10; else goto block11;
block10:;
// line 23
org$frostlang$frostc$IR$Value* $tmp59 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp60 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp61 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp59, $tmp60, $tmp61);
frost$collections$Array* $tmp62 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp63 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp62, $tmp63);
org$frostlang$frostc$ASTNode* $tmp64 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp64, $tmp65, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp62, ((frost$core$Object*) $tmp64));
org$frostlang$frostc$IR$Value* $tmp66 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp59, ((frost$collections$ListView*) $tmp62), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($133:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($127:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($122:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($118:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp66;
block11:;
org$frostlang$frostc$Type* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing t
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 28
org$frostlang$frostc$Compiler$TypeContext* $tmp69 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp71 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp69, $tmp70, $tmp71);
org$frostlang$frostc$IR$Value* $tmp72 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp69);
org$frostlang$frostc$IR$Value* $tmp73 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp72, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($166:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($165:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($163:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($161:org.frostlang.frostc.Compiler.TypeContext)
return $tmp73;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






