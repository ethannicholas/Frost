#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Int.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Bit.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$FieldDecl$class_type org$frostlang$frostc$FieldDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String, org$frostlang$frostc$FieldDecl$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 30, 7621173627510702168, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 6034765482031789227, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };

void org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q(void* rawSelf, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$FieldDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$Type* param7, org$frostlang$frostc$ASTNode* param8) {
org$frostlang$frostc$FieldDecl* param0 = (org$frostlang$frostc$FieldDecl*) rawSelf;

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Compiler$Resolution _10;
org$frostlang$frostc$Compiler$Resolution _13;
org$frostlang$frostc$Compiler$Resolution* _14;
frost$core$Weak* _17;
org$frostlang$frostc$ClassDecl* _18;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Weak** _23;
frost$core$Weak* _24;
frost$core$Object* _25;
frost$core$Weak** _27;
frost$core$Object* _29;
frost$core$Object* _32;
frost$core$String** _34;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$String** _38;
frost$core$Object* _41;
org$frostlang$frostc$Annotations** _43;
org$frostlang$frostc$Annotations* _44;
frost$core$Object* _45;
org$frostlang$frostc$Annotations** _47;
org$frostlang$frostc$FieldDecl$Kind* _50;
frost$core$Object* _53;
org$frostlang$frostc$Type** _55;
org$frostlang$frostc$Type* _56;
frost$core$Object* _57;
org$frostlang$frostc$Type** _59;
frost$core$Object* _62;
org$frostlang$frostc$ASTNode** _64;
org$frostlang$frostc$ASTNode* _65;
frost$core$Object* _66;
org$frostlang$frostc$ASTNode** _68;
org$frostlang$frostc$Symbol* _71;
frost$core$Int _72;
frost$core$Int* _75;
org$frostlang$frostc$Symbol$Kind _77;
org$frostlang$frostc$Symbol$Kind _80;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:25
_1 = (frost$core$Int) {18446744073709551615u};
_2 = &param0->offset;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:27
_5 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from FieldDecl.frost:27:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
_14 = &param0->resolved;
*_14 = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:31
_17 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_18 = param1;
_19 = ((frost$core$Object*) _18);
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _19);
_21 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &param0->owner;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->owner;
*_27 = _17;
_29 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:32
_32 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &param0->doccomment;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &param0->doccomment;
*_38 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:33
_41 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = &param0->annotations;
_44 = *_43;
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = &param0->annotations;
*_47 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:34
_50 = &param0->fieldKind;
*_50 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:35
_53 = ((frost$core$Object*) param7);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = &param0->type;
_56 = *_55;
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = &param0->type;
*_59 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:36
_62 = ((frost$core$Object*) param8);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = &param0->rawValue;
_65 = *_64;
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = &param0->rawValue;
*_68 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:37
_71 = ((org$frostlang$frostc$Symbol*) param0);
_72 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from FieldDecl.frost:37:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_75 = &(&local3)->$rawValue;
*_75 = _72;
_77 = *(&local3);
*(&local2) = _77;
_80 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_71, _80, param2, param6);
return;

}
frost$core$String* org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$FieldDecl* param0 = (org$frostlang$frostc$FieldDecl*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$MutableString* _1;
org$frostlang$frostc$Annotations** _2;
org$frostlang$frostc$Annotations* _3;
frost$core$Object* _4;
$fn2 _5;
frost$core$String* _6;
frost$core$Object* _9;
frost$core$MutableString* _11;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$Object* _17;
org$frostlang$frostc$FieldDecl$Kind* _20;
org$frostlang$frostc$FieldDecl$Kind _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
frost$core$MutableString* _34;
frost$core$Int _37;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _45;
frost$core$MutableString* _48;
frost$core$Int _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
frost$core$MutableString* _62;
frost$core$Int _65;
int64_t _68;
int64_t _69;
bool _70;
frost$core$Bit _71;
bool _73;
frost$core$MutableString* _76;
frost$core$MutableString* _80;
org$frostlang$frostc$Symbol* _81;
frost$core$String** _82;
frost$core$String* _83;
frost$core$MutableString* _86;
frost$core$MutableString* _89;
org$frostlang$frostc$Type** _90;
org$frostlang$frostc$Type* _91;
frost$core$Object* _92;
$fn3 _95;
frost$core$String* _96;
frost$core$Object* _98;
org$frostlang$frostc$ASTNode** _102;
org$frostlang$frostc$ASTNode* _103;
bool _104;
frost$core$Bit _105;
bool _106;
frost$core$MutableString* _109;
frost$core$MutableString* _112;
org$frostlang$frostc$ASTNode** _113;
org$frostlang$frostc$ASTNode* _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _119;
frost$core$Object* _122;
$fn4 _125;
frost$core$String* _126;
frost$core$Object* _128;
frost$core$MutableString* _133;
frost$core$String* _134;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$MutableString* _139;
frost$core$Object* _140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:42
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = &param0->annotations;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
_5 = ($fn5) _4->$class->vtable[0];
_6 = _5(_4);
frost$core$MutableString$init$frost$core$String(_1, _6);
*(&local0) = ((frost$core$MutableString*) NULL);
_9 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = *(&local0);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
*(&local0) = _1;
_15 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_17);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:43
_20 = &param0->fieldKind;
_21 = *_20;
_22 = _21.$rawValue;
_23 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:44:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_26 = _22.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:44
_34 = *(&local0);
frost$core$MutableString$append$frost$core$String(_34, &$s6);
goto block1;
block3:;
_37 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:45:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_40 = _22.value;
_41 = _37.value;
_42 = _40 == _41;
_43 = (frost$core$Bit) {_42};
_45 = _43.value;
if (_45) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:45
_48 = *(&local0);
frost$core$MutableString$append$frost$core$String(_48, &$s7);
goto block1;
block6:;
_51 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:46:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_54 = _22.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:46
_62 = *(&local0);
frost$core$MutableString$append$frost$core$String(_62, &$s8);
goto block1;
block9:;
_65 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FieldDecl.frost:47:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_68 = _22.value;
_69 = _65.value;
_70 = _68 == _69;
_71 = (frost$core$Bit) {_70};
_73 = _71.value;
if (_73) goto block11; else goto block1;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:47
_76 = *(&local0);
frost$core$MutableString$append$frost$core$String(_76, &$s9);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:49
_80 = *(&local0);
_81 = ((org$frostlang$frostc$Symbol*) param0);
_82 = &_81->name;
_83 = *_82;
frost$core$MutableString$append$frost$core$String(_80, _83);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:50
_86 = *(&local0);
frost$core$MutableString$append$frost$core$String(_86, &$s10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:51
_89 = *(&local0);
_90 = &param0->type;
_91 = *_90;
_92 = ((frost$core$Object*) _91);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FieldDecl.frost:51:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_95 = ($fn11) _92->$class->vtable[0];
_96 = _95(_92);
frost$core$MutableString$append$frost$core$String(_89, _96);
_98 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:52
_102 = &param0->rawValue;
_103 = *_102;
_104 = _103 != NULL;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:53
_109 = *(&local0);
frost$core$MutableString$append$frost$core$String(_109, &$s12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:54
_112 = *(&local0);
_113 = &param0->rawValue;
_114 = *_113;
_115 = _114 != NULL;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block16; else goto block17;
block17:;
_119 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _119, &$s14);
abort(); // unreachable
block16:;
_122 = ((frost$core$Object*) _114);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FieldDecl.frost:54:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_125 = ($fn15) _122->$class->vtable[0];
_126 = _125(_122);
frost$core$MutableString$append$frost$core$String(_112, _126);
_128 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_128);
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:56
_133 = *(&local0);
_134 = frost$core$MutableString$finish$R$frost$core$String(_133);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = *(&local0);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
*(&local0) = ((frost$core$MutableString*) NULL);
return _134;

}
void org$frostlang$frostc$FieldDecl$cleanup(void* rawSelf) {
org$frostlang$frostc$FieldDecl* param0 = (org$frostlang$frostc$FieldDecl*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$Weak** _3;
frost$core$Weak* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
org$frostlang$frostc$Annotations** _11;
org$frostlang$frostc$Annotations* _12;
frost$core$Object* _13;
org$frostlang$frostc$Type** _15;
org$frostlang$frostc$Type* _16;
frost$core$Object* _17;
org$frostlang$frostc$ASTNode** _19;
org$frostlang$frostc$ASTNode* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:4
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->owner;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->doccomment;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->annotations;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->type;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->rawValue;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}

