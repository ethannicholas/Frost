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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7242955456988393464, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x62\x6c\x6f\x63\x6b", 5, 1505885265403634530, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x0a", 2, 584938020052538053, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Block$ID param1) {
org$frostlang$frostc$IR$Block* param0 = (org$frostlang$frostc$IR$Block*) rawSelf;

frost$core$Bit _1;
frost$core$Bit* _2;
org$frostlang$frostc$LinkedList* _5;
frost$core$Object* _7;
org$frostlang$frostc$LinkedList** _9;
org$frostlang$frostc$LinkedList* _10;
frost$core$Object* _11;
org$frostlang$frostc$LinkedList** _13;
frost$core$Object* _15;
org$frostlang$frostc$LinkedList* _18;
frost$core$Object* _20;
org$frostlang$frostc$LinkedList** _22;
org$frostlang$frostc$LinkedList* _23;
frost$core$Object* _24;
org$frostlang$frostc$LinkedList** _26;
frost$core$Object* _28;
frost$core$Bit _31;
frost$core$Bit* _32;
org$frostlang$frostc$IR$Block$ID* _35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:358
_1 = (frost$core$Bit) {false};
_2 = &param0->forceReachable;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:360
_5 = (org$frostlang$frostc$LinkedList*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList), (frost$core$Class*) &org$frostlang$frostc$LinkedList$class);
org$frostlang$frostc$LinkedList$init(_5);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &param0->ids;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &param0->ids;
*_13 = _5;
_15 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_15);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:362
_18 = (org$frostlang$frostc$LinkedList*) frostObjectAlloc(sizeof(org$frostlang$frostc$LinkedList), (frost$core$Class*) &org$frostlang$frostc$LinkedList$class);
org$frostlang$frostc$LinkedList$init(_18);
_20 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->statements;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->statements;
*_26 = _18;
_28 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:368
_31 = (frost$core$Bit) {false};
_32 = &param0->containsExplicitCode;
*_32 = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:371
_35 = &param0->id;
*_35 = param1;
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
frost$core$Object* _52;
frost$collections$Iterator* _54;
frost$core$Object* _55;
frost$core$Object* _58;
org$frostlang$frostc$LinkedList** _61;
org$frostlang$frostc$LinkedList* _62;
frost$collections$Iterable* _63;
$fn4 _64;
frost$collections$Iterator* _65;
frost$core$Object* _67;
frost$collections$Iterator* _69;
frost$core$Object* _70;
frost$core$Object* _73;
frost$collections$Iterator* _77;
$fn5 _78;
frost$core$Bit _79;
bool _82;
bool _83;
frost$core$Bit _84;
bool _86;
frost$core$MutableString* _89;
frost$collections$Iterator* _90;
$fn6 _91;
frost$core$Object* _92;
org$frostlang$frostc$IR$Statement$ID _93;
frost$core$Object* _94;
$fn7 _97;
frost$core$String* _98;
frost$core$Object* _100;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$MutableString* _108;
frost$core$MutableString* _111;
frost$collections$Iterator* _112;
$fn8 _113;
frost$core$Object* _114;
org$frostlang$frostc$IR$Statement* _115;
frost$core$Object* _116;
$fn9 _119;
frost$core$String* _120;
frost$core$Object* _122;
frost$core$Object* _125;
frost$core$MutableString* _128;
frost$core$MutableString* _132;
frost$core$String* _133;
frost$core$Object* _134;
frost$core$Object* _136;
frost$collections$Iterator* _138;
frost$core$Object* _139;
frost$collections$Iterator* _142;
frost$core$Object* _143;
frost$core$MutableString* _146;
frost$core$Object* _147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:376
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = &param0->id;
_3 = *_2;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.get_asString():frost.core.String from IR.frost:376:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:352
_6 = _3.value;
frost$core$Int$wrapper* $tmp10;
$tmp10 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp10->value = _6;
_7 = ((frost$core$Object*) $tmp10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:352:24
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:377
_46 = &param0->ids;
_47 = *_46;
_48 = ((frost$collections$Iterable*) _47);
ITable* $tmp15 = _48->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp15 = $tmp15->next;
}
_49 = $tmp15->methods[0];
_50 = _49(_48);
*(&local1) = ((frost$collections$Iterator*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = _50;
_58 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:378
_61 = &param0->statements;
_62 = *_61;
_63 = ((frost$collections$Iterable*) _62);
ITable* $tmp16 = _63->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
_64 = $tmp16->methods[0];
_65 = _64(_63);
*(&local2) = ((frost$collections$Iterator*) NULL);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local2);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local2) = _65;
_73 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_73);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:379
goto block3;
block3:;
_77 = *(&local1);
ITable* $tmp17 = _77->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_78 = $tmp17->methods[0];
_79 = _78(_77);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:379:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_82 = _79.value;
_83 = !_82;
_84 = (frost$core$Bit) {_83};
_86 = _84.value;
if (_86) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:380
_89 = *(&local0);
_90 = *(&local1);
ITable* $tmp18 = _90->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_91 = $tmp18->methods[1];
_92 = _91(_90);
_93 = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) _92)->value;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp19;
$tmp19 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp19->value = _93;
_94 = ((frost$core$Object*) $tmp19);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:380:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_97 = ($fn20) _94->$class->vtable[0];
_98 = _97(_94);
frost$core$MutableString$append$frost$core$String(_89, _98);
_100 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_103 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:381
_108 = *(&local0);
frost$core$MutableString$append$frost$core$String(_108, &$s21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
_111 = *(&local0);
_112 = *(&local2);
ITable* $tmp22 = _112->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp22 = $tmp22->next;
}
_113 = $tmp22->methods[1];
_114 = _113(_112);
_115 = ((org$frostlang$frostc$IR$Statement*) _114);
_116 = ((frost$core$Object*) _115);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_119 = ($fn23) _116->$class->vtable[0];
_120 = _119(_116);
frost$core$MutableString$append$frost$core$String(_111, _120);
_122 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_125 = _114;
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:383
_128 = *(&local0);
frost$core$MutableString$append$frost$core$String(_128, &$s24);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:385
_132 = *(&local0);
_133 = frost$core$MutableString$finish$R$frost$core$String(_132);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = *(&local2);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local2) = ((frost$collections$Iterator*) NULL);
_142 = *(&local1);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local1) = ((frost$collections$Iterator*) NULL);
_146 = *(&local0);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
*(&local0) = ((frost$core$MutableString*) NULL);
return _133;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:332
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

