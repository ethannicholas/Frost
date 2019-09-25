#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$collections$HashMap$Entry$class_type frost$collections$HashMap$Entry$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$HashMap$Entry$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 31, -4426476962637377112, NULL };

void frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V(void* rawSelf, frost$collections$HashKey* param1, frost$core$Object* param2) {
frost$collections$HashMap$Entry* param0 = (frost$collections$HashMap$Entry*) rawSelf;

frost$core$Object* _1;
frost$collections$HashKey** _3;
frost$collections$HashKey* _4;
frost$core$Object* _5;
frost$collections$HashKey** _7;
frost$core$Object* _10;
frost$core$Object** _12;
frost$core$Object* _13;
frost$core$Object* _14;
frost$core$Object** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:35
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->key;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->key;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:36
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
void frost$collections$HashMap$Entry$cleanup(void* rawSelf) {
frost$collections$HashMap$Entry* param0 = (frost$collections$HashMap$Entry*) rawSelf;

frost$core$Object* _1;
frost$collections$HashKey** _3;
frost$collections$HashKey* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _8;
frost$core$Object* _9;
frost$collections$HashMap$Entry** _11;
frost$collections$HashMap$Entry* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:20
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->key;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
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

