#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Block$class_type org$frostlang$frostc$IR$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Block$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn4)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$Object* (*$fn8)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7242955456988393464, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b", 5, 1505885265403634530, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x0a", 2, 584938020052538053, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Block$ID param1) {
org$frostlang$frostc$IR$Block* param0 = (org$frostlang$frostc$IR$Block*) rawSelf;

frost$core$Bit _1;
frost$core$Bit* _2;
org$frostlang$frostc$LinkedList* _5;
org$frostlang$frostc$LinkedList* _6;
frost$core$Object* _8;
org$frostlang$frostc$LinkedList** _10;
org$frostlang$frostc$LinkedList* _11;
frost$core$Object* _12;
org$frostlang$frostc$LinkedList** _14;
frost$core$Object* _16;
org$frostlang$frostc$LinkedList* _19;
org$frostlang$frostc$LinkedList* _20;
frost$core$Object* _22;
org$frostlang$frostc$LinkedList** _24;
org$frostlang$frostc$LinkedList* _25;
frost$core$Object* _26;
org$frostlang$frostc$LinkedList** _28;
frost$core$Object* _30;
frost$core$Bit _33;
frost$core$Bit* _34;
org$frostlang$frostc$IR$Block$ID* _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:398
_1 = (frost$core$Bit) {false};
_2 = &param0->forceReachable;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:400
_5 = (org$frostlang$frostc$LinkedList*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList), (frost$core$Class*) &org$frostlang$frostc$LinkedList$class);
_6 = _5;
org$frostlang$frostc$LinkedList$init(_6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = &param0->ids;
_11 = *_10;
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = &param0->ids;
*_14 = _5;
_16 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:402
_19 = (org$frostlang$frostc$LinkedList*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList), (frost$core$Class*) &org$frostlang$frostc$LinkedList$class);
_20 = _19;
org$frostlang$frostc$LinkedList$init(_20);
_22 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &param0->statements;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &param0->statements;
*_28 = _19;
_30 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_30);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:408
_33 = (frost$core$Bit) {false};
_34 = &param0->containsExplicitCode;
*_34 = _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:411
_37 = &param0->id;
*_37 = param1;
return;

}
frost$core$String* org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$IR$Block* param0 = (org$frostlang$frostc$IR$Block*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$collections$Iterator* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
frost$core$MutableString* _1;
org$frostlang$frostc$IR$Block$ID* _2;
org$frostlang$frostc$IR$Block$ID _3;
frost$core$Int _6;
frost$core$Object* _7;
$fn2 _10;
frost$core$String* _11;
frost$core$String* _12;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$String* _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$String* _30;
frost$core$Object* _33;
frost$core$MutableString* _35;
frost$core$Object* _36;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
org$frostlang$frostc$LinkedList** _46;
org$frostlang$frostc$LinkedList* _47;
frost$collections$Iterable* _48;
$fn3 _49;
frost$collections$Iterator* _50;
frost$collections$Iterator* _51;
frost$core$Object* _53;
frost$collections$Iterator* _55;
frost$core$Object* _56;
frost$core$Object* _59;
org$frostlang$frostc$LinkedList** _62;
org$frostlang$frostc$LinkedList* _63;
frost$collections$Iterable* _64;
$fn4 _65;
frost$collections$Iterator* _66;
frost$collections$Iterator* _67;
frost$core$Object* _69;
frost$collections$Iterator* _71;
frost$core$Object* _72;
frost$core$Object* _75;
frost$collections$Iterator* _79;
frost$collections$Iterator* _80;
$fn5 _81;
frost$core$Bit _82;
bool _85;
bool _86;
frost$core$Bit _87;
bool _89;
frost$core$MutableString* _92;
frost$collections$Iterator* _93;
frost$collections$Iterator* _94;
$fn6 _95;
frost$core$Object* _96;
org$frostlang$frostc$IR$Statement$ID _97;
frost$core$Object* _98;
$fn7 _101;
frost$core$String* _102;
frost$core$Object* _104;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$MutableString* _112;
frost$core$MutableString* _115;
frost$collections$Iterator* _116;
frost$collections$Iterator* _117;
$fn8 _118;
frost$core$Object* _119;
org$frostlang$frostc$IR$Statement* _120;
frost$core$Object* _121;
$fn9 _124;
frost$core$String* _125;
frost$core$Object* _127;
frost$core$Object* _130;
frost$core$MutableString* _133;
frost$core$MutableString* _137;
frost$core$String* _138;
frost$core$Object* _139;
frost$core$Object* _141;
frost$collections$Iterator* _143;
frost$core$Object* _144;
frost$collections$Iterator* _147;
frost$core$Object* _148;
frost$core$MutableString* _151;
frost$core$Object* _152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:416
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = &param0->id;
_3 = *_2;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.get_asString():frost.core.String from IR.frost:416:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:392
_6 = _3.value;
frost$core$Int$wrapper* $tmp10;
$tmp10 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp10->value = _6;
_7 = ((frost$core$Object*) $tmp10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:392:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_10 = ($fn11) _7->$class->vtable[0];
_11 = _10(_7);
_12 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s12, _11);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_12, &$s13);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = _7;
frost$core$Frost$unref$frost$core$Object$Q(_27);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_20, &$s14);
frost$core$MutableString$init$frost$core$String(_1, _30);
*(&local0) = ((frost$core$MutableString*) NULL);
_33 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local0);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local0) = _1;
_39 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:417
_46 = &param0->ids;
_47 = *_46;
_48 = ((frost$collections$Iterable*) _47);
ITable* $tmp15 = _48->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp15 = $tmp15->next;
}
_49 = $tmp15->methods[0];
_50 = _49(_48);
_51 = _50;
*(&local1) = ((frost$collections$Iterator*) NULL);
_53 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = _51;
_59 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:418
_62 = &param0->statements;
_63 = *_62;
_64 = ((frost$collections$Iterable*) _63);
ITable* $tmp16 = _64->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
_65 = $tmp16->methods[0];
_66 = _65(_64);
_67 = _66;
*(&local2) = ((frost$collections$Iterator*) NULL);
_69 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local2);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local2) = _67;
_75 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:419
goto block3;
block3:;
_79 = *(&local1);
_80 = _79;
ITable* $tmp17 = _80->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_81 = $tmp17->methods[0];
_82 = _81(_80);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:419:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_85 = _82.value;
_86 = !_85;
_87 = (frost$core$Bit) {_86};
_89 = _87.value;
if (_89) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:420
_92 = *(&local0);
_93 = *(&local1);
_94 = _93;
ITable* $tmp18 = _94->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_95 = $tmp18->methods[1];
_96 = _95(_94);
_97 = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) _96)->value;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp19;
$tmp19 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp19->value = _97;
_98 = ((frost$core$Object*) $tmp19);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:420:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_101 = ($fn20) _98->$class->vtable[0];
_102 = _101(_98);
frost$core$MutableString$append$frost$core$String(_92, _102);
_104 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_107 = _98;
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:421
_112 = *(&local0);
frost$core$MutableString$append$frost$core$String(_112, &$s21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:422
_115 = *(&local0);
_116 = *(&local2);
_117 = _116;
ITable* $tmp22 = _117->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp22 = $tmp22->next;
}
_118 = $tmp22->methods[1];
_119 = _118(_117);
_120 = ((org$frostlang$frostc$IR$Statement*) _119);
_121 = ((frost$core$Object*) _120);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:422:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_124 = ($fn23) _121->$class->vtable[0];
_125 = _124(_121);
frost$core$MutableString$append$frost$core$String(_115, _125);
_127 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_130 = _119;
frost$core$Frost$unref$frost$core$Object$Q(_130);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:423
_133 = *(&local0);
frost$core$MutableString$append$frost$core$String(_133, &$s24);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:425
_137 = *(&local0);
_138 = frost$core$MutableString$finish$R$frost$core$String(_137);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_141);
_143 = *(&local2);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_144);
*(&local2) = ((frost$collections$Iterator*) NULL);
_147 = *(&local1);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
*(&local1) = ((frost$collections$Iterator*) NULL);
_151 = *(&local0);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_152);
*(&local0) = ((frost$core$MutableString*) NULL);
return _138;

}
void org$frostlang$frostc$IR$Block$cleanup(void* rawSelf) {
org$frostlang$frostc$IR$Block* param0 = (org$frostlang$frostc$IR$Block*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$LinkedList** _3;
org$frostlang$frostc$LinkedList* _4;
frost$core$Object* _5;
org$frostlang$frostc$LinkedList** _7;
org$frostlang$frostc$LinkedList* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:372
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->ids;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->statements;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

