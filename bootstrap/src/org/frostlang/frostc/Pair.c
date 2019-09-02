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

void org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B(org$frostlang$frostc$Pair* param0, frost$core$Object* param1, frost$core$Object* param2) {

org$frostlang$frostc$Pair* _1;
frost$core$Object* _2;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$core$Object** _8;
org$frostlang$frostc$Pair* _11;
frost$core$Object* _12;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object** _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:9
_1 = param0;
_2 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->first;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->first;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:10
_11 = param0;
_12 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->second;
_15 = *_14;
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->second;
*_18 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Pair$get_asString$R$frost$core$String(org$frostlang$frostc$Pair* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Pair* _3;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Bit _6;
bool _7;
org$frostlang$frostc$Pair* _10;
frost$core$Object** _11;
frost$core$Object* _12;
frost$core$Object* _13;
$fn2 _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$core$Object* _27;
frost$core$String* _29;
frost$core$Object* _30;
org$frostlang$frostc$Pair* _37;
frost$core$Object** _38;
frost$core$Object* _39;
frost$core$Bit _40;
bool _41;
org$frostlang$frostc$Pair* _44;
frost$core$Object** _45;
frost$core$Object* _46;
frost$core$Object* _47;
$fn3 _48;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _61;
frost$core$String* _63;
frost$core$Object* _64;
frost$core$String* _69;
frost$core$String* _70;
frost$core$String* _71;
frost$core$String* _72;
frost$core$String* _73;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _83;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$String* _89;
frost$core$Object* _90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:15
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:16
_3 = param0;
_4 = &_3->first;
_5 = *_4;
_6 = (frost$core$Bit) {true};
_7 = _6.value;
if (_7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:17
_10 = param0;
_11 = &_10->first;
_12 = *_11;
_13 = _12;
_14 = ($fn4) _13->$class->vtable[0];
_15 = _14(_13);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _15;
_22 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_22);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:20
_27 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local0);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local0) = &$s6;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:22
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:23
_37 = param0;
_38 = &_37->second;
_39 = *_38;
_40 = (frost$core$Bit) {true};
_41 = _40.value;
if (_41) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:24
_44 = param0;
_45 = &_44->second;
_46 = *_45;
_47 = _46;
_48 = ($fn7) _47->$class->vtable[0];
_49 = _48(_47);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _49;
_56 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_56);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:27
_61 = ((frost$core$Object*) &$s8);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local1);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local1) = &$s9;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:29
_69 = *(&local0);
_70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _69);
_71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_70, &$s11);
_72 = *(&local1);
_73 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_71, _72);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_73, &$s12);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = *(&local1);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local1) = ((frost$core$String*) NULL);
_89 = *(&local0);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local0) = ((frost$core$String*) NULL);
return _74;

}
void org$frostlang$frostc$Pair$cleanup(org$frostlang$frostc$Pair* param0) {

frost$core$Object* _1;
org$frostlang$frostc$Pair* _3;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
org$frostlang$frostc$Pair* _8;
frost$core$Object** _9;
frost$core$Object* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Pair.frost:4
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->first;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->second;
_10 = *_9;
_11 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}






