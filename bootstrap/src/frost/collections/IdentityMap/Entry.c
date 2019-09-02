#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$collections$IdentityMap$Entry$class_type frost$collections$IdentityMap$Entry$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentityMap$Entry$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 35, 5658502044634742898, NULL };

void frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V(frost$collections$IdentityMap$Entry* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$collections$IdentityMap$Entry* _1;
frost$core$Object* _2;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$core$Object** _8;
frost$collections$IdentityMap$Entry* _11;
frost$core$Object* _12;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object** _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:29
_1 = param0;
_2 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->key;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->key;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:30
_11 = param0;
_12 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->value;
_15 = *_14;
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->value;
*_18 = param2;
return;

}
void frost$collections$IdentityMap$Entry$cleanup(frost$collections$IdentityMap$Entry* param0) {

frost$core$Object* _1;
frost$collections$IdentityMap$Entry* _3;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$collections$IdentityMap$Entry* _8;
frost$core$Object** _9;
frost$core$Object* _10;
frost$core$Object* _11;
frost$collections$IdentityMap$Entry* _13;
frost$collections$IdentityMap$Entry** _14;
frost$collections$IdentityMap$Entry* _15;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:14
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->key;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->value;
_10 = *_9;
_11 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->next;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return;

}

