#include "org/frostlang/frostc/expression/Dot.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Scanner.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Dot$class_type org$frostlang$frostc$expression$Dot$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Dot$cleanup} };

typedef org$frostlang$frostc$Type* (*$fn2)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn5)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn8)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x44\x6f\x74", 35, -2589098671351584253, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 5046548472015619592, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 2255341192871350238, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -1424075648609008241, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 5046548472015619592, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 5046548472015619592, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x6f\x74\x2e\x66\x72\x6f\x73\x74", 9, 5046548472015619592, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
$fn2 _1;
org$frostlang$frostc$Type* _2;
org$frostlang$frostc$ClassDecl* _3;
frost$core$Object* _5;
org$frostlang$frostc$ClassDecl* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$core$Object* _13;
org$frostlang$frostc$ClassDecl* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Object* _22;
org$frostlang$frostc$ClassDecl* _24;
frost$core$Object* _25;
org$frostlang$frostc$ClassDecl* _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _35;
org$frostlang$frostc$ClassDecl* _38;
org$frostlang$frostc$SymbolTable* _39;
org$frostlang$frostc$Symbol* _40;
frost$core$Object* _42;
org$frostlang$frostc$Symbol* _44;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$Object* _50;
org$frostlang$frostc$Symbol* _53;
bool _54;
frost$core$Bit _55;
bool _56;
$fn3 _59;
org$frostlang$frostc$Type* _60;
frost$core$Object* _61;
$fn4 _64;
frost$core$String* _65;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$String* _74;
frost$core$String* _75;
frost$core$String* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _89;
org$frostlang$frostc$Symbol* _91;
frost$core$Object* _92;
org$frostlang$frostc$ClassDecl* _95;
frost$core$Object* _96;
org$frostlang$frostc$IR$Value* _101;
org$frostlang$frostc$Symbol* _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
org$frostlang$frostc$Symbol* _110;
org$frostlang$frostc$IR$Value* _111;
frost$core$Object* _112;
frost$core$Object* _114;
org$frostlang$frostc$Symbol* _116;
frost$core$Object* _117;
org$frostlang$frostc$ClassDecl* _120;
frost$core$Object* _121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:13
_1 = ($fn5) param2->$class->vtable[2];
_2 = _1(param2);
_3 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_5 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _3;
_11 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:14
_16 = *(&local0);
_17 = _16 == NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:15
_22 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = *(&local0);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:17
_30 = *(&local0);
_31 = _30 != NULL;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block3; else goto block4;
block4:;
_35 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _35, &$s7);
abort(); // unreachable
block3:;
_38 = _30;
_39 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _38);
_40 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_39, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_42 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = *(&local1);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local1) = _40;
_48 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_50);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:18
_53 = *(&local1);
_54 = _53 == NULL;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:19
_59 = ($fn8) param2->$class->vtable[2];
_60 = _59(param2);
_61 = ((frost$core$Object*) _60);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Dot.frost:20:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_64 = ($fn9) _61->$class->vtable[0];
_65 = _64(_61);
_66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_66, &$s11);
_75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_74, param3);
_76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_75, &$s12);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, _76);
_78 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:21
_89 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_89);
_91 = *(&local1);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_95 = *(&local0);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:23
_101 = param2;
_102 = *(&local1);
_103 = _102 != NULL;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block8; else goto block9;
block9:;
_107 = (frost$core$Int) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _107, &$s14);
abort(); // unreachable
block8:;
_110 = _102;
_111 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _101, _110);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = *(&local1);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_120 = *(&local0);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return _111;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, frost$core$String* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Scanner** _14;
org$frostlang$frostc$Scanner* _15;
org$frostlang$frostc$Type* _16;
frost$core$Bit _19;
org$frostlang$frostc$Type* _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _27;
org$frostlang$frostc$Type* _29;
frost$core$Object* _30;
frost$core$Object* _33;
frost$core$Object* _35;
org$frostlang$frostc$Type* _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _44;
org$frostlang$frostc$Type* _46;
frost$core$Object* _47;
org$frostlang$frostc$Type* _52;
bool _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _57;
org$frostlang$frostc$Type* _60;
org$frostlang$frostc$IR$Value* _63;
frost$core$Int _64;
org$frostlang$frostc$Type** _67;
org$frostlang$frostc$Type* _68;
frost$collections$Array* _69;
frost$collections$Array* _70;
frost$core$Int _71;
frost$collections$Array* _73;
frost$core$Object* _74;
frost$collections$ListView* _76;
org$frostlang$frostc$Type* _77;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
org$frostlang$frostc$IR$Value* _93;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$Object* _98;
org$frostlang$frostc$Type* _100;
frost$core$Object* _101;
org$frostlang$frostc$Compiler$TypeContext* _108;
frost$core$Int _109;
org$frostlang$frostc$IR$Value* _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _120;
org$frostlang$frostc$IR$Value* _122;
frost$core$Object* _123;
frost$core$Object* _126;
org$frostlang$frostc$IR$Value* _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Object* _135;
org$frostlang$frostc$IR$Value* _137;
frost$core$Object* _138;
org$frostlang$frostc$IR$Value* _143;
bool _144;
frost$core$Bit _145;
bool _146;
frost$core$Int _148;
org$frostlang$frostc$IR$Value* _151;
org$frostlang$frostc$IR$Value* _152;
frost$core$Object* _153;
frost$core$Object* _155;
org$frostlang$frostc$IR$Value* _157;
frost$core$Object* _158;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:28
_1 = &param2->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Dot.frost:29:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:30
_14 = &param0->scanner;
_15 = *_14;
_16 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(_15, param2);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from Dot.frost:30:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:891
_19 = (frost$core$Bit) {true};
_20 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, _16, _19);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_27 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local0);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local0) = _20;
_33 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:31
_38 = *(&local0);
_39 = _38 == NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:32
_44 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local0);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:34
_52 = *(&local0);
_53 = _52 != NULL;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block7; else goto block8;
block8:;
_57 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _57, &$s16);
abort(); // unreachable
block7:;
_60 = _52;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Dot.frost:34:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3636
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_63 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_64 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3636:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:297
_67 = &param0->CLASS_TYPE;
_68 = *_67;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_69 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_70 = _69;
_71 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_70, _71);
_73 = _69;
_74 = ((frost$core$Object*) _60);
frost$collections$Array$add$frost$collections$Array$T(_73, _74);
_76 = ((frost$collections$ListView*) _69);
_77 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_68, _76);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_82);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_63, _64, _60, _77);
_86 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_93 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _63, param3);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = *(&local0);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _93;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:37
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from Dot.frost:37:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5063
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_108 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_109 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_108, _109);
_111 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, _108);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_116);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_120 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = *(&local1);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local1) = _111;
_126 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:38
_129 = *(&local1);
_130 = _129 == NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:39
_135 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = *(&local1);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:41
_143 = *(&local1);
_144 = _143 != NULL;
_145 = (frost$core$Bit) {_144};
_146 = _145.value;
if (_146) goto block14; else goto block15;
block15:;
_148 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _148, &$s18);
abort(); // unreachable
block14:;
_151 = _143;
_152 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _151, param3);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = *(&local1);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return _152;

}
void org$frostlang$frostc$expression$Dot$init(org$frostlang$frostc$expression$Dot* param0) {

return;

}
void org$frostlang$frostc$expression$Dot$cleanup(org$frostlang$frostc$expression$Dot* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Dot.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






