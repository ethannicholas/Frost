#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$collections$IdentityMap$Entry$class_type frost$collections$IdentityMap$Entry$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentityMap$Entry$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 35, 5658502044634742898, NULL };

void frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V(void* rawSelf, frost$core$Object* param1, frost$core$Object* param2) {
frost$collections$IdentityMap$Entry* param0 = (frost$collections$IdentityMap$Entry*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _10;
frost$core$Object** _12;
frost$core$Object* _13;
frost$core$Object* _14;
frost$core$Object** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:29
_1 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->key;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->key;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:30
_10 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->value;
_13 = *_12;
_14 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->value;
*_16 = param2;
return;

}
void frost$collections$IdentityMap$Entry$cleanup(void* rawSelf) {
frost$collections$IdentityMap$Entry* param0 = (frost$collections$IdentityMap$Entry*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _8;
frost$core$Object* _9;
frost$collections$IdentityMap$Entry** _11;
frost$collections$IdentityMap$Entry* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:14
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->key;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->value;
_8 = *_7;
_9 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->next;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

