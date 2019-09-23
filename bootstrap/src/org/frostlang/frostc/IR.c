#include "org/frostlang/frostc/IR.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$class_type org$frostlang$frostc$IR$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$get_asString$R$frost$core$String, org$frostlang$frostc$IR$cleanup, org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn2)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn3)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn4)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn6)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn7)(org$frostlang$frostc$IR*);
typedef void (*$fn8)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn9)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Bit (*$fn10)(org$frostlang$frostc$IR*);
typedef void (*$fn14)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn15)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn23)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Object* (*$fn25)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn27)(frost$core$Object*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn29)(frost$core$Object*);
typedef frost$core$String* (*$fn30)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, 1296235477144720067, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, -1270692749394500321, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -5934919833545445361, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$init(void* rawSelf) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

frost$collections$Array* _1;
frost$core$Object* _3;
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$collections$Array** _9;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$core$Object* _16;
frost$collections$Array** _18;
frost$collections$Array* _19;
frost$core$Object* _20;
frost$collections$Array** _22;
frost$core$Object* _24;
frost$core$Int _27;
frost$core$Int* _28;
frost$core$Int _31;
frost$core$Int* _32;
$fn2 _35;
org$frostlang$frostc$IR$Block$ID _36;
$fn3 _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:563
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->locals;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->locals;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:565
_14 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->blocks;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->blocks;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:568
_27 = (frost$core$Int) {18446744073709551615u};
_28 = &param0->currentStatementId;
*_28 = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:571
_31 = (frost$core$Int) {18446744073709551615u};
_32 = &param0->currentBlockID;
*_32 = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:579
_35 = ($fn4) param0->$class->vtable[3];
_36 = _35(param0, &$s5);
_37 = ($fn6) param0->$class->vtable[4];
_37(param0, _36);
return;

}
org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID(void* rawSelf, org$frostlang$frostc$IR$Statement* param1) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
$fn7 _0;
frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
frost$core$Int _10;
frost$core$Int* _14;
frost$core$Int _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
int64_t _19;
frost$core$Int _20;
frost$core$Int* _21;
frost$core$Int* _24;
frost$core$Int _25;
frost$core$Int* _28;
org$frostlang$frostc$IR$Statement$ID _30;
org$frostlang$frostc$IR$Statement$ID _33;
org$frostlang$frostc$IR$Block** _36;
org$frostlang$frostc$IR$Block* _37;
org$frostlang$frostc$LinkedList** _38;
org$frostlang$frostc$LinkedList* _39;
org$frostlang$frostc$IR$Statement$ID _40;
frost$core$Object* _41;
$fn8 _42;
frost$core$Object* _44;
org$frostlang$frostc$IR$Block** _47;
org$frostlang$frostc$IR$Block* _48;
org$frostlang$frostc$LinkedList** _49;
org$frostlang$frostc$LinkedList* _50;
frost$core$Object* _51;
$fn9 _52;
org$frostlang$frostc$IR$Statement$ID _55;
_0 = ($fn10) param0->$class->vtable[5];
_1 = _0(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:585:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {586u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _10, &$s12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:587
_14 = &param0->currentStatementId;
_15 = *_14;
_16 = (frost$core$Int) {1u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 + _18;
_20 = (frost$core$Int) {_19};
_21 = &param0->currentStatementId;
*_21 = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:588
_24 = &param0->currentStatementId;
_25 = *_24;
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IR.frost:588:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:162
_28 = &(&local1)->value;
*_28 = _25;
_30 = *(&local1);
*(&local0) = _30;
_33 = *(&local0);
*(&local2) = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:589
_36 = &param0->currentBlock;
_37 = *_36;
_38 = &_37->ids;
_39 = *_38;
_40 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp13->value = _40;
_41 = ((frost$core$Object*) $tmp13);
_42 = ($fn14) _39->$class->vtable[4];
_42(_39, _41);
_44 = _41;
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:590
_47 = &param0->currentBlock;
_48 = *_47;
_49 = &_48->statements;
_50 = *_49;
_51 = ((frost$core$Object*) param1);
_52 = ($fn15) _50->$class->vtable[4];
_52(_50, _51);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:591
_55 = *(&local2);
return _55;

}
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR$Block$ID local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
int64_t _6;
frost$core$Int _7;
frost$core$Int* _8;
frost$core$Int* _11;
frost$core$Int _12;
frost$core$Int* _15;
org$frostlang$frostc$IR$Block$ID _17;
org$frostlang$frostc$IR$Block$ID _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:598
_1 = &param0->currentBlockID;
_2 = *_1;
_3 = (frost$core$Int) {1u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 + _5;
_7 = (frost$core$Int) {_6};
_8 = &param0->currentBlockID;
*_8 = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:599
_11 = &param0->currentBlockID;
_12 = *_11;
// begin inline call to org.frostlang.frostc.IR.Block.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Block.ID from IR.frost:599:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:378
_15 = &(&local1)->value;
*_15 = _12;
_17 = *(&local1);
*(&local0) = _17;
_20 = *(&local0);
return _20;

}
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Block$ID param1) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Block* local3 = NULL;
frost$core$Int _1;
frost$core$Int _4;
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$collections$CollectionView* _7;
$fn16 _8;
frost$core$Int _9;
frost$core$Bit _10;
frost$core$Range$LTfrost$core$Int$GT _11;
frost$core$Int _12;
frost$core$Int _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _17;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$collections$Array** _32;
frost$collections$Array* _33;
frost$core$Int _34;
frost$core$Int _36;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$collections$CollectionView* _43;
$fn17 _44;
frost$core$Int _45;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$core$Object*** _56;
frost$core$Object** _57;
frost$core$Int64 _58;
int64_t _59;
frost$core$Object* _60;
frost$core$Object* _61;
org$frostlang$frostc$IR$Block* _64;
frost$core$Object* _66;
org$frostlang$frostc$IR$Block* _68;
frost$core$Object* _69;
frost$core$Object* _72;
org$frostlang$frostc$IR$Block* _75;
org$frostlang$frostc$IR$Block$ID* _76;
org$frostlang$frostc$IR$Block$ID _77;
frost$core$Int _80;
frost$core$Int _81;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _90;
org$frostlang$frostc$IR$Block* _93;
frost$core$Object* _94;
org$frostlang$frostc$IR$Block** _96;
org$frostlang$frostc$IR$Block* _97;
frost$core$Object* _98;
org$frostlang$frostc$IR$Block** _100;
org$frostlang$frostc$IR$Block* _103;
frost$core$Object* _104;
org$frostlang$frostc$IR$Block* _109;
org$frostlang$frostc$IR$Block** _110;
org$frostlang$frostc$IR$Block* _111;
bool _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _117;
frost$core$Int _118;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
org$frostlang$frostc$IR$Block* _125;
frost$core$Object* _126;
frost$core$Int _130;
int64_t _131;
int64_t _132;
int64_t _133;
frost$core$Int _134;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _140;
int64_t _142;
int64_t _143;
bool _144;
frost$core$Bit _145;
bool _146;
int64_t _148;
int64_t _149;
int64_t _150;
frost$core$Int _151;
org$frostlang$frostc$IR$Block* _155;
frost$core$Object* _158;
org$frostlang$frostc$IR$Block* _160;
frost$core$Object* _161;
frost$core$Object* _164;
frost$collections$Array** _167;
frost$collections$Array* _168;
frost$core$Int _169;
org$frostlang$frostc$IR$Block* _170;
frost$core$Object* _171;
org$frostlang$frostc$IR$Block* _174;
frost$core$Object* _175;
org$frostlang$frostc$IR$Block** _177;
org$frostlang$frostc$IR$Block* _178;
frost$core$Object* _179;
org$frostlang$frostc$IR$Block** _181;
org$frostlang$frostc$IR$Block* _183;
frost$core$Object* _184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:603
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:604
_4 = (frost$core$Int) {0u};
_5 = &param0->blocks;
_6 = *_5;
_7 = ((frost$collections$CollectionView*) _6);
ITable* $tmp18 = _7->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_8 = $tmp18->methods[0];
_9 = _8(_7);
_10 = (frost$core$Bit) {false};
_11 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_4, _9, _10);
_12 = _11.min;
*(&local1) = _12;
_14 = _11.max;
_15 = _11.inclusive;
_16 = _15.value;
_17 = (frost$core$Int) {1u};
if (_16) goto block4; else goto block5;
block4:;
_19 = _12.value;
_20 = _14.value;
_21 = _19 <= _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block1; else goto block2;
block5:;
_25 = _12.value;
_26 = _14.value;
_27 = _25 < _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:605
_32 = &param0->blocks;
_33 = *_32;
_34 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:605:28
_36 = (frost$core$Int) {0u};
_37 = _34.value;
_38 = _36.value;
_39 = _37 >= _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block9; else goto block8;
block9:;
_43 = ((frost$collections$CollectionView*) _33);
ITable* $tmp19 = _43->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
_44 = $tmp19->methods[0];
_45 = _44(_43);
_46 = _34.value;
_47 = _45.value;
_48 = _46 < _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block7; else goto block8;
block8:;
_52 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _52, &$s21);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_56 = &_33->data;
_57 = *_56;
_58 = frost$core$Int64$init$frost$core$Int(_34);
_59 = _58.value;
_60 = _57[_59];
_61 = _60;
frost$core$Frost$ref$frost$core$Object$Q(_61);
_64 = ((org$frostlang$frostc$IR$Block*) _60);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_66 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local2);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local2) = _64;
_72 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_72);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:606
_75 = *(&local2);
_76 = &_75->id;
_77 = *_76;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from IR.frost:606:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:383
_80 = _77.value;
_81 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:383:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_84 = _80.value;
_85 = _81.value;
_86 = _84 == _85;
_87 = (frost$core$Bit) {_86};
_90 = _87.value;
if (_90) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:607
_93 = *(&local2);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = &param0->currentBlock;
_97 = *_96;
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = &param0->currentBlock;
*_100 = _93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:608
_103 = *(&local2);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:610
_109 = *(&local2);
_110 = &param0->currentBlock;
_111 = *_110;
_112 = _109 == _111;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:611
_117 = *(&local1);
_118 = (frost$core$Int) {1u};
_119 = _117.value;
_120 = _118.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local0) = _122;
goto block15;
block15:;
_125 = *(&local2);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_130 = *(&local1);
_131 = _14.value;
_132 = _130.value;
_133 = _131 - _132;
_134 = (frost$core$Int) {_133};
if (_16) goto block17; else goto block18;
block17:;
_136 = _134.value;
_137 = _17.value;
_138 = _136 >= _137;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block16; else goto block2;
block18:;
_142 = _134.value;
_143 = _17.value;
_144 = _142 > _143;
_145 = (frost$core$Bit) {_144};
_146 = _145.value;
if (_146) goto block16; else goto block2;
block16:;
_148 = _130.value;
_149 = _17.value;
_150 = _148 + _149;
_151 = (frost$core$Int) {_150};
*(&local1) = _151;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:614
_155 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block), (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(_155, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
_158 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = *(&local3);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_161);
*(&local3) = _155;
_164 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:615
_167 = &param0->blocks;
_168 = *_167;
_169 = *(&local0);
_170 = *(&local3);
_171 = ((frost$core$Object*) _170);
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(_168, _169, _171);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:616
_174 = *(&local3);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = &param0->currentBlock;
_178 = *_177;
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = &param0->currentBlock;
*_181 = _174;
_183 = *(&local3);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_184);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

