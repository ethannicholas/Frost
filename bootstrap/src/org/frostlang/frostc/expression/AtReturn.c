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

typedef org$frostlang$frostc$IR$Statement$ID (*$fn53)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 7066167264907395571, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, 1553288918222246752, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 8171654486767653242, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -6910059158768412799, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };

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
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17 != NULL};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block7; else goto block8;
block8:;
frost$core$Int $tmp20 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block7:;
org$frostlang$frostc$Variable$Storage** $tmp23 = &$tmp17->storage;
org$frostlang$frostc$Variable$Storage* $tmp24 = *$tmp23;
frost$core$Int* $tmp25 = &$tmp24->$rawValue;
frost$core$Int $tmp26 = *$tmp25;
frost$core$Int $tmp27 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from AtReturn.frost:29:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp28 = $tmp26.value;
int64_t $tmp29 = $tmp27.value;
bool $tmp30 = $tmp28 == $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block10; else goto block9;
block10:;
frost$core$Int* $tmp33 = (frost$core$Int*) ($tmp24->$data + 0);
frost$core$Int $tmp34 = *$tmp33;
*(&local1) = $tmp34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:30
frost$core$Int $tmp35 = *(&local1);
*(&local0) = $tmp35;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:33
org$frostlang$frostc$IR** $tmp36 = &param0->ir;
org$frostlang$frostc$IR* $tmp37 = *$tmp36;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp38 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp39 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp40 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp41 = (frost$core$Int) {2u};
frost$core$Int $tmp42 = *(&local0);
org$frostlang$frostc$Variable** $tmp43 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp44 = *$tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44 != NULL};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block12; else goto block13;
block13:;
frost$core$Int $tmp47 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, $tmp47, &$s49);
abort(); // unreachable
block12:;
org$frostlang$frostc$Type** $tmp50 = &$tmp44->type;
org$frostlang$frostc$Type* $tmp51 = *$tmp50;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp40, $tmp41, $tmp42, $tmp51);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp38, $tmp39, param1, $tmp40);
$fn53 $tmp52 = ($fn53) $tmp37->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp54 = $tmp52($tmp37, $tmp38);
*(&local2) = $tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:35
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp55 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp56 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp57 = *(&local2);
org$frostlang$frostc$Variable** $tmp58 = &param0->returnVar;
org$frostlang$frostc$Variable* $tmp59 = *$tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59 != NULL};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block14; else goto block15;
block15:;
frost$core$Int $tmp62 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s63, $tmp62, &$s64);
abort(); // unreachable
block14:;
org$frostlang$frostc$Type** $tmp65 = &$tmp59->type;
org$frostlang$frostc$Type* $tmp66 = *$tmp65;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp55, $tmp56, $tmp57, $tmp66);
org$frostlang$frostc$IR$Value* $tmp67 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp55, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
return $tmp67;

}
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






