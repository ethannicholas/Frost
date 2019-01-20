#include "org/frostlang/frostc/expression/AtReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$AtReturn$class_type org$frostlang$frostc$expression$AtReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtReturn$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn50)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 3106184065904966883, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, -680571356522878436, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 1873157491258318016, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -1772045534974692195, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 6130248956606714618, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 6130248956606714618, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 6130248956606714618, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Compiler$TypeContext* param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
org$frostlang$frostc$IR$Statement$ID local2;
// line 14
org$frostlang$frostc$Variable** $tmp2 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit($tmp3 == NULL);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block1:;
// line 15
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s6);
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 19
frost$core$Bit* $tmp7 = &param0->inAtPre;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block3:;
// line 20
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s10);
// line 21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 23
org$frostlang$frostc$IR$Block$ID$nullable* $tmp11 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp12 = *$tmp11;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit(!$tmp12.nonnull);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block5; else goto block6;
block5:;
// line 24
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s15);
// line 25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 27
// line 28
org$frostlang$frostc$Variable** $tmp16 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block7:;
org$frostlang$frostc$Variable$Storage** $tmp23 = &$tmp17->storage;
org$frostlang$frostc$Variable$Storage* $tmp24 = *$tmp23;
frost$core$Int64* $tmp25 = &$tmp24->$rawValue;
frost$core$Int64 $tmp26 = *$tmp25;
frost$core$Int64 $tmp27 = (frost$core$Int64) {0};
frost$core$Bit $tmp28 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp26, $tmp27);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block10; else goto block9;
block10:;
frost$core$Int64* $tmp30 = (frost$core$Int64*) ($tmp24->$data + 0);
frost$core$Int64 $tmp31 = *$tmp30;
*(&local1) = $tmp31;
// line 30
frost$core$Int64 $tmp32 = *(&local1);
*(&local0) = $tmp32;
goto block9;
block9:;
// line 33
org$frostlang$frostc$IR** $tmp33 = &param0->ir;
org$frostlang$frostc$IR* $tmp34 = *$tmp33;
org$frostlang$frostc$IR$Statement* $tmp35 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp36 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp37 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp38 = (frost$core$Int64) {2};
frost$core$Int64 $tmp39 = *(&local0);
org$frostlang$frostc$Variable** $tmp40 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp41 = *$tmp40;
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit($tmp41 != NULL);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {34};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block11:;
org$frostlang$frostc$Type** $tmp47 = &$tmp41->type;
org$frostlang$frostc$Type* $tmp48 = *$tmp47;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp37, $tmp38, $tmp39, $tmp48);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp35, $tmp36, param1, $tmp37);
$fn50 $tmp49 = ($fn50) $tmp34->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp51 = $tmp49($tmp34, $tmp35);
*(&local2) = $tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($69:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($67:org.frostlang.frostc.IR.Statement)
// line 35
org$frostlang$frostc$IR$Value* $tmp52 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp53 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp54 = *(&local2);
org$frostlang$frostc$Variable** $tmp55 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp56 = *$tmp55;
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit($tmp56 != NULL);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block13:;
org$frostlang$frostc$Type** $tmp62 = &$tmp56->type;
org$frostlang$frostc$Type* $tmp63 = *$tmp62;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp52, $tmp53, $tmp54, $tmp63);
org$frostlang$frostc$IR$Value* $tmp64 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp52, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($113:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($96:org.frostlang.frostc.IR.Value)
return $tmp64;

}
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






