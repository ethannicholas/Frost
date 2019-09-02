#include "org/frostlang/frostc/CCodeGenerator/MethodShim.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$MethodShim$class_type org$frostlang$frostc$CCodeGenerator$MethodShim$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$MethodShim$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 46, -8982290180172228315, NULL };

void org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$MethodShim* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$Object* _10;
frost$core$String** _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$String** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:175
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->name;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:176
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->type;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->type;
*_16 = param2;
return;

}
void org$frostlang$frostc$CCodeGenerator$MethodShim$cleanup(org$frostlang$frostc$CCodeGenerator$MethodShim* param0) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:170
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->type;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

