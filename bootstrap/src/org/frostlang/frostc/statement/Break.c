#include "org/frostlang/frostc/statement/Break.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$statement$Break$class_type org$frostlang$frostc$statement$Break$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Break$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn2)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn5)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x42\x72\x65\x61\x6b", 36, -801108057295429868, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4644363108356512736, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4644363108356512736, NULL };

void org$frostlang$frostc$statement$Break$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$String$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, frost$core$String* param2) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
frost$core$Int _3;
frost$core$Int _4;
frost$core$Int _5;
org$frostlang$frostc$Position _6;
org$frostlang$frostc$Compiler$EnclosingContext* _8;
frost$core$Object* _10;
org$frostlang$frostc$Compiler$EnclosingContext* _12;
frost$core$Object* _13;
frost$core$Object* _16;
org$frostlang$frostc$Compiler$EnclosingContext* _19;
bool _20;
frost$core$Bit _21;
bool _22;
org$frostlang$frostc$Compiler$EnclosingContext* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$frostc$Compiler$EnclosingContext* _33;
frost$core$Int* _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$String** _46;
frost$core$String* _47;
org$frostlang$frostc$IR$Block$ID* _48;
org$frostlang$frostc$IR$Block$ID _49;
org$frostlang$frostc$IR$Block$ID* _51;
org$frostlang$frostc$IR$Block$ID _52;
org$frostlang$frostc$IR** _54;
org$frostlang$frostc$IR* _55;
org$frostlang$frostc$IR$Statement* _56;
frost$core$Int _57;
org$frostlang$frostc$IR$Block$ID _58;
$fn2 _60;
org$frostlang$frostc$IR$Statement$ID _61;
frost$core$Object* _62;
frost$core$Int _66;
org$frostlang$frostc$Compiler$EnclosingContext* _70;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Break.frost:11
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Break.frost:11:59
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_3 = param1.file;
_4 = param1.line;
_5 = param1.column;
_6 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_3, _4, _5);
_8 = org$frostlang$frostc$Compiler$findAndLeaveToLoopScope$org$frostlang$frostc$Position$frost$core$String$Q$R$org$frostlang$frostc$Compiler$EnclosingContext$Q(param0, _6, param2);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_10 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = *(&local0);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
*(&local0) = _8;
_16 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Break.frost:12
_19 = *(&local0);
_20 = _19 != NULL;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Break.frost:13
_25 = *(&local0);
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block4; else goto block5;
block5:;
_30 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _30, &$s4);
abort(); // unreachable
block4:;
_33 = _25;
_34 = &_33->$rawValue;
_35 = *_34;
_36 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Break.frost:14:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block7; else goto block8;
block7:;
_46 = &_25->$data.$LOOP.field0;
_47 = *_46;
_48 = &_25->$data.$LOOP.field1;
_49 = *_48;
*(&local1) = _49;
_51 = &_25->$data.$LOOP.field2;
_52 = *_51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Break.frost:15
_54 = &param0->ir;
_55 = *_54;
_56 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_57 = (frost$core$Int) {1u};
_58 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_56, _57, param1, _58);
_60 = ($fn5) _55->$class->vtable[2];
_61 = _60(_55, _56);
_62 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_62);
goto block3;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Break.frost:18
_66 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _66);
abort(); // unreachable
block3:;
_70 = *(&local0);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
return;

}
void org$frostlang$frostc$statement$Break$init(void* rawSelf) {
org$frostlang$frostc$statement$Break* param0 = (org$frostlang$frostc$statement$Break*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Break$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Break* param0 = (org$frostlang$frostc$statement$Break*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Break.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




