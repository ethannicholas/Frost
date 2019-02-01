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
org$frostlang$frostc$expression$AtReturn$class_type org$frostlang$frostc$expression$AtReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtReturn$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn40)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 3106184065904966883, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, -680571356522878436, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 1873157491258318016, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -1772045534974692195, NULL };

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
org$frostlang$frostc$Variable$Storage** $tmp18 = &$tmp17->storage;
org$frostlang$frostc$Variable$Storage* $tmp19 = *$tmp18;
frost$core$Int64* $tmp20 = &$tmp19->$rawValue;
frost$core$Int64 $tmp21 = *$tmp20;
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
frost$core$Bit $tmp23 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp21, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block8; else goto block7;
block8:;
frost$core$Int64* $tmp25 = (frost$core$Int64*) ($tmp19->$data + 0);
frost$core$Int64 $tmp26 = *$tmp25;
*(&local1) = $tmp26;
// line 30
frost$core$Int64 $tmp27 = *(&local1);
*(&local0) = $tmp27;
goto block7;
block7:;
// line 33
org$frostlang$frostc$IR** $tmp28 = &param0->ir;
org$frostlang$frostc$IR* $tmp29 = *$tmp28;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp30 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp31 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp32 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp33 = (frost$core$Int64) {2};
frost$core$Int64 $tmp34 = *(&local0);
org$frostlang$frostc$Variable** $tmp35 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp36 = *$tmp35;
org$frostlang$frostc$Type** $tmp37 = &$tmp36->type;
org$frostlang$frostc$Type* $tmp38 = *$tmp37;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp32, $tmp33, $tmp34, $tmp38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp30, $tmp31, param1, $tmp32);
$fn40 $tmp39 = ($fn40) $tmp29->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp41 = $tmp39($tmp29, $tmp30);
*(&local2) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 35
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp42 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp43 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp44 = *(&local2);
org$frostlang$frostc$Variable** $tmp45 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp46 = *$tmp45;
org$frostlang$frostc$Type** $tmp47 = &$tmp46->type;
org$frostlang$frostc$Type* $tmp48 = *$tmp47;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp42, $tmp43, $tmp44, $tmp48);
org$frostlang$frostc$IR$Value* $tmp49 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp42, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
return $tmp49;

}
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






