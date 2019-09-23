#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoScope$class_type org$frostlang$frostc$Compiler$AutoScope$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoScope$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x63\x6f\x70\x65", 39, 4840824290779275110, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$Compiler$AutoScope* param0 = (org$frostlang$frostc$Compiler$AutoScope*) rawSelf;

org$frostlang$frostc$SymbolTable* _1;
org$frostlang$frostc$SymbolTable** _2;
org$frostlang$frostc$SymbolTable* _3;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:184
_1 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(sizeof(org$frostlang$frostc$SymbolTable), (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
_2 = &param1->symbolTable;
_3 = *_2;
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(_1, _3);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(param0, param1, _1);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}
void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$SymbolTable* param2) {
org$frostlang$frostc$Compiler$AutoScope* param0 = (org$frostlang$frostc$Compiler$AutoScope*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
org$frostlang$frostc$SymbolTable** _10;
org$frostlang$frostc$SymbolTable* _11;
frost$core$Object* _12;
org$frostlang$frostc$SymbolTable** _14;
org$frostlang$frostc$SymbolTable* _15;
frost$core$Object* _16;
org$frostlang$frostc$SymbolTable** _18;
frost$core$Object* _21;
org$frostlang$frostc$SymbolTable** _23;
org$frostlang$frostc$SymbolTable* _24;
frost$core$Object* _25;
org$frostlang$frostc$SymbolTable** _27;
frost$core$Object* _30;
org$frostlang$frostc$SymbolTable** _32;
org$frostlang$frostc$SymbolTable* _33;
frost$core$Object* _34;
org$frostlang$frostc$SymbolTable** _36;
frost$collections$Stack** _39;
frost$collections$Stack* _40;
org$frostlang$frostc$Compiler$EnclosingContext* _41;
frost$core$Int _42;
frost$core$Object* _44;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$core$Object* _49;
frost$core$Object* _52;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:188
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:189
_10 = &param1->symbolTable;
_11 = *_10;
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &param0->oldSymbolTable;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &param0->oldSymbolTable;
*_18 = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:190
_21 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &param0->newSymbolTable;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->newSymbolTable;
*_27 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:191
_30 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = &param1->symbolTable;
_33 = *_32;
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = &param1->symbolTable;
*_36 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:192
_39 = &param1->enclosingContexts;
_40 = *_39;
_41 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_42 = (frost$core$Int) {2u};
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int(_41, _42);
_44 = ((frost$core$Object*) _41);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:192:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_47 = &_40->contents;
_48 = *_47;
_49 = _44;
frost$collections$Array$add$frost$collections$Array$T(_48, _49);
_52 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_52);
return;

}
void org$frostlang$frostc$Compiler$AutoScope$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$AutoScope* param0 = (org$frostlang$frostc$Compiler$AutoScope*) rawSelf;

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$collections$Stack** _5;
frost$collections$Stack* _6;
frost$core$Object* _7;
org$frostlang$frostc$Compiler$EnclosingContext* _8;
frost$core$Object* _10;
org$frostlang$frostc$Compiler$EnclosingContext* _12;
frost$core$Object* _13;
frost$core$Object* _16;
org$frostlang$frostc$Compiler$EnclosingContext* _19;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Int _22;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _30;
org$frostlang$frostc$Compiler$EnclosingContext* _33;
frost$core$Object* _34;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _46;
org$frostlang$frostc$Compiler$EnclosingContext* _49;
frost$core$Object* _50;
frost$core$Int _54;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _62;
frost$core$Int _64;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _72;
org$frostlang$frostc$Compiler** _75;
org$frostlang$frostc$Compiler* _76;
org$frostlang$frostc$Compiler$EnclosingContext* _77;
org$frostlang$frostc$Compiler$EnclosingContext* _84;
frost$core$Object* _85;
frost$core$Int _81;
org$frostlang$frostc$Compiler** _90;
org$frostlang$frostc$Compiler* _91;
org$frostlang$frostc$SymbolTable** _92;
org$frostlang$frostc$SymbolTable* _93;
org$frostlang$frostc$SymbolTable** _94;
org$frostlang$frostc$SymbolTable* _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _100;
org$frostlang$frostc$Compiler** _104;
org$frostlang$frostc$Compiler* _105;
org$frostlang$frostc$SymbolTable** _106;
org$frostlang$frostc$SymbolTable* _107;
frost$core$Object* _108;
org$frostlang$frostc$SymbolTable** _110;
org$frostlang$frostc$SymbolTable* _111;
frost$core$Object* _112;
org$frostlang$frostc$SymbolTable** _114;
frost$core$Object* _117;
org$frostlang$frostc$Compiler** _119;
org$frostlang$frostc$Compiler* _120;
frost$core$Object* _121;
org$frostlang$frostc$SymbolTable** _123;
org$frostlang$frostc$SymbolTable* _124;
frost$core$Object* _125;
org$frostlang$frostc$SymbolTable** _127;
org$frostlang$frostc$SymbolTable* _128;
frost$core$Object* _129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:197
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:198
_3 = &param0->compiler;
_4 = *_3;
_5 = &_4->enclosingContexts;
_6 = *_5;
_7 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_6);
_8 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _7);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_10 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = *(&local0);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
*(&local0) = _8;
_16 = _7;
frost$core$Frost$unref$frost$core$Object$Q(_16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:199
_19 = *(&local0);
_20 = &_19->$rawValue;
_21 = *_20;
_22 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:200:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_25 = _21.value;
_26 = _22.value;
_27 = _25 == _26;
_28 = (frost$core$Bit) {_27};
_30 = _28.value;
if (_30) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:201
_33 = *(&local0);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block5:;
_38 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:203:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _21.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:204
_49 = *(&local0);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block8:;
_54 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:206:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _21.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block10; else goto block11;
block11:;
_64 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:206:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_67 = _21.value;
_68 = _64.value;
_69 = _67 == _68;
_70 = (frost$core$Bit) {_69};
_72 = _70.value;
if (_72) goto block10; else goto block13;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:207
_75 = &param0->compiler;
_76 = *_75;
_77 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(_76, _77);
_84 = *(&local0);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:210
_81 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _81);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:214
_90 = &param0->compiler;
_91 = *_90;
_92 = &_91->symbolTable;
_93 = *_92;
_94 = &param0->newSymbolTable;
_95 = *_94;
_96 = _93 == _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block15; else goto block16;
block16:;
_100 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _100);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:215
_104 = &param0->compiler;
_105 = *_104;
_106 = &param0->oldSymbolTable;
_107 = *_106;
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = &_105->symbolTable;
_111 = *_110;
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = &_105->symbolTable;
*_114 = _107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:196
_117 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_117);
_119 = &param0->compiler;
_120 = *_119;
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
_123 = &param0->oldSymbolTable;
_124 = *_123;
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = &param0->newSymbolTable;
_128 = *_127;
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
return;

}

