#include "org/frostlang/frostc/Compiler/AutoAtPreFlag.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoAtPreFlag$class_type org$frostlang$frostc$Compiler$AutoAtPreFlag$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoAtPreFlag$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x41\x74\x50\x72\x65\x46\x6c\x61\x67", 43, -2026510661434164526, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoAtPreFlag$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoAtPreFlag* param0, org$frostlang$frostc$Compiler* param1) {

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
frost$core$Bit _10;
frost$core$Bit* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:223
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:224
_10 = (frost$core$Bit) {true};
_11 = &param1->inAtPre;
*_11 = _10;
return;

}
void org$frostlang$frostc$Compiler$AutoAtPreFlag$cleanup(org$frostlang$frostc$Compiler$AutoAtPreFlag* param0) {

org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
frost$core$Bit* _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
org$frostlang$frostc$Compiler** _11;
org$frostlang$frostc$Compiler* _12;
frost$core$Bit _13;
frost$core$Bit* _14;
frost$core$Object* _17;
org$frostlang$frostc$Compiler** _19;
org$frostlang$frostc$Compiler* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:229
_1 = &param0->compiler;
_2 = *_1;
_3 = &_2->inAtPre;
_4 = *_3;
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {229u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:230
_11 = &param0->compiler;
_12 = *_11;
_13 = (frost$core$Bit) {false};
_14 = &_12->inAtPre;
*_14 = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:228
_17 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_17);
_19 = &param0->compiler;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}

