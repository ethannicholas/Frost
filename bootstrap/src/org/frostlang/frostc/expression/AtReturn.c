#include "org/frostlang/frostc/expression/AtReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int.h"
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

typedef org$frostlang$frostc$IR$Statement$ID (*$fn43)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 7066167264907395571, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, 1553288918222246752, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 8171654486767653242, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -6910059158768412799, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Compiler$TypeContext* param2) {

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Statement$ID local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:14
org$frostlang$frostc$Variable** $tmp2 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp3 = *$tmp2;
frost$core$Bit $tmp4 = (frost$core$Bit) {$tmp3 == NULL};
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:15
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s6);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:19
frost$core$Bit* $tmp7 = &param0->inAtPre;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:20
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:23
org$frostlang$frostc$IR$Block$ID$nullable* $tmp11 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp12 = *$tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {!$tmp12.nonnull};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:24
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s15);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:28
org$frostlang$frostc$Variable** $tmp16 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp17 = *$tmp16;
org$frostlang$frostc$Variable$Storage** $tmp18 = &$tmp17->storage;
org$frostlang$frostc$Variable$Storage* $tmp19 = *$tmp18;
frost$core$Int* $tmp20 = &$tmp19->$rawValue;
frost$core$Int $tmp21 = *$tmp20;
frost$core$Int $tmp22 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from AtReturn.frost:29:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block8; else goto block7;
block8:;
frost$core$Int* $tmp28 = (frost$core$Int*) ($tmp19->$data + 0);
frost$core$Int $tmp29 = *$tmp28;
*(&local1) = $tmp29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:30
frost$core$Int $tmp30 = *(&local1);
*(&local0) = $tmp30;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:33
org$frostlang$frostc$IR** $tmp31 = &param0->ir;
org$frostlang$frostc$IR* $tmp32 = *$tmp31;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp33 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp34 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp35 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp36 = (frost$core$Int) {2u};
frost$core$Int $tmp37 = *(&local0);
org$frostlang$frostc$Variable** $tmp38 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp39 = *$tmp38;
org$frostlang$frostc$Type** $tmp40 = &$tmp39->type;
org$frostlang$frostc$Type* $tmp41 = *$tmp40;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp35, $tmp36, $tmp37, $tmp41);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp33, $tmp34, param1, $tmp35);
$fn43 $tmp42 = ($fn43) $tmp32->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp44 = $tmp42($tmp32, $tmp33);
*(&local2) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:35
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp45 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp46 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp47 = *(&local2);
org$frostlang$frostc$Variable** $tmp48 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp49 = *$tmp48;
org$frostlang$frostc$Type** $tmp50 = &$tmp49->type;
org$frostlang$frostc$Type* $tmp51 = *$tmp50;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp45, $tmp46, $tmp47, $tmp51);
org$frostlang$frostc$IR$Value* $tmp52 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp45, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
return $tmp52;

}
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






