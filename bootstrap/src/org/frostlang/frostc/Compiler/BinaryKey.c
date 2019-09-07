#include "org/frostlang/frostc/Compiler/BinaryKey.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$BinaryKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$BinaryKey*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$BinaryKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$BinaryKey$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Compiler$BinaryKey$_frost$core$Equatable, { org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$BinaryKey$class_type org$frostlang$frostc$Compiler$BinaryKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$BinaryKey$_frost$collections$HashKey, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$BinaryKey$cleanup, org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x42\x69\x6e\x61\x72\x79\x4b\x65\x79", 39, 1144513384746375751, NULL };

void org$frostlang$frostc$Compiler$BinaryKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler$BinaryKey* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$expression$Binary$Operator param2, org$frostlang$frostc$ASTNode* param3) {

frost$core$Object* _1;
org$frostlang$frostc$ASTNode** _3;
org$frostlang$frostc$ASTNode* _4;
frost$core$Object* _5;
org$frostlang$frostc$ASTNode** _7;
org$frostlang$frostc$expression$Binary$Operator* _10;
frost$core$Object* _13;
org$frostlang$frostc$ASTNode** _15;
org$frostlang$frostc$ASTNode* _16;
frost$core$Object* _17;
org$frostlang$frostc$ASTNode** _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:292
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->left;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->left;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:293
_10 = &param0->op;
*_10 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:294
_13 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->right;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->right;
*_19 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit(org$frostlang$frostc$Compiler$BinaryKey* param0, org$frostlang$frostc$Compiler$BinaryKey* param1) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$ASTNode** _1;
org$frostlang$frostc$ASTNode* _2;
org$frostlang$frostc$ASTNode** _3;
org$frostlang$frostc$ASTNode* _4;
bool _5;
frost$core$Bit _6;
bool _7;
org$frostlang$frostc$expression$Binary$Operator* _9;
org$frostlang$frostc$expression$Binary$Operator _10;
frost$core$Equatable* _11;
frost$core$Equatable* _12;
org$frostlang$frostc$expression$Binary$Operator* _13;
org$frostlang$frostc$expression$Binary$Operator _14;
frost$core$Equatable* _15;
$fn2 _16;
frost$core$Bit _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Bit _26;
bool _27;
org$frostlang$frostc$ASTNode** _29;
org$frostlang$frostc$ASTNode* _30;
org$frostlang$frostc$ASTNode** _31;
org$frostlang$frostc$ASTNode* _32;
bool _33;
frost$core$Bit _34;
frost$core$Bit _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:299
_1 = &param0->left;
_2 = *_1;
_3 = &param1->left;
_4 = *_3;
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
_9 = &param0->op;
_10 = *_9;
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp3;
$tmp3 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp3->value = _10;
_11 = ((frost$core$Equatable*) $tmp3);
_12 = _11;
_13 = &param1->op;
_14 = *_13;
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp4->value = _14;
_15 = ((frost$core$Equatable*) $tmp4);
ITable* $tmp5 = _12->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5 = $tmp5->next;
}
_16 = $tmp5->methods[0];
_17 = _16(_12, _15);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = _17;
goto block3;
block2:;
*(&local1) = _6;
goto block3;
block3:;
_26 = *(&local1);
_27 = _26.value;
if (_27) goto block4; else goto block5;
block4:;
_29 = &param0->right;
_30 = *_29;
_31 = &param1->right;
_32 = *_31;
_33 = _30 == _32;
_34 = (frost$core$Bit) {_33};
*(&local0) = _34;
goto block6;
block5:;
*(&local0) = _26;
goto block6;
block6:;
_39 = *(&local0);
return _39;

}
frost$core$Int org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$BinaryKey* param0) {

org$frostlang$frostc$ASTNode** _1;
org$frostlang$frostc$ASTNode* _2;
frost$core$Object* _3;
frost$core$Int _4;
org$frostlang$frostc$ASTNode** _5;
org$frostlang$frostc$ASTNode* _6;
frost$core$Object* _7;
frost$core$Int _8;
int64_t _11;
int64_t _12;
int64_t _13;
frost$core$Int _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:304
_1 = &param0->left;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_4, _3);
_5 = &param0->right;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_8, _7);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:304:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_11 = _4.value;
_12 = _8.value;
_13 = _11 ^ _12;
_14 = (frost$core$Int) {_13};
return _14;

}
void org$frostlang$frostc$Compiler$BinaryKey$cleanup(org$frostlang$frostc$Compiler$BinaryKey* param0) {

frost$core$Object* _1;
org$frostlang$frostc$ASTNode** _3;
org$frostlang$frostc$ASTNode* _4;
frost$core$Object* _5;
org$frostlang$frostc$ASTNode** _7;
org$frostlang$frostc$ASTNode* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:284
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->left;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->right;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

