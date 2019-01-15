#include "org/frostlanguage/frostc/FieldDecl.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "org/frostlanguage/frostc/FieldDecl/Kind.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Compiler/Resolution.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "frost/core/MutableString.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlanguage$frostc$FieldDecl$class_type org$frostlanguage$frostc$FieldDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlanguage$frostc$Symbol$class, NULL, { org$frostlanguage$frostc$FieldDecl$convert$R$frost$core$String, org$frostlanguage$frostc$FieldDecl$cleanup, org$frostlanguage$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 34, -7415627069350543606, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$frostlanguage$frostc$FieldDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$FieldDecl$Kind$frost$core$String$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$FieldDecl* param0, org$frostlanguage$frostc$ClassDecl* param1, org$frostlanguage$frostc$Position param2, frost$core$String* param3, org$frostlanguage$frostc$Annotations* param4, org$frostlanguage$frostc$FieldDecl$Kind param5, frost$core$String* param6, org$frostlanguage$frostc$Type* param7, org$frostlanguage$frostc$ASTNode* param8) {

// line 25
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$Resolution $tmp3 = org$frostlanguage$frostc$Compiler$Resolution$init$frost$core$Int64($tmp2);
org$frostlanguage$frostc$Compiler$Resolution* $tmp4 = &param0->resolved;
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
// unreffing REF($6:frost.core.Weak<org.frostlanguage.frostc.ClassDecl>)
// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp9 = &param0->doccomment;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$String** $tmp11 = &param0->doccomment;
*$tmp11 = param3;
// line 31
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlanguage$frostc$Annotations** $tmp12 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlanguage$frostc$Annotations** $tmp14 = &param0->annotations;
*$tmp14 = param4;
// line 32
org$frostlanguage$frostc$FieldDecl$Kind* $tmp15 = &param0->fieldKind;
*$tmp15 = param5;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlanguage$frostc$Type** $tmp16 = &param0->type;
org$frostlanguage$frostc$Type* $tmp17 = *$tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
org$frostlanguage$frostc$Type** $tmp18 = &param0->type;
*$tmp18 = param7;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlanguage$frostc$ASTNode** $tmp19 = &param0->rawValue;
org$frostlanguage$frostc$ASTNode* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlanguage$frostc$ASTNode** $tmp21 = &param0->rawValue;
*$tmp21 = param8;
// line 35
frost$core$Int64 $tmp22 = (frost$core$Int64) {2};
org$frostlanguage$frostc$Symbol$Kind $tmp23 = org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64($tmp22);
org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Symbol*) param0), $tmp23, param2, param6);
return;

}
frost$core$String* org$frostlanguage$frostc$FieldDecl$convert$R$frost$core$String(org$frostlanguage$frostc$FieldDecl* param0) {

frost$core$MutableString* local0 = NULL;
// line 40
frost$core$MutableString* $tmp24 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlanguage$frostc$Annotations** $tmp25 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp26 = *$tmp25;
frost$core$String* $tmp27 = org$frostlanguage$frostc$Annotations$convert$R$frost$core$String($tmp26);
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
org$frostlanguage$frostc$FieldDecl$Kind* $tmp29 = &param0->fieldKind;
org$frostlanguage$frostc$FieldDecl$Kind $tmp30 = *$tmp29;
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
frost$core$String** $tmp53 = &((org$frostlanguage$frostc$Symbol*) param0)->name;
frost$core$String* $tmp54 = *$tmp53;
frost$core$MutableString$append$frost$core$String($tmp52, $tmp54);
// line 48
frost$core$MutableString* $tmp55 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp55, &$s56);
// line 49
frost$core$MutableString* $tmp57 = *(&local0);
org$frostlanguage$frostc$Type** $tmp58 = &param0->type;
org$frostlanguage$frostc$Type* $tmp59 = *$tmp58;
frost$core$MutableString$append$frost$core$Object($tmp57, ((frost$core$Object*) $tmp59));
// line 50
org$frostlanguage$frostc$ASTNode** $tmp60 = &param0->rawValue;
org$frostlanguage$frostc$ASTNode* $tmp61 = *$tmp60;
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit($tmp61 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block9; else goto block10;
block9:;
// line 51
frost$core$MutableString* $tmp64 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp64, &$s65);
// line 52
frost$core$MutableString* $tmp66 = *(&local0);
org$frostlanguage$frostc$ASTNode** $tmp67 = &param0->rawValue;
org$frostlanguage$frostc$ASTNode* $tmp68 = *$tmp67;
frost$core$MutableString$append$frost$core$Object($tmp66, ((frost$core$Object*) $tmp68));
goto block10;
block10:;
// line 54
frost$core$MutableString* $tmp69 = *(&local0);
frost$core$String* $tmp70 = frost$core$MutableString$finish$R$frost$core$String($tmp69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($89:frost.core.String)
frost$core$MutableString* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp70;

}
void org$frostlanguage$frostc$FieldDecl$cleanup(org$frostlanguage$frostc$FieldDecl* param0) {

// line 4
org$frostlanguage$frostc$Symbol$cleanup(((org$frostlanguage$frostc$Symbol*) param0));
frost$core$Weak** $tmp72 = &param0->owner;
frost$core$Weak* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$String** $tmp74 = &param0->doccomment;
frost$core$String* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
org$frostlanguage$frostc$Annotations** $tmp76 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlanguage$frostc$Type** $tmp78 = &param0->type;
org$frostlanguage$frostc$Type* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlanguage$frostc$ASTNode** $tmp80 = &param0->rawValue;
org$frostlanguage$frostc$ASTNode* $tmp81 = *$tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
return;

}

