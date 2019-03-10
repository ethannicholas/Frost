#include "org/frostlang/frostc/statement/Break.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Break$class_type org$frostlang$frostc$statement$Break$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Break$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x42\x72\x65\x61\x6b", 36, -801108057295429868, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4644363108356512736, NULL };

void org$frostlang$frostc$statement$Break$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Break.frost:11
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2 = org$frostlang$frostc$Compiler$findAndLeaveToLoopScope$org$frostlang$frostc$Position$frost$core$String$Q$R$org$frostlang$frostc$Compiler$EnclosingContext$Q(param0, param1, param2);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Break.frost:12
org$frostlang$frostc$Compiler$EnclosingContext* $tmp4 = *(&local0);
frost$core$Bit $tmp5 = (frost$core$Bit) {$tmp4 != NULL};
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Break.frost:13
org$frostlang$frostc$Compiler$EnclosingContext* $tmp7 = *(&local0);
frost$core$Int64* $tmp8 = &$tmp7->$rawValue;
frost$core$Int64 $tmp9 = *$tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Break.frost:14:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10.value;
bool $tmp13 = $tmp11 == $tmp12;
frost$core$Bit $tmp14 = (frost$core$Bit) {$tmp13};
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block4; else goto block5;
block4:;
frost$core$String** $tmp16 = (frost$core$String**) ($tmp7->$data + 0);
frost$core$String* $tmp17 = *$tmp16;
org$frostlang$frostc$IR$Block$ID* $tmp18 = (org$frostlang$frostc$IR$Block$ID*) ($tmp7->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp19 = *$tmp18;
*(&local1) = $tmp19;
org$frostlang$frostc$IR$Block$ID* $tmp20 = (org$frostlang$frostc$IR$Block$ID*) ($tmp7->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp21 = *$tmp20;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Break.frost:15
org$frostlang$frostc$IR** $tmp22 = &param0->ir;
org$frostlang$frostc$IR* $tmp23 = *$tmp22;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp24 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp25 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp26 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp24, $tmp25, param1, $tmp26);
$fn28 $tmp27 = ($fn28) $tmp23->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp29 = $tmp27($tmp23, $tmp24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
goto block2;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Break.frost:18
frost$core$Int $tmp30 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s31, $tmp30);
abort(); // unreachable
block2:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
return;

}
void org$frostlang$frostc$statement$Break$init(org$frostlang$frostc$statement$Break* param0) {

return;

}
void org$frostlang$frostc$statement$Break$cleanup(org$frostlang$frostc$statement$Break* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Break.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






