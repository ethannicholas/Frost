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
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn21)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 3365467049159589290, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
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
frost$core$Bit* $tmp10 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp11 = *$tmp10;
// line 16
org$frostlang$frostc$Type* $tmp12 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp13 = &$tmp12->typeKind;
org$frostlang$frostc$Type$Kind $tmp14 = *$tmp13;
org$frostlang$frostc$Type$Kind$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp15->value = $tmp14;
frost$core$Int64 $tmp16 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp17 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp18->value = $tmp17;
ITable* $tmp19 = ((frost$core$Equatable*) $tmp15)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Bit $tmp22 = $tmp20(((frost$core$Equatable*) $tmp15), ((frost$core$Equatable*) $tmp18));
bool $tmp23 = $tmp22.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp18)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp15)));
if ($tmp23) goto block3; else goto block5;
block5:;
org$frostlang$frostc$Type* $tmp24 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp25 = &$tmp24->typeKind;
org$frostlang$frostc$Type$Kind $tmp26 = *$tmp25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp27;
$tmp27 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp27->value = $tmp26;
frost$core$Int64 $tmp28 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp29 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp30->value = $tmp29;
ITable* $tmp31 = ((frost$core$Equatable*) $tmp27)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$core$Bit $tmp34 = $tmp32(((frost$core$Equatable*) $tmp27), ((frost$core$Equatable*) $tmp30));
bool $tmp35 = $tmp34.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp27)));
if ($tmp35) goto block3; else goto block4;
block3:;
// line 17
org$frostlang$frostc$IR$Value* $tmp36 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
org$frostlang$frostc$Type* $tmp38 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp36, $tmp37, param2, $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Type* $tmp39 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp36;
block4:;
// line 19
org$frostlang$frostc$Type* $tmp40 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp41 = &$tmp40->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp45 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp46;
$tmp46 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp46->value = $tmp45;
ITable* $tmp47 = ((frost$core$Equatable*) $tmp43)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$core$Bit $tmp50 = $tmp48(((frost$core$Equatable*) $tmp43), ((frost$core$Equatable*) $tmp46));
bool $tmp51 = $tmp50.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp46)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
if ($tmp51) goto block6; else goto block7;
block6:;
// line 20
org$frostlang$frostc$IR$Value* $tmp52 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp53 = (frost$core$Int64) {6};
frost$core$Real64 $tmp54 = frost$core$Real64$init$frost$core$UInt64(param2);
org$frostlang$frostc$Type* $tmp55 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Real64$org$frostlang$frostc$Type($tmp52, $tmp53, $tmp54, $tmp55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Type* $tmp56 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp52;
block7:;
// line 22
org$frostlang$frostc$Type* $tmp57 = *(&local0);
frost$core$Bit $tmp58 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp57);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block8; else goto block9;
block8:;
// line 23
org$frostlang$frostc$IR$Value* $tmp60 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp61 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp62 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp60, $tmp61, $tmp62);
frost$collections$Array* $tmp63 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp64 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp63, $tmp64);
org$frostlang$frostc$ASTNode* $tmp65 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp66 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp65, $tmp66, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp63, ((frost$core$Object*) $tmp65));
org$frostlang$frostc$IR$Value* $tmp67 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp60, ((frost$collections$ListView*) $tmp63), param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$Type* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp67;
block9:;
org$frostlang$frostc$Type* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 28
org$frostlang$frostc$Compiler$TypeContext* $tmp70 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp72 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp70, $tmp71, $tmp72, $tmp73);
org$frostlang$frostc$IR$Value* $tmp74 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp70);
org$frostlang$frostc$IR$Value* $tmp75 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp74, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
return $tmp75;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






