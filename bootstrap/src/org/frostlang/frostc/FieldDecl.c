#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/MutableString.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$FieldDecl$class_type org$frostlang$frostc$FieldDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$FieldDecl$convert$R$frost$core$String, org$frostlang$frostc$FieldDecl$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 30, 3348995135218609008, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -1057146787963783519, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };

void org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$FieldDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$FieldDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$Type* param7, org$frostlang$frostc$ASTNode* param8) {

// line 25
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp3 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp2);
org$frostlang$frostc$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 29
frost$core$Weak* $tmp5 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp5, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->owner;
frost$core$Weak* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->owner;
*$tmp8 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($6:frost.core.Weak<org.frostlang.frostc.ClassDecl>)
// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp9 = &param0->doccomment;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$String** $tmp11 = &param0->doccomment;
*$tmp11 = param3;
// line 31
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp12 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$Annotations** $tmp14 = &param0->annotations;
*$tmp14 = param4;
// line 32
org$frostlang$frostc$FieldDecl$Kind* $tmp15 = &param0->fieldKind;
*$tmp15 = param5;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp16 = &param0->type;
org$frostlang$frostc$Type* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlang$frostc$Type** $tmp18 = &param0->type;
*$tmp18 = param7;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$ASTNode** $tmp19 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$ASTNode** $tmp21 = &param0->rawValue;
*$tmp21 = param8;
// line 35
frost$core$Int64 $tmp22 = (frost$core$Int64) {2};
org$frostlang$frostc$Symbol$Kind $tmp23 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp22);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp23, param2, param6);
return;

}
frost$core$String* org$frostlang$frostc$FieldDecl$convert$R$frost$core$String(org$frostlang$frostc$FieldDecl* param0) {

frost$core$MutableString* local0 = NULL;
// line 40
frost$core$MutableString* $tmp24 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp25 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp26 = *$tmp25;
frost$core$String* $tmp27 = org$frostlang$frostc$Annotations$convert$R$frost$core$String($tmp26);
frost$core$MutableString$init$frost$core$String($tmp24, $tmp27);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$MutableString* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($1:frost.core.MutableString)
// line 41
org$frostlang$frostc$FieldDecl$Kind* $tmp29 = &param0->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = $tmp30.$rawValue;
frost$core$Int64 $tmp32 = (frost$core$Int64) {0};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block2; else goto block3;
block2:;
// line 42
frost$core$MutableString* $tmp35 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp35, &$s36);
goto block1;
block3:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block4; else goto block5;
block4:;
// line 43
frost$core$MutableString* $tmp40 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp40, &$s41);
goto block1;
block5:;
frost$core$Int64 $tmp42 = (frost$core$Int64) {2};
frost$core$Bit $tmp43 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block6; else goto block7;
block6:;
// line 44
frost$core$MutableString* $tmp45 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp45, &$s46);
goto block1;
block7:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {3};
frost$core$Bit $tmp48 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp31, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block8; else goto block1;
block8:;
// line 45
frost$core$MutableString* $tmp50 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp50, &$s51);
goto block1;
block1:;
// line 47
frost$core$MutableString* $tmp52 = *(&local0);
frost$core$String** $tmp53 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp54 = *$tmp53;
frost$core$MutableString$append$frost$core$String($tmp52, $tmp54);
// line 48
frost$core$MutableString* $tmp55 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp55, &$s56);
// line 49
frost$core$MutableString* $tmp57 = *(&local0);
org$frostlang$frostc$Type** $tmp58 = &param0->type;
org$frostlang$frostc$Type* $tmp59 = *$tmp58;
frost$core$MutableString$append$frost$core$Object($tmp57, ((frost$core$Object*) $tmp59));
// line 50
org$frostlang$frostc$ASTNode** $tmp60 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp61 = *$tmp60;
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block9; else goto block10;
block9:;
// line 51
frost$core$MutableString* $tmp64 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp64, &$s65);
// line 52
frost$core$MutableString* $tmp66 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp67 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp68 = *$tmp67;
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit($tmp68 != NULL);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {52};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block11:;
frost$core$MutableString$append$frost$core$Object($tmp66, ((frost$core$Object*) $tmp68));
goto block10;
block10:;
// line 54
frost$core$MutableString* $tmp74 = *(&local0);
frost$core$String* $tmp75 = frost$core$MutableString$finish$R$frost$core$String($tmp74);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($96:frost.core.String)
frost$core$MutableString* $tmp76 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp75;

}
void org$frostlang$frostc$FieldDecl$cleanup(org$frostlang$frostc$FieldDecl* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp77 = &param0->owner;
frost$core$Weak* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$String** $tmp79 = &param0->doccomment;
frost$core$String* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$Annotations** $tmp81 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$Type** $tmp83 = &param0->type;
org$frostlang$frostc$Type* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$ASTNode** $tmp85 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp86 = *$tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
return;

}

