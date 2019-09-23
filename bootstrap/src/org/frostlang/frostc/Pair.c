#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$Pair$class_type org$frostlang$frostc$Pair$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Pair$get_asString$R$frost$core$String, org$frostlang$frostc$Pair$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 25, -1303499920858345460, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(void* rawSelf, frost$core$Object* param1, frost$core$Object* param2) {
org$frostlang$frostc$Pair* param0 = (org$frostlang$frostc$Pair*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _10;
frost$core$Object** _12;
frost$core$Object* _13;
frost$core$Object* _14;
frost$core$Object** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:9
_1 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->first;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->first;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:10
_10 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->second;
_13 = *_12;
_14 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->second;
*_16 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Pair$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Pair* param0 = (org$frostlang$frostc$Pair*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Bit _5;
bool _6;
frost$core$Object** _9;
frost$core$Object* _10;
frost$core$Object* _11;
$fn2 _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$Object* _20;
frost$core$Object* _25;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$Object** _35;
frost$core$Object* _36;
frost$core$Bit _37;
bool _38;
frost$core$Object** _41;
frost$core$Object* _42;
frost$core$Object* _43;
$fn3 _44;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String* _48;
frost$core$Object* _49;
frost$core$Object* _52;
frost$core$Object* _57;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$String* _65;
frost$core$String* _66;
frost$core$String* _67;
frost$core$String* _68;
frost$core$String* _69;
frost$core$String* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$String* _81;
frost$core$Object* _82;
frost$core$String* _85;
frost$core$Object* _86;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:15
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:16
_3 = &param0->first;
_4 = *_3;
_5 = (frost$core$Bit) {true};
_6 = _5.value;
if (_6) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:17
_9 = &param0->first;
_10 = *_9;
_11 = _10;
_12 = ($fn4) _11->$class->vtable[0];
_13 = _12(_11);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = *(&local0);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local0) = _13;
_20 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_20);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:20
_25 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = &$s6;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:22
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:23
_35 = &param0->second;
_36 = *_35;
_37 = (frost$core$Bit) {true};
_38 = _37.value;
if (_38) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:24
_41 = &param0->second;
_42 = *_41;
_43 = _42;
_44 = ($fn7) _43->$class->vtable[0];
_45 = _44(_43);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local1);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _45;
_52 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_52);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:27
_57 = ((frost$core$Object*) &$s8);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = *(&local1);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local1) = &$s9;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:29
_65 = *(&local0);
_66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _65);
_67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_66, &$s11);
_68 = *(&local1);
_69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_67, _68);
_70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_69, &$s12);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = *(&local1);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local1) = ((frost$core$String*) NULL);
_85 = *(&local0);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local0) = ((frost$core$String*) NULL);
return _70;

}
void org$frostlang$frostc$Pair$cleanup(void* rawSelf) {
org$frostlang$frostc$Pair* param0 = (org$frostlang$frostc$Pair*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:4
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->first;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->second;
_8 = *_7;
_9 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}






