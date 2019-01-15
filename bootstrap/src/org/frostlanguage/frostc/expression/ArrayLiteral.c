#include "org/frostlanguage/frostc/expression/ArrayLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/UInt64.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/expression/Call.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$ArrayLiteral$class_type org$frostlanguage$frostc$expression$ArrayLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$ArrayLiteral$cleanup} };

typedef frost$core$Int64 (*$fn62)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn77)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn81)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn86)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 48, -7212668447393036156, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, 5390391589679961556, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x6d", 4, 210325337, NULL };

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$ArrayLiteral$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$FixedArray* param2, org$frostlanguage$frostc$Compiler$TypeContext* param3) {

org$frostlanguage$frostc$Pair* local0 = NULL;
org$frostlanguage$frostc$Type* local1 = NULL;
org$frostlanguage$frostc$Type* local2 = NULL;
org$frostlanguage$frostc$Type* local3 = NULL;
org$frostlanguage$frostc$Type* local4 = NULL;
org$frostlanguage$frostc$IR$Value* local5 = NULL;
org$frostlanguage$frostc$ASTNode* local6 = NULL;
// line 16
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
// line 17
frost$core$Int64* $tmp2 = &param3->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {3};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlanguage$frostc$Type** $tmp7 = (org$frostlanguage$frostc$Type**) (param3->$data + 0);
org$frostlanguage$frostc$Type* $tmp8 = *$tmp7;
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlanguage$frostc$Type* $tmp9 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local1) = $tmp8;
// line 19
org$frostlanguage$frostc$Type* $tmp10 = *(&local1);
org$frostlanguage$frostc$Pair* $tmp11 = org$frostlanguage$frostc$Compiler$getListType$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Pair$LTfrost$core$Bit$Corg$frostlanguage$frostc$Type$GT$Q(param0, $tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlanguage$frostc$Pair* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($20:org.frostlanguage.frostc.Pair<frost.core.Bit, org.frostlanguage.frostc.Type>?)
// line 20
org$frostlanguage$frostc$Pair* $tmp13 = *(&local0);
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit($tmp13 == NULL);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block4; else goto block5;
block4:;
// line 23
org$frostlanguage$frostc$ASTNode* $tmp16 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp17 = (frost$core$Int64) {1};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp16, $tmp17, param1, param2);
org$frostlanguage$frostc$Type* $tmp18 = org$frostlanguage$frostc$Compiler$preferredType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type$Q(param0, $tmp16);
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlanguage$frostc$Type* $tmp19 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local2) = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($40:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($37:org.frostlanguage.frostc.ASTNode)
// line 24
org$frostlanguage$frostc$Type* $tmp20 = *(&local2);
frost$core$Bit $tmp21 = frost$core$Bit$init$builtin_bit($tmp20 != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block6; else goto block7;
block6:;
// line 25
org$frostlanguage$frostc$Type* $tmp23 = *(&local2);
org$frostlanguage$frostc$Pair* $tmp24 = org$frostlanguage$frostc$Compiler$getListType$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Pair$LTfrost$core$Bit$Corg$frostlanguage$frostc$Type$GT$Q(param0, $tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlanguage$frostc$Pair* $tmp25 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($63:org.frostlanguage.frostc.Pair<frost.core.Bit, org.frostlanguage.frostc.Type>?)
goto block7;
block7:;
// line 27
org$frostlanguage$frostc$Pair* $tmp26 = *(&local0);
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit($tmp26 == NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block8; else goto block9;
block8:;
// line 28
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s29);
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp30 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing preferred
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp31 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Pair* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing listType
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block9:;
org$frostlanguage$frostc$Type* $tmp33 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing preferred
*(&local2) = ((org$frostlanguage$frostc$Type*) NULL);
goto block5;
block5:;
org$frostlanguage$frostc$Type* $tmp34 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing t
*(&local1) = ((org$frostlanguage$frostc$Type*) NULL);
goto block1;
block3:;
// line 34
org$frostlanguage$frostc$ASTNode* $tmp35 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp36 = (frost$core$Int64) {1};
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT($tmp35, $tmp36, param1, param2);
org$frostlanguage$frostc$Type* $tmp37 = org$frostlanguage$frostc$Compiler$preferredType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type$Q(param0, $tmp35);
*(&local3) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlanguage$frostc$Type* $tmp38 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local3) = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($117:org.frostlanguage.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($114:org.frostlanguage.frostc.ASTNode)
// line 35
org$frostlanguage$frostc$Type* $tmp39 = *(&local3);
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit($tmp39 == NULL);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block10; else goto block11;
block10:;
// line 36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Type* $tmp42 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing t
*(&local3) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Pair* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing listType
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block11:;
// line 38
org$frostlanguage$frostc$Type* $tmp44 = *(&local3);
org$frostlanguage$frostc$Pair* $tmp45 = org$frostlanguage$frostc$Compiler$getListType$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Pair$LTfrost$core$Bit$Corg$frostlanguage$frostc$Type$GT$Q(param0, $tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlanguage$frostc$Pair* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing REF($154:org.frostlanguage.frostc.Pair<frost.core.Bit, org.frostlanguage.frostc.Type>?)
org$frostlanguage$frostc$Type* $tmp47 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing t
*(&local3) = ((org$frostlanguage$frostc$Type*) NULL);
goto block1;
block1:;
// line 41
org$frostlanguage$frostc$Pair* $tmp48 = *(&local0);
frost$core$Object** $tmp49 = &$tmp48->second;
frost$core$Object* $tmp50 = *$tmp49;
org$frostlanguage$frostc$Type* $tmp51 = org$frostlanguage$frostc$Type$ArrayOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(((org$frostlanguage$frostc$Type*) $tmp50));
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
org$frostlanguage$frostc$Type* $tmp52 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local4) = $tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($176:org.frostlanguage.frostc.Type)
// line 42
org$frostlanguage$frostc$IR$Value* $tmp53 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp54 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Type* $tmp55 = *(&local4);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp53, $tmp54, $tmp55);
frost$collections$Array* $tmp56 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp57 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp56, $tmp57);
org$frostlanguage$frostc$ASTNode* $tmp58 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp59 = (frost$core$Int64) {25};
ITable* $tmp60 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Int64 $tmp63 = $tmp61(((frost$collections$CollectionView*) param2));
frost$core$UInt64 $tmp64 = frost$core$Int64$convert$R$frost$core$UInt64($tmp63);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp58, $tmp59, param1, $tmp64);
frost$collections$Array$add$frost$collections$Array$T($tmp56, ((frost$core$Object*) $tmp58));
org$frostlanguage$frostc$Compiler$TypeContext* $tmp65 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp65, $tmp66);
org$frostlanguage$frostc$IR$Value* $tmp67 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp53, ((frost$collections$ListView*) $tmp56), $tmp65);
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlanguage$frostc$IR$Value* $tmp68 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local5) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($210:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($207:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing REF($197:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($192:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($188:org.frostlanguage.frostc.IR.Value)
// line 45
org$frostlanguage$frostc$IR$Value* $tmp69 = *(&local5);
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit($tmp69 == NULL);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block12; else goto block13;
block12:;
// line 46
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp72 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing result
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Type* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing arrayType
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Pair* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing listType
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block13:;
// line 48
ITable* $tmp75 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$collections$Iterator* $tmp78 = $tmp76(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp79 = $tmp78->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[0];
frost$core$Bit $tmp82 = $tmp80($tmp78);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp84 = $tmp78->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[1];
frost$core$Object* $tmp87 = $tmp85($tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp87)));
org$frostlanguage$frostc$ASTNode* $tmp88 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) $tmp87);
// line 49
org$frostlanguage$frostc$IR$Value* $tmp89 = *(&local5);
frost$collections$Array* $tmp90 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp91 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp90, $tmp91);
org$frostlanguage$frostc$ASTNode* $tmp92 = *(&local6);
frost$collections$Array$add$frost$collections$Array$T($tmp90, ((frost$core$Object*) $tmp92));
org$frostlanguage$frostc$Compiler$TypeContext* $tmp93 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp94 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp93, $tmp94);
org$frostlanguage$frostc$IR$Value* $tmp95 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp89, &$s96, ((frost$collections$ListView*) $tmp90), $tmp93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($296:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($293:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($284:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q($tmp87);
// unreffing REF($273:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp97 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing e
*(&local6) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($262:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 51
org$frostlanguage$frostc$Pair* $tmp98 = *(&local0);
frost$core$Object** $tmp99 = &$tmp98->first;
frost$core$Object* $tmp100 = *$tmp99;
frost$core$Bit $tmp101 = frost$core$Bit$$NOT$R$frost$core$Bit(((frost$core$Bit$wrapper*) $tmp100)->value);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block17; else goto block18;
block17:;
// line 52
org$frostlanguage$frostc$IR$Value* $tmp103 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp104 = (frost$core$Int64) {14};
org$frostlanguage$frostc$Pair* $tmp105 = *(&local0);
frost$core$Object** $tmp106 = &$tmp105->second;
frost$core$Object* $tmp107 = *$tmp106;
org$frostlanguage$frostc$Type* $tmp108 = org$frostlanguage$frostc$Type$ImmutableArrayOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(((org$frostlanguage$frostc$Type*) $tmp107));
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp103, $tmp104, $tmp108);
frost$collections$Array* $tmp109 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp109, $tmp110);
org$frostlanguage$frostc$ASTNode* $tmp111 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp112 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp113 = *(&local5);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp111, $tmp112, param1, $tmp113);
frost$collections$Array$add$frost$collections$Array$T($tmp109, ((frost$core$Object*) $tmp111));
org$frostlanguage$frostc$Compiler$TypeContext* $tmp114 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp115 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp114, $tmp115);
org$frostlanguage$frostc$IR$Value* $tmp116 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp103, &$s117, ((frost$collections$ListView*) $tmp109), $tmp114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
org$frostlanguage$frostc$IR$Value* $tmp118 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local5) = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($353:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($350:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($342:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($337:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($335:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($328:org.frostlanguage.frostc.IR.Value)
// line 55
org$frostlanguage$frostc$IR$Value* $tmp119 = *(&local5);
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119 == NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block19; else goto block20;
block19:;
// line 56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp122 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing result
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Type* $tmp123 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing arrayType
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Pair* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing listType
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block20:;
goto block18;
block18:;
// line 59
org$frostlanguage$frostc$IR$Value* $tmp125 = *(&local5);
org$frostlanguage$frostc$IR$Value* $tmp126 = org$frostlanguage$frostc$Compiler$coerce$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp125, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($406:org.frostlanguage.frostc.IR.Value?)
org$frostlanguage$frostc$IR$Value* $tmp127 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing result
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Type* $tmp128 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing arrayType
*(&local4) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Pair* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing listType
*(&local0) = ((org$frostlanguage$frostc$Pair*) NULL);
return $tmp126;

}
void org$frostlanguage$frostc$expression$ArrayLiteral$init(org$frostlanguage$frostc$expression$ArrayLiteral* param0) {

return;

}
void org$frostlanguage$frostc$expression$ArrayLiteral$cleanup(org$frostlanguage$frostc$expression$ArrayLiteral* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






