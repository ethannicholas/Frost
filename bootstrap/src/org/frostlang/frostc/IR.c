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
#include "frost/core/Equatable.h"
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
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef frost$core$Bit (*$fn9)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn10)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn11)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Bit (*$fn12)(org$frostlang$frostc$IR*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef void (*$fn20)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn21)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn29)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Object* (*$fn31)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$Int (*$fn34)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn35)(frost$core$Object*);
typedef frost$core$String* (*$fn36)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);
typedef frost$core$String* (*$fn45)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, 1296235477144720067, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, -1270692749394500321, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -5934919833545445361, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x73\x74\x20\x52\x45\x46\x28\x24\x36\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x2d\x3e\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x20\x28\x69\x6d\x70\x6c\x69\x63\x69\x74\x29", 82, 8435494635691553469, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$init(void* rawSelf) {
org$frostlang$frostc$IR* param0 = (org$frostlang$frostc$IR*) rawSelf;

frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _4;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$Array** _10;
frost$core$Object* _12;
frost$collections$Array* _15;
frost$collections$Array* _16;
frost$core$Object* _18;
frost$collections$Array** _20;
frost$collections$Array* _21;
frost$core$Object* _22;
frost$collections$Array** _24;
frost$core$Object* _26;
frost$core$Int _29;
frost$core$Int* _30;
frost$core$Int _33;
frost$core$Int* _34;
$fn2 _37;
org$frostlang$frostc$IR$Block$ID _38;
$fn3 _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:562
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->locals;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->locals;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:564
_15 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_16 = _15;
frost$collections$Array$init(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->blocks;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->blocks;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:567
_29 = (frost$core$Int) {18446744073709551615u};
_30 = &param0->currentStatementId;
*_30 = _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:570
_33 = (frost$core$Int) {18446744073709551615u};
_34 = &param0->currentBlockID;
*_34 = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:578
_37 = ($fn4) param0->$class->vtable[3];
_38 = _37(param0, &$s5);
_39 = ($fn6) param0->$class->vtable[4];
_39(param0, _38);
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
frost$core$Object* _24;
$fn8 _25;
frost$core$String* _26;
frost$core$Equatable* _27;
frost$core$Equatable* _28;
frost$core$Equatable* _29;
$fn9 _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$core$Object* _37;
frost$core$Int* _40;
frost$core$Int _41;
frost$core$Int* _44;
org$frostlang$frostc$IR$Statement$ID _46;
org$frostlang$frostc$IR$Statement$ID _49;
org$frostlang$frostc$IR$Block** _52;
org$frostlang$frostc$IR$Block* _53;
org$frostlang$frostc$LinkedList** _54;
org$frostlang$frostc$LinkedList* _55;
org$frostlang$frostc$LinkedList* _56;
org$frostlang$frostc$IR$Statement$ID _57;
frost$core$Object* _58;
$fn10 _59;
frost$core$Object* _61;
org$frostlang$frostc$IR$Block** _64;
org$frostlang$frostc$IR$Block* _65;
org$frostlang$frostc$LinkedList** _66;
org$frostlang$frostc$LinkedList* _67;
org$frostlang$frostc$LinkedList* _68;
frost$core$Object* _69;
$fn11 _70;
org$frostlang$frostc$IR$Statement$ID _73;
_0 = ($fn12) param0->$class->vtable[5];
_1 = _0(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:584:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {585u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _10, &$s14);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:586
_14 = &param0->currentStatementId;
_15 = *_14;
_16 = (frost$core$Int) {1u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 + _18;
_20 = (frost$core$Int) {_19};
_21 = &param0->currentStatementId;
*_21 = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:587
_24 = ((frost$core$Object*) param1);
_25 = ($fn15) _24->$class->vtable[0];
_26 = _25(_24);
_27 = ((frost$core$Equatable*) _26);
_28 = _27;
_29 = ((frost$core$Equatable*) &$s16);
ITable* $tmp17 = _28->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
_30 = $tmp17->methods[1];
_31 = _30(_28, _29);
_32 = _31.value;
if (_32) goto block4; else goto block5;
block5:;
_34 = (frost$core$Int) {587u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s18, _34);
abort(); // unreachable
block4:;
_37 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:588
_40 = &param0->currentStatementId;
_41 = *_40;
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IR.frost:588:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
_44 = &(&local1)->value;
*_44 = _41;
_46 = *(&local1);
*(&local0) = _46;
_49 = *(&local0);
*(&local2) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:589
_52 = &param0->currentBlock;
_53 = *_52;
_54 = &_53->ids;
_55 = *_54;
_56 = _55;
_57 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp19;
$tmp19 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp19->value = _57;
_58 = ((frost$core$Object*) $tmp19);
_59 = ($fn20) _56->$class->vtable[4];
_59(_56, _58);
_61 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:590
_64 = &param0->currentBlock;
_65 = *_64;
_66 = &_65->statements;
_67 = *_66;
_68 = _67;
_69 = ((frost$core$Object*) param1);
_70 = ($fn21) _68->$class->vtable[4];
_70(_68, _69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:591
_73 = *(&local2);
return _73;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:377
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
$fn22 _8;
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
frost$collections$Array* _34;
frost$core$Int _35;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$collections$CollectionView* _44;
$fn23 _45;
frost$core$Int _46;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$Object*** _57;
frost$core$Object** _58;
frost$core$Int64 _59;
int64_t _60;
frost$core$Object* _61;
frost$core$Object* _62;
org$frostlang$frostc$IR$Block* _65;
frost$core$Object* _67;
org$frostlang$frostc$IR$Block* _69;
frost$core$Object* _70;
frost$core$Object* _73;
org$frostlang$frostc$IR$Block* _76;
org$frostlang$frostc$IR$Block$ID* _77;
org$frostlang$frostc$IR$Block$ID _78;
frost$core$Int _81;
frost$core$Int _82;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _91;
org$frostlang$frostc$IR$Block* _94;
frost$core$Object* _95;
org$frostlang$frostc$IR$Block** _97;
org$frostlang$frostc$IR$Block* _98;
frost$core$Object* _99;
org$frostlang$frostc$IR$Block** _101;
org$frostlang$frostc$IR$Block* _104;
frost$core$Object* _105;
org$frostlang$frostc$IR$Block* _110;
org$frostlang$frostc$IR$Block** _111;
org$frostlang$frostc$IR$Block* _112;
bool _113;
frost$core$Bit _114;
bool _115;
frost$core$Int _118;
frost$core$Int _119;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
org$frostlang$frostc$IR$Block* _126;
frost$core$Object* _127;
frost$core$Int _131;
int64_t _132;
int64_t _133;
int64_t _134;
frost$core$Int _135;
int64_t _137;
int64_t _138;
bool _139;
frost$core$Bit _140;
bool _141;
int64_t _143;
int64_t _144;
bool _145;
frost$core$Bit _146;
bool _147;
int64_t _149;
int64_t _150;
int64_t _151;
frost$core$Int _152;
org$frostlang$frostc$IR$Block* _156;
frost$core$Object* _159;
org$frostlang$frostc$IR$Block* _161;
frost$core$Object* _162;
frost$core$Object* _165;
frost$collections$Array** _168;
frost$collections$Array* _169;
frost$collections$Array* _170;
frost$core$Int _171;
org$frostlang$frostc$IR$Block* _172;
frost$core$Object* _173;
org$frostlang$frostc$IR$Block* _176;
frost$core$Object* _177;
org$frostlang$frostc$IR$Block** _179;
org$frostlang$frostc$IR$Block* _180;
frost$core$Object* _181;
org$frostlang$frostc$IR$Block** _183;
org$frostlang$frostc$IR$Block* _185;
frost$core$Object* _186;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:603
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:604
_4 = (frost$core$Int) {0u};
_5 = &param0->blocks;
_6 = *_5;
_7 = ((frost$collections$CollectionView*) _6);
ITable* $tmp24 = _7->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
_8 = $tmp24->methods[0];
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
_34 = _33;
_35 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:605:28
_37 = (frost$core$Int) {0u};
_38 = _35.value;
_39 = _37.value;
_40 = _38 >= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block9; else goto block8;
block9:;
_44 = ((frost$collections$CollectionView*) _34);
ITable* $tmp25 = _44->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
_45 = $tmp25->methods[0];
_46 = _45(_44);
_47 = _35.value;
_48 = _46.value;
_49 = _47 < _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block7; else goto block8;
block8:;
_53 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _53, &$s27);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_57 = &_34->data;
_58 = *_57;
_59 = frost$core$Int64$init$frost$core$Int(_35);
_60 = _59.value;
_61 = _58[_60];
_62 = _61;
frost$core$Frost$ref$frost$core$Object$Q(_62);
_65 = ((org$frostlang$frostc$IR$Block*) _61);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local2);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local2) = _65;
_73 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_73);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:606
_76 = *(&local2);
_77 = &_76->id;
_78 = *_77;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from IR.frost:606:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
_81 = _78.value;
_82 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_85 = _81.value;
_86 = _82.value;
_87 = _85 == _86;
_88 = (frost$core$Bit) {_87};
_91 = _88.value;
if (_91) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:607
_94 = *(&local2);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = &param0->currentBlock;
_98 = *_97;
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = &param0->currentBlock;
*_101 = _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:608
_104 = *(&local2);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:610
_110 = *(&local2);
_111 = &param0->currentBlock;
_112 = *_111;
_113 = _110 == _112;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:611
_118 = *(&local1);
_119 = (frost$core$Int) {1u};
_120 = _118.value;
_121 = _119.value;
_122 = _120 + _121;
_123 = (frost$core$Int) {_122};
*(&local0) = _123;
goto block15;
block15:;
_126 = *(&local2);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_131 = *(&local1);
_132 = _14.value;
_133 = _131.value;
_134 = _132 - _133;
_135 = (frost$core$Int) {_134};
if (_16) goto block17; else goto block18;
block17:;
_137 = _135.value;
_138 = _17.value;
_139 = _137 >= _138;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block16; else goto block2;
block18:;
_143 = _135.value;
_144 = _17.value;
_145 = _143 > _144;
_146 = (frost$core$Bit) {_145};
_147 = _146.value;
if (_147) goto block16; else goto block2;
block16:;
_149 = _131.value;
_150 = _17.value;
_151 = _149 + _150;
_152 = (frost$core$Int) {_151};
*(&local1) = _152;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:614
_156 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block), (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(_156, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
_159 = ((frost$core$Object*) _156);
frost$core$Frost$ref$frost$core$Object$Q(_159);
_161 = *(&local3);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_162);
*(&local3) = _156;
_165 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_165);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:615
_168 = &param0->blocks;
_169 = *_168;
_170 = _169;
_171 = *(&local0);
_172 = *(&local3);
_173 = ((frost$core$Object*) _172);
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(_170, _171, _173);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:616
_176 = *(&local3);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_177);
_179 = &param0->currentBlock;
_180 = *_179;
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
_183 = &param0->currentBlock;
*_183 = _176;
_185 = *(&local3);
_186 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_186);
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
$fn28 _6;
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
org$frostlang$frostc$LinkedList* _26;
$fn29 _27;
frost$core$Object* _28;
org$frostlang$frostc$IR$Statement* _29;
frost$core$Int* _30;
frost$core$Int _31;
frost$core$Int _32;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _40;
frost$core$Int _42;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _50;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$Int _62;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$core$Bit _83;
frost$core$Object* _84;
frost$core$Bit _88;
frost$core$Object* _89;
frost$core$Object* _92;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:620
_1 = &param0->currentBlock;
_2 = *_1;
_3 = &_2->statements;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp30 = _5->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_6 = $tmp30->methods[0];
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
_26 = _25;
_27 = ($fn31) _26->$class->vtable[6];
_28 = _27(_26);
_29 = ((org$frostlang$frostc$IR$Statement*) _28);
_30 = &_29->$rawValue;
_31 = *_30;
_32 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_35 = _31.value;
_36 = _32.value;
_37 = _35 == _36;
_38 = (frost$core$Bit) {_37};
_40 = _38.value;
if (_40) goto block5; else goto block6;
block6:;
_42 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_45 = _31.value;
_46 = _42.value;
_47 = _45 == _46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
if (_50) goto block5; else goto block8;
block8:;
_52 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = _31.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block5; else goto block10;
block10:;
_62 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:624:90
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_65 = _31.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block5; else goto block12;
block12:;
_72 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:625:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _31.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block5; else goto block14;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:626
_83 = (frost$core$Bit) {true};
_84 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_84);
return _83;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:629
_88 = (frost$core$Bit) {false};
_89 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_89);
return _88;
block4:;
_92 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_92);
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
$fn32 _17;
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
$fn33 _46;
frost$core$String* _47;
frost$core$String* _48;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$String* _56;
frost$collections$Array** _57;
frost$collections$Array* _58;
frost$collections$Array* _59;
frost$core$Int _60;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$collections$CollectionView* _69;
$fn34 _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$core$Object*** _82;
frost$core$Object** _83;
frost$core$Int64 _84;
int64_t _85;
frost$core$Object* _86;
frost$core$Object* _87;
org$frostlang$frostc$Type* _90;
frost$core$Object* _91;
$fn35 _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$Object* _97;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$String* _104;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Int _119;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
int64_t _137;
int64_t _138;
int64_t _139;
frost$core$Int _140;
frost$core$MutableString* _144;
frost$collections$Array** _145;
frost$collections$Array* _146;
frost$collections$CollectionView* _147;
$fn36 _148;
frost$core$String* _149;
frost$core$Object* _151;
frost$core$MutableString* _154;
frost$core$String* _155;
frost$core$Object* _156;
frost$core$Object* _158;
frost$core$MutableString* _160;
frost$core$Object* _161;
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
ITable* $tmp37 = _16->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_17 = $tmp37->methods[0];
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
frost$core$Int$wrapper* $tmp38;
$tmp38 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp38->value = _42;
_43 = ((frost$core$Object*) $tmp38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:638:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_46 = ($fn39) _43->$class->vtable[0];
_47 = _46(_43);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, _47);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, &$s41);
_57 = &param0->locals;
_58 = *_57;
_59 = _58;
_60 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:638:47
_62 = (frost$core$Int) {0u};
_63 = _60.value;
_64 = _62.value;
_65 = _63 >= _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block10; else goto block9;
block10:;
_69 = ((frost$collections$CollectionView*) _59);
ITable* $tmp42 = _69->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_70 = $tmp42->methods[0];
_71 = _70(_69);
_72 = _60.value;
_73 = _71.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block8; else goto block9;
block9:;
_78 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _78, &$s44);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_82 = &_59->data;
_83 = *_82;
_84 = frost$core$Int64$init$frost$core$Int(_60);
_85 = _84.value;
_86 = _83[_85];
_87 = _86;
frost$core$Frost$ref$frost$core$Object$Q(_87);
_90 = ((org$frostlang$frostc$Type*) _86);
_91 = ((frost$core$Object*) _90);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:638:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_94 = ($fn45) _91->$class->vtable[0];
_95 = _94(_91);
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_56, _95);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_97);
_99 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_96, &$s46);
frost$core$MutableString$append$frost$core$String(_41, _104);
_106 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = _86;
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_116);
_119 = *(&local1);
_120 = _23.value;
_121 = _119.value;
_122 = _120 - _121;
_123 = (frost$core$Int) {_122};
if (_25) goto block13; else goto block14;
block13:;
_125 = _123.value;
_126 = _26.value;
_127 = _125 >= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block12; else goto block2;
block14:;
_131 = _123.value;
_132 = _26.value;
_133 = _131 > _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block12; else goto block2;
block12:;
_137 = _119.value;
_138 = _26.value;
_139 = _137 + _138;
_140 = (frost$core$Int) {_139};
*(&local1) = _140;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:640
_144 = *(&local0);
_145 = &param0->blocks;
_146 = *_145;
_147 = ((frost$collections$CollectionView*) _146);
ITable* $tmp47 = _147->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_148 = $tmp47->methods[3];
_149 = _148(_147, &$s48);
frost$core$MutableString$append$frost$core$String(_144, _149);
_151 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_151);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:641
_154 = *(&local0);
_155 = frost$core$MutableString$finish$R$frost$core$String(_154);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_158);
_160 = *(&local0);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_161);
*(&local0) = ((frost$core$MutableString*) NULL);
return _155;

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

