#include "org/frostlang/frostc/Compiler/CoercionKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$CoercionKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$CoercionKey*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$CoercionKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$CoercionKey$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Compiler$CoercionKey$_frost$core$Equatable, { org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$CoercionKey$class_type org$frostlang$frostc$Compiler$CoercionKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$CoercionKey$_frost$collections$HashKey, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$CoercionKey$cleanup, org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn6)(frost$collections$HashKey*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x6f\x65\x72\x63\x69\x6f\x6e\x4b\x65\x79", 41, -6870882282179802560, NULL };

void org$frostlang$frostc$Compiler$CoercionKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler$CoercionKey* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$Type* param2) {

frost$core$Object* _1;
org$frostlang$frostc$ASTNode** _3;
org$frostlang$frostc$ASTNode* _4;
frost$core$Object* _5;
org$frostlang$frostc$ASTNode** _7;
frost$core$Object* _10;
org$frostlang$frostc$Type** _12;
org$frostlang$frostc$Type* _13;
frost$core$Object* _14;
org$frostlang$frostc$Type** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:269
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->expr;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->expr;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:270
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->target;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->target;
*_16 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit(org$frostlang$frostc$Compiler$CoercionKey* param0, org$frostlang$frostc$Compiler$CoercionKey* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$ASTNode** _1;
org$frostlang$frostc$ASTNode* _2;
org$frostlang$frostc$ASTNode** _3;
org$frostlang$frostc$ASTNode* _4;
bool _5;
frost$core$Bit _6;
bool _7;
org$frostlang$frostc$Type** _9;
org$frostlang$frostc$Type* _10;
org$frostlang$frostc$Type** _11;
org$frostlang$frostc$Type* _12;
org$frostlang$frostc$Symbol* _15;
frost$core$String** _16;
frost$core$String* _17;
org$frostlang$frostc$Symbol* _18;
frost$core$String** _19;
frost$core$String* _20;
frost$core$Bit _21;
bool _22;
org$frostlang$frostc$Type$Kind* _24;
org$frostlang$frostc$Type$Kind _25;
frost$core$Equatable* _26;
frost$core$Equatable* _27;
org$frostlang$frostc$Type$Kind* _28;
org$frostlang$frostc$Type$Kind _29;
frost$core$Equatable* _30;
$fn2 _31;
frost$core$Bit _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Bit _41;
frost$core$Bit _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:275
_1 = &param0->expr;
_2 = *_1;
_3 = &param1->expr;
_4 = *_3;
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
_9 = &param0->target;
_10 = *_9;
_11 = &param1->target;
_12 = *_11;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Compiler.frost:275:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:277
_15 = ((org$frostlang$frostc$Symbol*) _10);
_16 = &_15->name;
_17 = *_16;
_18 = ((org$frostlang$frostc$Symbol*) _12);
_19 = &_18->name;
_20 = *_19;
_21 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_17, _20);
_22 = _21.value;
if (_22) goto block5; else goto block6;
block5:;
_24 = &_10->typeKind;
_25 = *_24;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3;
$tmp3 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3->value = _25;
_26 = ((frost$core$Equatable*) $tmp3);
_27 = _26;
_28 = &_12->typeKind;
_29 = *_28;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = _29;
_30 = ((frost$core$Equatable*) $tmp4);
ITable* $tmp5 = _27->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5 = $tmp5->next;
}
_31 = $tmp5->methods[0];
_32 = _31(_27, _30);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local1) = _32;
goto block7;
block6:;
*(&local1) = _21;
goto block7;
block7:;
_41 = *(&local1);
*(&local0) = _41;
goto block3;
block2:;
*(&local0) = _6;
goto block3;
block3:;
_47 = *(&local0);
return _47;

}
frost$core$Int org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$CoercionKey* param0) {

org$frostlang$frostc$ASTNode** _1;
org$frostlang$frostc$ASTNode* _2;
frost$core$Object* _3;
frost$core$Int _4;
org$frostlang$frostc$Type** _5;
org$frostlang$frostc$Type* _6;
frost$collections$HashKey* _7;
$fn6 _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:280
_1 = &param0->expr;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_4, _3);
_5 = &param0->target;
_6 = *_5;
_7 = ((frost$collections$HashKey*) _6);
ITable* $tmp7 = _7->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp7 = $tmp7->next;
}
_8 = $tmp7->methods[0];
_9 = _8(_7);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:280:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_12 = _4.value;
_13 = _9.value;
_14 = _12 ^ _13;
_15 = (frost$core$Int) {_14};
return _15;

}
void org$frostlang$frostc$Compiler$CoercionKey$cleanup(org$frostlang$frostc$Compiler$CoercionKey* param0) {

frost$core$Object* _1;
org$frostlang$frostc$ASTNode** _3;
org$frostlang$frostc$ASTNode* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
org$frostlang$frostc$Type* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:263
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->expr;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->target;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

