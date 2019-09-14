#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$TypeContext* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$TypeContext*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$TypeContext$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$TypeContext$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Compiler$TypeContext$_frost$core$Equatable, { org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$TypeContext$class_type org$frostlang$frostc$Compiler$TypeContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$TypeContext$_frost$collections$HashKey, { org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$TypeContext$cleanup, org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String, org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$Bit (*$fn13)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn18)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn19)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn36)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74", 41, 7286788768173347864, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, -4672832085192635236, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, -4672832085192635236, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 28, 3186585700466148650, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, -6706428097584095157, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, -6706428097584095157, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, -8273843884663715393, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, -8273843884663715393, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 7370278550074045823, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

frost$core$String* org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Object* _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Object* _42;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
org$frostlang$frostc$Type** _55;
org$frostlang$frostc$Type* _56;
frost$core$Object* _58;
org$frostlang$frostc$Type* _60;
frost$core$Object* _61;
frost$core$Bit* _64;
frost$core$Bit _65;
org$frostlang$frostc$Type* _67;
frost$core$Object* _68;
$fn2 _71;
frost$core$String* _72;
frost$core$String* _73;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$String* _81;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$Object* _86;
org$frostlang$frostc$Type* _88;
frost$core$Object* _89;
frost$core$Int _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:85
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:86:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:87
_14 = ((frost$core$Object*) &$s3);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return &$s4;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:89:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:90
_28 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_28);
return &$s6;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:92:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:93
_42 = ((frost$core$Object*) &$s7);
frost$core$Frost$ref$frost$core$Object$Q(_42);
return &$s8;
block9:;
_45 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:95:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _2.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
_53 = _51.value;
if (_53) goto block11; else goto block1;
block11:;
_55 = &param0->$data.$TYPE.field0;
_56 = *_55;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_58 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = *(&local0);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local0) = _56;
_64 = &param0->$data.$TYPE.field1;
_65 = *_64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:96
_67 = *(&local0);
_68 = ((frost$core$Object*) _67);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:96:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_71 = ($fn9) _68->$class->vtable[0];
_72 = _71(_68);
_73 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _72);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_81 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_73, &$s11);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = *(&local0);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _81;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:99
_94 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _94);
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$TypeContext$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Int _25;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _33;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
org$frostlang$frostc$Type** _46;
org$frostlang$frostc$Type* _47;
frost$core$Object* _49;
org$frostlang$frostc$Type* _51;
frost$core$Object* _52;
frost$core$Bit* _55;
frost$core$Bit _56;
org$frostlang$frostc$Type* _59;
frost$core$Object* _60;
org$frostlang$frostc$Type* _62;
frost$core$Object* _63;
frost$core$Object* _68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
goto block1;
block3:;
_14 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _2.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block5; else goto block6;
block5:;
goto block1;
block6:;
_25 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_28 = _2.value;
_29 = _25.value;
_30 = _28 == _29;
_31 = (frost$core$Bit) {_30};
_33 = _31.value;
if (_33) goto block8; else goto block9;
block8:;
goto block1;
block9:;
_36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = _2.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block11; else goto block1;
block11:;
_46 = &param0->$data.$TYPE.field0;
_47 = *_46;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_49 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local0);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local0) = _47;
_55 = &param0->$data.$TYPE.field1;
_56 = *_55;
*(&local1) = _56;
// <no location>
_59 = *(&local0);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = *(&local0);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_68 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_68);
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_1 = &param0->$rawValue;
*_1 = param1;
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$Type* param2, frost$core$Bit param3) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Type** _6;
frost$core$Bit* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$TYPE.field0;
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_9 = &param0->$data.$TYPE.field1;
*_9 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Compiler$TypeContext* param1) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int* _14;
frost$core$Int _15;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Bit _27;
frost$core$Bit _30;
frost$core$Int _33;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _41;
frost$core$Int* _44;
frost$core$Int _45;
frost$core$Int _46;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _54;
frost$core$Bit _57;
frost$core$Bit _60;
frost$core$Int _63;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _71;
frost$core$Int* _74;
frost$core$Int _75;
frost$core$Int _76;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _84;
frost$core$Bit _87;
frost$core$Bit _90;
frost$core$Int _93;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _101;
org$frostlang$frostc$Type** _103;
org$frostlang$frostc$Type* _104;
frost$core$Object* _106;
org$frostlang$frostc$Type* _108;
frost$core$Object* _109;
frost$core$Bit* _112;
frost$core$Bit _113;
frost$core$Int* _116;
frost$core$Int _117;
frost$core$Int _118;
int64_t _121;
int64_t _122;
bool _123;
frost$core$Bit _124;
bool _126;
org$frostlang$frostc$Type** _128;
org$frostlang$frostc$Type* _129;
frost$core$Object* _131;
org$frostlang$frostc$Type* _133;
frost$core$Object* _134;
frost$core$Bit* _137;
frost$core$Bit _138;
org$frostlang$frostc$Type* _141;
org$frostlang$frostc$Type* _142;
org$frostlang$frostc$Symbol* _145;
frost$core$String** _146;
frost$core$String* _147;
org$frostlang$frostc$Symbol* _148;
frost$core$String** _149;
frost$core$String* _150;
frost$core$Bit _151;
bool _152;
org$frostlang$frostc$Type$Kind* _154;
org$frostlang$frostc$Type$Kind _155;
frost$core$Equatable* _156;
frost$core$Equatable* _157;
org$frostlang$frostc$Type$Kind* _158;
org$frostlang$frostc$Type$Kind _159;
frost$core$Equatable* _160;
$fn13 _161;
frost$core$Bit _162;
frost$core$Object* _163;
frost$core$Object* _165;
frost$core$Bit _171;
bool _173;
frost$core$Bit _175;
frost$core$Bit _176;
bool _179;
bool _180;
bool _181;
frost$core$Bit _182;
frost$core$Bit _188;
org$frostlang$frostc$Type* _189;
frost$core$Object* _190;
org$frostlang$frostc$Type* _193;
frost$core$Object* _194;
frost$core$Bit _199;
org$frostlang$frostc$Type* _200;
frost$core$Object* _201;
org$frostlang$frostc$Type* _205;
frost$core$Object* _206;
frost$core$Int _211;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_14 = &param1->$rawValue;
_15 = *_14;
_16 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _15.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_27 = (frost$core$Bit) {true};
return _27;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_30 = (frost$core$Bit) {false};
return _30;
block5:;
goto block1;
block3:;
_33 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_36 = _2.value;
_37 = _33.value;
_38 = _36 == _37;
_39 = (frost$core$Bit) {_38};
_41 = _39.value;
if (_41) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_44 = &param1->$rawValue;
_45 = *_44;
_46 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_49 = _45.value;
_50 = _46.value;
_51 = _49 == _50;
_52 = (frost$core$Bit) {_51};
_54 = _52.value;
if (_54) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_57 = (frost$core$Bit) {true};
return _57;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_60 = (frost$core$Bit) {false};
return _60;
block12:;
goto block1;
block10:;
_63 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_66 = _2.value;
_67 = _63.value;
_68 = _66 == _67;
_69 = (frost$core$Bit) {_68};
_71 = _69.value;
if (_71) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_74 = &param1->$rawValue;
_75 = *_74;
_76 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_79 = _75.value;
_80 = _76.value;
_81 = _79 == _80;
_82 = (frost$core$Bit) {_81};
_84 = _82.value;
if (_84) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_87 = (frost$core$Bit) {true};
return _87;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_90 = (frost$core$Bit) {false};
return _90;
block19:;
goto block1;
block17:;
_93 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _2.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block23; else goto block24;
block23:;
_103 = &param0->$data.$TYPE.field0;
_104 = *_103;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_106 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local0);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local0) = _104;
_112 = &param0->$data.$TYPE.field1;
_113 = *_112;
*(&local1) = _113;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_116 = &param1->$rawValue;
_117 = *_116;
_118 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_121 = _117.value;
_122 = _118.value;
_123 = _121 == _122;
_124 = (frost$core$Bit) {_123};
_126 = _124.value;
if (_126) goto block27; else goto block28;
block27:;
_128 = &param1->$data.$TYPE.field0;
_129 = *_128;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_131 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_131);
_133 = *(&local2);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local2) = _129;
_137 = &param1->$data.$TYPE.field1;
_138 = *_137;
*(&local3) = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_141 = *(&local0);
_142 = *(&local2);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:254
_145 = ((org$frostlang$frostc$Symbol*) _141);
_146 = &_145->name;
_147 = *_146;
_148 = ((org$frostlang$frostc$Symbol*) _142);
_149 = &_148->name;
_150 = *_149;
_151 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_147, _150);
_152 = _151.value;
if (_152) goto block31; else goto block32;
block31:;
_154 = &_141->typeKind;
_155 = *_154;
org$frostlang$frostc$Type$Kind$wrapper* $tmp14;
$tmp14 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp14->value = _155;
_156 = ((frost$core$Equatable*) $tmp14);
_157 = _156;
_158 = &_142->typeKind;
_159 = *_158;
org$frostlang$frostc$Type$Kind$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp15->value = _159;
_160 = ((frost$core$Equatable*) $tmp15);
ITable* $tmp16 = _157->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp16 = $tmp16->next;
}
_161 = $tmp16->methods[0];
_162 = _161(_157, _160);
_163 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local5) = _162;
goto block33;
block32:;
*(&local5) = _151;
goto block33;
block33:;
_171 = *(&local5);
_173 = _171.value;
if (_173) goto block34; else goto block35;
block34:;
_175 = *(&local1);
_176 = *(&local3);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_179 = _175.value;
_180 = _176.value;
_181 = _179 == _180;
_182 = (frost$core$Bit) {_181};
*(&local4) = _182;
goto block36;
block35:;
*(&local4) = _171;
goto block36;
block36:;
_188 = *(&local4);
_189 = *(&local2);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_193 = *(&local0);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _188;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_199 = (frost$core$Bit) {false};
_200 = *(&local0);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _199;
block26:;
_205 = *(&local0);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_211 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s17, _211);
abort(); // unreachable
block1:;
goto block38;
block38:;

}
frost$core$Int org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _14;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Int _27;
frost$core$Int _29;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _37;
frost$core$Int _40;
frost$core$Int _42;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _50;
org$frostlang$frostc$Type** _52;
org$frostlang$frostc$Type* _53;
frost$core$Object* _55;
org$frostlang$frostc$Type* _57;
frost$core$Object* _58;
frost$core$Bit* _61;
frost$core$Bit _62;
frost$core$Int _65;
org$frostlang$frostc$Type* _66;
frost$collections$HashKey* _67;
$fn18 _68;
frost$core$Int _69;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int _75;
frost$core$Bit _77;
frost$collections$HashKey* _78;
$fn19 _79;
frost$core$Int _80;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
frost$core$Object* _88;
org$frostlang$frostc$Type* _90;
frost$core$Object* _91;
frost$core$Int _96;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_14 = (frost$core$Int) {7286788768173347864u};
return _14;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _2.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_27 = (frost$core$Int) {14573577536346695728u};
return _27;
block6:;
_29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_32 = _2.value;
_33 = _29.value;
_34 = _32 == _33;
_35 = (frost$core$Bit) {_34};
_37 = _35.value;
if (_37) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_40 = (frost$core$Int) {3413622230810491976u};
return _40;
block9:;
_42 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_45 = _2.value;
_46 = _42.value;
_47 = _45 == _46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
if (_50) goto block11; else goto block12;
block11:;
_52 = &param0->$data.$TYPE.field0;
_53 = *_52;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_55 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local0);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local0) = _53;
_61 = &param0->$data.$TYPE.field1;
_62 = *_61;
*(&local1) = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_65 = (frost$core$Int) {10700410998983839840u};
_66 = *(&local0);
_67 = ((frost$collections$HashKey*) _66);
ITable* $tmp20 = _67->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp20 = $tmp20->next;
}
_68 = $tmp20->methods[0];
_69 = _68(_67);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_72 = _65.value;
_73 = _69.value;
_74 = _72 ^ _73;
_75 = (frost$core$Int) {_74};
_77 = *(&local1);
frost$core$Bit$wrapper* $tmp21;
$tmp21 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp21->value = _77;
_78 = ((frost$collections$HashKey*) $tmp21);
ITable* $tmp22 = _78->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp22 = $tmp22->next;
}
_79 = $tmp22->methods[0];
_80 = _79(_78);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_83 = _75.value;
_84 = _80.value;
_85 = _83 ^ _84;
_86 = (frost$core$Int) {_85};
_88 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = *(&local0);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _86;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_96 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s23, _96);
abort(); // unreachable
block1:;
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Compiler$TypeContext* param0 = (org$frostlang$frostc$Compiler$TypeContext*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Object* _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Object* _42;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
org$frostlang$frostc$Type** _55;
org$frostlang$frostc$Type* _56;
frost$core$Object* _58;
org$frostlang$frostc$Type* _60;
frost$core$Object* _61;
frost$core$Bit* _64;
frost$core$Bit _65;
org$frostlang$frostc$Type* _68;
frost$core$Object* _69;
$fn24 _72;
frost$core$String* _73;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$String* _82;
frost$core$Bit _83;
frost$core$Object* _84;
$fn25 _87;
frost$core$String* _88;
frost$core$String* _89;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$String* _97;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Object* _108;
org$frostlang$frostc$Type* _110;
frost$core$Object* _111;
frost$core$Int _116;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_14 = ((frost$core$Object*) &$s26);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return &$s27;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_28 = ((frost$core$Object*) &$s28);
frost$core$Frost$ref$frost$core$Object$Q(_28);
return &$s29;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_42 = ((frost$core$Object*) &$s30);
frost$core$Frost$ref$frost$core$Object$Q(_42);
return &$s31;
block9:;
_45 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _2.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
_53 = _51.value;
if (_53) goto block11; else goto block12;
block11:;
_55 = &param0->$data.$TYPE.field0;
_56 = *_55;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_58 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = *(&local0);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local0) = _56;
_64 = &param0->$data.$TYPE.field1;
_65 = *_64;
*(&local1) = _65;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_68 = *(&local0);
_69 = ((frost$core$Object*) _68);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_72 = ($fn32) _69->$class->vtable[0];
_73 = _72(_69);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s33, _73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_74, &$s34);
_83 = *(&local1);
frost$core$Bit$wrapper* $tmp35;
$tmp35 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp35->value = _83;
_84 = ((frost$core$Object*) $tmp35);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_87 = ($fn36) _84->$class->vtable[0];
_88 = _87(_84);
_89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_82, _88);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$ref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_89, &$s37);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = _84;
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = *(&local0);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _97;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
_116 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s38, _116);
abort(); // unreachable
block1:;
goto block16;
block16:;

}

