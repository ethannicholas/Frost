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
org$frostlang$frostc$FieldDecl$class_type org$frostlang$frostc$FieldDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String, org$frostlang$frostc$FieldDecl$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn28)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 30, 3348995135218609008, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$FieldDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$FieldDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$Type* param7, org$frostlang$frostc$ASTNode* param8) {

// line 25
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp3 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp2);
org$frostlang$frostc$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 29
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp5 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp5, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->owner;
frost$core$Weak* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->owner;
*$tmp8 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
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
frost$core$String* org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String(org$frostlang$frostc$FieldDecl* param0) {

frost$core$MutableString* local0 = NULL;
// line 40
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp24 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp25 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp26 = *$tmp25;
$fn28 $tmp27 = ($fn28) ((frost$core$Object*) $tmp26)->$class->vtable[0];
frost$core$String* $tmp29 = $tmp27(((frost$core$Object*) $tmp26));
frost$core$MutableString$init$frost$core$String($tmp24, $tmp29);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$MutableString* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// line 41
org$frostlang$frostc$FieldDecl$Kind* $tmp31 = &param0->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp32 = *$tmp31;
frost$core$Int64 $tmp33 = $tmp32.$rawValue;
frost$core$Int64 $tmp34 = (frost$core$Int64) {0};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp33, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block2; else goto block3;
block2:;
// line 42
frost$core$MutableString* $tmp37 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp37, &$s38);
goto block1;
block3:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {1};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp33, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block4; else goto block5;
block4:;
// line 43
frost$core$MutableString* $tmp42 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp42, &$s43);
goto block1;
block5:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {2};
frost$core$Bit $tmp45 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp33, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block6; else goto block7;
block6:;
// line 44
frost$core$MutableString* $tmp47 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp47, &$s48);
goto block1;
block7:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {3};
frost$core$Bit $tmp50 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp33, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block1;
block8:;
// line 45
frost$core$MutableString* $tmp52 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp52, &$s53);
goto block1;
block1:;
// line 47
frost$core$MutableString* $tmp54 = *(&local0);
frost$core$String** $tmp55 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp56 = *$tmp55;
frost$core$MutableString$append$frost$core$String($tmp54, $tmp56);
// line 48
frost$core$MutableString* $tmp57 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp57, &$s58);
// line 49
frost$core$MutableString* $tmp59 = *(&local0);
org$frostlang$frostc$Type** $tmp60 = &param0->type;
org$frostlang$frostc$Type* $tmp61 = *$tmp60;
frost$core$MutableString$append$frost$core$Object($tmp59, ((frost$core$Object*) $tmp61));
// line 50
org$frostlang$frostc$ASTNode** $tmp62 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp63 = *$tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63 != NULL);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block9; else goto block10;
block9:;
// line 51
frost$core$MutableString* $tmp66 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp66, &$s67);
// line 52
frost$core$MutableString* $tmp68 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp69 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp70 = *$tmp69;
frost$core$MutableString$append$frost$core$Object($tmp68, ((frost$core$Object*) $tmp70));
goto block10;
block10:;
// line 54
frost$core$MutableString* $tmp71 = *(&local0);
frost$core$String* $tmp72 = frost$core$MutableString$finish$R$frost$core$String($tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$MutableString* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp72;

}
void org$frostlang$frostc$FieldDecl$cleanup(org$frostlang$frostc$FieldDecl* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp74 = &param0->owner;
frost$core$Weak* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$String** $tmp76 = &param0->doccomment;
frost$core$String* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$Annotations** $tmp78 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$Type** $tmp80 = &param0->type;
org$frostlang$frostc$Type* $tmp81 = *$tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlang$frostc$ASTNode** $tmp82 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}