org$frostlang$frostc$IR$Block** _1;
org$frostlang$frostc$IR$Block* _2;
org$frostlang$frostc$LinkedList** _3;
org$frostlang$frostc$LinkedList* _4;
frost$collections$CollectionView* _5;
$fn22 _6;
frost$core$Int _7;
frost$core$Int _8;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _16;
frost$core$Bit _19;
org$frostlang$frostc$IR$Block** _22;
org$frostlang$frostc$IR$Block* _23;
org$frostlang$frostc$LinkedList** _24;
org$frostlang$frostc$LinkedList* _25;
$fn23 _26;
frost$core$Object* _27;
org$frostlang$frostc$IR$Statement* _28;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Int _41;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
frost$core$Int _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
frost$core$Int _61;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _69;
frost$core$Int _71;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _79;
frost$core$Bit _82;
frost$core$Object* _83;
frost$core$Bit _87;
frost$core$Object* _88;
frost$core$Object* _91;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:620
_1 = &param0->currentBlock;
_2 = *_1;
_3 = &_2->statements;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp24 = _5->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
_6 = $tmp24->methods[0];
_7 = _6(_5);
_8 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:620:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_11 = _7.value;
_12 = _8.value;
_13 = _11 == _12;
_14 = (frost$core$Bit) {_13};
_16 = _14.value;
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:621
_19 = (frost$core$Bit) {false};
return _19;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:623
_22 = &param0->currentBlock;
_23 = *_22;
_24 = &_23->statements;
_25 = *_24;
_26 = ($fn25) _25->$class->vtable[6];
_27 = _26(_25);
_28 = ((org$frostlang$frostc$IR$Statement*) _27);
_29 = &_28->$rawValue;
_30 = *_29;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _30.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block5; else goto block6;
block6:;
_41 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _30.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block5; else goto block8;
block8:;
_51 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_54 = _30.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block5; else goto block10;
block10:;
_61 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:90
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_64 = _30.value;
_65 = _61.value;
_66 = _64 == _65;
_67 = (frost$core$Bit) {_66};
_69 = _67.value;
if (_69) goto block5; else goto block12;
block12:;
_71 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:625:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_74 = _30.value;
_75 = _71.value;
_76 = _74 == _75;
_77 = (frost$core$Bit) {_76};
_79 = _77.value;
if (_79) goto block5; else goto block14;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:626
_82 = (frost$core$Bit) {true};
_83 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_83);
return _82;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:629
_87 = (frost$core$Bit) {false};
_88 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_88);
return _87;
block4:;
_91 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_91);
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Int _13;
frost$collections$Array** _14;
frost$collections$Array* _15;
frost$collections$CollectionView* _16;
$fn26 _17;
frost$core$Int _18;
frost$core$Bit _19;
frost$core$Range$LTfrost$core$Int$GT _20;
frost$core$Int _21;
frost$core$Int _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _26;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _32;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$MutableString* _41;
frost$core$Int _42;
frost$core$Object* _43;
$fn27 _46;
frost$core$String* _47;
frost$core$String* _48;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$String* _56;
frost$collections$Array** _57;
frost$collections$Array* _58;
frost$core$Int _59;
frost$core$Int _61;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$collections$CollectionView* _68;
$fn28 _69;
frost$core$Int _70;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
frost$core$Object*** _81;
frost$core$Object** _82;
frost$core$Int64 _83;
int64_t _84;
frost$core$Object* _85;
frost$core$Object* _86;
org$frostlang$frostc$Type* _89;
frost$core$Object* _90;
$fn29 _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$String* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Int _118;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _128;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _134;
int64_t _136;
int64_t _137;
int64_t _138;
frost$core$Int _139;
frost$core$MutableString* _143;
frost$collections$Array** _144;
frost$collections$Array* _145;
frost$collections$CollectionView* _146;
$fn30 _147;
frost$core$String* _148;
frost$core$Object* _150;
frost$core$MutableString* _153;
frost$core$String* _154;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$MutableString* _159;
frost$core$Object* _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:636
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:637
_13 = (frost$core$Int) {0u};
_14 = &param0->locals;
_15 = *_14;
_16 = ((frost$collections$CollectionView*) _15);
ITable* $tmp31 = _16->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_17 = $tmp31->methods[0];
_18 = _17(_16);
_19 = (frost$core$Bit) {false};
_20 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_13, _18, _19);
_21 = _20.min;
*(&local1) = _21;
_23 = _20.max;
_24 = _20.inclusive;
_25 = _24.value;
_26 = (frost$core$Int) {1u};
if (_25) goto block4; else goto block5;
block4:;
_28 = _21.value;
_29 = _23.value;
_30 = _28 <= _29;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block1; else goto block2;
block5:;
_34 = _21.value;
_35 = _23.value;
_36 = _34 < _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:638
_41 = *(&local0);
_42 = *(&local1);
frost$core$Int$wrapper* $tmp32;
$tmp32 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp32->value = _42;
_43 = ((frost$core$Object*) $tmp32);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:638:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_46 = ($fn33) _43->$class->vtable[0];
_47 = _46(_43);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s34, _47);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, &$s35);
_57 = &param0->locals;
_58 = *_57;
_59 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:638:47
_61 = (frost$core$Int) {0u};
_62 = _59.value;
_63 = _61.value;
_64 = _62 >= _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block10; else goto block9;
block10:;
_68 = ((frost$collections$CollectionView*) _58);
ITable* $tmp36 = _68->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
_69 = $tmp36->methods[0];
_70 = _69(_68);
_71 = _59.value;
_72 = _70.value;
_73 = _71 < _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block8; else goto block9;
block9:;
_77 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _77, &$s38);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_81 = &_58->data;
_82 = *_81;
_83 = frost$core$Int64$init$frost$core$Int(_59);
_84 = _83.value;
_85 = _82[_84];
_86 = _85;
frost$core$Frost$ref$frost$core$Object$Q(_86);
_89 = ((org$frostlang$frostc$Type*) _85);
_90 = ((frost$core$Object*) _89);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:638:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_93 = ($fn39) _90->$class->vtable[0];
_94 = _93(_90);
_95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_56, _94);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_95, &$s40);
frost$core$MutableString$append$frost$core$String(_41, _103);
_105 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = _85;
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_115);
_118 = *(&local1);
_119 = _23.value;
_120 = _118.value;
_121 = _119 - _120;
_122 = (frost$core$Int) {_121};
if (_25) goto block13; else goto block14;
block13:;
_124 = _122.value;
_125 = _26.value;
_126 = _124 >= _125;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block12; else goto block2;
block14:;
_130 = _122.value;
_131 = _26.value;
_132 = _130 > _131;
_133 = (frost$core$Bit) {_132};
_134 = _133.value;
if (_134) goto block12; else goto block2;
block12:;
_136 = _118.value;
_137 = _26.value;
_138 = _136 + _137;
_139 = (frost$core$Int) {_138};
*(&local1) = _139;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:640
_143 = *(&local0);
_144 = &param0->blocks;
_145 = *_144;
_146 = ((frost$collections$CollectionView*) _145);
ITable* $tmp41 = _146->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_147 = $tmp41->methods[3];
_148 = _147(_146, &$s42);
frost$core$MutableString$append$frost$core$String(_143, _148);
_150 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:641
_153 = *(&local0);
_154 = frost$core$MutableString$finish$R$frost$core$String(_153);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$ref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = *(&local0);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local0) = ((frost$core$MutableString*) NULL);
return _154;

}
void org$frostlang$frostc$IR$cleanup(void* rawSelf) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

frost$core$Object* _1;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$core$Object* _5;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$core$Object* _9;
org$frostlang$frostc$IR$Block** _11;
org$frostlang$frostc$IR$Block* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->locals;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->blocks;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->currentBlock;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

