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

void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoScope* param0, org$frostlang$frostc$Compiler* param1) {

org$frostlang$frostc$SymbolTable* _1;
org$frostlang$frostc$SymbolTable** _2;
org$frostlang$frostc$SymbolTable* _3;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:184
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
_1 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
_2 = &param1->symbolTable;
_3 = *_2;
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(_1, _3);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(param0, param1, _1);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}
void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$Compiler$AutoScope* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$SymbolTable* param2) {

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
frost$collections$Stack* _41;
org$frostlang$frostc$Compiler$EnclosingContext* _42;
frost$core$Int _43;
frost$core$Object* _45;
frost$collections$Array** _48;
frost$collections$Array* _49;
frost$collections$Array* _50;
frost$core$Object* _51;
frost$core$Object* _54;
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
_41 = _40;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
_42 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_43 = (frost$core$Int) {2u};
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int(_42, _43);
_45 = ((frost$core$Object*) _42);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:192:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
_48 = &_41->contents;
_49 = *_48;
_50 = _49;
_51 = _45;
frost$collections$Array$add$frost$collections$Array$T(_50, _51);
_54 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_54);
return;

}
void org$frostlang$frostc$Compiler$AutoScope$cleanup(org$frostlang$frostc$Compiler$AutoScope* param0) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$collections$Stack** _5;
frost$collections$Stack* _6;
frost$collections$Stack* _7;
frost$core$Object* _8;
org$frostlang$frostc$Compiler$EnclosingContext* _9;
frost$core$Object* _11;
org$frostlang$frostc$Compiler$EnclosingContext* _13;
frost$core$Object* _14;
frost$core$Object* _17;
org$frostlang$frostc$Compiler$EnclosingContext* _20;
frost$core$Int* _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
org$frostlang$frostc$Compiler$EnclosingContext* _34;
frost$core$Object* _35;
frost$core$Int _39;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _47;
org$frostlang$frostc$Compiler$EnclosingContext* _50;
frost$core$Object* _51;
frost$core$Int _55;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _63;
frost$core$Int _65;
int64_t _68;
int64_t _69;
bool _70;
frost$core$Bit _71;
bool _73;
org$frostlang$frostc$Compiler** _76;
org$frostlang$frostc$Compiler* _77;
org$frostlang$frostc$Compiler$EnclosingContext* _78;
org$frostlang$frostc$Compiler$EnclosingContext* _85;
frost$core$Object* _86;
frost$core$Int _82;
org$frostlang$frostc$Compiler** _91;
org$frostlang$frostc$Compiler* _92;
org$frostlang$frostc$SymbolTable** _93;
org$frostlang$frostc$SymbolTable* _94;
org$frostlang$frostc$SymbolTable** _95;
org$frostlang$frostc$SymbolTable* _96;
bool _97;
frost$core$Bit _98;
bool _99;
frost$core$Int _101;
org$frostlang$frostc$Compiler** _105;
org$frostlang$frostc$Compiler* _106;
org$frostlang$frostc$SymbolTable** _107;
org$frostlang$frostc$SymbolTable* _108;
frost$core$Object* _109;
org$frostlang$frostc$SymbolTable** _111;
org$frostlang$frostc$SymbolTable* _112;
frost$core$Object* _113;
org$frostlang$frostc$SymbolTable** _115;
frost$core$Object* _118;
org$frostlang$frostc$Compiler** _120;
org$frostlang$frostc$Compiler* _121;
frost$core$Object* _122;
org$frostlang$frostc$SymbolTable** _124;
org$frostlang$frostc$SymbolTable* _125;
frost$core$Object* _126;
org$frostlang$frostc$SymbolTable** _128;
org$frostlang$frostc$SymbolTable* _129;
frost$core$Object* _130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:197
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:198
_3 = &param0->compiler;
_4 = *_3;
_5 = &_4->enclosingContexts;
_6 = *_5;
_7 = _6;
_8 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_7);
_9 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _8);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_11 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = *(&local0);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
*(&local0) = _9;
_17 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_17);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:199
_20 = *(&local0);
_21 = &_20->$rawValue;
_22 = *_21;
_23 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:200:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_26 = _22.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:201
_34 = *(&local0);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block5:;
_39 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:203:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_42 = _22.value;
_43 = _39.value;
_44 = _42 == _43;
_45 = (frost$core$Bit) {_44};
_47 = _45.value;
if (_47) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:204
_50 = *(&local0);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block2;
block8:;
_55 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:206:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_58 = _22.value;
_59 = _55.value;
_60 = _58 == _59;
_61 = (frost$core$Bit) {_60};
_63 = _61.value;
if (_63) goto block10; else goto block11;
block11:;
_65 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:206:75
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_68 = _22.value;
_69 = _65.value;
_70 = _68 == _69;
_71 = (frost$core$Bit) {_70};
_73 = _71.value;
if (_73) goto block10; else goto block13;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:207
_76 = &param0->compiler;
_77 = *_76;
_78 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(_77, _78);
_85 = *(&local0);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:210
_82 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _82);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:214
_91 = &param0->compiler;
_92 = *_91;
_93 = &_92->symbolTable;
_94 = *_93;
_95 = &param0->newSymbolTable;
_96 = *_95;
_97 = _94 == _96;
_98 = (frost$core$Bit) {_97};
_99 = _98.value;
if (_99) goto block15; else goto block16;
block16:;
_101 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _101);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:215
_105 = &param0->compiler;
_106 = *_105;
_107 = &param0->oldSymbolTable;
_108 = *_107;
_109 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = &_106->symbolTable;
_112 = *_111;
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = &_106->symbolTable;
*_115 = _108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:196
_118 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_118);
_120 = &param0->compiler;
_121 = *_120;
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = &param0->oldSymbolTable;
_125 = *_124;
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = &param0->newSymbolTable;
_129 = *_128;
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
return;

}

