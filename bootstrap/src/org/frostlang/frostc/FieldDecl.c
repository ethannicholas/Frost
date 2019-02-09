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
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$FieldDecl$class_type org$frostlang$frostc$FieldDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String, org$frostlang$frostc$FieldDecl$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn79)(frost$core$Object*);
typedef frost$core$String* (*$fn91)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 30, 3348995135218609008, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$FieldDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$FieldDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$Type* param7, org$frostlang$frostc$ASTNode* param8) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:25
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from FieldDecl.frost:25:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64* $tmp3 = &(&local1)->$rawValue;
*$tmp3 = $tmp2;
org$frostlang$frostc$Compiler$Resolution $tmp4 = *(&local1);
*(&local0) = $tmp4;
org$frostlang$frostc$Compiler$Resolution $tmp5 = *(&local0);
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param0->resolved;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:29
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp7, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->owner;
frost$core$Weak* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->owner;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp11 = &param0->doccomment;
frost$core$String* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$String** $tmp13 = &param0->doccomment;
*$tmp13 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:31
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp14 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Annotations** $tmp16 = &param0->annotations;
*$tmp16 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:32
org$frostlang$frostc$FieldDecl$Kind* $tmp17 = &param0->fieldKind;
*$tmp17 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp18 = &param0->type;
org$frostlang$frostc$Type* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
org$frostlang$frostc$Type** $tmp20 = &param0->type;
*$tmp20 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$ASTNode** $tmp21 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp22 = *$tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$ASTNode** $tmp23 = &param0->rawValue;
*$tmp23 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:35
frost$core$Int64 $tmp24 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from FieldDecl.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp25 = &(&local3)->$rawValue;
*$tmp25 = $tmp24;
org$frostlang$frostc$Symbol$Kind $tmp26 = *(&local3);
*(&local2) = $tmp26;
org$frostlang$frostc$Symbol$Kind $tmp27 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp27, param2, param6);
return;

}
frost$core$String* org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String(org$frostlang$frostc$FieldDecl* param0) {

frost$core$MutableString* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:40
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp28 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp29 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp30 = *$tmp29;
$fn32 $tmp31 = ($fn32) ((frost$core$Object*) $tmp30)->$class->vtable[0];
frost$core$String* $tmp33 = $tmp31(((frost$core$Object*) $tmp30));
frost$core$MutableString$init$frost$core$String($tmp28, $tmp33);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$MutableString* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:41
org$frostlang$frostc$FieldDecl$Kind* $tmp35 = &param0->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = $tmp36.$rawValue;
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from FieldDecl.frost:42:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 == $tmp40;
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:42
frost$core$MutableString* $tmp44 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp44, &$s45);
goto block1;
block3:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from FieldDecl.frost:43:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp47 = $tmp37.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit($tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:43
frost$core$MutableString* $tmp52 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp52, &$s53);
goto block1;
block6:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from FieldDecl.frost:44:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp55 = $tmp37.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 == $tmp56;
frost$core$Bit $tmp58 = frost$core$Bit$init$builtin_bit($tmp57);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:44
frost$core$MutableString* $tmp60 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp60, &$s61);
goto block1;
block9:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from FieldDecl.frost:45:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp63 = $tmp37.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 == $tmp64;
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit($tmp65);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block11; else goto block1;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:45
frost$core$MutableString* $tmp68 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp68, &$s69);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:47
frost$core$MutableString* $tmp70 = *(&local0);
frost$core$String** $tmp71 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp72 = *$tmp71;
frost$core$MutableString$append$frost$core$String($tmp70, $tmp72);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:48
frost$core$MutableString* $tmp73 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp73, &$s74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:49
frost$core$MutableString* $tmp75 = *(&local0);
org$frostlang$frostc$Type** $tmp76 = &param0->type;
org$frostlang$frostc$Type* $tmp77 = *$tmp76;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FieldDecl.frost:49:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn79 $tmp78 = ($fn79) ((frost$core$Object*) $tmp77)->$class->vtable[0];
frost$core$String* $tmp80 = $tmp78(((frost$core$Object*) $tmp77));
frost$core$MutableString$append$frost$core$String($tmp75, $tmp80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:50
org$frostlang$frostc$ASTNode** $tmp81 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit($tmp82 != NULL);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:51
frost$core$MutableString* $tmp85 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp85, &$s86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:52
frost$core$MutableString* $tmp87 = *(&local0);
org$frostlang$frostc$ASTNode** $tmp88 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp89 = *$tmp88;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FieldDecl.frost:52:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn91 $tmp90 = ($fn91) ((frost$core$Object*) $tmp89)->$class->vtable[0];
frost$core$String* $tmp92 = $tmp90(((frost$core$Object*) $tmp89));
frost$core$MutableString$append$frost$core$String($tmp87, $tmp92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:54
frost$core$MutableString* $tmp93 = *(&local0);
frost$core$String* $tmp94 = frost$core$MutableString$finish$R$frost$core$String($tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$MutableString* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp94;

}
void org$frostlang$frostc$FieldDecl$cleanup(org$frostlang$frostc$FieldDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp96 = &param0->owner;
frost$core$Weak* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$String** $tmp98 = &param0->doccomment;
frost$core$String* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$Annotations** $tmp100 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$Type** $tmp102 = &param0->type;
org$frostlang$frostc$Type* $tmp103 = *$tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$ASTNode** $tmp104 = &param0->rawValue;
org$frostlang$frostc$ASTNode* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
return;

}

