#include "org/frostlang/frostc/statement/InnerMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/expression/Closure.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$statement$InnerMethod$class_type org$frostlang$frostc$statement$InnerMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$InnerMethod$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64", 42, 692810303500357138, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 17, -6232648678895726598, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$statement$InnerMethod$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$MethodDecl$Kind param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$Variable$Kind local3;
org$frostlang$frostc$Variable$Kind local4;
org$frostlang$frostc$Compiler$TypeContext* _1;
frost$core$Int _2;
org$frostlang$frostc$IR$Value* _4;
frost$core$Object* _6;
org$frostlang$frostc$IR$Value* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Object* _14;
org$frostlang$frostc$IR$Value* _17;
bool _18;
frost$core$Bit _19;
bool _20;
org$frostlang$frostc$IR$Value* _23;
frost$core$Object* _24;
frost$core$Int _31;
frost$core$Int _32;
frost$core$Int _33;
org$frostlang$frostc$Position _34;
org$frostlang$frostc$ASTNode* _38;
frost$core$Int _39;
org$frostlang$frostc$Position _40;
org$frostlang$frostc$ASTNode* _41;
frost$core$Int _42;
org$frostlang$frostc$Position _43;
org$frostlang$frostc$ASTNode* _45;
frost$core$Int _46;
org$frostlang$frostc$Position _47;
org$frostlang$frostc$IR$Value* _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
org$frostlang$frostc$IR$Value* _56;
org$frostlang$frostc$ASTNode* _58;
frost$core$Object* _61;
org$frostlang$frostc$ASTNode* _63;
frost$core$Object* _64;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
org$frostlang$frostc$ASTNode* _74;
frost$core$Int _75;
org$frostlang$frostc$Position _76;
frost$core$Int _77;
frost$core$Int* _80;
org$frostlang$frostc$Variable$Kind _82;
org$frostlang$frostc$Variable$Kind _85;
frost$collections$Array* _86;
frost$core$Int _87;
org$frostlang$frostc$ASTNode* _89;
frost$core$Object* _90;
org$frostlang$frostc$FixedArray* _92;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$Object* _99;
org$frostlang$frostc$ASTNode* _101;
frost$core$Object* _102;
org$frostlang$frostc$IR$Value* _105;
frost$core$Object* _106;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:17
_1 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_2 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_1, _2);
_4 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5, param6, _1);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
_12 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:19
_17 = *(&local0);
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:20
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:22
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from InnerMethod.frost:22:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_31 = param1.file;
_32 = param1.line;
_33 = param1.column;
_34 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_31, _32, _33);
*(&local1) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:23
_38 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_39 = (frost$core$Int) {14u};
_40 = *(&local1);
_41 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_42 = (frost$core$Int) {22u};
_43 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_41, _42, _43, param3);
_45 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_46 = (frost$core$Int) {26u};
_47 = *(&local1);
_48 = *(&local0);
_49 = _48 != NULL;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block4; else goto block5;
block5:;
_53 = (frost$core$Int) {24u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _53, &$s3);
abort(); // unreachable
block4:;
_56 = _48;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_45, _46, _47, _56);
_58 = _45;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(_38, _39, _40, _41, _58);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_61 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local2);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local2) = _38;
_67 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:25
_74 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_75 = (frost$core$Int) {53u};
_76 = *(&local1);
_77 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from InnerMethod.frost:25:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
_80 = &(&local4)->$rawValue;
*_80 = _77;
_82 = *(&local4);
*(&local3) = _82;
_85 = *(&local3);
_86 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_87 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_86, _87);
_89 = *(&local2);
_90 = ((frost$core$Object*) _89);
frost$collections$Array$add$frost$collections$Array$T(_86, _90);
_92 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_86);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_74, _75, _76, _85, _92);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _74);
_95 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_105 = *(&local0);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$InnerMethod$init(void* rawSelf) {
org$frostlang$frostc$statement$InnerMethod* param0 = (org$frostlang$frostc$statement$InnerMethod*) rawSelf;

return;

}
void org$frostlang$frostc$statement$InnerMethod$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$InnerMethod* param0 = (org$frostlang$frostc$statement$InnerMethod*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




