#include "org/frostlang/frostc/statement/InnerMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/expression/Closure.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$InnerMethod$class_type org$frostlang$frostc$statement$InnerMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$InnerMethod$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64", 42, 692810303500357138, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x6e\x65\x72\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 17, -6232648678895726598, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$statement$InnerMethod$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$MethodDecl$Kind param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Variable$Kind local2;
org$frostlang$frostc$Variable$Kind local3;
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
org$frostlang$frostc$ASTNode* _29;
frost$core$Int _30;
org$frostlang$frostc$ASTNode* _31;
frost$core$Int _32;
org$frostlang$frostc$ASTNode* _34;
frost$core$Int _35;
org$frostlang$frostc$IR$Value* _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
org$frostlang$frostc$IR$Value* _44;
org$frostlang$frostc$ASTNode* _46;
frost$core$Object* _49;
org$frostlang$frostc$ASTNode* _51;
frost$core$Object* _52;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Object* _59;
org$frostlang$frostc$ASTNode* _62;
frost$core$Int _63;
frost$core$Int _64;
frost$core$Int* _67;
org$frostlang$frostc$Variable$Kind _69;
org$frostlang$frostc$Variable$Kind _72;
frost$collections$Array* _73;
frost$collections$Array* _74;
frost$core$Int _75;
frost$collections$Array* _77;
org$frostlang$frostc$ASTNode* _78;
frost$core$Object* _79;
frost$collections$Array* _81;
org$frostlang$frostc$FixedArray* _82;
org$frostlang$frostc$FixedArray* _83;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
org$frostlang$frostc$ASTNode* _92;
frost$core$Object* _93;
org$frostlang$frostc$IR$Value* _96;
frost$core$Object* _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:17
_1 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_2 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_1, _2);
_4 = org$frostlang$frostc$expression$Closure$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param4, param5, param6, _1);
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
_29 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_30 = (frost$core$Int) {14u};
_31 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_32 = (frost$core$Int) {22u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_31, _32, param1, param3);
_34 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_35 = (frost$core$Int) {26u};
_36 = *(&local0);
_37 = _36 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block3; else goto block4;
block4:;
_41 = (frost$core$Int) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _41, &$s3);
abort(); // unreachable
block3:;
_44 = _36;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_34, _35, param1, _44);
_46 = _34;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(_29, _30, param1, _31, _46);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_49 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local1);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local1) = _29;
_55 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/InnerMethod.frost:24
_62 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_63 = (frost$core$Int) {53u};
_64 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from InnerMethod.frost:24:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
_67 = &(&local3)->$rawValue;
*_67 = _64;
_69 = *(&local3);
*(&local2) = _69;
_72 = *(&local2);
_73 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_74 = _73;
_75 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_74, _75);
_77 = _73;
_78 = *(&local1);
_79 = ((frost$core$Object*) _78);
frost$collections$Array$add$frost$collections$Array$T(_77, _79);
_81 = _73;
_82 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_81);
_83 = _82;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_62, _63, param1, _72, _83);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _62);
_86 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = *(&local1);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_96 = *(&local0);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
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






