#include "org/frostlang/frostc/statement/Continue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Continue$class_type org$frostlang$frostc$statement$Continue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Continue$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn2)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn5)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x43\x6f\x6e\x74\x69\x6e\x75\x65", 39, -2515648034638414736, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x66\x72\x6f\x73\x74", 14, -6273005496577863844, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x66\x72\x6f\x73\x74", 14, -6273005496577863844, NULL };

void org$frostlang$frostc$statement$Continue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$Compiler$EnclosingContext* _1;
frost$core$Object* _3;
org$frostlang$frostc$Compiler$EnclosingContext* _5;
frost$core$Object* _6;
frost$core$Object* _9;
org$frostlang$frostc$Compiler$EnclosingContext* _12;
bool _13;
frost$core$Bit _14;
bool _15;
org$frostlang$frostc$Compiler$EnclosingContext* _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$Int _23;
org$frostlang$frostc$Compiler$EnclosingContext* _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int _29;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _37;
frost$core$String** _39;
frost$core$String* _40;
org$frostlang$frostc$IR$Block$ID* _41;
org$frostlang$frostc$IR$Block$ID _42;
org$frostlang$frostc$IR$Block$ID* _43;
org$frostlang$frostc$IR$Block$ID _44;
org$frostlang$frostc$IR** _47;
org$frostlang$frostc$IR* _48;
org$frostlang$frostc$IR$Statement* _49;
frost$core$Int _50;
org$frostlang$frostc$IR$Block$ID _51;
$fn2 _53;
org$frostlang$frostc$IR$Statement$ID _54;
frost$core$Object* _55;
frost$core$Int _59;
org$frostlang$frostc$Compiler$EnclosingContext* _63;
frost$core$Object* _64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Continue.frost:11
_1 = org$frostlang$frostc$Compiler$findAndLeaveToLoopScope$org$frostlang$frostc$Position$frost$core$String$Q$R$org$frostlang$frostc$Compiler$EnclosingContext$Q(param0, param1, param2);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = *(&local0);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
*(&local0) = _1;
_9 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Continue.frost:12
_12 = *(&local0);
_13 = _12 != NULL;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Continue.frost:13
_18 = *(&local0);
_19 = _18 != NULL;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block4;
block4:;
_23 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _23, &$s4);
abort(); // unreachable
block3:;
_26 = _18;
_27 = &_26->$rawValue;
_28 = *_27;
_29 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Continue.frost:14:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_32 = _28.value;
_33 = _29.value;
_34 = _32 == _33;
_35 = (frost$core$Bit) {_34};
_37 = _35.value;
if (_37) goto block6; else goto block7;
block6:;
_39 = &_18->$data.$LOOP.field0;
_40 = *_39;
_41 = &_18->$data.$LOOP.field1;
_42 = *_41;
_43 = &_18->$data.$LOOP.field2;
_44 = *_43;
*(&local1) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Continue.frost:15
_47 = &param0->ir;
_48 = *_47;
_49 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_50 = (frost$core$Int) {1u};
_51 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_49, _50, param1, _51);
_53 = ($fn5) _48->$class->vtable[2];
_54 = _53(_48, _49);
_55 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_55);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Continue.frost:18
_59 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _59);
abort(); // unreachable
block2:;
_63 = *(&local0);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
return;

}
void org$frostlang$frostc$statement$Continue$init(void* rawSelf) {
org$frostlang$frostc$statement$Continue* param0 = (org$frostlang$frostc$statement$Continue*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Continue$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Continue* param0 = (org$frostlang$frostc$statement$Continue*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Continue.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






